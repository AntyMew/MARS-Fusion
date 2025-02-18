; Hatch fixes that are needed for door lock shuffle

; allow more than 2 lockable hatches that are open
.org 080654ACh
.area 2Ch
    ; check all hatch slots from 5 to 0
    ldr     r0, =HatchData
    mov     r6, #5
    mov     r2, #1
@@loop:
    lsl     r1, r6, #2
    ldrb    r1, [r0, r1]
    and     r1, r2
    cmp     r1, #0
    beq     080654D8h
    sub     r6, #1
    cmp     r6, #0
    blt     08065534h
    b       @@loop
    .pool
.endarea

; determine hatch facing direction from x exit distance
.org 08065500h
.area 0Ch
    ldrb    r0, [r7, DoorEntry_ExitDistanceX]
    cmp     r0, #80h
    bcs     08065524h
    b       0806550Ch
.endarea


; change event hatch to normal hatch after event triggered
.org 08063CA0h
    bl      @ResetEventHatches

; hijack hatch lock code to store original hatch types
.org 08063086h
    bl      @StoreHatchTypes


.autoregion
.align 4
.func @StoreHatchTypes
    ; Load original hatch type
    ldrb    r0, [r3]
    push    { r0, r3 }
    ; Mask all but the type
    lsr     r0, #5
    ; If the original hatch type was an event, we'll set it to an open hatch after the event clears
    ; This is special handling for Operations Room
    cmp     r0, #5 
    bne     @@storeType
    mov     r0, #6
@@storeType:
    ; r4 contains the hatch number
    lsl     r0, #5
    ldr     r3, =OriginalHatchTypes
    strb    r0, [r3, r4]
    ; Code that we hijacked
    pop     { r0, r3 }
    lsl     r0, r0, 1Fh
    bl      0806308Ah ; Return to original code flow
    .pool
.endfunc
.endautoregion

.autoregion
.align 4
.func @ResetEventHatches
    push    { r0 - r3 }
    ; Some event rooms use #1 in the timer to set events. #2 will only be in the timer during an actual event unlock
    ; This will technically change the hatches one frame early
    cmp     r0, #2 
    bne     @@return
    ldr     r2, =HatchData
    mov     r3, #0 ; Loop counter
@@hatchLoop:
    ; Ignore if not an event hatch
    ldrb    r0, [r2, HatchData_Status]
    mov     r1, r0
    lsr     r1, #5
    cmp     r1, #5 ; Event Door type
    bne     @@loopIncrement
    ; Mask out hatch type
    lsl     r0, r0, #27
    lsr     r0, r0, #27
    ; Load original hatch type
    ldr     r1, =OriginalHatchTypes
    ldrb    r1, [r1, r3]
    orr     r0, r1
    strb    r0, [r2, HatchData_Status]
    ; Determine hatch animation, everything closes except for open hatches
    lsr     r0, #5
    cmp     r0, #6
    beq     @@opening
    b       @@closing
@@opening:
    ; By setting the animation flag to 1, the opening animation triggers and the hatch works correct
    mov     r1, #1
    strb    r1, [r2, HatchData_Animation]
    b       @@loopIncrement
@@closing:
    ; By setting the animation flag to 3, the closing animation triggers and the hatch works correct
    mov     r1, #3 
    strb    r1, [r2, HatchData_Animation]
@@loopIncrement:
    add     r2, #4
    add     r3, #1
    cmp     r3, #6
    bne     @@hatchLoop ; Loop for all hatches
@@return:
    ; Code that we hijacked
    pop     { r0 - r3 }
    sub     r0, #1
    strb    r0, [r2]
    bl      08063CA4h ; Return to original code flow
    .pool
.endfunc
.endautoregion
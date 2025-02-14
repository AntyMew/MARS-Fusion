; Moves or removes all vanilla messages to make space for custom messages

; TODO: rewrite message box handling to split message id from behavior

.org 08079654h
.area 0ECh
.func RenderMessage
    push    { r4-r7, lr }
    sub     sp, #04h
    mov     r6, r1
    cmp     r0, #1
    bgt     @@check_multiline
    ldr     r7, =02000000h
    b       @@render_message
@@check_multiline:
    cmp     r0, #2
    bne     @@return
    ldr     r7, =02000800h
    ldr     r1, [r6]
    mov     r2, #0FEh
    lsl     r2, #08h
@@skip_to_newline_loop:
    ldrh    r0, [r1]
    add     r1, #2
    cmp     r0, r2
    bne     @@skip_to_newline_loop
    str     r1, [r6]
@@render_message:
    mov     r5, #0
@@render_message_loop:
    ldr     r0, [r6]
    ldrh    r4, [r0]
    mov     r0, #0FFh
    lsl     r0, #08h
    cmp     r0, r4
    beq     @@return
    mov     r0, #0FEh
    lsl     r0, #08h
    cmp     r0, r4
    beq     @@return
    lsr     r0, r4, #08h
    cmp     r0, #80h
    bne     @@check_group83
    lsl     r0, r4, #18h
    lsr     r0, #18h
    add     r5, r0
    b       @@render_message_loop_inc
@@check_group83:
    cmp     r0, #83h
    bne     @@check_groupFA
    lsl     r5, r4, #18h
    lsr     r5, #18h
    b       @@render_message_loop_inc
@@check_groupFA:
    cmp     r0, #0FAh
    bne     @@get_char_width
    ldr     r0, =PermanentUpgrades
    ldrb    r0, [r0, PermanentUpgrades_InfantMetroids]
    ldr     r1, =RequiredMetroidCount
    ldrb    r2, [r1]
    sub     r2, r0
@@metroid_count_tens:
    mov     r0, #unsigned_reciprocal(10, 11)
    mul     r0, r2
    lsr     r1, r0, #11
    lsl     r0, r4, #18h
    lsr     r0, #18h
    cmp     r0, #00
    beq     @@metroid_count_ones
    cmp     r1, #0
    beq     @@render_message_loop_inc
    add     r1, #50h
    mov     r4, r1
    mov     r0, r4
    bl      GetCharWidth
    lsr     r1, r0, #1
    sub     r5, r1
    b       @@render_char
@@metroid_count_ones:
    mov     r0, #10
    mul     r1, r0
    sub     r1, r2, r1
    add     r1, #50h
    mov     r4, r1
@@get_char_width:
    mov     r0, r4
    bl      GetCharWidth
@@render_char:
    mov     r2, r0
    mov     r1, r7
    asr     r0, r5, #3
    lsl     r0, #5
    add     r1, r0
    mov     r0, #0
    str     r0, [sp]
    mov     r0, r4
    lsl     r3, r5, #20h - 3
    lsr     r3, #20h - 3
    add     r5, r2
    bl      RenderChar
@@render_message_loop_inc:
    ldr     r0, [r6]
    add     r0, #2
    str     r0, [r6]
    b       @@render_message_loop
@@return:
    add     sp, #04h
    pop     { r4-r7, pc }
    .pool
.endfunc
.endarea

.org 0802A932h
.area 0Ch, 0
    ; force check if message box sprite graphics are loaded
.endarea

.org 080797EEh
.area 08h, 0
    bl      @NonMajorMessageCheck
.endarea

.autoregion
.align 2
.func @NonMajorMessageCheck
    ; if ID > 0x17h (custom message offset by 0x20h), add 0x20h
    ; to get the true message ID and return. Else follow existing logic for bounds checking
    cmp     r2, #17h
    bls     @@default
    add     r2, (Message_AtmosphericStabilizer1 - 1)
    b       @@return
@@default:
    ; bounds check non-major upgrade messages
    sub     r2, #Message_NothingUpgrade - (Message_AtmosphericStabilizer1 - 1) + 1
    asr     r0, r2, #1Fh
    and     r2, r0
    add     r2, #Message_NothingUpgrade + 1
    b       @@return
@@return:
    bx      lr
.endfunc
.endautoregion

.org 0802AA2Ch
.area 04h
    ; play upgrade collected fanfare
    cmp     r6, #0
    bne     0802AA3Ch
.endarea

.org 0802AA3Ch
.area 0Eh
    ; play task complete fanfare
    mov     r0, r6
    sub     r0, #Message_AtmosphericStabilizer5 - (Message_AtmosphericStabilizer1 - 1)
    cmp     r0, #Message_AuxiliaryPower - Message_AtmosphericStabilizer5
    bhi     0802AA5Ch
    cmp     r6, #Message_BoilerCooling - (Message_AtmosphericStabilizer1 - 1)
    bne     0802AA52h
.endarea

.org 0802AA5Ch
.area 04h
    ; check for noiseless messages
    cmp     r0, #Message_SavePrompt - Message_AtmosphericStabilizer5
    bls     0802AA66h
.endarea

.org 0802AABCh
.area 08h, 0
    ; spawn selection cursor in prompt messages
    cmp     r6, #Message_SavePrompt - (Message_AtmosphericStabilizer1 - 1)
    beq     0802AAC4h
    cmp     r6, #Message_AdamUplinkPrompt - (Message_AtmosphericStabilizer1 - 1)
    bne     0802AAE0h
.endarea

.org 0802AAE0h
.area 10h, 0
    ; spawn countdown for lategame messages
.if RANDOMIZER
    cmp     r6, #Message_EscapeSequence - (Message_AtmosphericStabilizer1 - 1)
    bne     @@check_restricted_sector_detach
    bl      StartEscapeSequence
@@check_restricted_sector_detach:
    cmp     r6, #Message_RestrictedSectorDetachment - (Message_AtmosphericStabilizer1 - 1)
    bne     0802AAF0h
    bl      08072B4Ch
.else
    mov     r0, r6
    sub     r0, #Message_RestrictedSectorDetachment - (Message_AtmosphericStabilizer1 - 1)
    cmp     r0, #Message_EscapeSequence - Message_RestrictedSectorDetachment
    bhi     0802AAF0h
.endif
.endarea

.org 0802AAF0h
.area 0Ah, 0
    ; check for task complete messages
    mov     r0, r6
    sub     r0, #Message_AtmosphericStabilizer5 - (Message_AtmosphericStabilizer1 - 1)
    cmp     r0, #Message_AuxiliaryPower - Message_AtmosphericStabilizer5
    bhi     0802AB04h
.endarea

.org 0802AB40h
.area 08h, 0
    ; skip handling prompt messages
    cmp     r2, #Message_SavePrompt - (Message_AtmosphericStabilizer1 - 1)
    beq     0802AB96h
    cmp     r2, #Message_AdamUplinkPrompt - (Message_AtmosphericStabilizer1 - 1)
    beq     0802AB96h
.endarea

.org 0802AB82h
.area 04h, 0
    ; set pose for saving the animals
    cmp     r4, #Message_AnimalsFreed - (Message_AtmosphericStabilizer1 - 1)
    bne     0802AB96h
.endarea

.org 0802AB6Ch
.area 04h, 0
    ; set music for restricted sector detachment
    cmp     r2, #Message_RestrictedSectorDetachment - (Message_AtmosphericStabilizer1 - 1)
    bne     0802AB74h
.endarea

.org 0802AB74h
.area 04h, 0
    ; set music for escape sequence
    cmp     r2, #Message_EscapeSequence - (Message_AtmosphericStabilizer1 - 1)
    bne     0802AB96h
.endarea

.org 0802ABA6h
.area 04h, 0
    ; don't immediately allow movement while saving the animals
    cmp     r2, #Message_AnimalsFreed - (Message_AtmosphericStabilizer1 - 1)
    beq     0802ABC0h
.endarea

.org 0802ABB0h
.area 0Ch, 0
    ; remove tank from map
    mov     r0, r2
    sub     r0, #Message_EnergyTankUpgrade - (Message_AtmosphericStabilizer1 - 1)
    cmp     r0, #Message_PowerBombTankUpgrade - Message_EnergyTankUpgrade
    bhi     0802ABC0h
.endarea

.org 0802ABF6h
.area 04h
    ; uplink with adam
    cmp     r0, #Message_AdamUplinkPrompt - (Message_AtmosphericStabilizer1 - 1)
    bne     0802AC12h
.endarea

.org 0807A14Eh
    ; get message for objective prompt
    add     r0, #Message_ObjectiveClearPrompt * 4

.org 0807BA50h
    ; get messages for sleep mode prompt
    add     r0, #Message_SleepModePrompt1 * 4
.org 0807BB3Eh
    add     r0, #Message_SleepModePrompt3 * 4

.org 0802C2A8h
    ; make recharge use recharge all message for power bombs
.if MISSILES_WITHOUT_MAINS
    mov     r0, #(1 << ExplosiveUpgrade_Missiles) \
        | (1 << ExplosiveUpgrade_SuperMissiles) \
        | (1 << ExplosiveUpgrade_IceMissiles) \
        | (1 << ExplosiveUpgrade_DiffusionMissiles) \
        | (1 << ExplosiveUpgrade_PowerBombs)
.else
    mov     r0, #(1 << ExplosiveUpgrade_Missiles) \
        | (1 << ExplosiveUpgrade_PowerBombs)
.endif

.org MessageTableLookupAddr
    ; Replace vanilla message tables with non-linear tables
    .dw     KanjiMessages
    .dw     HiraganaMessages
    .dw     EnglishMessages
    .dw     GermanMessages
    .dw     FrenchMessages
    .dw     ItalianMessages
    .dw     SpanishMessages

.include "src/nonlinear/messages/english-messages.s"
.include "src/nonlinear/messages/french-messages.s"
.include "src/nonlinear/messages/german-messages.s"
.include "src/nonlinear/messages/hiragana-messages.s"
.include "src/nonlinear/messages/italian-messages.s"
.include "src/nonlinear/messages/kanji-messages.s"
.include "src/nonlinear/messages/spanish-messages.s"
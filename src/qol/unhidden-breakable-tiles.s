.org RemoveNeverReformBlocksAndCollectedTanks
.area 10h, 0
    .skip 0Ah
    bl      RevealHiddenBreakableTiles
.endarea

.org RevealUnhiddenTilesFlag
.area 1
.if UNHIDDEN_BREAKABLE_TILES
    .db     01h
.else
    .db     00h
.endif
.endarea

.autoregion
    .align 2
.func RevealHiddenBreakableTiles
    push    { r4-r7 }
    ldr     r0, =RevealUnhiddenTilesFlag
    ldrb    r0, [r0]
    cmp     r0, #0
    beq     @@return
    b       @@load_room_info

@@load_room_info:
    ldr     r7, =LevelLayers + LevelLayers_Clipdata
    ldrh    r6, [r7, LevelLayer_Rows]   ; height
    ldrh    r5, [r7, LevelLayer_Stride] ; width
    ldr     r7, [r7]
    sub     sp, #8
    str     r5, [sp]
    str     r6, [sp, #4]
    mov     r5, #0
    mov     r6, #0
@@loop:
    mov     r1, r7
    ldr     r3, [sp]
    mov     r2, r6
    mul     r2, r3      ; height * room width
    add     r2, r2, r5  ; + width
    lsl     r2, #1
    add     r0, r1, r2
    ldr     r1, =3001h
    cmp     r1, r2      ; don't read past Clipdata RAM
    beq     @@return
    ldrh    r0, [r7, r2]
    cmp     r0, #ClipdataTile_Air
    beq     @@inc_width
    cmp     r0, #ClipdataTile_Solid
    beq     @@inc_width
    cmp     r0, #ClipdataTile_DoorTransition
    beq     @@inc_width
    bl      @SearchForHiddenBlocks
    mov     r1, #0
    mvn     r1, r1
    lsl     r1, #10h
    lsr     r1, #10h
    cmp     r1, r0  ; if not FFFF
    bne     @@reveal_hidden_block
    b       @@inc_width
@@reveal_hidden_block:
    ; r0 should contain value of new tile
    mov     r1, r6  ; Y Pos
    mov     r2, r5  ; X Pos
    bl      SetSpecialBg1Tile
@@inc_width:
    add     r5, #1
    ldr     r0, [sp]
    cmp     r5, r0
    ble     @@loop
@@inc_height:
    add     r6, #1
    ldr     r0, [sp, #4]
    cmp     r6, r0
    beq     @@return
    mov     r5, #1
    b       @@loop
@@return:
    add     sp, #8
    pop     { r4-r7 }
    pop     { r0 }
    bx      r0
    .pool
.endfunc
.endautoregion

.autoregion
    .align 2
@ClipDataReplacements:
   ;.db Clip to check, replacement clip
    .dh ClipdataTile_Crumble,                   ClipdataRevealed_Crumble
    .dh ClipdataTile_WeakReform,                ClipdataRevealed_Weak
    .dh ClipdataTile_BombNeverReform,           ClipdataRevealed_Bomb
    .dh ClipdataTile_BombReform,                ClipdataRevealed_Bomb
    .dh ClipdataTile_SpeedNoReform,             ClipdataRevealed_Speed
    .dh ClipdataTile_SpeedReform,               ClipdataRevealed_Speed
    .dh ClipdataTile_MissileNeverReform,        ClipdataRevealed_Missile
    .dh ClipdataTile_MissileNoReform,           ClipdataRevealed_Missile
    .dh ClipdataTile_PBomb,                     ClipdataRevealed_PBomb
    .dh ClipdataTile_ScrewAttack,               ClipdataRevealed_ScrewAttack
    ; Not revealing tanks at this time
    ;.dh ClipdataTile_MissileTankHidden,         801Ch
    ;.dh ClipdataTile_EngergyTankHidden,         801Dh
    ;.dh ClipdataTile_PBombTankHidden,           801Eh
    .dh ClipdataTile_2x2TopLeftNeverReform,     ClipdataRevealed_Weak
    .dh ClipdataTile_2x2TopRightNeverReform,    ClipdataRevealed_Weak
    .dh ClipdataTile_WeakNeverReform,           ClipdataRevealed_Weak
    .dh ClipdataTile_WeakNoReform,              ClipdataRevealed_Weak
    .dh ClipdataTile_2x2TopLeftNoReform,        ClipdataRevealed_Weak
    .dh ClipdataTile_2x2TopRightNoReform,       ClipdataRevealed_Weak
    .dh ClipdataTile_2x2BottomLeftNeverReform,  ClipdataRevealed_Weak
    .dh ClipdataTile_2x2BottomRightNeverReform, ClipdataRevealed_Weak
    .dh ClipdataTile_2x2BottomLeftNoReform,     ClipdataRevealed_Weak
    .dh ClipdataTile_2x2BottomRightNoReform,    ClipdataRevealed_Weak
    ; TODO: Need to change Bomb Chains as the gfx will always point to
    ; tile_index + 1. We either need to write code to have bomb chains
    ; behave differently or update the table and gfx to have an
    ; invisible tile after bomb tiles
    .dh ClipdataTile_VerticalBombChain1,        ClipdataRevealed_Bomb
    .dh ClipdataTile_VerticalBombChain2,        ClipdataRevealed_Bomb
    .dh ClipdataTile_VerticalBombChain3,        ClipdataRevealed_Bomb
    .dh ClipdataTile_VerticalBombChain4,        ClipdataRevealed_Bomb
    .dh ClipdataTile_HorizontalBombChain1,      ClipdataRevealed_Bomb
    .dh ClipdataTile_HorizontalBombChain2,      ClipdataRevealed_Bomb
    .dh ClipdataTile_HorizontalBombChain3,      ClipdataRevealed_Bomb
    .dh ClipdataTile_HorizontalBombChain4,      ClipdataRevealed_Bomb
    .dh 0FFFFh, 0FFFFh
.endautoregion


.autoregion
; input
; r0 = Block to Search For
; output
; r0 = Replacement Tile, or None (0FFFFh)
.align 2
.func @SearchForHiddenBlocks
    push    { r1-r4, lr }
    sub     sp, #4
    mov     r3, #0
    str     r3, [sp]
@@search:
    ldr     r3, [sp]
    lsl     r3, #2
    ldr     r4, =@ClipDataReplacements
    add     r4, r4, r3
    ldrh    r2, [r4]
    mov     r1, #0
    mvn     r1, r1
    lsl     r1, r1, 10h
    lsr     r1, r1, 10h
    cmp     r2, r1
    beq     @@return_none
    cmp     r0, r2
    beq     @@return_replacement
    ; increment counter
    lsr     r3, #2
    add     r3, #1
    str     r3, [sp]
    b       @@search
@@return_replacement:
    ldr     r2, =@ClipDataReplacements+2
    add     r2, r2, r3
    ldrh    r0, [r2, #0]
    add     sp, #4
    pop     { r1-r4, pc }
@@return_none:
    ldr     r0, =0FFFFh
    add     sp, #4
    pop     { r1-r4, pc }
    .pool
.endfunc
.endautoregion

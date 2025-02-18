; GBA hardware constants
OBJ0_YCoordinate equ 0b11111111 ; Bits 0-7 (0-255)
OBJ0_Transform equ 1 << 8   ; For rotation or scaling
OBJ0_DoubleSize equ 1 << 9  ; 0 = Normal, 1 = Double        ; When Transform bit set
OBJ0_Disable equ 1 << 9     ; 0 = Normal, 1 = Not Diplayed  ; When Transform bit clear
OBJ0_Mode equ 10
OBJ0_Mode_Normal equ 0b00 << OBJ0_Mode
OBJ0_Mode_SemiTransparent equ 0b01 << OBJ0_Mode
OBJ0_Mode_OBJWindow equ 0b10 << OBJ0_Mode
; OBJ0 Mode 0b11 is prohibited
OBJ0_Mosaic equ 1 << 12
OBJ0_16Colors equ 0 << 13
OBJ0_256Colors equ 1 << 13
OBJ0_Shape_Square equ 0b00 << 14
OBJ0_Shape_Horizontal equ 0b01 << 14
OBJ0_Shape_Vertical equ 0b10 << 14
; OBJ0 Shape 0b11 is prohibited

OBJ1_XCoordinate equ 0b111111111 ; Bits 0-8 (0-511)
OBJ1_XFlip equ 1 << 12
OBJ1_YFlip equ 1 << 13
OBJ1_Size_8x8   equ 0 << 14
OBJ1_Size_16x16 equ 1 << 14
OBJ1_Size_32x32 equ 2 << 14
OBJ1_Size_64x64 equ 3 << 14
OBJ1_Size_16x8  equ 0 << 14
OBJ1_Size_32x8  equ 1 << 14
OBJ1_Size_32x16 equ 2 << 14
OBJ1_Size_64x32 equ 3 << 14
OBJ1_Size_8x16  equ 0 << 14
OBJ1_Size_8x32  equ 1 << 14
OBJ1_Size_16x32 equ 2 << 14
OBJ1_Size_32x64 equ 3 << 14

OBJ2_Character equ 0b1111111111
; Priority is relative to BG
OBJ2_Priority_Highest equ 0 << 10
OBJ2_Priority_High equ 1 << 10
OBJ2_Priority_Low equ 2 << 10
OBJ2_Priority_Lowest equ 3 << 10
OBJ2_Palette equ 12
OBJ2_PaletteMask equ 0b1111


; non-vanilla constants

MissileCooldown equ 9
SuperMissileCooldown equ 4
IceMissileCooldown equ 2
DiffusionMissileCooldown equ 1

MissileDamage equ 10
SuperMissileDamage equ 20
IceMissileDamage equ 10
DiffusionMissileDamage equ 5

CustomMessages_Maximum equ 199 ; 57 Messages are reserved by existing behavior, leaving 199 ids left
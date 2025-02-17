DeflateVram equ 080009ECh
InitializeAudio equ 08002298h
Sfx_Play equ 0800270Ch
BitFill equ 08002FECh
Music_CheckSet equ 08003498h
Music_CheckPlay equ 080034F4h
Music_Play equ 08003538h
Music_FadeOut equ 080036F0h

SpawnPrimarySprite equ 0800FBC8h
Nightmare_MakeMissilesFall equ 0805DD40h

LockHatches equ 08063070h
ChangeSuit equ 08063190h
SetEventEffect equ 0806342Ch
RemoveNeverReformBlocksAndCollectedTanks equ 08064ADCh
SetBg1Tile equ 0806C614h
SetSpecialBg1Tile equ 0806C6E4h
SetClipdata equ 0806C82Ch
SpawnParticleEffect equ 080730E4h
SetEvent equ 08074890h

SetTankAsCollected equ 0806CCF8h
RemoveCollectedTanks equ 0806CE40h
MinimapSetCollectedItems equ 08075884h
MapScreenCountTanks equ 08075D28h
InitStartingMap equ 08074FFCh
NewGameInit equ 080803E4h

GetCharWidth equ 08079118h
RenderChar equ 08079438h

CheckProjectiles equ 0808116Ch
SpawnProjectile equ 080811BCh
SpawnSecondaryProjectile equ 0808125Ch
LoadBeamGfx equ 08081E5Ch
LoadMissileGfx equ 08082010h
InitMissile equ 08084FA0h

Projectile_Move equ 08082120h
Projectile_UpdateClipdata equ 0808222Ch
Projectile_DamageSprite equ 080835F8h
Beam_MoveParts equ 08082464h
Beam_SetTrail equ 080827E0h
WaveBeam_MoveParts equ 0808252Ch
WaveBeam_UpdateClipdata equ 080821ECh
Missile_StartTumble equ 08084660h
Missile_MoveTumbling equ 08085094h
Missile_SetTrail equ 08082724h
IceBeam_DamageSprite equ 08083A4Ch
IceMissile_DamageSprite equ 08083788h

Sprite_GetWeakness equ 08083044h
Sprite_StartOnHitTimer equ 08083B78h
Sprite_MakesDebrisWhenHit equ 08082FECh
Sprite_CreateDebris equ 08083090h
Sprite_CreatePlasmaDebris equ 080831C4h

Divide equ 080A3468h
memcpy equ 080A4EF0h
memset equ 080A4F50h

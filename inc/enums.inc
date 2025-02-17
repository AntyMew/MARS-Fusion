.sym off

Button_A equ 0
Button_B equ 1
Button_Select equ 2
Button_Start equ 3
Button_Right equ 4
Button_Left equ 5
Button_Up equ 6
Button_Down equ 7
Button_R equ 8
Button_L equ 9

GameMode_InGame equ 1
GameMode_FileSelect equ 7
GameMode_Demo equ 12

Area_MainDeck equ 0
Area_SRX equ 1
Area_TRO equ 2
Area_PYR equ 3
Area_AQA equ 4
Area_ARC equ 5
Area_NOC equ 6
Area_Debug1 equ 7
Area_Debug2 equ 8
Area_Debug3 equ 9
Area_Extra1 equ 0Ah             ; Not a real area, but is used by minimaps

; Room specific music
MusicTrack_Briefing equ 2Ah
MusicTrack_NavRoom equ 0Bh
MusicTrack_DataRoom equ 0Fh
; Region specific music
MusicTrack_MainDeck equ 2Ch
MusicTrack_BSLAmbience equ 1Eh
MusicTrack_ObservationDeck equ 2Eh
MusicTrack_Sector1 equ 04h
MusicTrack_Tourian equ 35h
MusicTrack_Sector2 equ 06h
MusicTrack_Sector3 equ 07h
MusicTrack_Sector4 equ 09h
MusicTrack_Sector5 equ 08h
MusicTrack_Sector6 equ 0Ah
MusicTrack_FinalMission equ 5Bh
; Boss specific music
MusicTrack_EnvironmentalDisquiet equ 5Fh
MusicTrack_EnvironmentalShock equ 58h
MusicTrack_PreBossAmbience equ 18h
MusicTrack_Arachnus equ 19h
MusicTrack_BeamCoreX equ 43h
MusicTrack_Zazabi equ 1Ah
MusicTrack_SerrisYakuza equ 3Fh
MusicTrack_Box equ 1Bh
MusicTrack_VariaCoreX equ 40h
MusicTrack_Nettori equ 44h
MusicTrack_Nightmare equ 41h
MusicTrack_Ridley equ 42h
MusicTrack_SaxHiding equ 15h
MusicTrack_SaxFight equ 51h

MusicType_Transient equ 0       ; only lasts one room
MusicType_Briefing equ 1        ; adam sector (de)briefings?
MusicType_MainDeck equ 2        ; first visit to Main Deck
MusicType_SRX1 equ 3            ; first visit to SRX
MusicType_TRO1 equ 4            ; first visit to TRO
MusicType_AQA1 equ 5            ; first visit to AQA
MusicType_BossAmbience equ 6    ; pre and post boss fight ambience
MusicType_BossMusic equ 7       ; boss fight music
MusicType_Chase equ 8           ; SA-X chase music??
MusicType_Misc equ 10           ; used all over the place, needs research
MuicType_Elevators equ 11       ; used frequently, needs research
MusicType_GameIntro equ 13      ; story intro sequence
MusicType_TitleIntro equ 15     ; teaser intro
MusicType_TitleScreen equ 16    ; self-explanatory
MusicType_TitleDemo equ 17      ; title screen demonstration

Sfx_Missile_Fired equ 0CEh
Sfx_SuperMissile_Fired equ 0D1h
Sfx_IceMissile_Fired equ 0D4h
Sfx_DiffusionMissile_Fired equ 0D7h
Sfx_ChargedDiffusionMissile_Fired equ 0DAh

Event_GameStart equ 00h
Event_OperationsElevatorOutage equ 08h
Event_ArachnusAbsorbed equ 0Ah
Event_MainElevatorOutage equ 0Dh
Event_ChargeCoreXAbsorbed equ 0Fh
Event_StabilizersOnline equ 10h
Event_BombsDownloaded equ 16h
Event_ZazabiAbsorbed equ 19h
Event_SerrisAbsorbed equ 1Dh
Event_WaterLevelLowered equ 20h
Event_SerrisDebrief equ 21h
Event_Lv2SecurityUnlock equ 23h
Event_BoxDefeated equ 28h
Event_NocSaxEscaped equ 31h
Event_NocDataDestroyed equ 32h
Event_MegaCoreXAbsorbed equ 33h
Event_IceMissilesDownloaded equ 3Ah
Event_BoilerMeltdown equ 3Bh
Event_WideCoreXAbsorbed equ 3Ch
Event_BoilerReactivated equ 3Dh
Event_BoilerMeltdownDebrief equ 3Eh
Event_PowerBombsDownloaded equ 42h
Event_ArcSaxEscaped equ 44h
Event_TrappedInElevator equ 46h
Event_ReactorOutage equ 47h
Event_YakuzaAbsorbed equ 49h
Event_YakuzaDebrief equ 4Bh
Event_TroSaxEscaped equ 4Dh
Event_NettoriAbsorbed equ 4Eh
Event_NightmareAbsorbed equ 51h
Event_NoEntryWithoutAuthorization equ 59h
Event_XboxAbsorbed equ 5Bh
Event_RestrictedSectorBreached equ 5Ch
Event_RestrictedSectorDetachment equ 5Dh
Event_RestrictedSectorDebrief equ 5Fh
Event_RidleyAbsorbed equ 60h
Event_GoMode equ 63h
Event_SaxFight equ 65h
Event_SaxDefeated equ 66h
Event_EscapeSequence equ 67h
Event_OmegaFight equ 69h
Event_SaxAbsorbed equ 6Bh
Event_OmegaDefeated equ 6Ch
Event_GameEnd equ 6Dh

; messages rearranged for nonlinear patches
Message_SecurityLevel0 equ 00h
Message_SecurityLevel1 equ 01h
Message_SecurityLevel2 equ 02h
Message_SecurityLevel3 equ 03h
Message_SecurityLevel4 equ 04h
Message_MissileUpgrade equ 05h
Message_SuperMissileUpgrade equ 06h
Message_BombUpgrade equ 07h
Message_PowerBombUpgrade equ 08h
Message_IceMissileUpgrade equ 09h
Message_DiffusionMissileUpgrade equ 0Ah
Message_MorphBallUpgrade equ 0Bh
Message_HiJumpUpgrade equ 0Ch
Message_ScrewAttackUpgrade equ 0Dh
Message_SpaceJumpUpgrade equ 0Eh
Message_SpeedboosterUpgrade equ 0Fh
Message_VariaSuitUpgrade equ 10h
Message_GravitySuitUpgrade equ 11h
Message_ChargeBeamUpgrade equ 12h
Message_WideBeamUpgrade equ 13h
Message_WaveBeamUpgrade equ 14h
Message_PlasmaBeamUpgrade equ 15h
Message_IceBeamUpgrade equ 16h
Message_InfantMetroidsRemain equ 17h
Message_InfantMetroidsNeeded equ 18h
Message_SecondLastInfantMetroid equ 19h
Message_SufficientInfantMetroids equ 1Ah
Message_LastInfantMetroid equ 1Bh
Message_ObjectiveClearPrompt equ 1Ch
Message_ConfirmObjectivePrompt equ 1Dh
Message_SleepModePrompt1 equ 1Eh
Message_SleepModePrompt2 equ 1Fh
Message_SleepModePrompt3 equ 20h
Message_AtmosphericStabilizer1 equ 21h
Message_AtmosphericStabilizer2 equ 22h
Message_AtmosphericStabilizer3 equ 23h
Message_AtmosphericStabilizer4 equ 24h
Message_AtmosphericStabilizer5 equ 25h
Message_WaterLowered equ 26h
Message_BoilerCooling equ 27h
Message_AnimalsFreed equ 28h
Message_AuxiliaryPower equ 29h
Message_RestrictedSectorDetachment equ 2Ah
Message_EscapeSequence equ 2Bh
Message_SavePrompt equ 2Ch
Message_SaveComplete equ 2Dh
Message_AdamUplinkPrompt equ 2Eh
Message_ResupplyComplete equ 2Fh
Message_EnergyRechargeComplete equ 30h
Message_RechargeAllComplete equ 31h
Message_EnergyTankUpgrade equ 32h
Message_MissileTankUpgrade equ 33h
Message_PowerBombTankUpgrade equ 34h
Message_EnemyLocationAbnormal equ 35h
Message_IceTrapUpgrade equ 36h
Message_NothingUpgrade equ 37h
Message_Auto equ 0FFh

Tank_Missiles equ 1
Tank_Energy equ 2
Tank_PowerBombs equ 3

StandingFlag_Ground equ 00h
StandingFlag_Sprite equ 01h
StandingFlag_Midair equ 02h
StandingFlag_NoControl equ 03h

SecurityLevel_Lv0 equ 0 ; Gray doors
SecurityLevel_Lv1 equ 1 ; Blue doors
SecurityLevel_Lv2 equ 2 ; Green doors
SecurityLevel_Lv3 equ 3 ; Yellow doors
SecurityLevel_Lv4 equ 4 ; Red doors

BeamUpgrade_ChargeBeam equ 0
BeamUpgrade_WideBeam equ 1
BeamUpgrade_PlasmaBeam equ 2
BeamUpgrade_WaveBeam equ 3
BeamUpgrade_IceBeam equ 4

ExplosiveUpgrade_Missiles equ 0
ExplosiveUpgrade_SuperMissiles equ 1
ExplosiveUpgrade_IceMissiles equ 2
ExplosiveUpgrade_DiffusionMissiles equ 3
ExplosiveUpgrade_Bombs equ 4
ExplosiveUpgrade_PowerBombs equ 5

SuitUpgrade_HiJump equ 0
SuitUpgrade_Speedbooster equ 1
SuitUpgrade_SpaceJump equ 2
SuitUpgrade_ScrewAttack equ 3
SuitUpgrade_VariaSuit equ 4
SuitUpgrade_GravitySuit equ 5
SuitUpgrade_MorphBall equ 6
SuitUpgrade_OmegaSuit equ 7

EnvironmentalHazard_None equ 0
EnvironmentalHazard_Water equ 1
EnvironmentalHazard_Lava equ 2
EnvironmentalHazard_Acid equ 3
EnvironmentalHazard_Heat equ 4
EnvironmentalHazard_Subzero equ 5
EnvironmentalHazard_Cold equ 6

SpriteStatus_Exists equ 0
SpriteStatus_FacingRight equ 9

SpriteId_MessageBox equ 21h
SpriteId_Arachnus_CoreXNucleus equ 3Fh
SpriteId_Zazabi_CoreXNucleus equ 44h
SpriteId_Serris_CoreXNucleus equ 45h
SpriteId_MegaCoreX_CoreXNucleus equ 46h
SpriteId_Yakuza_CoreXNucleus equ 47h
SpriteId_Nightmare_CoreXNucleus equ 48h
SpriteId_Ridley_CoreXNucleus equ 49h
SpriteId_ChargeCoreXNucleus equ 56h
SpriteId_WideCoreXNucleus equ 57h
SpriteId_Nettori_CoreXNucleus equ 58h
SpriteId_XBox_CoreXNucleus equ 59h
SpriteId_PumpControlPad equ 65h
SpriteId_BoilerControlPad equ 66h
SpriteId_AuxiliaryPowerPad equ 67h
SpriteId_HabitationControlPad equ 68h
SpriteId_OperationsRoomPad equ 69h
SpriteId_SaxBoss_Samus equ 0C0h
SpriteId_SaxBoss_Monster equ 0C1h

SpriteProps_SolidForProjectiles equ 3
SpriteProps_ImmuneToProjectiles equ 6

SpriteWeakness_ChargeBeam equ 0
SpriteWeakness_BeamOrBombs equ 1
SpriteWeakness_SuperMissiles equ 2
SpriteWeakness_Missiles equ 3
SpriteWeakness_PowerBombs equ 4
SpriteWeakness_SpeedboosterOrScrew equ 5
SpriteWeakness_Freezable equ 6

Projectile_NormalBeam equ 0
Projectile_ChargeBeam equ 1
Projectile_WideBeam equ 2
Projectile_PlasmaBeam equ 3
Projectile_WaveBeam equ 4
Projectile_ChargedNormalBeam equ 5
Projectile_ChargedChargeBeam equ 6
Projectile_ChargedWideBeam equ 7
Projectile_ChargedPlasmaBeam equ 8
Projectile_ChargedWaveBeam equ 9
Projectile_NormalMissile equ 10
Projectile_SuperMissile equ 11
Projectile_IceMissile equ 12
Projectile_DiffusionMissile equ 13
Projectile_ChargedDiffusionMissile equ 14
Projectile_BeamFlare equ 15
Projectile_Bomb equ 16
Projectile_PowerBomb equ 17
Projectile_DiffusionFlake equ 18

ProjectileStatus_Exists equ 0
ProjectileStatus_OnScreen equ 1
ProjectileStatus_Exploding equ 2
ProjectileStatus_IgnoreCollision equ 3
ProjectileStatus_AffectsClipdata equ 4
ProjectileStatus_VerticalFlip equ 5
ProjectileStatus_HorizontalFlip equ 6

ProjectileDir_Forward equ 1
ProjectileDir_ForwardUp equ 2
ProjectileDir_ForwardDown equ 3
ProjectileDir_Up equ 4
ProjectileDir_Down equ 5

Particle_Tink equ 07h
Particle_MissileExplosion equ 08h
Particle_SuperMissileExplosion equ 09h
Particle_IceMissileExplosion equ 0Ah
Particle_ChargedDiffusionMissileExplosion equ 0Ch
Particle_MissileTrail equ 15h
Particle_SuperMissileTrail equ 16h
Particle_IceMissileTrail equ 17h
Particle_DiffusionMissileTrail equ 18h
Particle_ChargedDiffusionMissileTrail equ 19h

ClipdataAction_RemoveSolid equ 1
ClipdataAction_MakeSolid equ 2
ClipdataAction_MakeStopEnemyBlock equ 3
ClipdataAction_EnemyLaser equ 5
ClipdataAction_Beam equ 6
ClipdataAction_Bomb equ 7
ClipdataAction_Missile equ 8
ClipdataAction_PowerBomb equ 9
ClipdataAction_Speedboost equ 10
ClipdataAction_GroundedSpeedboost equ 11
ClipdataAction_ScrewAttack equ 12
ClipdataAction_BombChain equ 13

EventEffect_WaterLowering equ 5
EventEffect_AuxiliaryPower equ 7

MenuSpriteGfx_None equ 00h
MenuSpriteGfx_FlashingSquare equ 01h
MenuSpriteGfx_CursorRight equ 02h
MenuSpriteGfx_CursorDown equ 03h
MenuSpriteGfx_PreviewMarker equ 04h
MenuSpriteGfx_BigUpArrow equ 05h
MenuSpriteGfx_BigDownArrow equ 06h
MenuSpriteGfx_BigLeftArrow equ 07h
MenuSpriteGfx_BigRightArrow equ 08h
MenuSpriteGfx_SmallVerticalArrows equ 09h
MenuSpriteGfx_SmallDownArrow equ 0Ah
MenuSpriteGfx_MovingTextMarker equ 0Bh
MenuSpriteGfx_BlinkingTextMarker equ 0Ch
MenuSpriteGfx_OutOfSectorMarker equ 0Eh
MenuSpriteGfx_IntoSectorMarker equ 0Fh
MenuSpriteGfx_MapScanlineTrail equ 10h
MenuSpriteGfx_MapScanline equ 11h
MenuSpriteGfx_TargetMarkerBoxAbove equ 12h
MenuSpriteGfx_TargetMarkerBoxBelow equ 13h
MenuSpriteGfx_TargetMarkerBoxLeft equ 14h
MenuSpriteGfx_TargetMarkerBoxRight equ 15h
MenuSpriteGfx_TargetMarkerLineAbove equ 16h
MenuSpriteGfx_TargetMarkerLineBelow equ 17h
MenuSpriteGfx_StartMarkerLineUp equ 18h
MenuSpriteGfx_StartMarkerLineBelow equ 19h
MenuSpriteGfx_MainDeckSign equ 1Ah
MenuSpriteGfx_MainDeckSignTurningOn equ 1Bh
MenuSpriteGfx_Sector1Sign equ 1Ch
MenuSpriteGfx_Sector1SignTurningOn equ 1Dh
MenuSpriteGfx_Sector2Sign equ 1Eh
MenuSpriteGfx_Sector2SignTurningOn equ 1Fh
MenuSpriteGfx_Sector3Sign equ 20h
MenuSpriteGfx_Sector3SignTurningOn equ 21h
MenuSpriteGfx_Sector4Sign equ 22h
MenuSpriteGfx_Sector4SignTurningOn equ 23h
MenuSpriteGfx_Sector5Sign equ 24h
MenuSpriteGfx_Sector5SignTurningOn equ 25h
MenuSpriteGfx_Sector6Sign equ 26h
MenuSpriteGfx_Sector6SignTurningOn equ 27h
MenuSpriteGfx_StatusButton equ 28h
MenuSpriteGfx_ActiveStatusButton equ 29h
MenuSpriteGfx_SleepButton equ 2Ah
MenuSpriteGfx_ActiveSleepButton equ 2Bh
MenuSpriteGfx_Lv1Locked equ 2Ch
MenuSpriteGfx_Lv1Unlocked equ 2Dh
MenuSpriteGfx_Lv2Locked equ 2Eh
MenuSpriteGfx_LvUnlocked equ 2Fh
MenuSpriteGfx_Lv3Locked equ 30h
MenuSpriteGfx_Lv3Unlocked equ 31h
MenuSpriteGfx_Lv4Locked equ 32h
MenuSpriteGfx_Lv4Unlocked equ 33h
MenuSpriteGfx_ObjectiveButton equ 34h
MenuSpriteGfx_ObjectiveButtonTurningOn equ 35h
MenuSpriteGfx_GameTimer equ 36h
MenuSpriteGfx_ETankCounter equ 37h
MenuSpriteGfx_MTankCounter equ 38h
MenuSpriteGfx_PBTankCounter equ 39h
MenuSpriteGfx_ETankComplete equ 3Ah
MenuSpriteGfx_MTankComplete equ 3Bh
MenuSpriteGfx_PBTankComplete equ 3Ch
MenuSpriteGfx_NavigationConsole equ 3Dh
MenuSpriteGfx_SamusNavigationConsole equ 3Eh
MenuSpriteGfx_NavigationPinkDoorLeft equ 3Fh
MenuSpriteGfx_NavigationPinkDoorRight equ 40h
MenuSpriteGfx_IceXPopUpOpening equ 41h
MenuSpriteGfx_IceXPopUpClosing equ 42h
MenuSpriteGfx_AdamTextOutlineOpening equ 43h
MenuSpriteGfx_AdamTextOutlineStatic equ 44h
MenuSpriteGfx_AdamTextOutlineClosing equ 45h
MenuSpriteGfx_AdamTextBackground equ 46h
MenuSpriteGfx_AdamTextSystemGraphicOpening equ 47h
MenuSpriteGfx_AdamTextSystemGraphicClosing equ 48h
MenuSpriteGfx_ComputerEye_49 equ 49h
MenuSpriteGfx_ComputerEye_4A equ 4Ah
MenuSpriteGfx_ComputerEye_4B equ 4Bh
MenuSpriteGfx_ComputerEyeAnimated equ 4Ch
MenuSpriteGfx_SamusTextOpening equ 4Dh
MenuSpriteGfx_SamusTextOutlineStatic equ 4Eh
MenuSpriteGfx_SamusTextOutlineClosing equ 4Fh
MenuSpriteGfx_SamusTextBackgroundOpening equ 50h
MenuSpriteGfx_SamusTextBackgroundStatic equ 51h
MenuSpriteGfx_SamusTextBackgroundClosing equ 52h
MenuSpriteGfx_FederationTextOutlineOpening equ 53h
MenuSpriteGfx_FederationTextOutlineStatic equ 54h
MenuSpriteGfx_FederationTextOutlineClosing equ 55h
MenuSpriteGfx_FederationTextBackgroundOpening equ 56h
MenuSpriteGfx_FederationTextBackgroundStatic equ 57h
MenuSpriteGfx_FederationTextBackgroundClosing equ 58h
MenuSpriteGfx_SamusTextOpening_Duplicate equ 59h ; Same as SamusTextOpening?
MenuSpriteGfx_SamusTextOutlineStatic_Duplicate equ 5Ah ; Same as SamusTextOutlineStatic?
MenuSpriteGfx_SamusTextOutlineClosing_Duplicate equ 5Bh ; Same as SamusTextOutlineClosing?
MenuSpriteGfx_SamusTextBackgroundOpening_Duplicate equ 5Ch ; Same as SamusTextBackgroundOpening?
MenuSpriteGfx_SamusTextBackgroundStatic_Duplicate equ 5Dh ; Same as SamusTextBackgroundStatic?
MenuSpriteGfx_SamusTextBackgroundClosing_Duplicate equ 5Eh ; Same as SamusTextBackgroundClosing?
MenuSpriteGfx_SamusPortraitOpening equ 5Fh
MenuSpriteGfx_SamusPortraitAnimated equ 60h
MenuSpriteGfx_SamusPortraitStatic equ 61h
MenuSpriteGfx_SamusPortraitClosing equ 62h
MenuSpriteGfx_FederationPortraitOpening equ 63h
MenuSpriteGfx_FederationPortraitStatic equ 64h
MenuSpriteGfx_FederationPortraitSpeaking equ 65h
MenuSpriteGfx_FederationPortraitClosing equ 66h
MenuSpriteGfx_AnimatedScanlinesForPortrait equ 67h
MenuSpriteGfx_BSLRotationAnimation_68 equ 68h
MenuSpriteGfx_BSLRotationAnimation_69 equ 69h
MenuSpriteGfx_BSLRotationAnimation_6A equ 6Ah
MenuSpriteGfx_BSLRotationAnimation_6B equ 6Bh
MenuSpriteGfx_BSLRotationAnimation_6C equ 6Ch
MenuSpriteGfx_BSLRotationAnimation_6D equ 6Dh
MenuSpriteGfx_BSLRotationAnimation_6E equ 6Eh
MenuSpriteGfx_BSLRotationAnimation_6F equ 6Fh
MenuSpriteGfx_BSLRotationAnimation_70 equ 70h
MenuSpriteGfx_BSLRotationAnimation_71 equ 71h
MenuSpriteGfx_BSLRotationAnimation_72 equ 72h
MenuSpriteGfx_BSLRotationAnimation_73 equ 73h
MenuSpriteGfx_BSLRotationAnimation_74 equ 74h
MenuSpriteGfx_BSLRotationAnimation_75 equ 75h
MenuSpriteGfx_BSLRotationAnimation_76 equ 76h
MenuSpriteGfx_BSLRotationAnimation_77 equ 77h
MenuSpriteGfx_BSLRotationAnimation_78 equ 78h
MenuSpriteGfx_BSLRotationAnimation_79 equ 79h
MenuSpriteGfx_BSLRotationAnimation_7A equ 7Ah
MenuSpriteGfx_BSLRotationAnimation_7B equ 7Bh
MenuSpriteGfx_BSLRotationAnimation_7C equ 7Ch
MenuSpriteGfx_BSLRotationAnimation_7D equ 7Dh
MenuSpriteGfx_BSLRotationAnimation_7E equ 7Eh
MenuSpriteGfx_BSLRotationAnimation_7F equ 7Fh
MenuSpriteGfx_BSLRotationAnimation_80 equ 80h
MenuSpriteGfx_BSLRotationAnimation_81 equ 81h
MenuSpriteGfx_BSLRotationAnimation_82 equ 82h
MenuSpriteGfx_BSLRotationAnimation_83 equ 83h
MenuSpriteGfx_BSLRotationAnimation_84 equ 84h
MenuSpriteGfx_BSLRotationAnimation_85 equ 85h
MenuSpriteGfx_BSLRotationAnimation_86 equ 86h
MenuSpriteGfx_BSLRotationAnimation_87 equ 87h
MenuSpriteGfx_BSLRotationAnimation_88 equ 88h
MenuSpriteGfx_BSLRotationAnimation_89 equ 89h
MenuSpriteGfx_BSLRotationAnimation_8A equ 8Ah
MenuSpriteGfx_BSLRotationAnimation_8B equ 8Bh
MenuSpriteGfx_SelectMapChange equ 8Ch
MenuSpriteGfx_Lv0Locked equ 8Dh
MenuSpriteGfx_Lv0Unlocked equ 8Eh
; If you add more pause screen sprites increase the value below. It should
; always be n+1 of the last enum in the list.
MenuSpriteGfx_Size equ 8Fh

DoorType_AreaConnection equ 01h
DoorType_NoHatch equ 02h
DoorType_OpenHatch equ 03h
DoorType_LockableHatch equ 04h
DoorType_EventBasedTransition equ 20h
DoorType_ShowsLocationName equ 40h

ScrollExtend_Left equ 00h
ScrollExtend_Right equ 01h
ScrollExtend_Top equ 02h
ScrollExtend_Bottom equ 03h
ScrollExtend_None equ 0FFh

ClipdataTile_Air equ 0000h
ClipdataTile_Solid equ 0010h
ClipdataTile_DoorTransition equ 0020h
ClipdataTile_2x2TopLeftNeverReform equ 0050h
ClipdataTile_2x2TopRightNeverReform equ 0051h
ClipdataTile_WeakNeverReform equ 0052h
ClipdataTile_WeakReform equ 0053h
ClipdataTile_MissileNeverReform equ 0054h
ClipdataTile_BombNeverReform equ 0055h
ClipdataTile_BombReform equ 0056h
ClipdataTile_PBomb equ 0057h
ClipdataTile_SpeedNoReform equ 0058h
ClipdataTile_ScrewAttack equ 0059h
ClipdataTile_Crumble equ 005Ah
ClipdataTile_WeakNoReform equ 005Bh
ClipdataTile_MissileNoReform equ 005Eh
ClipdataTile_2x2TopLeftNoReform equ 005Ch
ClipdataTile_2x2TopRightNoReform equ 005Dh
ClipdataTile_2x2BottomLeftNeverReform  equ 0060h
ClipdataTile_2x2BottomRightNeverReform equ 0061h
ClipdataTile_MissileTankHidden equ 0064h
ClipdataTile_EngergyTankHidden equ 0065h
ClipdataTile_PBombTankHidden equ 0069h
ClipdataTile_SpeedReform equ 006Bh
ClipdataTile_2x2BottomLeftNoReform  equ 006Ch
ClipdataTile_2x2BottomRightNoReform equ 006Dh
ClipdataTile_VerticalBombChain1 equ 0070h
ClipdataTile_VerticalBombChain2 equ 0071h
ClipdataTile_VerticalBombChain3 equ 0072h
ClipdataTile_VerticalBombChain4 equ 0073h
ClipdataTile_HorizontalBombChain1 equ 0074h
ClipdataTile_HorizontalBombChain2 equ 0075h
ClipdataTile_HorizontalBombChain3 equ 0076h
ClipdataTile_HorizontalBombChain4 equ 0077h

ClipdataRevealed_Crumble equ 800Bh
ClipdataRevealed_Weak equ 800Ch
ClipdataRevealed_Bomb equ 8005h
ClipdataRevealed_Missile equ 8006h
ClipdataRevealed_PBomb equ 8007h
ClipdataRevealed_Speed equ 8008h
ClipdataRevealed_ScrewAttack equ 800Ah

; non-vanilla enums

Upgrade_None equ 0
Upgrade_SecurityLevel0 equ 1
Upgrade_Missiles equ 2
Upgrade_MorphBall equ 3
Upgrade_ChargeBeam equ 4
Upgrade_SecurityLevel1 equ 5
Upgrade_Bombs equ 6
Upgrade_HiJump equ 7
Upgrade_Speedbooster equ 8
Upgrade_SecurityLevel2 equ 9
Upgrade_SuperMissiles equ 10
Upgrade_VariaSuit equ 11
Upgrade_SecurityLevel3 equ 12
Upgrade_IceMissiles equ 13
Upgrade_WideBeam equ 14
Upgrade_PowerBombs equ 15
Upgrade_SpaceJump equ 16
Upgrade_PlasmaBeam equ 17
Upgrade_GravitySuit equ 18
Upgrade_SecurityLevel4 equ 19
Upgrade_DiffusionMissiles equ 20
Upgrade_WaveBeam equ 21
Upgrade_ScrewAttack equ 22
Upgrade_IceBeam equ 23
Upgrade_MissileTank equ 24
Upgrade_EnergyTank equ 25
Upgrade_PowerBombTank equ 26
Upgrade_IceTrap equ 27
Upgrade_InfantMetroid equ 28
Upgrade_Invalid equ 0FFh

UpgradeSprite_Empty equ 0
UpgradeSprite_SecurityLevel0 equ 1
UpgradeSprite_Missiles equ 2
UpgradeSprite_MorphBall equ 3
UpgradeSprite_ChargeBeam equ 4
UpgradeSprite_SecurityLevel1 equ 5
UpgradeSprite_Bombs equ 6
UpgradeSprite_HiJump equ 7
UpgradeSprite_Speedbooster equ 8
UpgradeSprite_SecurityLevel2 equ 9
UpgradeSprite_SuperMissiles equ 10
UpgradeSprite_VariaSuit equ 11
UpgradeSprite_SecurityLevel3 equ 12
UpgradeSprite_IceMissiles equ 13
UpgradeSprite_WideBeam equ 14
UpgradeSprite_PowerBombs equ 15
UpgradeSprite_SpaceJump equ 16
UpgradeSprite_PlasmaBeam equ 17
UpgradeSprite_GravitySuit equ 18
UpgradeSprite_SecurityLevel4 equ 19
UpgradeSprite_DiffusionMissiles equ 20
UpgradeSprite_WaveBeam equ 21
UpgradeSprite_ScrewAttack equ 22
UpgradeSprite_IceBeam equ 23
UpgradeSprite_MissileTank equ 24
UpgradeSprite_EnergyTank equ 25
UpgradeSprite_PowerBombTank equ 26
UpgradeSprite_Anonymous equ 27
UpgradeSprite_ShinyMissileTank equ 28
UpgradeSprite_ShinyPowerBombTank equ 29
UpgradeSprite_InfantMetroid equ 30

MajorLocation_MainDeckData equ 00h
MajorLocation_Arachnus equ 01h
MajorLocation_ChargeCoreX equ 02h
MajorLocation_TROSecurity equ 03h
MajorLocation_TROData equ 04h
MajorLocation_Zazabi equ 05h
MajorLocation_Serris equ 06h
MajorLocation_PYRSecurity equ 07h
MajorLocation_PYRData equ 08h
MajorLocation_MegaCoreX equ 09h
MajorLocation_ARCSecurity equ 0Ah
MajorLocation_ARCData equ 0Bh
MajorLocation_WideCoreX equ 0Ch
MajorLocation_ARCData2 equ 0Dh
MajorLocation_Yakuza equ 0Eh
MajorLocation_Nettori equ 0Fh
MajorLocation_Nightmare equ 10h
MajorLocation_AQASecurity equ 11h
MajorLocation_AQAData equ 12h
MajorLocation_XBox equ 13h
MajorLocation_Ridley equ 14h
MajorLocation_Invalid equ 0FFh

StoryFlag_MissileHatch equ 0
StoryFlag_WaterLowered equ 1
StoryFlag_BoxDefeated equ 2
StoryFlag_NocDataDestroyed equ 3
StoryFlag_BoilerCooling equ 4
StoryFlag_AnimalsFreed equ 5
StoryFlag_AuxiliaryPower equ 6
StoryFlag_RestrictedSectorDetached equ 7
StoryFlag_SaxDefeated equ 8

CreditsLineType_Blue equ 00h
CreditsLineType_Red equ 01h
CreditsLineType_TallWhite equ 02h
CreditsLineType_ShortWhite equ 03h
CreditsLineType_Skip equ 05h
CreditsLineType_End equ 06h
CreditsLineType_Copyright1 equ 0Ah
CreditsLineType_Copyright2 equ 0Bh
CreditsLineType_Copyright3 equ 0Ch
CreditsLineType_Copyright4 equ 0Dh

; alternate palette
AltTankPal0 equ 0000h
AltTankPal1 equ 0000h
AltTankPal2 equ 294Ah
AltTankPal3 equ 4210h
AltTankPal4 equ 56B5h
AltTankPal5 equ 6B5Ah
AltTankPal6 equ 77BDh
AltTankPal7 equ 0140h
AltTankPal8 equ 0240h
AltTankPal9 equ 27E9h
AltTankPalA equ 61C2h
AltTankPalB equ 7F62h
AltTankPalC equ 02D6h
AltTankPalD equ 27FFh
AltTankPalE equ 0013h
AltTankPalF equ 043Fh

.sym on

MinimapData equ 02034000h
DecompressedMinimapData equ 02034800h
MinimapVisited equ 02037C00h

TanksCollected equ 02037200h

ScrewAttackWJFlag equ 3000001h ; Flag that is set when WallJumping with Screw Attack, non-vanilla

LongFrameCounter equ 03000002h
ShortFrameCounter equ 03000BE5h

Language equ 03000011h

LastAbility equ 0300001Bh
SecurityLevelFlash equ 0300001Ch
PowerOutageSecurityBackup equ 0300001Dh

CurrentDemo equ 0300001Eh

CurrArea equ 0300002Ch
CurrRoom equ 0300002Dh

PrevDoor equ 0300002Eh
MinimapX equ 03000031h
MinimapY equ 03000032h

PermanentUpgrades equ 0300003Bh
.sym off
PermanentUpgrades_BeamUpgrades equ 00h
PermanentUpgrades_ExplosiveUpgrades equ 01h
PermanentUpgrades_SuitUpgrades equ 02h
PermanentUpgrades_InfantMetroids equ 03h
.sym on

DoorUnlockTimer equ 03000046h
CurrentNavRoom equ 03000048h
SpritesetId equ 03000052h
CurrSubEvent equ 03000060h
PrevSubEvent equ 03000062h
PrevNavConversation equ 03000B88h
NonGameplayFlag equ 03000B84h
CurrEvent equ 03000B87h
SaveSlot equ 03000B8Dh
GameMode equ 03000BDEh
SubGameMode1 equ 03000BE0h
SubGameMode2 equ 03000BE2h

CurrentClipdataAction equ 03000053h

HeldInput equ 030011E8h
ToggleInput equ 030011ECh

LevelLayers equ 03000084h
.sym off
LevelLayers_Bg0 equ 00h
LevelLayers_Bg1 equ 08h
LevelLayers_Bg2 equ 10h
LevelLayers_Clipdata equ 18h
; LevelLayer struct
LevelLayer_Data equ 00h
LevelLayer_Stride equ 04h
LevelLayer_Rows equ 06h
.sym on

LevelData equ 030000A4h
.sym off
LevelData_Bg0Props equ 01h
LevelData_Bg1Props equ 02h
LevelData_Bg2Props equ 03h
LevelData_Bg3Props equ 04h
LevelData_Transparency equ 07h
LevelData_RoomEffect equ 10h
LevelData_RoomEffectHeight equ 12h
LevelData_EnvironmentalEffect equ 14h
.sym on

BgPositions equ 030000C8h
.sym off
BgPositions_Bg0X equ 00h
BgPositions_Bg0Y equ 02h
BgPositions_Bg1X equ 04h
BgPositions_Bg1Y equ 06h
BgPositions_Bg2X equ 08h
BgPositions_Bg2Y equ 0Ah
BgPositions_Bg3X equ 0Ch
BgPositions_Bg3Y equ 0Eh
.sym on

OriginalHatchTypes equ 30000E0h ; Stores original hatch types when event doors are locked, non-vanilla

ArmCannonPos equ 03000B80h
.sym off
ArmCannonPos_Y equ 00h
ArmCannonPos_X equ 02h
.sym on

GameTimer equ 03000138h
.sym off
GameTimer_Hours equ 00h
GameTimer_Minutes equ 01h
GameTimer_Seconds equ 02h
GameTimer_Frames equ 03h
GameTimer_Maxed equ 04h
.sym on

MiscProgress equ 030006ACh
.sym off
; technically not a struct; shifted by two to make ldr work properly
; heavily modified from vanilla to make room for more flags
MiscProgress_AtmoStabilizers equ 02h
MiscProgress_NormalXBarriers equ 03h
MiscProgress_SuperXBarriers equ 04h
MiscProgress_PowerXBarriers equ 05h
MiscProgress_Eyedoors equ 06h
MiscProgress_MajorLocations equ 08h
MiscProgress_StoryFlags equ 0Ch
.sym on

CurrentSprite equ 030006BCh
SpriteList equ 03000140h
.sym off
Sprite_Status equ 00h
Sprite_PositionX equ 02h
Sprite_PositionY equ 04h
Sprite_XParasiteTimer equ 06h
Sprite_Unk08 equ 08h
Sprite_BboxTop equ 0Ah
Sprite_BboxBottom equ 0Ch
Sprite_BboxLeft equ 0Eh
Sprite_BboxRight equ 10h
Sprite_Scaling equ 12h
Sprite_Health equ 14h
Sprite_AnimationFrame equ 16h
Sprite_OamPointer equ 18h
Sprite_AnimationCounter equ 1Ch
Sprite_Id equ 1Dh
Sprite_RoomSlot equ 1Eh
Sprite_SpritesetGfxSlot equ 1Fh
Sprite_PaletteRow equ 20h
Sprite_BgPriority equ 21h
Sprite_DrawOrder equ 22h
Sprite_PrimarySpriteSlot equ 23h
Sprite_Pose equ 24h
Sprite_SamusCollision equ 25h
Sprite_IgnoreSamusCollisionTimer equ 26h
Sprite_DrawDistanceTop equ 27h
Sprite_DrawDistanceBottom equ 28h
Sprite_DrawDistanceHorizontal equ 29h
Sprite_SpritesetSlotAndProperties equ 2Ah
Sprite_Rotation equ 2Bh
Sprite_OnHitTimer equ 2Ch
Sprite_Work0 equ 2Dh
Sprite_Work1 equ 2Eh
Sprite_Work2 equ 2Fh
Sprite_Work3 equ 30h
Sprite_Work4 equ 31h
Sprite_FreezeTimer equ 32h
Sprite_StandingOnFlag equ 33h
Sprite_Properties equ 34h
Sprite_FreezePaletteOffset equ 35h
Sprite_Work5 equ 36h
.sym on

SpriteStats equ 082E4D4Ch
.sym off
SpriteStats_Health equ 00h
SpriteStats_Damage equ 02h
SpriteStats_SuitDamageReduction equ 04h
SpriteStats_Weaknesses equ 06h
SpriteStats_YellowXWeight equ 08h
SpriteStats_GreenXWeight equ 0Ah
SpriteStats_RedXWeight equ 0Ch
SpriteStats_Size equ 0Eh
.sym on

CurrentProjectile equ 03000B60h
ProjectileList equ 03000960h
.sym off
ProjectileList_Len equ 16
Projectile_Status equ 00h
Projectile_OamPointer equ 04h
Projectile_PosY equ 08h
Projectile_PosX equ 0Ah
Projectile_AnimFrame equ 0Ch
Projectile_AnimCounter equ 0Eh
Projectile_Type equ 0Fh
Projectile_Direction equ 10h
Projectile_Stage equ 12h
Projectile_Part equ 13h
Projectile_VertOffscreenRange equ 14h
Projectile_HorizOffscreenRange equ 15h
Projectile_BboxTop equ 16h
Projectile_BboxBottom equ 18h
Projectile_BboxLeft equ 1Ah
Projectile_BboxRight equ 1Ch
Projectile_Timer equ 1Eh
Projectile_ParentSlot equ 1Fh
Projectile_Size equ 20h
.sym on

MissileSpeeds equ 0858B40Ch
NormalMissileGfx0 equ 0858D324h
NormalMissileGfx1 equ 0858D3A4h
SuperMissileGfx0 equ 0858D424h
SuperMissileGfx1 equ 0858D4A4h
IceMissileGfx0 equ 0858D524h
IceMissileGfx1 equ 0858D5A4h
DiffusionMissileGfx0 equ 0858D624h
DiffusionMissileGfx1 equ 0858D6A4h

SamusState equ 03001244h
SamusStateBackup equ 03001270h
.sym off
SamusState_Unk00 equ 00h
SamusState_Pose equ 01h
SamusState_ForcedMovement equ 03h
SamusState_ArmCannonDirection equ 07h
SamusState_SecondaryWeaponSelect equ 08h
SamusState_ProjectileType equ 09h
SamusState_ProjectileCooldown equ 0Ah
SamusState_Unk01 equ 0Bh
SamusState_ChargeCounter equ 0Ch
SamusState_DiagonalAim equ 0Dh
SamusState_ArmSwing equ 0Eh
SamusState_WallJumpDirection equ 10h
SamusState_Direction equ 12h
SamusState_PositionX equ 16h
SamusState_PositionY equ 18h
SamusState_VelocityX equ 1Ah
SamusState_VelocityY equ 1Ch
SamusState_StandingFlag equ 20h
SamusState_AnimationFrame equ 21h
SamusState_Animation equ 22h
.sym on

SamusTimers equ 030012F0h
.sym off
SamusTimers_SubzeroKnockback equ 05h
SamusTimers_DiffusionMissileCharge equ 13h
SamusTimers_EnvironmentalDamage equ 14h
SamusTimers_EnvironmentalDamageSfx equ 15h
SamusTimers_EnvironmentalDamageVfx equ 17h  ; probably unused field; investigate if this is in use
.sym on

SamusUpgrades equ 03001310h
.sym off
SamusUpgrades_CurrEnergy equ 00h
SamusUpgrades_MaxEnergy equ 02h
SamusUpgrades_CurrMissiles equ 04h
SamusUpgrades_MaxMissiles equ 06h
SamusUpgrades_CurrPowerBombs equ 08h
SamusUpgrades_MaxPowerBombs equ 09h
SamusUpgrades_BeamUpgrades equ 0Ah
SamusUpgrades_ExplosiveUpgrades equ 0Bh
SamusUpgrades_SuitUpgrades equ 0Ch
SamusUpgrades_SecurityLevel equ 0Dh
SamusUpgrades_MapDownloads equ 0Eh
SamusUpgrades_LowHealthFlag equ 0Fh
.sym on

TimeStopTimer equ 03001348h

ButtonAssignments equ 03001450h
.sym off
ButtonAssignments_SecondaryWeaponSelect equ 00h
ButtonAssignments_DiagonalAim equ 02h
ButtonAssignments_Select equ 04h
ButtonAssignments_Pause equ 06h
.sym on

; commonly used menu sprite slots:
; next message cursor       01h
; adam activity light       03h
; textbox frame             04h
; textbox background        05h
; sector target marker      0Ah
; station render            0Ch
; objective button          0Dh
; status button             10h
; sleep button              11h
; sector sign               12h
; game timer                13h
; e-tanks counter           14h
; missile tanks counter     15h
; pb tanks counter          16h
; e-tanks complete          17h
; missile tanks complete    18h
; pb tanks complete         19h
; lv1 locks                 1Ah
; lv2 locks                 1Bh
; lv3 locks                 1Ch
; lv4 locks                 1Dh
; nav target                1Fh
; current room marker       20h
; big left arrow            21h
; big right arrow           22h
; big up arrow              23h
; big down arrow            24h
; navigation console        25h
; navigation hatch left     26h
; navigation hatch right    27h

NonGameplayRam equ 03001484h
.sym off
NonGamePlayRam_OamData equ 02Ch
.sym on

MenuSprites equ 030014B0h
.sym off
MenuSprites_Len equ 28h
MenuSprite_YPos equ 00h
MenuSprite_XPos equ 02h
MenuSprite_AnimationTick equ 08h
MenuSprite_AnimationCounter equ 09h
MenuSprite_Graphic equ 0Ah
MenuSprite_Priority equ 0Bh
MenuSprite_Size equ 0Ch
.sym on

TankCounter equ 030016F9h
.sym off
TankCounter_MaxAreaEnergyTanks equ 00h
TankCounter_CurrAreaEnergyTanks equ 01h
TankCounter_MaxAreaMissileTanks equ 02h
TankCounter_CurrAreaMissileTanks equ 03h
TankCounter_MaxAreaPowerBombTanks equ 04h
TankCounter_CurrAreaPowerBombTanks equ 05h
TankCounter_MaxTotalEnergyTanks equ 06h
TankCounter_CurrTotalEnergyTanks equ 07h
TankCounter_MaxTotalMissileTanks equ 08h
TankCounter_CurrTotalMissileTanks equ 09h
TankCounter_MaxTotalPowerBombTanks equ 0Ah
TankCounter_CurrTotalPowerBombTanks equ 0Bh
.sym on

MusicInfo equ 030019D0h
.sym off
MusicInfo_Slot1Track equ 1Ch
MusicInfo_Slot2Track equ 1Eh
MusicInfo_SlotSelect equ 20h
MusicInfo_Type equ 21h
MusicInfo_NextTrack equ 22h
.sym on

SpecialTileset equ 03004DE4h
HatchData equ 0x3004DEC
.sym off
HatchData_Status equ 00h
HatchData_Animation equ 01h
HatchData_XPosition equ 02h
HatchData_YPosition equ 03h
.sym on

DestinationRoom equ 03004E3Ch

RoomTanks equ 030053DCh
.sym off
RoomTanks_AnimationDelay equ 00h
RoomTanks_AnimationFrame equ 01h
RoomTanks_LocationIndex equ 02h
RoomTanks_Sprite equ 03h
.sym on

MainDeckDoors equ 083C0030h
Sector1Doors equ 083C09D8h
Sector2Doors equ 083C0F48h
Sector3Doors equ 083C162Ch
Sector5Doors equ 083C1A70h
Sector4Doors equ 083C204Ch
Sector6Doors equ 083C25E0h
.sym off
DoorEntry_Type equ 00h
DoorEntry_SourceRoom equ 01h
DoorEntry_XStart equ 02h
DoorEntry_XEnd equ 03h
DoorEntry_YStart equ 04h
DoorEntry_YEnd equ 05h
DoorEntry_Destination equ 06h
DoorEntry_ExitDistanceX equ 07h
DoorEntry_ExitDistanceY equ 08h
DoorEntry_Size equ 0Ch
.sym on

DoorLockEvents equ 083C8A5Ch
.sym off
DoorLockEvents_Len equ 0Fh
DoorLockEvent_Event equ 00h
DoorLockEvent_Area equ 01h
DoorLockEvent_Room equ 02h
DoorLockEvent_Bitmask equ 03h
DoorLockEvent_Value equ 04h
DoorLockEvent_Size equ 05h
.sym on

VariableConnections equ 083C8C68h
.sym off
VariableConnections_Len equ 3Ch
VariableConnection_Area equ 00h
VariableConnection_SourceDoor equ 01h
VariableConnection_Event equ 02h
VariableConnection_DestinationDoor equ 03h
VariableConnection_Size equ 04h
.sym on

DemoMemory equ 083E3F6Ch
.sym off
; modified from vanilla to account for nonlinear upgrades
DemoMemory_Len equ 12
DemoMemory_Area equ 00h
DemoMemory_PrevDoor equ 01h
DemoMemory_SecurityLevel equ 02h
DemoMemory_MapDownloads equ 03h
DemoMemory_BeamUpgrades equ 04h
DemoMemory_ExplosiveUpgrades equ 05h
DemoMemory_SuitUpgrades equ 06h
DemoMemory_StoryFlags equ 08h
DemoMemory_MaxEnergy equ 0Ah
DemoMemory_CurrEnergy equ 0Ch
DemoMemory_MaxMissiles equ 0Eh
DemoMemory_CurrMissiles equ 10h
DemoMemory_MaxPowerBombs equ 12h
DemoMemory_CurrPowerBombs equ 13h
DemoMemory_SamusDirection equ 14h
DemoMemory_SamusXPos equ 16h
DemoMemory_SamusYPos equ 18h
DemoMemory_Size equ 1Ch
.sym on

DemoTanksCollected equ 083E40C8h

EventUpgradeInfo equ 08575FB4h
.sym off
EventUpgradeInfo_Len equ 19
EventUpgradeInfo_BeamUpgrades equ 00h
EventUpgradeInfo_ExplosiveUpgrades equ 01h
EventUpgradeInfo_SuitUpgrades equ 02h
EventUpgradeInfo_ChangesSuit equ 03h
EventUpgradeInfo_Message equ 04h
EventUpgradeInfo_SubEvent equ 06h
EventUpgradeInfo_Size equ 08h
.sym on

SecurityUnlockEvents equ 085760C8h
.sym off
SecurityUnlockEvents_Len equ 4
SecurityUnlockEvent_SecurityLevel equ 00h
SecurityUnlockEvent_Area equ 01h
SecurityUnlockEvent_PrevEvent equ 02h
SecurityUnlockEvent_NewEvent equ 03h
SecurityUnlockEvent_SubEvent equ 04h
SecurityUnlockEvent_Message equ 05h ; non-vanilla
SecurityUnlockEvent_Size equ 8
.sym on

NavBriefings equ 08575A60h
.sym off
NavBriefing_Area equ 00h
NavBriefing_Room equ 01h
NavBriefing_XStart equ 02h
NavBriefing_YStart equ 03h
NavBriefing_XEnd equ 04h
NavBriefing_YEnd equ 05h
NavBriefing_Dialogue equ 06h
NavBriefing_NavRoom equ 07h
NavBriefing_EventType equ 08h
NavBriefing_Size equ 0Ch
.sym on

SaveMetadata equ 03000B94h
.sym off
SaveMetadata_Len equ 3
SaveMeta_Exists equ 00h
SaveMeta_CorruptionFlag equ 01h
SaveMeta_Area equ 02h
SaveMeta_Event equ 03h
SaveMeta_CurrEnergy equ 04h
SaveMeta_MaxEnergy equ 06h
SaveMeta_CurrMissiles equ 08h
SaveMeta_MaxMissiles equ 0Ah
SaveMeta_SuitUpgrades equ 0Ch
SaveMeta_IgtHours equ 0Dh
SaveMeta_IgtMinutes equ 0Eh
SaveMeta_HasSaved equ 0Fh
SaveMeta_GameCompleted equ 10h
SaveMeta_IntroPlayed equ 11h
SaveMeta_Size equ 14h
.sym on

SaveData equ 0858225Ch
.sym off
SaveData_Area equ 1Dh
SaveData_Room equ 1Eh
SaveData_PreviousDoor equ 1Fh
SaveData_BG0XPosition equ 40h
SaveData_BG0YPosition equ 42h
SaveData_BG1XPosition equ 44h
SaveData_BG1YPosition equ 46h
SaveData_BG2XPosition equ 48h
SaveData_BG2YPosition equ 4Ah
SaveData_BG3XPosition equ 4Ch
SaveData_BG3YPosition equ 4Eh
SaveData_SamusState equ 60h
SaveData_MusicSlot1 equ 0E8h
SaveData_MusicSlot2 equ 0EAh
SaveData_MusicSlotSelect equ 0ECh
SaveData_MusicUnk1 equ 0EDh
SaveData_MusicUnk2 equ 0EEh
SaveData_TanksCollected equ 0F80h
SaveData_Size equ 1200h
.sym on

.sym off
Credits_Len equ 136h
CreditsLine_Type equ 00h
CreditsLine_Skip equ 01h
CreditsLine_Text equ 02h
CreditsLine_TextSize equ 20h
CreditsLine_Size equ 24h
.sym on

AreaLevels equ 0879B8BCh
NullBg equ 083BF850h
.sym off
LevelMeta_Tileset equ 00h
LevelMeta_Bg0Properties equ 01h
LevelMeta_Bg1Properties equ 02h
LevelMeta_Bg2Properties equ 03h
LevelMeta_Bg3Properties equ 04h
LevelMeta_Bg0 equ 08h
LevelMeta_Bg1 equ 0Ch
LevelMeta_Bg2 equ 10h
LevelMeta_Clipdata equ 14h
LevelMeta_Bg3 equ 18h
LevelMeta_Spriteset0 equ 20h
LevelMeta_Spriteset0Id equ 24h
LevelMeta_Spriteset1Event equ 25h
LevelMeta_Spriteset1 equ 28h
LevelMeta_Spriteset1Id equ 2Ch
LevelMeta_Spriteset2Event equ 2Dh
LevelMeta_Spriteset2 equ 30h
LevelMeta_Spriteset2Id equ 34h
LevelMeta_MapX equ 35h
LevelMeta_MapY equ 36h
LevelMeta_Music equ 3Ah
LevelMeta_Size equ 3Ch
.sym on

MainDeckLevels equ 083C2C4Ch
Sector1Levels equ 083C40B0h
Sector2Levels equ 083C4D58h
Sector3Levels equ 083C5BA4h
Sector5Levels equ 083C64C8h
Sector4Levels equ 083C70F8h
Sector6Levels equ 083C7C38h

SpritesetList equ 0879ADD8h
NullSpriteset equ 083BF884h
.sym off
Spriteset_SpriteY equ 00h
Spriteset_SpriteX equ 01h
Spriteset_SpriteProp equ 02h
Spriteset_SpriteSize equ 03h
.sym on

AreaScrolls equ 0879BB08h
.sym off
ScrollList_Room equ 00h
ScrollList_Len equ 01h
ScrollList_Array equ 02h
ScrollList_HeaderSize equ 02h

Scroll_XStart equ 00h
Scroll_XEnd equ 01h
Scroll_YStart equ 02h
Scroll_YEnd equ 03h
Scroll_XBreak equ 04h
Scroll_YBreak equ 05h
Scroll_Extend equ 06h
Scroll_NewBound equ 07h
Scroll_Size equ 08h
.sym on

MainDeckScrolls equ 0879B8E8h
Sector1Scrolls equ 0879B96Ch
Sector2Scrolls equ 0879B99Ch
Sector3Scrolls equ 0879B9FCh
Sector4Scrolls equ 0879BA84h
Sector5Scrolls equ 0879BA38h
Sector6Scrolls equ 0879BAB8h

MinimapDataPointers equ 0879BE5Ch

MessagesByLanguage equ 0879CDF4h

BLDCNT equ 04000050h

DMA0 equ 040000B0h
DMA1 equ 040000BCh
DMA2 equ 040000C8h
DMA3 equ 040000D4h
.sym off
DMA_SAD equ 00h
DMA_DAD equ 04h
DMA_CNT equ 08h
.sym on

PauseScreenGfxOamPointer equ 08076B10h
VanillaPauseScreenOamData equ 0879BEC0h

SamusPhysics equ 03001330h
.sym off
SamusPhysics_SlowSpeedFlag equ 00h
SamusPhysics_YAcceleration equ 02h
SamusPhysics_YVelocityCap equ 04h
SamusPhysics_MidairXAcceleration equ 06h
SamusPhysics_MidairXVelocityCap equ 08h
SamusPhysics_MidairMorphedXVelocityCap equ 0Ah
SamusPhysics_XAcceleration equ 0Ch
SamusPhysics_XVelocityCap equ 0Eh
.sym on

; non-vanilla structs:

UpgradeLookup equ 03001800h

.sym off
MajorUpgradeInfo_Offset equ 00h
MajorUpgradeInfo_Bitmask equ 01h
MajorUpgradeInfo_Message equ 02h
.sym on

.sym off
MajorLocations_Len equ 21
MajorLocation_Upgrade equ 00h
MajorLocation_Message equ 01h
MajorLocation_Size equ 02h
.sym on

.sym off
MinorLocations_Len equ 100
MinorLocation_Area equ 00h
MinorLocation_Room equ 01h
MinorLocation_RoomIndex equ 02h
MinorLocation_XPos equ 03h
MinorLocation_YPos equ 04h
MinorLocation_Upgrade equ 05h
MinorLocation_Sprite equ 06h
MinorLocation_Message equ 07h
MinorLocation_Size equ 08h
.sym on

.sym off
StartingLocation_Area equ 00h
StartingLocation_Room equ 01h
StartingLocation_Door equ 02h
StartingLocation_XPos equ 04h
StartingLocation_YPos equ 06h
StartingLocation_Size equ 08h
.sym on

RedX_OAMData equ 083BE2C0h

SpritePalettePtrs equ 0879A8D4h

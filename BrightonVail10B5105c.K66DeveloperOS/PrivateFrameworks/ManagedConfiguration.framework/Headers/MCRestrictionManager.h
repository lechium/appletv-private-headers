/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MCRestrictionManager : NSObject {
	NSMutableDictionary *_defaultRestrictions;	// 4 = 0x4
	NSMutableDictionary *_restrictions;	// 8 = 0x8
	NSMutableDictionary *_profileRestrictions;	// 12 = 0xc
	NSMutableDictionary *_clientRestrictions;	// 16 = 0x10
	NSDictionary *_userSettings;	// 20 = 0x14
	NSDictionary *_effectiveUserSettings;	// 24 = 0x18
	NSDictionary *_clientTypeLoaders;	// 28 = 0x1c
	CFDictionaryRef _clientTypeToLoaderClass;	// 32 = 0x20
	CFDictionaryRef _clientTypeToLoaderSelector;	// 36 = 0x24
	CFDictionaryRef _clientTypeToRecomputeComplianceSelector;	// 40 = 0x28
	NSObject<OS_dispatch_queue> *_syncQueue;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_nagMetaQueue;	// 48 = 0x30
	int _senderPID;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *clientRestrictions;	// G=0x344ed78d; converted property
@property(readonly, retain) NSDictionary *effectiveUserSettings;	// G=0x344f2161; converted property
@property(readonly, retain) NSMutableDictionary *profileRestrictions;	// G=0x344ecfe5; converted property
@property(assign, nonatomic) int senderPID;	// G=0x344f3eb1; S=0x344f3ec1; @synthesize=_senderPID
@property(readonly, retain) NSDictionary *userSettings;	// G=0x344f1eb1; converted property
+ (BOOL)_isDictionary:(id)dictionary differentFromDictionary:(id)dictionary2;	// 0x344f3e6d
+ (void)_setPathsRestrictionsFilePath:(id)path defaultRestrictionsFilePath:(id)path2 clientTypeLoadersFilePath:(id)path3 profileRestrictionsFilePath:(id)path4 clientRestrictionsFilePath:(id)path5 userSettingsFilePath:(id)path6 effectiveUserSettingsFilePath:(id)path7;	// 0x344ec615
+ (BOOL)boolSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x344f3bdd
+ (int)boolSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x344f3a9d
+ (int)defaultBoolValueForSetting:(id)setting;	// 0x344f391d
+ (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x344f3805
+ (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x344f3891
+ (id)defaultSettingsDict;	// 0x344f37e9
+ (id)defaultValueForSetting:(id)setting;	// 0x344f39ed
+ (id)filterRestrictionDictionaryForPublicUse:(id)publicUse;	// 0x344f1381
+ (id)objectForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x344f1ab9
+ (BOOL)restrictedBool:(id)aBool changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x344f1b3d
+ (int)restrictedBoolForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x344f1931
+ (BOOL)restrictedValue:(id)value changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x344f1c85
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)dictionary toRestrictionsDictionary:(id)restrictionsDictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x344f066d
+ (id)restrictionsWithCurrentRestrictions:(id)currentRestrictions defaultRestrictions:(id)restrictions profileRestrictions:(id)restrictions3 clientRestrictions:(id)restrictions4 outRestrictionsChanged:(BOOL *)changed outError:(id *)error;	// 0x344f1045
+ (id)sharedManager;	// 0x344ec6b1
+ (id)valueForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x344f1a09
+ (BOOL)valueSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x344f3d25
+ (id)valueSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x344f3b4d
- (void).cxx_destruct;	// 0x344f3ed1
- (id)_clientRestrictions;	// 0x344ed66d
- (id)_clientRestrictionsForClientUUID:(id)clientUUID;	// 0x344ed8a9
- (id)_clientTypeForClientUUID:(id)clientUUID;	// 0x344ed939
- (id)_currentRestrictionsDictionary;	// 0x344ecc01
- (id)_defaultRestrictionsDictionary;	// 0x344ec8a9
- (id)_defaultSettingsDictionary;	// 0x344ecbe5
- (id)_effectiveUserSettings;	// 0x344f207d
- (id)_init;	// 0x344f0439
- (id)_liveClientUUIDsForClientType:(id)clientType;	// 0x344ef17d
- (id)_loadClientLoaders;	// 0x344eec19
- (id)_profileRestrictions;	// 0x344ecec5
- (BOOL)_recomputeEffectiveUserSettings;	// 0x344f24b9
- (BOOL)_setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outError:(id *)error;	// 0x344ee021
- (void)_setClientRestrictionsWithoutNotifications:(id)notifications;	// 0x344edfc5
- (BOOL)_setEffectiveUserSettings:(id)settings;	// 0x344f2371
- (void)_setRestrictions:(id)restrictions;	// 0x344ece19
- (BOOL)_setUserSettings:(id)settings;	// 0x344f1fcd
- (id)_userInfoForClientUUID:(id)clientUUID;	// 0x344edb25
- (id)_userSettings;	// 0x344f1dcd
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x344edd11
// converted property getter: - (id)clientRestrictions;	// 0x344ed78d
- (id)clientRestrictionsForClientUUID:(id)clientUUID;	// 0x344ed9c9
- (id)combinedProfileRestrictions;	// 0x344ed101
- (id)currentRestrictionsDictionary;	// 0x344eccfd
- (void)dealloc;	// 0x344f0579
- (id)defaultRestrictionsDictionary;	// 0x344ecab5
- (id)description;	// 0x344f04d5
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x344f2e11
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x344f2e9d
- (int)effectiveRestrictedBoolForSetting:(id)setting;	// 0x344f2f29
// converted property getter: - (id)effectiveUserSettings;	// 0x344f2161
- (id)effectiveValueForSetting:(id)setting;	// 0x344f2f9d
- (void)invalidateRestrictions;	// 0x344ec72d
- (void)invalidateSettings;	// 0x344ec801
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x344f2ff1
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x344f3111
- (void)notifyClientsToRecomputeCompliance;	// 0x344ef215
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x344f0325
- (id)objectForFeature:(id)feature;	// 0x344f18b9
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)dictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x344f05e9
// converted property getter: - (id)profileRestrictions;	// 0x344ecfe5
- (BOOL)recomputeNagMetadata;	// 0x344ef8c1
- (void)removeBoolSetting:(id)setting;	// 0x344f33d1
- (BOOL)removeOrphanedClientRestrictions;	// 0x344ef351
- (void)removeValueSetting:(id)setting;	// 0x344f3569
- (void)resetAllSettingsToDefaults;	// 0x344f3701
- (int)restrictedBoolForFeature:(id)feature;	// 0x344f17d9
// declared property getter: - (int)senderPID;	// 0x344f3eb1
- (BOOL)setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x344ee4a5
- (void)setBoolValue:(BOOL)value forSetting:(id)setting;	// 0x344f227d
- (BOOL)setClientRestrictions:(id)restrictions clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarning:(id)warning outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x344ee685
- (BOOL)setParametersForSettingsByType:(id)settingsByType;	// 0x344f2c61
- (BOOL)setProfileRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x344ed271
// declared property setter: - (void)setSenderPID:(int)pid;	// 0x344f3ec1
- (void)setShowNagMessage;	// 0x344f0275
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x344ee27d
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x344edbb5
// converted property getter: - (id)userSettings;	// 0x344f1eb1
- (id)valueForFeature:(id)feature;	// 0x344f1841
@end


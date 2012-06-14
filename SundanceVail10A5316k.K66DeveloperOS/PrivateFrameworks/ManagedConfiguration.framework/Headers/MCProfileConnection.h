/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"

@class NSDictionary, NSData, NSDate, NSTimer, CPDistributedMessagingCenter, NSMutableArray;
@protocol MCInteractionDelegate, OS_dispatch_queue;

@interface MCProfileConnection : NSObject {
@private
	CPDistributedMessagingCenter *_messageCenter;	// 4 = 0x4
	CFBagRef _observers;	// 8 = 0x8
	CPDistributedMessagingCenter *_interactionServer;	// 12 = 0xc
	id<MCInteractionDelegate> _interactionDelegate;	// 16 = 0x10
	id _interactionLockDelayedContext;	// 20 = 0x14
	NSDictionary *_preflightResponse;	// 24 = 0x18
	NSData *_originalProfileData;	// 28 = 0x1c
	BOOL _needToRestoreOriginalProfileData;	// 32 = 0x20
	NSDate *_lastNoPasscodeMDMPollTime;	// 36 = 0x24
	int _userInputTimeoutType;	// 40 = 0x28
	NSTimer *_userInputTimer;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_notificationSyncQueue;	// 48 = 0x30
	NSMutableArray *_notificationTokens;	// 52 = 0x34
}
+ (id)sharedConnection;	// 0x305b57d5
- (void).cxx_destruct;	// 0x305b6389
- (void)__checkForProfiledCrash;	// 0x305e519d
- (void)__doMCICDidFinish:(id)__doMCIC;	// 0x305e4e91
- (void)__effectiveSettingsDidChange:(id)__effectiveSettings;	// 0x305b60a5
- (void)__passcodeDidChange;	// 0x305b5df9
- (void)__passcodePolicyDidChange;	// 0x305b5edd
- (void)__profileListDidChange;	// 0x305b5fc1
- (void)__restrictionDidChange;	// 0x305b5d15
- (void)_applyToObservers:(id)observers;	// 0x305b5b29
- (void)_cancelUserInputTimeout;	// 0x305e4541
- (void)_detectProfiledCrashes;	// 0x305e3cb5
- (void)_doMCICDidBeginInstallingNextProfileData:(id)_doMCIC params:(id)params;	// 0x305e4d3d
- (void)_doMCICDidFinish:(id)_doMCIC params:(id)params;	// 0x305e4fd1
- (void)_doMCICDidRequestCurrentPasscode:(id)_doMCIC params:(id)params;	// 0x305e4be5
- (void)_doMCICDidUpdateStatus:(id)_doMCIC params:(id)params;	// 0x305e4ad9
- (void)_doMCICPreflightResponse:(id)response params:(id)params;	// 0x305e4799
- (void)_doMCICRequestUserInput:(id)input params:(id)params;	// 0x305e5321
- (void)_doMCICShowUserWarnings:(id)warnings params:(id)params;	// 0x305e5639
- (void)_effectiveSettingsDidChange:(id)_effectiveSettings;	// 0x305b61c9
- (id)_init;	// 0x305b4c09
- (BOOL)_openSensitiveURLString:(id)string unlock:(BOOL)unlock;	// 0x305e33a5
- (void)_passcodeDidChange;	// 0x305b5eb1
- (void)_passcodePolicyDidChange;	// 0x305b5f95
- (id)_pathsToInstalledProfilesWithFlags:(int)flags;	// 0x305e2811
- (void)_profileListDidChange;	// 0x305b6079
- (id)_queueDataForAcceptance:(id)acceptance originalFileName:(id)name transitionToUI:(BOOL)ui outError:(id *)error;	// 0x305e2b5d
- (void)_registerSelectorsForInteractionServer:(id)interactionServer;	// 0x305e3da1
- (void)_restrictionDidChange;	// 0x305b5dcd
- (void)_setTimeoutWaitingForUserInputType:(int)userInputType;	// 0x305e4361
- (void)_tearDownInteractionServer;	// 0x305e3c19
- (void)_userInputTimerFired;	// 0x305e45bd
- (id)acceptedFileExtensions;	// 0x305e3331
- (id)acceptedMIMETypes;	// 0x305e32d9
- (void)addObserver:(id)observer;	// 0x305b61f9
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x305e66a1
- (int)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarningMessage:(id)message complianceBlocking:(int)blocking displayImmediateAlert:(BOOL)alert outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed9 outError:(id *)error;	// 0x305e5fa5
- (BOOL)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarningMessage:(id)message outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outError:(id *)error;	// 0x305e5d6d
- (BOOL)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed5 outError:(id *)error;	// 0x305e1de5
- (int)boolRestrictionForFeature:(id)feature;	// 0x305e5c41
- (void)cancelUserInputResponses;	// 0x305e48c5
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x305e7645
- (id)chaperoneOrganization;	// 0x305e5b5d
- (void)checkCarrierProfile;	// 0x305e881d
- (void)checkIn;	// 0x305b5a59
- (void)checkInAsynchronously;	// 0x305b5ac5
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x305e77b1
- (BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id *)globalRestrictionsOutError;	// 0x305e7af9
- (BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id *)profileRestrictionsOutError;	// 0x305e7bbd
- (void)dealloc;	// 0x305b58ed
- (int)defaultBoolValueForSetting:(id)setting;	// 0x305e6f39
- (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x305e6f71
- (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x305e6f8d
- (id)defaultValueForSetting:(id)setting;	// 0x305e6f55
- (id)doNotBackupAppIDs;	// 0x305e8681
- (id)doNotDocumentSyncAppIDs;	// 0x305e8695
- (int)effectiveBoolValueForSetting:(id)setting;	// 0x305e7079
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x305e6fa9
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x305e7011
- (int)effectiveRestrictedBoolValueForSetting:(id)setting;	// 0x305e1e55
- (id)effectiveRestrictions;	// 0x305e5bed
- (id)effectiveUserSettings;	// 0x305e7301
- (id)effectiveValueForSetting:(id)setting;	// 0x305e70ed
- (id)effectiveWhitelistedAppsAndOptions;	// 0x305e68e9
- (int)getPasscodeComplianceWarningLastLockDate:(id)date outLocalizedTitle:(id *)title outLocalizedMessage:(id *)message;	// 0x305e7c59
- (void)installProfile:(id)profile interactionDelegate:(id)delegate;	// 0x305e4051
- (id)installProfile:(id)profile outError:(id *)error;	// 0x305e2e31
- (void)installProfileData:(id)data interactionDelegate:(id)delegate;	// 0x305e3ee1
- (id)installProfileData:(id)data managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x305e2ea9
- (id)installProfileData:(id)data outError:(id *)error;	// 0x305e2e89
- (BOOL)installProvisioningProfileData:(id)data managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x305e39d9
- (id)installedProfileWithIdentifier:(id)identifier;	// 0x305e29cd
- (id)installedProfilesWithFilterFlags:(int)filterFlags;	// 0x305e2869
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x305e7141
- (BOOL)isChaperoned;	// 0x305e5b01
- (BOOL)isContentProtectionInEffect;	// 0x305e7a69
- (BOOL)isPasscodeRequired;	// 0x305e746d
- (BOOL)isPasscodeRequiredByPolicy;	// 0x305e1d89
- (BOOL)isPasscodeRequiredByProfiles;	// 0x305e74c9
- (BOOL)isPasscodeSet;	// 0x305e7425
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x305e719d
- (id)localizedDescriptionOfCurrentPasscodeConstraints;	// 0x305e84b5
- (void)lockDevice;	// 0x305e7399
- (id)managedAppIDsWithFlags:(int)flags;	// 0x305e86a9
- (id)managedSystemConfigurationServiceIDs;	// 0x305e860d
- (id)managedWiFiNetworkNames;	// 0x305e8535
- (void)migratePostDataMigrator;	// 0x305e87ed
- (int)newPasscodeEntryScreenType;	// 0x305e846d
- (void)notifyClientsToRecomputeCompliance;	// 0x305e82d5
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x305e8319
- (id)objectForFeature:(id)feature;	// 0x305e1e45
- (id)objectRestrictionForFeature:(id)feature;	// 0x305e5d05
- (id)parametersForBoolSetting:(id)boolSetting;	// 0x305e6e21
- (id)parametersForValueSetting:(id)valueSetting;	// 0x305e6ead
- (BOOL)passcode:(id)passcode meetsCurrentConstraintsOutError:(id *)error;	// 0x305e7a89
- (id)passcodeExpiryDate;	// 0x305e1da1
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x305e83cd
- (void)performBootTimeChecks;	// 0x305e8881
- (id)popProfileFromHeadOfInstallationQueue;	// 0x305e29e9
- (id)popProvisioningProfileDataFromHeadOfInstallationQueue;	// 0x305e2ae9
- (void)preflightUserInputResponses:(id)responses forPayloadIndex:(unsigned)payloadIndex;	// 0x305e41ed
- (void)processProfilesPostMigrate;	// 0x305e87bd
- (void)processProfilesPostRestore;	// 0x305e878d
- (id)profileFromProfileData:(id)profileData outError:(id *)error;	// 0x305e1c9d
- (id)queueFileDataForAcceptance:(id)acceptance originalFileName:(id)name outError:(id *)error;	// 0x305e2dc9
- (id)queueFileDataForProfileInstallation:(id)profileInstallation originalFileName:(id)name outError:(id *)error;	// 0x305e1d65
- (id)queueProfileDataForAcceptance:(id)acceptance outError:(id *)error;	// 0x305e1cb9
- (id)queueProfileDataForInstallation:(id)installation outError:(id *)error;	// 0x305e1d41
- (id)queueProfileForAcceptance:(id)acceptance outError:(id *)error;	// 0x305e2d65
- (id)queueProfileForInstallation:(id)installation outError:(id *)error;	// 0x305e1cdd
- (void)recomputeUserComplianceWarning;	// 0x305e8291
- (void)removeBoolSetting:(id)setting;	// 0x305e71f9
- (void)removeObserver:(id)observer;	// 0x305b62c1
- (void)removeOrphanedClientRestrictions;	// 0x305e68b9
- (void)removeProfileAsyncWithIdentifier:(id)identifier;	// 0x305e304d
- (void)removeProfileWithIdentifier:(id)identifier;	// 0x305e2fc9
- (void)removeProfileWithIdentifier:(id)identifier completion:(id)completion;	// 0x305e30c9
- (void)removeProfilesFromInstallationQueue;	// 0x305e2ded
- (BOOL)removeProvisioningProfileWithUUID:(id)uuid outError:(id *)error;	// 0x305e3b01
- (void)removeValueSetting:(id)setting;	// 0x305e727d
- (void)resetAllSettingsToDefaults;	// 0x305e7355
- (void)respondToCurrentPasscodeRequestContinue:(BOOL)currentPasscodeRequestContinue passcode:(id)passcode;	// 0x305e59a1
- (void)respondToWarningsContinueInstallation:(BOOL)warningsContinueInstallation;	// 0x305e5865
- (int)restrictedBoolValueForFeature:(id)feature;	// 0x305e1e25
- (void)setBoolValue:(BOOL)value forSetting:(id)setting;	// 0x305e6c0d
- (void)setDelegate:(id)delegate;	// 0x305e1c2d
- (void)setInteractionDelegate:(id)delegate;	// 0x305e41d5
- (void)setParameters:(id)parameters forBoolSetting:(id)boolSetting;	// 0x305e6af5
- (void)setParameters:(id)parameters forValueSetting:(id)valueSetting;	// 0x305e6b81
- (void)setParametersForSettingsByType:(id)settingsByType;	// 0x305e69c5
- (void)setPasscodeWasSetInBackup:(BOOL)backup;	// 0x305e1e21
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x305e6771
- (void)setValue:(id)value forSetting:(id)setting;	// 0x305e6d01
- (BOOL)showProfileErrorUIWithProfileIdentifier:(id)profileIdentifier outError:(id *)error;	// 0x305e3631
- (void)shutDown;	// 0x305e85a9
- (void)storeCertificateData:(id)data forHostIdentifier:(id)hostIdentifier;	// 0x305e88e5
- (void)submitUserInputResponses:(id)responses;	// 0x305e499d
- (BOOL)transitionToProfileAcceptanceUI;	// 0x305e3501
- (BOOL)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)bundleID;	// 0x305e356d
- (BOOL)transitionToProfileOverviewUI;	// 0x305e34d9
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x305e7965
- (int)unlockScreenType;	// 0x305e8425
- (void)updateProfileWithIdentifier:(id)identifier interactionDelegate:(id)delegate;	// 0x305e40ad
- (id)updateProfileWithIdentifier:(id)identifier outError:(id *)error;	// 0x305e31d9
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x305e6709
- (id)userSettings;	// 0x305e6dcd
- (BOOL)validatePasscode:(id)passcode;	// 0x305e1db5
- (BOOL)validatePasscode:(id)passcode andUnlockContentProtectedDevice:(BOOL)device;	// 0x305e1dcd
- (id)valueForFeature:(id)feature;	// 0x305e1e35
- (id)valueRestrictionForFeature:(id)feature;	// 0x305e5c9d
@end


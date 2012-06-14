/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCHacks : NSObject {
}
+ (void)_applyChangesWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions oldEffectiveUserSettings:(id)settings newEffectiveUserSettings:(id)settings4;	// 0x305eb89d
+ (BOOL)_applyHeuristicsToRestrictions:(id)restrictions forProfile:(id)profile outError:(id *)error;	// 0x305ec099
+ (void)_applyImpliedSettingsToSettingsDictionary:(id)settingsDictionary;	// 0x305ec69d
+ (void)_applyServerSideChangesWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions oldEffectiveUserSettings:(id)settings newEffectiveUserSettings:(id)settings4;	// 0x305ebbfd
+ (void)_checkCarrierBundleRelatedSettings;	// 0x305ecc05
+ (id)_deviceSpecificDefaultSettings;	// 0x305ec95d
+ (id)_permittedAutoLockNumbers;	// 0x305ebd65
+ (id)_permittedGracePeriodNumbers;	// 0x305ebc01
+ (id)_selectLargestNumberFromSortedArray:(id)sortedArray equalToOrLessThanNumber:(id)orLessThanNumber;	// 0x305ebf85
+ (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)domain;	// 0x305ecd3d
+ (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)domain;	// 0x305ecddd
+ (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)effectiveUserSettings;	// 0x305ec889
@end


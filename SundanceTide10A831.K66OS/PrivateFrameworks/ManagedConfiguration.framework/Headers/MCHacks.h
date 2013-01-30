/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCHacks : NSObject {
}
+ (void)_applyChangesWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions oldEffectiveUserSettings:(id)settings newEffectiveUserSettings:(id)settings4;	// 0x32e1f559
+ (BOOL)_applyHeuristicsToRestrictions:(id)restrictions forProfile:(id)profile outError:(id *)error;	// 0x32e1fd55
+ (void)_applyImpliedSettingsToSettingsDictionary:(id)settingsDictionary;	// 0x32e20359
+ (void)_applyServerSideChangesWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions oldEffectiveUserSettings:(id)settings newEffectiveUserSettings:(id)settings4;	// 0x32e1f8b9
+ (void)_checkCarrierBundleRelatedSettings;	// 0x32e208f1
+ (id)_deviceSpecificDefaultSettings;	// 0x32e20649
+ (id)_permittedAutoLockNumbers;	// 0x32e1fa21
+ (id)_permittedGracePeriodNumbers;	// 0x32e1f8bd
+ (id)_selectLargestNumberFromSortedArray:(id)sortedArray equalToOrLessThanNumber:(id)orLessThanNumber;	// 0x32e1fc41
+ (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)domain;	// 0x32e20a29
+ (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)domain;	// 0x32e20ac9
+ (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)effectiveUserSettings;	// 0x32e20575
@end

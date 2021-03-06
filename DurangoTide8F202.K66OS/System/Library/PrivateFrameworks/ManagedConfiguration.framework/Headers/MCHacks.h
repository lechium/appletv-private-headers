/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCHacks : NSObject {
}
+ (BOOL)_applyHeuristicsToDictionary:(id)dictionary forProfile:(id)profile outError:(id *)error;	// 0x30074f69
+ (void)_applyImpliedSettingsToSettingsDictionary:(id)settingsDictionary;	// 0x300752b1
+ (void)_applyRestrictionChangesWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions oldEffectiveUserSettings:(id)settings newEffectiveUserSettings:(id)settings4;	// 0x30074c21
+ (id)_deviceSpecificDefaultSettings;	// 0x30075739
+ (id)_permittedAutoLockNumbers;	// 0x30075709
+ (id)_permittedGracePeriodNumbers;	// 0x300756d9
+ (id)_selectLargestNumberFromSortedArray:(id)sortedArray equalToOrLessThanNumber:(id)orLessThanNumber;	// 0x30074ea9
+ (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)effectiveUserSettings;	// 0x300755bd
@end


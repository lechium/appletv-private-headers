/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCPasscodeManager : NSObject {
}
+ (BOOL)_passcodeCharacteristics:(id)characteristics compliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x348abe35
+ (id)characteristicsDictionaryFromPasscode:(id)passcode;	// 0x348ab991
+ (id)generateSalt;	// 0x348ac8e1
+ (id)hashForPasscode:(id)passcode usingMethod:(int)method salt:(id)salt;	// 0x348ab8e5
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)restrictions;	// 0x348ac4bd
+ (BOOL)passcode:(id)passcode compliesWithPolicyFromRestrictions:(id)restrictions checkHistory:(BOOL)history outError:(id *)error;	// 0x348ac42d
+ (BOOL)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions;	// 0x348abce5
+ (id)sharedManager;	// 0x348ac911
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)passcodeCharacteristics;	// 0x348ac871
+ (int)unlockScreenTypeForRestrictions:(id)restrictions;	// 0x348ac7cd
- (BOOL)_checkPasscode:(id)passcode againstHistoryWithRestrictions:(id)restrictions outError:(id *)error;	// 0x348aca99
- (id)_init;	// 0x348ab8b9
- (id)_passcodeCharacteristics;	// 0x348acf65
- (id)_privatePasscodeDict;	// 0x348ad921
- (id)_publicPasscodeDict;	// 0x348ad98d
- (void)_sendPasscodeChangedNotification;	// 0x348ad70d
- (void)_setPrivatePasscodeDict:(id)dict;	// 0x348ad861
- (id)_wrongPasscodeError;	// 0x348ad7a9
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x348ad179
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x348acf99
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x348acd35
- (int)currentUnlockScreenType;	// 0x348acf1d
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)error;	// 0x348acce9
- (BOOL)isDeviceLocked;	// 0x348ad809
- (BOOL)isPasscodeSet;	// 0x348ad849
- (id)localizedDescriptionOfPasscodePolicy;	// 0x348ace2d
- (void)lockDevice;	// 0x348ad831
- (int)newPasscodeEntryScreenType;	// 0x348ace85
- (BOOL)passcode:(id)passcode compliesWithPolicyCheckHistory:(BOOL)policyCheckHistory outError:(id *)error;	// 0x348acdc9
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x348ac959
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x348ad74d
@end


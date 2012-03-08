/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCDeviceCapabilities : NSObject {
	BOOL _supportsBlockLevelEncryption;	// 4 = 0x4
	BOOL _supportsFileLevelEncryption;	// 5 = 0x5
}
@property(readonly, assign) BOOL supportsBlockLevelEncryption;	// G=0x36478d71; @synthesize=_supportsBlockLevelEncryption
@property(readonly, assign) BOOL supportsFileLevelEncryption;	// G=0x36478d61; @synthesize=_supportsFileLevelEncryption
+ (id)currentDevice;	// 0x36478e3d
- (id)init;	// 0x36478fa5
- (BOOL)_mediaDiskIsEncrypted;	// 0x36478d81
// declared property getter: - (BOOL)supportsBlockLevelEncryption;	// 0x36478d71
// declared property getter: - (BOOL)supportsFileLevelEncryption;	// 0x36478d61
- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)restrictions localizedIncompatibilityMessage:(id)message outError:(id *)error;	// 0x36478e69
@end


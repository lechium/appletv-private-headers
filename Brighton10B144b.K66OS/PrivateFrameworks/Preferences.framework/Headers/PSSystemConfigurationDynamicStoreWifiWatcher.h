/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library
#import "Preferences-Structs.h"


@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {
	SCDynamicStoreRef _prefs;	// 4 = 0x4
	CFStringRef _wifiKey;	// 8 = 0x8
	CFStringRef _wifiInterface;	// 12 = 0xc
	CFStringRef _tetheringLink;	// 16 = 0x10
}
+ (void)releaseSharedInstance;	// 0x352ee619
+ (id)sharedInstance;	// 0x352ee5d1
+ (BOOL)wifiEnabled;	// 0x352ee645
- (id)init;	// 0x352eefe5
- (id)_wifiNameWithState:(id)state;	// 0x352eee11
- (id)_wifiPowerWithState:(id)state;	// 0x352eed41
- (id)_wifiTetheringWithState:(id)state;	// 0x352eecc5
- (void)dealloc;	// 0x352ef069
- (void)findKeysAirPortState:(id *)state andTetheringState:(id *)state2;	// 0x352ee6a1
- (id)wifiConfig;	// 0x352eee2d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVSettingsHelper : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x301bf561
+ (id)singleton;	// 0x301bf551
- (id)init;	// 0x301bf571
- (void)dealloc;	// 0x301bf5d9
- (BOOL)haveWeQuitSinceBoot;	// 0x301bf7b5
- (BOOL)performObliterate;	// 0x301bf635
- (BOOL)performRestore;	// 0x301bf7b1
- (BOOL)performUpdates:(id)updates;	// 0x301bf611
- (void)reboot;	// 0x301bf855
- (BOOL)setLowPowerMode:(BOOL)mode;	// 0x301bf60d
- (BOOL)setNetworkSettings:(id)settings forInterface:(int)interface;	// 0x301bf609
- (void)setSSHEnabled:(BOOL)enabled;	// 0x301bf875
- (BOOL)setSystemLanguage:(id)language;	// 0x301bf605
@end


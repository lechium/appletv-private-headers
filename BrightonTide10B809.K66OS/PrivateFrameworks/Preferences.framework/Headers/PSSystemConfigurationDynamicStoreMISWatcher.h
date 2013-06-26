/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library
#import "Preferences-Structs.h"


@interface PSSystemConfigurationDynamicStoreMISWatcher : NSObject {
	CFRunLoopSourceRef _scRunLoopSource;	// 4 = 0x4
	SCDynamicStoreRef _scDynamicStore;	// 8 = 0x8
	int _misState;	// 12 = 0xc
	int _misReason;	// 16 = 0x10
}
+ (id)sharedManager;	// 0x352f10f5
- (id)init;	// 0x352f1131
- (void)dealloc;	// 0x352f127d
- (void)getMISState:(int *)state andReason:(int *)reason;	// 0x352f12f1
- (void)readMISState:(int *)state andReason:(int *)reason;	// 0x352f134d
- (void)sendStateUpdate;	// 0x352f1411
@end

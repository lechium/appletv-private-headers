/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface BRNetworkMonitor : BRSingleton {
	NSTimer *_networkDropTimer;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x3ae389
+ (id)singleton;	// 0x3ae379
- (void)_completeNetworkTransition;	// 0x3ae5f1
- (void)handleSysConfigCallbackWithStore:(SCDynamicStoreRef)store changedKeys:(CFArrayRef)keys info:(void *)info;	// 0x3ae399
@end

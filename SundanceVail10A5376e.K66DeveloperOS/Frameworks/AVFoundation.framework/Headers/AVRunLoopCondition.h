/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSCondition.h> // Unknown library

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
	NSMutableArray *_runLoopStateList;	// 8 = 0x8
}
- (id)init;	// 0x36902399
- (void)_signalRunLoopWithState:(id)state;	// 0x36902835
- (BOOL)_waitInMode:(id)mode untilDate:(id)date;	// 0x369024a9
- (void)broadcast;	// 0x36902771
- (void)dealloc;	// 0x369023fd
- (void)signal;	// 0x36902719
- (void)wait;	// 0x36902449
- (void)waitInMode:(id)mode;	// 0x36902475
- (BOOL)waitUntilDate:(id)date;	// 0x3690245d
- (BOOL)waitUntilDate:(id)date inMode:(id)mode;	// 0x36902489
@end

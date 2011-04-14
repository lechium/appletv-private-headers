/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIBackgroundTaskInfo : NSObject {
@private
	unsigned _taskId;	// 4 = 0x4
	id _expireHandler;	// 8 = 0x8
	SBSProcessAssertionRef _processAssertion;	// 12 = 0xc
	int _count;	// 16 = 0x10
}
- (id)initWithProcessAssertion:(SBSProcessAssertionRef)processAssertion expirationHandler:(id)handler;	// 0x3060d911
- (void)dealloc;	// 0x3060db21
- (void)fireExpirationHandler;	// 0x306e4b0d
- (void)invalidate;	// 0x3060db01
@end


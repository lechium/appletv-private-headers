/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSOperationQueue, NSString, NSNotificationCenter;

__attribute__((visibility("hidden")))
@interface __NSObserver : NSObject {
@private
	NSNotificationCenter *nc;	// 4 = 0x4
	NSOperationQueue *queue;	// 8 = 0x8
	NSString *name;	// 12 = 0xc
	id object;	// 16 = 0x10
	id block;	// 20 = 0x14
}
@property(readonly, retain) NSString *name;	// G=0x310903a1; converted property
@property(readonly, retain) id object;	// G=0x310903b1; converted property
+ (void)forgetObserver:(id)observer;	// 0x31090241
+ (BOOL)isAnObserver:(id)observer;	// 0x3101b631
+ (id)observerWithCenter:(id)center queue:(id)queue name:(id)name object:(id)object block:(id)block;	// 0x3101e3b1
- (void)_doit:(id)doit;	// 0x310045a5
- (void)dealloc;	// 0x31090301
// converted property getter: - (id)name;	// 0x310903a1
// converted property getter: - (id)object;	// 0x310903b1
@end


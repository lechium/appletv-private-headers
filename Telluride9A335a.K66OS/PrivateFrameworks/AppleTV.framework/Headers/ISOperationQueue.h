/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface ISOperationQueue : NSObject {
@private
	NSOperationQueue *_queue;	// 4 = 0x4
}
@property(assign) int maxConcurrentOperationCount;	// G=0x343282ad; S=0x343282ed; converted property
+ (BOOL)isActive;	// 0x343280a5
+ (id)mainQueue;	// 0x343280e5
+ (id)microPaymentQueue;	// 0x3433c5c5
- (id)init;	// 0x34327fc5
- (void)addOperation:(id)operation;	// 0x34328151
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x343281ad
- (void)cancelAllOperations;	// 0x3432828d
- (void)dealloc;	// 0x3432803d
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x343282ad
- (id)operations;	// 0x343282cd
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x343282ed
- (void)setSuspended:(BOOL)suspended;	// 0x3432830d
@end

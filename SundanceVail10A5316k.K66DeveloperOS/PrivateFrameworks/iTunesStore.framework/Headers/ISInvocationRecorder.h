/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library


@interface ISInvocationRecorder : NSObject {
	id _target;	// 4 = 0x4
}
- (id)initWithTarget:(id)target;	// 0x3351e6b9
- (id)adjustedTargetForSelector:(SEL)selector;	// 0x3351e749
- (void)dealloc;	// 0x3351e6f9
- (void)forwardInvocation:(id)invocation;	// 0x3351e76d
- (void)invokeInvocation:(id)invocation;	// 0x3351e759
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3351e7c9
@end


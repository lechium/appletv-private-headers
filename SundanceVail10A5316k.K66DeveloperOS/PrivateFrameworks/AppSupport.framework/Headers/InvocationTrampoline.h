/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface InvocationTrampoline : NSObject {
	id _target;	// 4 = 0x4
}
@property(retain) id target;	// G=0x3435ecbd; S=0x3435ecd1; @synthesize=_target
- (void)dealloc;	// 0x3435eb09
- (void)forwardInvocation:(id)invocation;	// 0x3435ec8d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3435ebcd
- (void)performInvocation:(id)invocation;	// 0x3435eb59
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3435ec2d
// declared property setter: - (void)setTarget:(id)target;	// 0x3435ecd1
// declared property getter: - (id)target;	// 0x3435ecbd
@end


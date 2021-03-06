/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface BRInvocationSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	NSInvocation *_invocation;	// 4 = 0x4
	BOOL _useInvocationReturnValue;	// 8 = 0x8
}
@property(readonly, retain) NSInvocation *invocation;	// G=0x35d94d; converted property
@property(assign) BOOL useInvocationReturnValue;	// G=0x35da51; S=0x35da41; converted property
+ (id)handlerWithInvocation:(id)invocation;	// 0x35d95d
+ (id)handlerWithTarget:(id)target selector:(SEL)selector;	// 0x35d9a9
- (id)initWithInvocation:(id)invocation;	// 0x35d891
- (void)dealloc;	// 0x35d901
- (BOOL)handleSelectionForControl:(id)control;	// 0x35da61
// converted property getter: - (id)invocation;	// 0x35d94d
// converted property setter: - (void)setUseInvocationReturnValue:(BOOL)value;	// 0x35da41
// converted property getter: - (BOOL)useInvocationReturnValue;	// 0x35da51
@end


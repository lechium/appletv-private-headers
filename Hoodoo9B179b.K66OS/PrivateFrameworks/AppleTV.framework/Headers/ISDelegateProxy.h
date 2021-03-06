/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSLock;

__attribute__((visibility("hidden")))
@interface ISDelegateProxy : NSObject {
@private
	id _delegate;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	BOOL _shouldMessageMainThread;	// 12 = 0xc
}
- (id)init;	// 0x3041657d
- (void)dealloc;	// 0x304165e1
- (void)forwardInvocation:(id)invocation;	// 0x30416829
- (id)methodSignatureForSelector:(SEL)selector;	// 0x304168c5
- (BOOL)respondsToSelector:(SEL)selector;	// 0x30416959
- (void)sendInvocationToDelegate:(id)delegate;	// 0x30416681
- (void)setDelegate:(id)delegate;	// 0x30416635
- (void)setShouldMessageMainThread:(BOOL)messageMainThread;	// 0x304167dd
@end


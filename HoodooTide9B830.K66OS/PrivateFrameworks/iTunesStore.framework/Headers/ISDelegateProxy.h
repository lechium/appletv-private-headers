/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSLock;

@interface ISDelegateProxy : NSObject {
	id _delegate;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	BOOL _shouldMessageMainThread;	// 12 = 0xc
}
- (id)init;	// 0x35550279
- (void)dealloc;	// 0x355502dd
- (void)forwardInvocation:(id)invocation;	// 0x35550525
- (id)methodSignatureForSelector:(SEL)selector;	// 0x355505c1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x35550655
- (void)sendInvocationToDelegate:(id)delegate;	// 0x3555037d
- (void)setDelegate:(id)delegate;	// 0x35550331
- (void)setShouldMessageMainThread:(BOOL)messageMainThread;	// 0x355504d9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
 */

#import "AOSKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSConditionLock;

@interface AOSTransaction : NSObject <NSCoding> {
	unsigned char didSucceed;	// 4 = 0x4
	unsigned char didFinish;	// 5 = 0x5
	void *result;	// 8 = 0x8
	CFErrorRef error;	// 12 = 0xc
	/*function-pointer*/ void *callbackFunction;	// 16 = 0x10
	id callbackBlock;	// 20 = 0x14
	dispatch_queue_s *callbackQueue;	// 24 = 0x18
	void *context;	// 28 = 0x1c
	NSConditionLock *waitLock;	// 32 = 0x20
	/*function-pointer*/ void *contextRetain;	// 36 = 0x24
	/*function-pointer*/ void *contextRelease;	// 40 = 0x28
}
- (id)init;	// 0x34d1c721
- (id)initWithCoder:(id)coder;	// 0x34d1cb85
- (void)dealloc;	// 0x34d1c821
- (void)encodeWithCoder:(id)coder;	// 0x34d1cc81
- (id)error;	// 0x34d1cb75
- (void)finalize;	// 0x34d1c9f1
- (BOOL)isSuccessful;	// 0x34d1cb55
- (id)result;	// 0x34d1cb65
@end


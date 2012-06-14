/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPStorePurchaseRequestSerialQueue : NSObject {
	NSMutableArray *_requestsToRun;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_requestsQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_serviceQueue;	// 12 = 0xc
}
+ (id)mainQueue;	// 0x348e0819
- (id)init;	// 0x348e0885
- (void)dealloc;	// 0x348e0929
- (void)dequeueRequests:(id)requests;	// 0x348e0ce9
- (void)enqueueRequests:(id)requests runBlock:(id)block;	// 0x348e0e7d
- (void)prioritizeRequests:(id)requests beforeRequest:(id)request;	// 0x348e128d
- (void)serviceOne;	// 0x348e0999
@end


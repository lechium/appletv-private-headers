/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSMutableArray;

@interface MPCloudPurchaseRequestSerialQueue : NSObject {
	NSMutableArray *_requestsToRun;	// 4 = 0x4
	dispatch_queue_s *_requestsQueue;	// 8 = 0x8
	dispatch_queue_s *_serviceQueue;	// 12 = 0xc
}
+ (id)mainQueue;	// 0x309fc1a1
- (id)init;	// 0x309fc20d
- (void)dealloc;	// 0x309fc2b1
- (void)dequeueRequests:(id)requests;	// 0x309fc66d
- (void)enqueueRequests:(id)requests runBlock:(id)block;	// 0x309fc805
- (void)prioritizeRequests:(id)requests beforeRequest:(id)request;	// 0x309fcbed
- (void)serviceOne;	// 0x309fc321
@end


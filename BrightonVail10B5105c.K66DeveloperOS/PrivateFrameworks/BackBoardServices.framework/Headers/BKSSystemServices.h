/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "BackBoardServices-Structs.h"

@protocol OS_dispatch_queue;

@interface BKSSystemServices : NSObject {
	XPCProxy *_server;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}
- (id)init;	// 0x315d5c31
- (void)dealloc;	// 0x315d5d45
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x315d5ea9
- (void)terminateApplication:(id)application forReason:(int)reason andReport:(BOOL)report withDescription:(id)description;	// 0x315d5db5
- (void)terminateApplicationGroup:(int)group forReason:(int)reason andReport:(BOOL)report withDescription:(id)description;	// 0x315d5e6d
@end


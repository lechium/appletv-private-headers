/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface JAVNotificationCenter : NSObject {
	int _fd;	// 4 = 0x4
	int _listeningPort;	// 8 = 0x8
	NSMutableArray *_listenerArray;	// 12 = 0xc
}
+ (id)sharedInstance;	// 0x3543eed5
- (id)init;	// 0x3543efa5
- (void)acceptThread;	// 0x3543f18d
- (void)addObserverForNotificationsFromPort:(int)port;	// 0x3543f74d
- (void)dealloc;	// 0x3543f021
- (int)openConnectionToPort:(int)port;	// 0x3543f6c1
- (void)postNotification:(id)notification;	// 0x3543f431
- (void)postNotificationName:(id)name object:(id)object;	// 0x3543f58d
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x3543f5c9
- (void)processSocket:(int)socket;	// 0x3543f255
- (void)sendNotification:(id)notification toPort:(int)port;	// 0x3543f611
- (void)setPort:(int)port;	// 0x3543f001
- (void)startAcceptThread;	// 0x3543f151
- (void)startListeningThread;	// 0x3543f06d
@end

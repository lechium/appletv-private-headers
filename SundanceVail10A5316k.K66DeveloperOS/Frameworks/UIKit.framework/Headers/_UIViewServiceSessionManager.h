/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, XPCListener;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSessionManager : NSObject {
@private
	int _lock;	// 4 = 0x4
	NSMutableArray *_sessions;	// 8 = 0x8
	XPCListener *_listener;	// 12 = 0xc
	NSMutableArray *_incomingConnections;	// 16 = 0x10
	int _connectionNotificationToken;	// 20 = 0x14
}
+ (BOOL)hasActiveSessions;	// 0x3045eedd
+ (void)startViewServiceSessionManager;	// 0x3045ee41
- (id)init;	// 0x3045ede9
- (id)_init;	// 0x3045ef89
- (void)_registerSessionForDefaultDeputies:(id)defaultDeputies;	// 0x3045f755
- (void)_startListener;	// 0x3045f10d
- (void)dealloc;	// 0x3045ef01
- (BOOL)hasActiveSessions;	// 0x3045fbc1
@end

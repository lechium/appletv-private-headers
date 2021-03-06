/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSMutableArray, NSLock;

@interface EANotificationCenter : NSObject {
	/*function-pointer*/ void *_callback;	// 4 = 0x4
	void *_context;	// 8 = 0x8
	CFRunLoopRef _runLoopForNotifications;	// 12 = 0xc
	CFRunLoopSourceRef _runLoopSource;	// 16 = 0x10
	NSMutableArray *_notifications;	// 20 = 0x14
	NSLock *_notificationsLock;	// 24 = 0x18
}
- (id)init;	// 0x32e65ad5
- (void)_notificationHandler:(id)handler;	// 0x32e65ea5
- (void)dealloc;	// 0x32e65c99
- (void)notificationCallback;	// 0x32e66149
- (void)setCallback:(/*function-pointer*/ void *)callback andContext:(void *)context andRunLoop:(CFRunLoopRef)loop;	// 0x32e65bfd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRDarwinNotificationTranslator : BRSingleton {
	NSMutableDictionary *_registrations;	// 4 = 0x4
}
+ (BOOL)deregisterDarwinNotification:(const char *)notification;	// 0x39e86d
+ (int)notificationTokenForDarwinNotification:(const char *)darwinNotification;	// 0x39e8a5
+ (BOOL)registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x39e831
+ (void)setSingleton:(id)singleton;	// 0x39e699
+ (id)singleton;	// 0x39e689
- (id)init;	// 0x39e6a9
- (BOOL)_deregisterDarwinNotification:(const char *)notification;	// 0x39ebf9
- (BOOL)_registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x39e911
- (id)_registrationForDarwinNotification:(const char *)darwinNotification;	// 0x39ed09
- (id)_registrationForToken:(int)token;	// 0x39ed51
- (void)dealloc;	// 0x39e70d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import "AXLocalNotificationHandler.h"


@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler {
	SEL *_possibleHandlers;	// 28 = 0x1c
	unsigned long _possibleHandlersCount;	// 32 = 0x20
}
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher possibleHandlers:(SEL)handlers;	// 0x321934d5
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher startObserving:(BOOL)observing;	// 0x3219341d
- (id)initWithNotificationName:(id)notificationName target:(id)target handler:(SEL)handler;	// 0x321933b9
- (id)_forwardDistributedNotificationNameForHandler:(SEL)handler;	// 0x32193771
- (BOOL)_handleForwardDistributedNotificationWithName:(id)name object:(const void *)object userInfo:(id)info;	// 0x321937c1
- (id)_notificationTypeDescription;	// 0x32193a35
- (id)_prefixForForwardDistributedNotificationName;	// 0x321936d5
- (void)_startObserving;	// 0x32193845
- (void)_stopObserving;	// 0x32193971
- (void)dealloc;	// 0x321935fd
- (void)processHandler:(SEL)handler;	// 0x32193655
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSLocalNotificationClient : NSObject {
}
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace;	// 0x31ec71cd
+ (void)cancelAllLocalNotifications;	// 0x31ec7075
+ (void)cancelLocalNotification:(id)notification;	// 0x31ec70b5
+ (id)getPendingNotification;	// 0x31ec7135
+ (void)scheduleLocalNotification:(id)notification;	// 0x31ec70f5
+ (id)scheduledLocalNotifications;	// 0x31ec723d
+ (void)setScheduledLocalNotifications:(id)notifications;	// 0x31ec7055
@end


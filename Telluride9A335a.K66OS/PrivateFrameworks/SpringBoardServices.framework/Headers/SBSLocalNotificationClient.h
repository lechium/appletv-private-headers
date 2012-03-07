/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSLocalNotificationClient : NSObject {
}
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace optionalBundleIdentifier:(id)identifier;	// 0x34049225
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace optionalBundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x34049585
+ (void)cancelAllLocalNotifications;	// 0x340492dd
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(id)bundleIdentifier;	// 0x34049491
+ (void)cancelLocalNotification:(id)notification;	// 0x34049295
+ (void)cancelLocalNotification:(id)notification bundleIdentifier:(id)identifier;	// 0x340493fd
+ (void)cancelLocalNotification:(id)notification bundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x34049445
+ (id)getPendingNotification;	// 0x340494fd
+ (void)scheduleLocalNotification:(id)notification;	// 0x34049251
+ (void)scheduleLocalNotification:(id)notification bundleIdentifier:(id)identifier;	// 0x34049369
+ (void)scheduleLocalNotification:(id)notification bundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x340493b1
+ (id)scheduledLocalNotifications;	// 0x34049355
+ (id)scheduledLocalNotificationsForBundleIdentifier:(id)bundleIdentifier;	// 0x34049665
+ (void)setScheduledLocalNotifications:(id)notifications;	// 0x34049331
+ (void)setScheduledLocalNotifications:(id)notifications bundleIdentifier:(id)identifier;	// 0x340494d9
@end

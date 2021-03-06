/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIRemoteApplication : NSObject {
	NSString *_machServiceName;	// 4 = 0x4
	unsigned _port;	// 8 = 0x8
}
- (id)initWithBundleIdentifier:(id)bundleIdentifier;	// 0x32edc495
- (id)initWithMachServiceName:(id)machServiceName;	// 0x32edc4d1
- (void)backgroundContinuationEnabledDidChange:(BOOL)backgroundContinuationEnabled;	// 0x32edcaf1
- (void)dealloc;	// 0x32edc525
- (void)hideTopMostMiniAlert;	// 0x32edc631
- (void)localNotificationDidSnooze:(id)localNotification;	// 0x32edca45
- (void)localNotificationMessageDelivered:(id)delivered;	// 0x32edc999
- (void)remoteNotificationMessageDelivered;	// 0x32edc945
- (void)remoteNotificationRegistrationFailedWithErrorDomain:(id)errorDomain code:(int)code localizedDescription:(id)description;	// 0x32edc8b9
- (void)remoteNotificationRegistrationSucceededWithDeviceToken:(id)deviceToken;	// 0x32edc82d
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)sheetWithRemoteViewIdentifier;	// 0x32edc795
- (void)showTopMostMiniAlertWithSynchronizationPort:(unsigned)synchronizationPort;	// 0x32edc685
- (void)simpleRemoteActionDidOccur:(int)simpleRemoteAction;	// 0x32edc73d
- (void)statusBarWillChangeOrientation:(int)statusBar duration:(float)duration;	// 0x32edc6dd
- (void)updatePort;	// 0x32edc599
- (void)wakeTimerFired;	// 0x32edcb49
@end


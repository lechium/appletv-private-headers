/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSRemoteNotificationClient : NSObject {
}
+ (unsigned)_remoteNotificationServerPort;	// 0x310820dd
+ (int)enabledRemoteNotificationTypes;	// 0x310820e1
+ (id)getPendingNotificationUserInfo;	// 0x310820fd
+ (void)getSupportedTypes:(id *)types enabledTypes:(id *)types2;	// 0x310821d9
+ (BOOL)hasRegisteredBundleIdentifiers;	// 0x310821b9
+ (BOOL)isSystemwideEnabled;	// 0x31082185
+ (void)registerForRemoteNotificationTypes:(int)remoteNotificationTypes;	// 0x310820c9
+ (void)setEnabledNotificationTypes:(int)types forBundleIdentifier:(id)bundleIdentifier;	// 0x31082319
+ (void)setSystemwideEnabled:(BOOL)enabled;	// 0x310821a5
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSRemoteNotificationClient : NSObject {
}
+ (unsigned)_remoteNotificationServerPort;	// 0x316ca081
+ (int)enabledRemoteNotificationTypes;	// 0x316ca085
+ (id)getPendingNotificationUserInfo;	// 0x316ca0a1
+ (void)getSupportedTypes:(id *)types enabledTypes:(id *)types2;	// 0x316ca17d
+ (BOOL)hasRegisteredBundleIdentifiers;	// 0x316ca15d
+ (BOOL)isSystemwideEnabled;	// 0x316ca129
+ (void)registerForRemoteNotificationTypes:(int)remoteNotificationTypes;	// 0x316ca06d
+ (void)setEnabledNotificationTypes:(int)types forBundleIdentifier:(id)bundleIdentifier;	// 0x316ca2bd
+ (void)setSystemwideEnabled:(BOOL)enabled;	// 0x316ca149
@end


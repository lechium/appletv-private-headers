/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library

@class NSSet;

@interface ACDAccountNotifier : NSObject {
	NSSet *_notificationPlugins;	// 4 = 0x4
}
@property(readonly, assign) NSSet *notificationPlugins;	// G=0x324a28cd; 
+ (id)sharedAccountNotifier;	// 0x324a2359
- (void).cxx_destruct;	// 0x324a29a9
- (void)_faultInNotificationPlugins;	// 0x324a23d1
// declared property getter: - (id)notificationPlugins;	// 0x324a28cd
- (void)postDidChangeNotificationForType:(int)post inStore:(id)store newAccount:(id)account oldAccount:(id)account4;	// 0x324a27a5
- (BOOL)postWillChangeNotificationForType:(int)post inStore:(id)store newAccount:(id)account oldAccount:(id)account4;	// 0x324a266d
@end


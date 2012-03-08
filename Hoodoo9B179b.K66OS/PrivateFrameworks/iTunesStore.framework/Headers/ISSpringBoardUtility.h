/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableSet;

@interface ISSpringBoardUtility : NSObject {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSDictionary *_enabledRemoteNotificationTypes;	// 8 = 0x8
	NSMutableSet *_processAssertions;	// 12 = 0xc
}
@property(readonly, assign) BOOL hasProcessAssertions;	// G=0x36942119; 
+ (id)sharedInstance;	// 0x36941c3d
- (id)init;	// 0x36941b75
- (void)addDownloadingIconWithIdentifier:(id)identifier bundleIdentifier:(id)identifier2 softwareType:(id)type;	// 0x36941ced
- (void)cancelDownloadingIconForIdentifier:(id)identifier;	// 0x36941d71
- (void)cancelDownloadingIconForPurchase:(id)purchase;	// 0x36941db1
- (void)dealloc;	// 0x36941bc5
- (int)enabledRemoteNotificationTypesForBundleIdentifier:(id)bundleIdentifier;	// 0x36941e4d
// declared property getter: - (BOOL)hasProcessAssertions;	// 0x36942119
- (void)releaseProcessAssertion:(SBSProcessAssertionRef)assertion;	// 0x369424e1
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)identifier;	// 0x3694220d
- (void)resetEnabledRemoteNotificationTypes;	// 0x3694239d
- (void)setBadgeValue:(id)value forIdentifier:(id)identifier;	// 0x36942439
- (void)suspendFrontApplication;	// 0x369424dd
- (SBSProcessAssertionRef)takeProcessAssertionWithIdentifier:(id)identifier displayIdentifier:(id)identifier2 launchOptions:(id)options;	// 0x36942571
@end


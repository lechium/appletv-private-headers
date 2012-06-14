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
@property(readonly, assign) BOOL hasProcessAssertions;	// G=0x341c07ad; 
+ (id)sharedInstance;	// 0x341c02d1
- (id)init;	// 0x341c0209
- (void)addDownloadingIconWithIdentifier:(id)identifier bundleIdentifier:(id)identifier2 softwareType:(id)type;	// 0x341c0381
- (void)cancelDownloadingIconForIdentifier:(id)identifier;	// 0x341c0405
- (void)cancelDownloadingIconForPurchase:(id)purchase;	// 0x341c0445
- (void)dealloc;	// 0x341c0259
- (int)enabledRemoteNotificationTypesForBundleIdentifier:(id)bundleIdentifier;	// 0x341c04e1
// declared property getter: - (BOOL)hasProcessAssertions;	// 0x341c07ad
- (void)releaseProcessAssertion:(SBSProcessAssertionRef)assertion;	// 0x341c0b75
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)identifier;	// 0x341c08a1
- (void)resetEnabledRemoteNotificationTypes;	// 0x341c0a31
- (void)setBadgeValue:(id)value forIdentifier:(id)identifier;	// 0x341c0acd
- (void)suspendFrontApplication;	// 0x341c0b71
- (SBSProcessAssertionRef)takeProcessAssertionWithIdentifier:(id)identifier displayIdentifier:(id)identifier2 launchOptions:(id)options;	// 0x341c0c05
@end

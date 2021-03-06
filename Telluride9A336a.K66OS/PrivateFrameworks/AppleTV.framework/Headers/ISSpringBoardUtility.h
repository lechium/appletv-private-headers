/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSDictionary;

__attribute__((visibility("hidden")))
@interface ISSpringBoardUtility : NSObject {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSDictionary *_enabledRemoteNotificationTypes;	// 8 = 0x8
	NSMutableSet *_processAssertions;	// 12 = 0xc
}
@property(readonly, assign) BOOL hasProcessAssertions;	// G=0x33bc8709; 
+ (id)sharedInstance;	// 0x33bc8645
- (id)init;	// 0x33bc857d
- (void)addDownloadingIconWithIdentifier:(id)identifier bundleIdentifier:(id)identifier2 softwareType:(id)type;	// 0x33bc86f5
- (void)cancelDownloadingIconForIdentifier:(id)identifier;	// 0x33bc86f9
- (void)cancelDownloadingIconForPurchase:(id)purchase;	// 0x33bc86fd
- (void)dealloc;	// 0x33bc85cd
- (int)enabledRemoteNotificationTypesForBundleIdentifier:(id)bundleIdentifier;	// 0x33bc8701
// declared property getter: - (BOOL)hasProcessAssertions;	// 0x33bc8709
- (void)releaseProcessAssertion:(SBSProcessAssertionRef)assertion;	// 0x33bc871d
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)identifier;	// 0x33bc870d
- (void)resetEnabledRemoteNotificationTypes;	// 0x33bc8711
- (void)setBadgeValue:(id)value forIdentifier:(id)identifier;	// 0x33bc8715
- (void)suspendFrontApplication;	// 0x33bc8719
- (SBSProcessAssertionRef)takeProcessAssertionWithIdentifier:(id)identifier displayIdentifier:(id)identifier2 launchOptions:(id)options;	// 0x33bc8721
@end


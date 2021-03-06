/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSProgressPublisher.h"

@class NSMutableSet, NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher> {
	id<NSProgressPublisher> _forwarder;	// 4 = 0x4
	id _publisherID;	// 8 = 0x8
	NSFileAccessNode *_itemLocation;	// 12 = 0xc
	NSMutableSet *_bundleIDsOfUnacknowledgedApps;	// 16 = 0x10
}
@property(readonly, retain) id publisherID;	// G=0x34e9265d; converted property
- (id)initWithForwarder:(id)forwarder publisherID:(id)anId acknowledgementAppBundleIDs:(id)ids;	// 0x34e92549
- (oneway void)appWithBundleID:(id)bundleID didAcknowledgeWithSuccess:(BOOL)success;	// 0x34e92b4d
- (void)broadcastValue:(id)value forKey:(id)key inUserInfo:(BOOL)userInfo;	// 0x34e929c9
- (oneway void)cancel;	// 0x34e92b0d
- (void)dealloc;	// 0x34e925e5
- (id)description;	// 0x34e92c45
- (id)descriptionWithIndenting:(id)indenting;	// 0x34e92b9d
- (oneway void)pause;	// 0x34e92b2d
// converted property getter: - (id)publisherID;	// 0x34e9265d
- (void)setItemLocation:(id)location;	// 0x34e92695
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)initialAcceptor;	// 0x34e92acd
- (oneway void)stopProvidingValues;	// 0x34e92aed
@end


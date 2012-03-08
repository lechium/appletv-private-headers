/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVReadWriteFeedResource.h"

@class NSMutableDictionary, NSLock;

__attribute__((visibility("hidden")))
@interface ATVDictionaryFeedResource : NSObject <ATVReadWriteFeedResource> {
@private
	NSMutableDictionary *_prefs;	// 4 = 0x4
	NSLock *_prefsLock;	// 8 = 0x8
}
- (id)init;	// 0x30232815
- (void)clearFeedResources;	// 0x30232a09
- (void)dealloc;	// 0x30232891
- (id)feedResourceNamed:(id)named;	// 0x302328f1
- (void)setFeedResource:(id)resource named:(id)named;	// 0x30232981
@end


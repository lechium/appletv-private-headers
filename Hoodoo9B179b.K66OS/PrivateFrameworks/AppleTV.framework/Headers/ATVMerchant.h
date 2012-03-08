/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMerchant.h"
#import "ATVReadWriteFeedResource.h"

@class ATVDictionaryFeedResource, ATVPreferenceFeedResource;

@interface ATVMerchant : BRMerchant <ATVReadWriteFeedResource> {
@private
	ATVPreferenceFeedResource *_preferenceResource;	// 8 = 0x8
	ATVDictionaryFeedResource *_sessionResource;	// 12 = 0xc
}
@property(readonly, assign) ATVDictionaryFeedResource *sessionResource;	// G=0x301d91f1; @synthesize=_sessionResource
- (id)initWithIdentifier:(id)identifier;	// 0x301d8c2d
- (BOOL)assignToObject:(id)object;	// 0x301d8df1
- (void)clearFeedResources;	// 0x301d91d1
- (void)dealloc;	// 0x301d8d91
- (id)evaluatePlist:(id)plist;	// 0x301d8f81
- (id)feedResourceNamed:(id)named;	// 0x301d8fa5
- (id)localizedStringForKey:(id)key;	// 0x301d8f45
- (id)rootController;	// 0x301d8fa1
// declared property getter: - (id)sessionResource;	// 0x301d91f1
- (void)setFeedResource:(id)resource named:(id)named;	// 0x301d91b1
@end


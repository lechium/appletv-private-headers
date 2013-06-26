/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import </libobjc.A.h>

@class NSArray, MPMediaQuery, MPStoreOfferMediaItemCollection;

@interface MPStoreCollectionCompletionOffering : NSObject {
	MPMediaQuery *_localItemsQuery;	// 4 = 0x4
	int _preferredStoreOfferVariant;	// 8 = 0x8
	MPStoreOfferMediaItemCollection *_offeredCollection;	// 12 = 0xc
	MPStoreOfferMediaItemCollection *_mergedCollection;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) MPStoreOfferMediaItemCollection *itemsWithCompletionsCollection;	// G=0x2e340121; 
@property(readonly, assign, nonatomic) NSArray *localItems;	// G=0x2e340135; 
@property(readonly, assign, nonatomic) MPStoreOfferMediaItemCollection *mergedCollection;	// G=0x2e340175; @synthesize=_mergedCollection
@property(readonly, assign, nonatomic) MPStoreOfferMediaItemCollection *offeredCollection;	// G=0x2e340165; @synthesize=_offeredCollection
@property(readonly, assign, nonatomic) int preferredStoreOfferVariant;	// G=0x2e340155; @synthesize=_preferredStoreOfferVariant
- (id)initWithOfferedCollection:(id)offeredCollection localItemsQuery:(id)query preferredStoreOfferVariant:(int)variant;	// 0x2e340041
- (void).cxx_destruct;	// 0x2e340185
// declared property getter: - (id)itemsWithCompletionsCollection;	// 0x2e340121
// declared property getter: - (id)localItems;	// 0x2e340135
// declared property getter: - (id)mergedCollection;	// 0x2e340175
// declared property getter: - (id)offeredCollection;	// 0x2e340165
// declared property getter: - (int)preferredStoreOfferVariant;	// 0x2e340155
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMetadataPopulator.h"


__attribute__((visibility("hidden")))
@interface BRBaseMetadataPopulator : XXUnknownSuperclass <BRMetadataPopulator> {
}
- (void)_populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x35848d
- (id)axMetadataFromAsset:(id)asset;	// 0x357e99
- (id)copyrightForAsset:(id)asset;	// 0x3581c5
- (void)likesRatingForAsset:(id)asset numberOfLikes:(int *)likes numberOfDislikes:(int *)dislikes;	// 0x358061
- (void)populateLayer:(id)layer fromAsset:(id)asset;	// 0x358219
- (void)populateLongDescriptionLayer:(id)layer fromAsset:(id)asset;	// 0x35836d
- (void)populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x3581c9
- (id)ratingForAsset:(id)asset;	// 0x358019
- (id)summaryForAsset:(id)asset;	// 0x35812d
- (id)titleForAsset:(id)asset;	// 0x357fd1
@end


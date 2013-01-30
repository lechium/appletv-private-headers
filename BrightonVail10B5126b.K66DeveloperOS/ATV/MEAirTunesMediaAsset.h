/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaAsset.h"

@class BRImage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MEAirTunesMediaAsset : BRBaseMediaAsset {
	NSMutableDictionary *_info;	// 8 = 0x8
	BRImage *_coverArt;	// 12 = 0xc
}
@property(readonly, retain) BRImage *coverArt;	// G=0x591bd; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x58979
- (void).cxx_destruct;	// 0x5936d
- (id)artist;	// 0x58df9
- (id)assetID;	// 0x58cc1
- (void)clearMetaData;	// 0x58c81
- (id)composer;	// 0x58ea5
// converted property getter: - (id)coverArt;	// 0x591bd
- (id)coverArtID;	// 0x5922d
- (BOOL)coverArtIsPNG;	// 0x5923d
- (long)duration;	// 0x5908d
- (BOOL)hasCoverArt;	// 0x591a5
- (id)imageProxy;	// 0x58a09
- (id)mediaSummary;	// 0x58f51
- (id)mediaType;	// 0x592a5
- (id)primaryCollectionTitle;	// 0x592c1
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x58a29
- (id)title;	// 0x58d4d
@end

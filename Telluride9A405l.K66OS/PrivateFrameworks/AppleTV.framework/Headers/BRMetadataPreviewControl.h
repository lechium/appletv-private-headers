/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRReflectionControl, BRMetadataControl, NSTimer, BRCoverArtImageLayer;
@protocol BRMetadataProvider;

@interface BRMetadataPreviewControl : BRControl {
@private
	id _asset;	// 48 = 0x30
	id<BRMetadataProvider> _metadataProvider;	// 52 = 0x34
	BRControl *_coverArtWrapper;	// 56 = 0x38
	BRCoverArtImageLayer *_coverArtLayer;	// 60 = 0x3c
	BRReflectionControl *_reflectionLayer;	// 64 = 0x40
	BRMetadataControl *_metadataLayer;	// 68 = 0x44
	NSTimer *_timer;	// 72 = 0x48
	BOOL _showsMetadataImmediately;	// 76 = 0x4c
	BOOL _showingMetadata;	// 77 = 0x4d
}
@property(retain) id asset;	// G=0x35e521f5; S=0x35e52035; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x35e52265; S=0x35e52245; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x35e522a9; S=0x35e52289; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x35e52235; S=0x35e52205; converted property
- (id)init;	// 0x35e51435
- (void)_coverArtChanged:(id)changed;	// 0x35e527b5
- (void)_downloadStateChanged:(id)changed;	// 0x35e52831
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x35e52871
- (CGRect)_frameForArt:(id)art withMetadataFrame:(CGRect)metadataFrame inBounds:(CGSize)bounds;	// 0x35e52991
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x35e52ca1
- (void)_metadataTimerFired:(id)fired;	// 0x35e52811
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x35e52d35
- (void)_showMetadataAfterDelay;	// 0x35e52391
- (void)_updateMetadataLayer;	// 0x35e52431
- (id)accessibilityLabel;	// 0x35e52371
// converted property getter: - (id)asset;	// 0x35e521f5
- (void)controlWasActivated;	// 0x35e522dd
- (void)controlWasDeactivated;	// 0x35e5231d
- (void)dealloc;	// 0x35e51681
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x35e52265
- (void)layoutSubcontrols;	// 0x35e51761
- (id)metadataControl;	// 0x35e522cd
// converted property setter: - (void)setAsset:(id)asset;	// 0x35e52035
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x35e52245
- (void)setImageProxy:(id)proxy;	// 0x35e51f69
- (void)setMetadataProvider:(id)provider;	// 0x35e51fc9
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x35e52289
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x35e52205
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x35e522a9
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x35e52235
@end


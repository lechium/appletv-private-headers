/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRCoverArtImageLayer, BRReflectionControl, NSTimer, BRMetadataLongDescriptionControl;
@protocol BRMetadataProvider;

@interface BRMetadataLongDescriptionPreviewControl : BRControl {
@private
	id _asset;	// 44 = 0x2c
	id<BRMetadataProvider> _metadataProvider;	// 48 = 0x30
	BRControl *_coverArtWrapper;	// 52 = 0x34
	BRCoverArtImageLayer *_coverArtLayer;	// 56 = 0x38
	BRReflectionControl *_reflectionLayer;	// 60 = 0x3c
	BRMetadataLongDescriptionControl *_metadataLayer;	// 64 = 0x40
	NSTimer *_timer;	// 68 = 0x44
	BOOL _showsMetadataImmediately;	// 72 = 0x48
	BOOL _showingMetadata;	// 73 = 0x49
}
@property(retain) id asset;	// G=0x3299d01d; S=0x3299da2d; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x3299d331; S=0x3299d355; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x3299d2e9; S=0x3299d30d; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x3299d02d; S=0x3299d379; converted property
- (id)init;	// 0x3299d521
- (void)_coverArtChanged:(id)changed;	// 0x3299d135
- (void)_downloadStateChanged:(id)changed;	// 0x3299d0d9
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x3299dd41
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x3299d04d
- (void)_metadataTimerFired:(id)fired;	// 0x3299d111
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x3299d065
- (void)_showMetadataAfterDelay;	// 0x3299d189
- (void)_updateMetadataLayer;	// 0x3299dbf9
- (id)accessibilityLabel;	// 0x3299d211
- (id)accessibilityScreenContent;	// 0x3299d0b9
// converted property getter: - (id)asset;	// 0x3299d01d
- (void)controlWasActivated;	// 0x3299d2ad
- (void)controlWasDeactivated;	// 0x3299d25d
- (void)dealloc;	// 0x3299d455
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x3299d331
- (void)layoutSubcontrols;	// 0x3299d7b5
- (id)metadataControl;	// 0x3299d03d
// converted property setter: - (void)setAsset:(id)asset;	// 0x3299da2d
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x3299d355
- (void)setImageProxy:(id)proxy;	// 0x3299d401
- (void)setMetadataProvider:(id)provider;	// 0x3299d3a1
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x3299d30d
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x3299d379
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x3299d2e9
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x3299d02d
@end


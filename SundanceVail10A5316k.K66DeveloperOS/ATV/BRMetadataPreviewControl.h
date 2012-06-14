/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRReflectionControl, BRMetadataControl, BRCoverArtImageLayer, NSTimer;
@protocol BRMetadataProvider;

__attribute__((visibility("hidden")))
@interface BRMetadataPreviewControl : BRControl {
	id _asset;	// 80 = 0x50
	id<BRMetadataProvider> _metadataProvider;	// 84 = 0x54
	BRControl *_coverArtWrapper;	// 88 = 0x58
	BRCoverArtImageLayer *_coverArtLayer;	// 92 = 0x5c
	BRReflectionControl *_reflectionLayer;	// 96 = 0x60
	BRMetadataControl *_metadataLayer;	// 100 = 0x64
	NSTimer *_timer;	// 104 = 0x68
	BOOL _showsMetadataImmediately;	// 108 = 0x6c
	BOOL _showingMetadata;	// 109 = 0x6d
}
@property(retain) id asset;	// G=0x2fceb5; S=0x2fccf5; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x2fcf21; S=0x2fcf01; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x2fcf65; S=0x2fcf45; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x2fcef1; S=0x2fcec5; converted property
- (id)init;	// 0x2fc149
- (void)_coverArtChanged:(id)changed;	// 0x2fd45d
- (void)_downloadStateChanged:(id)changed;	// 0x2fd4d9
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x2fd51d
- (CGRect)_frameForArt:(id)art withMetadataFrame:(CGRect)metadataFrame inBounds:(CGSize)bounds;	// 0x2fd641
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x2fd95d
- (void)_metadataTimerFired:(id)fired;	// 0x2fd4b9
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x2fda0d
- (void)_showMetadataAfterDelay;	// 0x2fd04d
- (void)_updateMetadataLayer;	// 0x2fd0e9
- (id)accessibilityLabel;	// 0x2fd02d
// converted property getter: - (id)asset;	// 0x2fceb5
- (void)controlWasActivated;	// 0x2fcf99
- (void)controlWasDeactivated;	// 0x2fcfd9
- (void)dealloc;	// 0x2fc371
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x2fcf21
- (void)layoutSubcontrols;	// 0x2fc451
- (id)metadataControl;	// 0x2fcf89
// converted property setter: - (void)setAsset:(id)asset;	// 0x2fccf5
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x2fcf01
- (void)setImageProxy:(id)proxy;	// 0x2fcc29
- (void)setMetadataProvider:(id)provider;	// 0x2fcc89
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x2fcf45
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x2fcec5
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x2fcf65
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x2fcef1
@end

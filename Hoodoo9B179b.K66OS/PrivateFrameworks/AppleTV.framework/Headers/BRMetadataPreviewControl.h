/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRCoverArtImageLayer, BRReflectionControl, BRMetadataControl, NSTimer;
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
@property(retain) id asset;	// G=0x302ef9ed; S=0x302ef82d; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x302efa5d; S=0x302efa3d; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x302efaa1; S=0x302efa81; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x302efa2d; S=0x302ef9fd; converted property
- (id)init;	// 0x302eec2d
- (void)_coverArtChanged:(id)changed;	// 0x302effad
- (void)_downloadStateChanged:(id)changed;	// 0x302f0029
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x302f0069
- (CGRect)_frameForArt:(id)art withMetadataFrame:(CGRect)metadataFrame inBounds:(CGSize)bounds;	// 0x302f0189
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x302f0499
- (void)_metadataTimerFired:(id)fired;	// 0x302f0009
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x302f052d
- (void)_showMetadataAfterDelay;	// 0x302efb89
- (void)_updateMetadataLayer;	// 0x302efc29
- (id)accessibilityLabel;	// 0x302efb69
// converted property getter: - (id)asset;	// 0x302ef9ed
- (void)controlWasActivated;	// 0x302efad5
- (void)controlWasDeactivated;	// 0x302efb15
- (void)dealloc;	// 0x302eee79
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x302efa5d
- (void)layoutSubcontrols;	// 0x302eef59
- (id)metadataControl;	// 0x302efac5
// converted property setter: - (void)setAsset:(id)asset;	// 0x302ef82d
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x302efa3d
- (void)setImageProxy:(id)proxy;	// 0x302ef761
- (void)setMetadataProvider:(id)provider;	// 0x302ef7c1
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x302efa81
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x302ef9fd
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x302efaa1
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x302efa2d
@end


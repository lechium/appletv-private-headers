/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage, NSTimer;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRCoverArtImageLayer : BRControl {
	id<BRImageProxy> _imageProxy;	// 84 = 0x54
	BRImage *_image;	// 88 = 0x58
	BOOL _deletterboxImage;	// 92 = 0x5c
	BOOL _showsDefaultCoverArt;	// 93 = 0x5d
	BOOL _showsBorder;	// 94 = 0x5e
	NSTimer *_setCoverArtTimer;	// 96 = 0x60
}
@property(assign) BOOL deletterboxImage;	// G=0x34fa41; S=0x34fa15; converted property
@property(readonly, retain) BRImage *image;	// G=0x34f9b5; converted property
@property(assign) BOOL showsBorder;	// G=0x34fb11; S=0x34fa71; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x34fa61; S=0x34fa51; converted property
- (id)init;	// 0x34f85d
- (void)_coverArtChanged:(id)changed;	// 0x34fe39
- (void)_setCoverArtImage:(id)image;	// 0x34fca1
- (void)_setCoverArtImageWithDelay:(id)delay;	// 0x34fc45
- (void)_setImageAsContents:(id)contents;	// 0x34fdc1
- (void)_updateCoverArt;	// 0x34fb21
- (void)dealloc;	// 0x34f925
// converted property getter: - (BOOL)deletterboxImage;	// 0x34fa41
// converted property getter: - (id)image;	// 0x34f9b5
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x34fa15
- (void)setImageProxy:(id)proxy;	// 0x34f9c5
// converted property setter: - (void)setShowsBorder:(BOOL)border;	// 0x34fa71
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x34fa51
// converted property getter: - (BOOL)showsBorder;	// 0x34fb11
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x34fa61
@end


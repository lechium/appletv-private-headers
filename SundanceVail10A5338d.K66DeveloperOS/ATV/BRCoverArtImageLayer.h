/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRCoverArtImageLayer : BRControl {
	id<BRImageProxy> _imageProxy;	// 80 = 0x50
	BRImage *_image;	// 84 = 0x54
	BOOL _deletterboxImage;	// 88 = 0x58
	BOOL _showsDefaultCoverArt;	// 89 = 0x59
	BOOL _showsBorder;	// 90 = 0x5a
	NSTimer *_setCoverArtTimer;	// 92 = 0x5c
}
@property(assign) BOOL deletterboxImage;	// G=0x31e9c9; S=0x31e99d; converted property
@property(readonly, retain) BRImage *image;	// G=0x31e93d; converted property
@property(assign) BOOL showsBorder;	// G=0x31ea99; S=0x31e9f9; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x31e9e9; S=0x31e9d9; converted property
- (id)init;	// 0x31e7e5
- (void)_coverArtChanged:(id)changed;	// 0x31edc1
- (void)_setCoverArtImage:(id)image;	// 0x31ec29
- (void)_setCoverArtImageWithDelay:(id)delay;	// 0x31ebcd
- (void)_setImageAsContents:(id)contents;	// 0x31ed49
- (void)_updateCoverArt;	// 0x31eaa9
- (void)dealloc;	// 0x31e8ad
// converted property getter: - (BOOL)deletterboxImage;	// 0x31e9c9
// converted property getter: - (id)image;	// 0x31e93d
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x31e99d
- (void)setImageProxy:(id)proxy;	// 0x31e94d
// converted property setter: - (void)setShowsBorder:(BOOL)border;	// 0x31e9f9
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x31e9d9
// converted property getter: - (BOOL)showsBorder;	// 0x31ea99
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x31e9e9
@end

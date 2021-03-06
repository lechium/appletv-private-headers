/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, NSString;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRImageControl : BRControl {
	id<BRImageProxy> _imageProxy;	// 84 = 0x54
	BRImage *_image;	// 88 = 0x58
	BOOL _renderingImage;	// 92 = 0x5c
	BOOL _autoDownsample;	// 93 = 0x5d
	NSString *_artworkIdentifier;	// 96 = 0x60
	BOOL _sizeIgnoresPixelBounds;	// 100 = 0x64
}
@property(assign) BOOL automaticDownsample;	// G=0x2d8b91; S=0x2d8b0d; converted property
@property(retain) BRImage *image;	// G=0x2d8aa1; S=0x2d89b9; converted property
@property(assign) BOOL sizeIgnoresPixelBounds;	// G=0x2d8c5d; S=0x2d8c4d; converted property
- (void)_imageUpdated:(id)updated;	// 0x2d8f81
- (void)_loadImage;	// 0x2d9089
- (void)_unloadImage;	// 0x2d9025
- (id)accessibilityLabel;	// 0x2d8f25
- (id)accessibilityTraitsList;	// 0x2d8f45
- (float)aspectRatio;	// 0x2d8aed
// converted property getter: - (BOOL)automaticDownsample;	// 0x2d8b91
- (void)controlWasActivated;	// 0x2d8e41
- (void)controlWasDeactivated;	// 0x2d8e91
- (void)dealloc;	// 0x2d880d
- (void)drawRect:(CGRect)rect;	// 0x2d8c6d
// converted property getter: - (id)image;	// 0x2d8aa1
- (CGSize)pixelBounds;	// 0x2d8ab1
- (void)setArtworkIdentifier:(id)identifier;	// 0x2d8ba1
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x2d8b0d
// converted property setter: - (void)setImage:(id)image;	// 0x2d89b9
- (void)setImageAsContents:(id)contents;	// 0x2d8a19
- (void)setImageProxy:(id)proxy;	// 0x2d88b1
- (void)setImageProxyAsContents:(id)contents;	// 0x2d8935
// converted property setter: - (void)setSizeIgnoresPixelBounds:(BOOL)bounds;	// 0x2d8c4d
// converted property getter: - (BOOL)sizeIgnoresPixelBounds;	// 0x2d8c5d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2d8d41
- (void)windowMaxBoundsChanged;	// 0x2d8ee1
@end


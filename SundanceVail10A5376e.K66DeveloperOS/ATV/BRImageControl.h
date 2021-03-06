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
@property(assign) BOOL automaticDownsample;	// G=0x2c7c89; S=0x2c7c05; converted property
@property(retain) BRImage *image;	// G=0x2c7b99; S=0x2c7ab1; converted property
@property(assign) BOOL sizeIgnoresPixelBounds;	// G=0x2c7d55; S=0x2c7d45; converted property
- (void)_imageUpdated:(id)updated;	// 0x2c8079
- (void)_loadImage;	// 0x2c8181
- (void)_unloadImage;	// 0x2c811d
- (id)accessibilityLabel;	// 0x2c801d
- (id)accessibilityTraitsList;	// 0x2c803d
- (float)aspectRatio;	// 0x2c7be5
// converted property getter: - (BOOL)automaticDownsample;	// 0x2c7c89
- (void)controlWasActivated;	// 0x2c7f39
- (void)controlWasDeactivated;	// 0x2c7f89
- (void)dealloc;	// 0x2c7905
- (void)drawRect:(CGRect)rect;	// 0x2c7d65
// converted property getter: - (id)image;	// 0x2c7b99
- (CGSize)pixelBounds;	// 0x2c7ba9
- (void)setArtworkIdentifier:(id)identifier;	// 0x2c7c99
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x2c7c05
// converted property setter: - (void)setImage:(id)image;	// 0x2c7ab1
- (void)setImageAsContents:(id)contents;	// 0x2c7b11
- (void)setImageProxy:(id)proxy;	// 0x2c79a9
- (void)setImageProxyAsContents:(id)contents;	// 0x2c7a2d
// converted property setter: - (void)setSizeIgnoresPixelBounds:(BOOL)bounds;	// 0x2c7d45
// converted property getter: - (BOOL)sizeIgnoresPixelBounds;	// 0x2c7d55
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2c7e39
- (void)windowMaxBoundsChanged;	// 0x2c7fd9
@end


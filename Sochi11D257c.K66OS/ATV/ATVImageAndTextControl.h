/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class UIColor, BRImageControl, NSAttributedString, BRTextControl, ATVImage;

__attribute__((visibility("hidden")))
@interface ATVImageAndTextControl : BRControl {
	BOOL _imageOnLeft;	// 84 = 0x54
	ATVImage *_image;	// 88 = 0x58
	NSAttributedString *_text;	// 92 = 0x5c
	float _preferredImageHeight;	// 96 = 0x60
	float _gapBetweenImageAndText;	// 100 = 0x64
	BRImageControl *_imageControl;	// 104 = 0x68
	BRTextControl *_textControl;	// 108 = 0x6c
	UIColor *_imageTintColor;	// 112 = 0x70
}
@property(assign, nonatomic) float gapBetweenImageAndText;	// G=0xf2b2d; S=0xf2b3d; @synthesize=_gapBetweenImageAndText
@property(assign, nonatomic) ATVImage *image;	// G=0xf2aad; S=0xf2abd; @synthesize=_image
@property(retain) BRImageControl *imageControl;	// G=0xf2b4d; S=0xf2b61; @synthesize=_imageControl
@property(assign, nonatomic) BOOL imageOnLeft;	// G=0xf2aed; S=0xf2afd; @synthesize=_imageOnLeft
@property(retain, nonatomic) UIColor *imageTintColor;	// G=0xf2b95; S=0xf2ba5; @synthesize=_imageTintColor
@property(assign, nonatomic) float preferredImageHeight;	// G=0xf2b0d; S=0xf2b1d; @synthesize=_preferredImageHeight
@property(assign, nonatomic) NSAttributedString *text;	// G=0xf2acd; S=0xf2add; @synthesize=_text
@property(retain) BRTextControl *textControl;	// G=0xf2b71; S=0xf2b85; @synthesize=_textControl
- (id)init;	// 0xf2541
- (id)initWithImage:(id)image text:(id)text;	// 0xf2555
- (void)_imageDidChange;	// 0xf2bb5
- (void)_textDidChange;	// 0xf2d5d
- (void)dealloc;	// 0xf26c5
// declared property getter: - (float)gapBetweenImageAndText;	// 0xf2b2d
// declared property getter: - (id)image;	// 0xf2aad
// declared property getter: - (id)imageControl;	// 0xf2b4d
// declared property getter: - (BOOL)imageOnLeft;	// 0xf2aed
// declared property getter: - (id)imageTintColor;	// 0xf2b95
- (void)layoutSubcontrols;	// 0xf2939
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0xf27ad
// declared property getter: - (float)preferredImageHeight;	// 0xf2b0d
// declared property setter: - (void)setGapBetweenImageAndText:(float)text;	// 0xf2b3d
// declared property setter: - (void)setImage:(id)image;	// 0xf2abd
// declared property setter: - (void)setImageControl:(id)control;	// 0xf2b61
// declared property setter: - (void)setImageOnLeft:(BOOL)left;	// 0xf2afd
// declared property setter: - (void)setImageTintColor:(id)color;	// 0xf2ba5
// declared property setter: - (void)setPreferredImageHeight:(float)height;	// 0xf2b1d
// declared property setter: - (void)setText:(id)text;	// 0xf2add
// declared property setter: - (void)setTextControl:(id)control;	// 0xf2b85
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xf2869
// declared property getter: - (id)text;	// 0xf2acd
// declared property getter: - (id)textControl;	// 0xf2b71
@end


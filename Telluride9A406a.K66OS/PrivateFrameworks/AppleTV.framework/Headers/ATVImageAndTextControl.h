/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRImage, BRTextControl, NSAttributedString;

@interface ATVImageAndTextControl : BRControl {
@private
	BRImage *_image;	// 48 = 0x30
	NSAttributedString *_text;	// 52 = 0x34
	BOOL _imageOnLeft;	// 56 = 0x38
	float _preferredImageHeight;	// 60 = 0x3c
	float _gapBetweenImageAndText;	// 64 = 0x40
	BRImageControl *_imageControl;	// 68 = 0x44
	BRTextControl *_textControl;	// 72 = 0x48
}
@property(assign, nonatomic) float gapBetweenImageAndText;	// G=0x331e83e1; S=0x331e83f1; @synthesize=_gapBetweenImageAndText
@property(assign, nonatomic) BRImage *image;	// G=0x331e8361; S=0x331e8371; @synthesize=_image
@property(retain) BRImageControl *imageControl;	// G=0x331e8401; S=0x331e8415; @synthesize=_imageControl
@property(assign, nonatomic) BOOL imageOnLeft;	// G=0x331e83a1; S=0x331e83b1; @synthesize=_imageOnLeft
@property(assign, nonatomic) float preferredImageHeight;	// G=0x331e83c1; S=0x331e83d1; @synthesize=_preferredImageHeight
@property(assign, nonatomic) NSAttributedString *text;	// G=0x331e8381; S=0x331e8391; @synthesize=_text
@property(retain) BRTextControl *textControl;	// G=0x331e8439; S=0x331e844d; @synthesize=_textControl
- (id)initWithImage:(id)image text:(id)text;	// 0x331e7dfd
- (void)_imageDidChange;	// 0x331e8471
- (void)_textDidChange;	// 0x331e851d
- (void)dealloc;	// 0x331e7f79
// declared property getter: - (float)gapBetweenImageAndText;	// 0x331e83e1
// declared property getter: - (id)image;	// 0x331e8361
// declared property getter: - (id)imageControl;	// 0x331e8401
// declared property getter: - (BOOL)imageOnLeft;	// 0x331e83a1
- (void)layoutSubcontrols;	// 0x331e81d9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x331e8049
// declared property getter: - (float)preferredImageHeight;	// 0x331e83c1
// declared property setter: - (void)setGapBetweenImageAndText:(float)text;	// 0x331e83f1
// declared property setter: - (void)setImage:(id)image;	// 0x331e8371
// declared property setter: - (void)setImageControl:(id)control;	// 0x331e8415
// declared property setter: - (void)setImageOnLeft:(BOOL)left;	// 0x331e83b1
// declared property setter: - (void)setPreferredImageHeight:(float)height;	// 0x331e83d1
// declared property setter: - (void)setText:(id)text;	// 0x331e8391
// declared property setter: - (void)setTextControl:(id)control;	// 0x331e844d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x331e8101
// declared property getter: - (id)text;	// 0x331e8381
// declared property getter: - (id)textControl;	// 0x331e8439
@end


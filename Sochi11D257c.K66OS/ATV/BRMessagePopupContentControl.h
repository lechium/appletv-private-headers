/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVImage, BRTextControl, BRMessageButton, NSString, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRMessagePopupContentControl : BRControl {
	BRTextControl *_titleControl;	// 84 = 0x54
	BRTextControl *_textControl;	// 88 = 0x58
	BRImageControl *_imageControl;	// 92 = 0x5c
	BRMessageButton *_button;	// 96 = 0x60
	int _style;	// 100 = 0x64
}
@property(retain, nonatomic) ATVImage *image;	// G=0x5112bd; S=0x51129d; 
@property(assign, nonatomic) int style;	// G=0x511915; S=0x511049; @synthesize=_style
@property(copy, nonatomic) NSString *text;	// G=0x511249; S=0x5111d1; 
@property(copy, nonatomic) NSString *title;	// G=0x51117d; S=0x51111d; 
- (id)init;	// 0x510e7d
- (void).cxx_destruct;	// 0x511925
- (id)_computeFramesForSize:(CGSize)size;	// 0x5112dd
- (id)accessibilityControls;	// 0x51100d
- (id)accessibilityLabel;	// 0x510f99
// declared property getter: - (id)image;	// 0x5112bd
- (void)layoutSubcontrols;	// 0x5118a1
// declared property setter: - (void)setImage:(id)image;	// 0x51129d
// declared property setter: - (void)setStyle:(int)style;	// 0x511049
// declared property setter: - (void)setText:(id)text;	// 0x5111d1
// declared property setter: - (void)setTitle:(id)title;	// 0x51111d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x511845
// declared property getter: - (int)style;	// 0x511915
// declared property getter: - (id)text;	// 0x511249
// declared property getter: - (id)title;	// 0x51117d
@end


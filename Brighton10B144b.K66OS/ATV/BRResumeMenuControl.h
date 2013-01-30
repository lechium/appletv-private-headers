/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl, BRListControl;

__attribute__((visibility("hidden")))
@interface BRResumeMenuControl : BRControl {
	BRTextControl *_title;	// 84 = 0x54
	BRTextControl *_footnote;	// 88 = 0x58
	BRListControl *_resumeMenu;	// 92 = 0x5c
	BRImageControl *_blurControl;	// 96 = 0x60
	float _blurOversizeFactor;	// 100 = 0x64
}
@property(retain) BRTextControl *footnote;	// G=0x306119; S=0x306029; converted property
@property(retain) BRTextControl *title;	// G=0x305ff1; S=0x305ef1; converted property
- (id)init;	// 0x305ca1
- (CGColorRef)blurControlBackgroundColor;	// 0x306625
- (BOOL)brEventAction:(id)action;	// 0x30646d
- (void)dealloc;	// 0x305e65
// converted property getter: - (id)footnote;	// 0x306119
- (void)layoutSubcontrols;	// 0x306151
- (id)list;	// 0x306509
- (void)setBlurOversizeFactor:(float)factor;	// 0x306605
// converted property setter: - (void)setFootnote:(id)footnote;	// 0x306029
- (void)setImage:(id)image;	// 0x306519
// converted property setter: - (void)setTitle:(id)title;	// 0x305ef1
// converted property getter: - (id)title;	// 0x305ff1
@end

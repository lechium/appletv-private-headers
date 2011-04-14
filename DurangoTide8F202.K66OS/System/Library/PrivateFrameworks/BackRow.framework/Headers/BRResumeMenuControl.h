/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRResumeMenuControlLayoutManager, BRListControl, BRImageControl;

@interface BRResumeMenuControl : BRControl {
@private
	BRTextControl *_title;	// 44 = 0x2c
	BRListControl *_resumeMenu;	// 48 = 0x30
	BRImageControl *_blurControl;	// 52 = 0x34
	BRResumeMenuControlLayoutManager *_layoutManager;	// 56 = 0x38
	float _blurOversizeFactor;	// 60 = 0x3c
}
@property(retain) BRTextControl *title;	// G=0x32905edd; S=0x32905f0d; converted property
- (id)init;	// 0x328c9639
- (CGColorRef)blurControlBackgroundColor;	// 0x329061ad
- (BOOL)brEventAction:(id)action;	// 0x32905e49
- (void)dealloc;	// 0x328c9afd
- (void)layoutSubcontrols;	// 0x32905ff9
- (id)list;	// 0x328c9851
- (id)preferredActionForKey:(id)key;	// 0x32905c89
- (void)setBlurOversizeFactor:(float)factor;	// 0x328c982d
- (void)setImage:(id)image;	// 0x32905d75
// converted property setter: - (void)setTitle:(id)title;	// 0x32905f0d
// converted property getter: - (id)title;	// 0x32905edd
@end


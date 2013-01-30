/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class BRImageControl, BRHeaderControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface RUIYTCenteredMenuView : BRMenuView {
	BRHeaderControl *_headerControl;	// 112 = 0x70
	BRTextControl *_descriptionControl;	// 116 = 0x74
	BRImageControl *_backgroundImageControl;	// 120 = 0x78
}
@property(retain) id backgroundImage;	// G=0x4069; S=0x4089; converted property
- (id)init;	// 0x3e5d
- (void).cxx_destruct;	// 0x4671
// converted property getter: - (id)backgroundImage;	// 0x4069
- (void)layoutSubcontrols;	// 0x4355
// converted property setter: - (void)setBackgroundImage:(id)image;	// 0x4089
- (void)setListHeader:(id)header;	// 0x3ef5
- (void)setMenuDescription:(id)description;	// 0x3f61
@end

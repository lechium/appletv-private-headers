/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMainMenuShelfErrorControl : BRControl {
	BRTextControl *_text;	// 84 = 0x54
	BRTextControl *_subtext;	// 88 = 0x58
}
@property(retain) BRTextControl *subtext;	// G=0x2ee5e1; S=0x2ee58d; converted property
@property(retain) BRTextControl *text;	// G=0x2ee555; S=0x2ee501; converted property
- (id)init;	// 0x2ee3e9
- (id)_subtextAttributes;	// 0x2ee84d
- (id)_textAttributes;	// 0x2ee6d5
- (id)accessibilityLabel;	// 0x2ee9c5
- (void)dealloc;	// 0x2ee49d
- (void)layoutSubcontrols;	// 0x2ee619
// converted property setter: - (void)setSubtext:(id)subtext;	// 0x2ee58d
// converted property setter: - (void)setText:(id)text;	// 0x2ee501
// converted property getter: - (id)subtext;	// 0x2ee5e1
// converted property getter: - (id)text;	// 0x2ee555
@end


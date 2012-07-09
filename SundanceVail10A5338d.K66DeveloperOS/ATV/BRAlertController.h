/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRHeaderControl, BRImageControl, BRTextControl, BRAlignmentAdjustingTextControl;

__attribute__((visibility("hidden")))
@interface BRAlertController : BRController {
	id _eventDelegate;	// 96 = 0x60
	SEL _eventSelector;	// 100 = 0x64
	BRHeaderControl *_header;	// 104 = 0x68
	int _type;	// 108 = 0x6c
	BRTextControl *_primary;	// 112 = 0x70
	BRAlignmentAdjustingTextControl *_secondary;	// 116 = 0x74
	BRAlignmentAdjustingTextControl *_footer;	// 120 = 0x78
	BRImageControl *_image;	// 124 = 0x7c
}
@property(retain) id footerText;	// G=0x28edc5; S=0x28ed75; converted property
@property(retain) id primaryText;	// G=0x28ec0d; S=0x28eb25; converted property
@property(retain) id secondaryText;	// G=0x28eca5; S=0x28ec55; converted property
+ (id)alertForError:(id)error;	// 0x28e20d
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x28e2ad
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x28e2f9
- (id)_imageForType:(int)type;	// 0x28ef59
- (id)accessibilityLabel;	// 0x28eef1
- (id)axSelectedItemText;	// 0x28efa9
- (id)axTitleText;	// 0x28ef99
- (BOOL)brEventAction:(id)action;	// 0x28e94d
- (void)dealloc;	// 0x28e485
// converted property getter: - (id)footerText;	// 0x28edc5
- (id)footerTextControl;	// 0x28edfd
- (BOOL)isAccessibilityElement;	// 0x28eeed
- (void)layoutSubcontrols;	// 0x28e539
// converted property getter: - (id)primaryText;	// 0x28ec0d
- (id)primaryTextControl;	// 0x28ec45
- (BOOL)recreateOnReselect;	// 0x28e949
// converted property getter: - (id)secondaryText;	// 0x28eca5
- (id)secondaryTextControl;	// 0x28ecdd
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x28ee95
// converted property setter: - (void)setFooterText:(id)text;	// 0x28ed75
- (void)setFooterText:(id)text withAttributes:(id)attributes;	// 0x28ee0d
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x28eb25
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x28eb75
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x28ec55
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x28eced
- (void)setTitle:(id)title;	// 0x28eae5
- (void)wasPushed;	// 0x28ea85
@end

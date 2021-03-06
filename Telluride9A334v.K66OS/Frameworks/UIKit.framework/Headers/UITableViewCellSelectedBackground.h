/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITableViewCellSelectedBackground : UIView {
@private
	int _selectionStyle;	// 48 = 0x30
	UIColor *_multiselectBackgroundColor;	// 52 = 0x34
	UIColor *_selectionTintColor;	// 56 = 0x38
	BOOL _multiselect;	// 60 = 0x3c
}
@property(assign, nonatomic, getter=isMultiselect) BOOL multiselect;	// G=0x30287efd; S=0x30153ea9; 
@property(retain, nonatomic) UIColor *multiselectBackgroundColor;	// G=0x30287f1d; S=0x30153f41; @synthesize=_multiselectBackgroundColor
@property(assign, nonatomic) int selectionStyle;	// G=0x30287f0d; S=0x300dfe85; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *selectionTintColor;	// G=0x30287f2d; S=0x300dfec9; @synthesize=_selectionTintColor
- (void)dealloc;	// 0x3017c7dd
- (void)drawRect:(CGRect)rect;	// 0x3015592d
// declared property getter: - (BOOL)isMultiselect;	// 0x30287efd
// declared property getter: - (id)multiselectBackgroundColor;	// 0x30287f1d
// declared property getter: - (int)selectionStyle;	// 0x30287f0d
// declared property getter: - (id)selectionTintColor;	// 0x30287f2d
// declared property setter: - (void)setMultiselect:(BOOL)multiselect;	// 0x30153ea9
// declared property setter: - (void)setMultiselectBackgroundColor:(id)color;	// 0x30153f41
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x300dfe85
// declared property setter: - (void)setSelectionTintColor:(id)color;	// 0x300dfec9
@end


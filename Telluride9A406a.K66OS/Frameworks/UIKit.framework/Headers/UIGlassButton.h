/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIGlassButton : UIButton {
@private
	UIColor *_tintColor;	// 140 = 0x8c
}
@property(retain) UIColor *tintColor;	// G=0x358dfa11; S=0x358df8b1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x358df651
- (id)backgroundImageForState:(unsigned)state;	// 0x358dfa0d
- (void)dealloc;	// 0x358df865
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x358dfa09
// converted property setter: - (void)setTintColor:(id)color;	// 0x358df8b1
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x358df9f9
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x358dfa01
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x358df93d
// converted property getter: - (id)tintColor;	// 0x358dfa11
- (id)titleColorForState:(unsigned)state;	// 0x358df9fd
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x358df99d
- (id)titleShadowColorForState:(unsigned)state;	// 0x358dfa05
@end


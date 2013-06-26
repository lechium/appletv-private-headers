/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"


__attribute__((visibility("hidden")))
@interface UITexturedButton : UIButton {
}
- (id)initWithFrame:(CGRect)frame;	// 0x2f6ac3c5
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x2f6ac605
- (id)backgroundImageForState:(unsigned)state;	// 0x2f6ac895
- (int)buttonType;	// 0x2f6ac5c1
- (void)drawRect:(CGRect)rect;	// 0x2f6ac65d
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x2f6ac891
- (void)setHighlighted:(BOOL)highlighted;	// 0x2f6ac5c5
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x2f6ac881
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x2f6ac889
- (id)titleColorForState:(unsigned)state;	// 0x2f6ac885
- (id)titleShadowColorForState:(unsigned)state;	// 0x2f6ac88d
@end

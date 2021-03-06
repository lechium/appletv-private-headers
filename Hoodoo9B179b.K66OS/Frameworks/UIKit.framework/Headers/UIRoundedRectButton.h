/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UIColor, UIBezierPath;

__attribute__((visibility("hidden")))
@interface UIRoundedRectButton : UIButton {
@private
	UIBezierPath *_fillPath;	// 140 = 0x8c
	UIColor *_fillColor;	// 144 = 0x90
	UIColor *_tintColor;	// 148 = 0x94
}
@property(retain) UIColor *tintColor;	// G=0x33129701; S=0x33129691; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x331295f1
- (id)initWithFrame:(CGRect)frame fillColor:(id)color;	// 0x32fe7955
- (void)_commonRoundedRectButtonInit;	// 0x32fe7a5d
- (void)_invalidatePaths;	// 0x32fe7a29
- (int)buttonType;	// 0x3312968d
- (void)dealloc;	// 0x32ff7521
- (void)drawRect:(CGRect)rect;	// 0x32fed689
- (void)setFrame:(CGRect)frame;	// 0x32fe79c5
- (void)setHighlighted:(BOOL)highlighted;	// 0x32fedd59
// converted property setter: - (void)setTintColor:(id)color;	// 0x33129691
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3312961d
// converted property getter: - (id)tintColor;	// 0x33129701
@end


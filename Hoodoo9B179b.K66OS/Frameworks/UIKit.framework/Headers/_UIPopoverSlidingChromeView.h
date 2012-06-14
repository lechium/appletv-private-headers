/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPopoverBackgroundView.h"


__attribute__((visibility("hidden")))
@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView {
}
@property(assign) unsigned arrowDirection;	// G=0x332830d5; S=0x332830d9; converted property
@property(assign) float arrowOffset;	// G=0x332830cd; S=0x332830d1; converted property
+ (UIEdgeInsets)_shadowInsets;	// 0x3328303d
+ (CGSize)_shadowOffset;	// 0x33283075
+ (float)_shadowOpacity;	// 0x33283061
+ (id)_shadowPathForRect:(CGRect)rect arrowDirection:(unsigned)direction;	// 0x33283081
+ (float)_shadowRadius;	// 0x3328306d
+ (float)arrowBase;	// 0x3328300d
+ (float)arrowHeight;	// 0x33283009
+ (UIEdgeInsets)contentViewInsets;	// 0x33283019
+ (float)cornerRadius;	// 0x33283011
// converted property getter: - (unsigned)arrowDirection;	// 0x332830d5
// converted property getter: - (float)arrowOffset;	// 0x332830cd
- (void)layoutSubviews;	// 0x332830dd
// converted property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x332830d9
// converted property setter: - (void)setArrowOffset:(float)offset;	// 0x332830d1
@end

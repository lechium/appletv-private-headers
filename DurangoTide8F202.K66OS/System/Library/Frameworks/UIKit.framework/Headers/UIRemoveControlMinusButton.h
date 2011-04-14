/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIRemoveControlMinusButton : UIControl {
@private
	unsigned _rotated : 1;	// 66 = 0x42
	unsigned _rotating : 1;	// 66 = 0x42
	unsigned _hiding : 1;	// 66 = 0x42
	unsigned _showAsPlus : 1;	// 66 = 0x42
	unsigned _reserved : 28;	// 66 = 0x42
	float _verticalOffset;	// 72 = 0x48
}
@property(assign, getter=isHiding) BOOL hiding;	// G=0x3071c9c9; S=0x3071c9ad; converted property
+ (float)defaultWidth;	// 0x3071db15
+ (id)minusImage;	// 0x3071dfc1
+ (id)plusImage;	// 0x3071df89
- (id)initWithRemoveControl:(id)removeControl;	// 0x3071e4f9
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x3071ca05
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x3071dad9
- (void)dealloc;	// 0x3071dd35
- (void)drawRect:(CGRect)rect;	// 0x3071eb79
// converted property getter: - (BOOL)isHiding;	// 0x3071c9c9
- (BOOL)isRotated;	// 0x3071c9dd
- (BOOL)isRotating;	// 0x3071c9f1
// converted property setter: - (void)setHiding:(BOOL)hiding;	// 0x3071c9ad
- (void)toggleRotate:(BOOL)rotate;	// 0x3071de49
@end


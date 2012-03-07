/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImage.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIAnimatedImage : UIImage {
@private
	NSArray *_images;	// 16 = 0x10
	double _duration;	// 20 = 0x14
}
@property(readonly, assign) double duration;	// G=0x301e162d; converted property
@property(readonly, retain) NSArray *images;	// G=0x301e15f5; converted property
- (id)initWithCoder:(id)coder;	// 0x301e1529
- (id)initWithImages:(id)images duration:(double)duration;	// 0x301e13d1
- (id)_bezeledImageWithShadowRed:(float)shadowRed green:(float)green blue:(float)blue alpha:(float)alpha fillRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 drawShadow:(BOOL)shadow;	// 0x301e195d
- (CGRect)_contentStretchInPixels;	// 0x301e1691
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)exteriorShadowRed green:(float)green blue:(float)blue alpha:(float)alpha interiorShadowRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 fillRed:(float)red9 green:(float)green10 blue:(float)blue11 alpha:(float)alpha12;	// 0x301e1b01
- (id)_imageScaledToProportion:(float)proportion interpolationQuality:(int)quality;	// 0x301e1cc1
- (BOOL)_isResizable;	// 0x301e16dd
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)size;	// 0x301e1715
- (id)_selectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x3029fef1
- (void)_setAlwaysStretches:(BOOL)stretches;	// 0x301e1755
- (id)_unselectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x302a0049
- (UIEdgeInsets)capInsets;	// 0x301e1645
- (void)dealloc;	// 0x301e14dd
// converted property getter: - (double)duration;	// 0x301e162d
- (void)encodeWithCoder:(id)coder;	// 0x301e1599
// converted property getter: - (id)images;	// 0x301e15f5
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x301e17fd
@end

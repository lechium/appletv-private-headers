/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIImage;

@interface UIImageView : UIView {
	id _storage;	// 84 = 0x54
	UIImage *_decompressingImage;	// 88 = 0x58
	UIImage *_decompressingHighlightedImage;	// 92 = 0x5c
}
@property(assign, getter=isAnimating) BOOL animating;	// G=0x34559045; S=0x34754271; converted property
@property(assign, nonatomic) double animationDuration;	// G=0x347540e1; S=0x3455a005; 
@property(copy, nonatomic) NSArray *animationImages;	// G=0x34598ce9; S=0x34559c91; 
@property(assign, nonatomic) int animationRepeatCount;	// G=0x34754159; S=0x3455a109; 
@property(assign, nonatomic) int drawMode;	// G=0x347541c5; S=0x34583209; @dynamic
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x34556fcd; S=0x3461ede9; 
@property(copy, nonatomic) NSArray *highlightedAnimationImages;	// G=0x34598d79; S=0x34753d25; 
@property(retain, nonatomic) UIImage *highlightedImage;	// G=0x3455840d; S=0x345cba45; 
@property(retain, nonatomic) UIImage *image;	// G=0x34540d69; S=0x34551105; 
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// @dynamic
- (id)initWithCoder:(id)coder;	// 0x346de70d
- (id)initWithFrame:(CGRect)frame;	// 0x34556e41
- (id)initWithImage:(id)image;	// 0x34598971
- (id)initWithImage:(id)image highlightedImage:(id)image2;	// 0x34615669
- (id)_cachedPretiledImageForImage:(id)image;	// 0x34559611
- (BOOL)_canDrawContent;	// 0x34556e91
- (void)_clearPretiledImageCacheForImage:(id)image;	// 0x34558479
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x345fdd81
- (BOOL)_recomputePretilingState;	// 0x34598ac1
- (BOOL)_setImageViewContents:(id)contents;	// 0x345590fd
- (void)_setViewGeometry:(CGRect)geometry forMetric:(int)metric;	// 0x3453daa5
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x345c06b9
- (BOOL)_shouldDrawImage:(id)image;	// 0x34558f15
- (void)_updatePretiledImageCacheForImage:(id)image;	// 0x345585a1
- (void)_updateState;	// 0x34558a95
- (UIEdgeInsets)alignmentRectInsets;	// 0x346053fd
// declared property getter: - (double)animationDuration;	// 0x347540e1
// declared property getter: - (id)animationImages;	// 0x34598ce9
// declared property getter: - (int)animationRepeatCount;	// 0x34754159
- (void)dealloc;	// 0x3456b5d1
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x34754449
- (unsigned long long)defaultAccessibilityTraits;	// 0x347db195
// declared property getter: - (int)drawMode;	// 0x347541c5
- (void)drawRect:(CGRect)rect;	// 0x34753acd
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x3475429d
- (void)encodeWithCoder:(id)coder;	// 0x3475388d
// declared property getter: - (id)highlightedAnimationImages;	// 0x34598d79
// declared property getter: - (id)highlightedImage;	// 0x3455840d
// declared property getter: - (id)image;	// 0x34540d69
- (CGImageRef)imageRef;	// 0x34754251
- (BOOL)isAccessibilityElementByDefault;	// 0x347db191
// converted property getter: - (BOOL)isAnimating;	// 0x34559045
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x347db1d5
// declared property getter: - (BOOL)isHighlighted;	// 0x34556fcd
- (void)layoutSubviews;	// 0x34545e59
// converted property setter: - (void)setAnimating:(BOOL)animating;	// 0x34754271
// declared property setter: - (void)setAnimationDuration:(double)duration;	// 0x3455a005
// declared property setter: - (void)setAnimationImages:(id)images;	// 0x34559c91
// declared property setter: - (void)setAnimationRepeatCount:(int)count;	// 0x3455a109
- (void)setBackgroundColor:(id)color;	// 0x3468c81d
- (void)setBounds:(CGRect)bounds;	// 0x345ba3c9
- (void)setCGImageRef:(CGImageRef)ref;	// 0x34754231
// declared property setter: - (void)setDrawMode:(int)mode;	// 0x34583209
- (void)setFrame:(CGRect)frame;	// 0x3453da75
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3461ede9
// declared property setter: - (void)setHighlightedAnimationImages:(id)images;	// 0x34753d25
// declared property setter: - (void)setHighlightedImage:(id)image;	// 0x345cba45
// declared property setter: - (void)setImage:(id)image;	// 0x34551105
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x345fdd51
- (void)startAnimating;	// 0x3455a1fd
- (void)stopAnimating;	// 0x3455ce2d
- (BOOL)useBlockyMagnificationInClassic;	// 0x34754299
@end

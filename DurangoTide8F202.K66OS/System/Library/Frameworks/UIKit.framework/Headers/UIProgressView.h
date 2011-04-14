/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, UIImage;

@interface UIProgressView : UIView <NSCoding> {
@private
	int _progressViewStyle;	// 44 = 0x2c
	float _progress;	// 48 = 0x30
	int _barStyle;	// 52 = 0x34
	UIColor *_customColor;	// 56 = 0x38
	UIImage *_customColorImage;	// 60 = 0x3c
}
@property(assign) int barStyle;	// G=0x307a2141; S=0x307a2165; converted property
@property(assign, nonatomic) float progress;	// G=0x307a2121; S=0x307a222d; @synthesize=_progress
@property(assign, nonatomic) int progressViewStyle;	// G=0x307a2131; S=0x307a22f1; @synthesize=_progressViewStyle
+ (void)_loadResourcesForStyle:(int)style barStyle:(int)style2;	// 0x307a2501
+ (int)_styleImageIndexForStyle:(int)style barStyle:(int)style2;	// 0x307a24a5
+ (CGSize)defaultSize;	// 0x307a2151
- (id)initWithCoder:(id)coder;	// 0x307a239d
- (id)initWithFrame:(CGRect)frame;	// 0x307a2445
- (id)initWithProgressViewStyle:(int)progressViewStyle;	// 0x307a2bf9
- (id)_progressColor;	// 0x307a21fd
- (void)_setProgressColor:(id)color;	// 0x307a218d
- (id)_tintedImage;	// 0x307a2851
// converted property getter: - (int)barStyle;	// 0x307a2141
- (void)drawOverlayProgressView:(CGRect)view;	// 0x307a2c65
- (void)drawProgressView:(CGRect)view;	// 0x307a2a0d
- (void)drawRect:(CGRect)rect;	// 0x307a2289
- (void)encodeWithCoder:(id)coder;	// 0x307a2311
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x307a63dd
// declared property getter: - (float)progress;	// 0x307a2121
// declared property getter: - (int)progressViewStyle;	// 0x307a2131
// converted property setter: - (void)setBarStyle:(int)style;	// 0x307a2165
// declared property setter: - (void)setProgress:(float)progress;	// 0x307a222d
// declared property setter: - (void)setProgressViewStyle:(int)style;	// 0x307a22f1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x307a2715
@end


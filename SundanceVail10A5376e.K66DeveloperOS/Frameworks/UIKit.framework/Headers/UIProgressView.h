/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, UIColor, UIImage;

@interface UIProgressView : UIView <NSCoding> {
	int _progressViewStyle;	// 84 = 0x54
	float _progress;	// 88 = 0x58
	int _barStyle;	// 92 = 0x5c
	UIColor *_progressTintColor;	// 96 = 0x60
	UIColor *_trackTintColor;	// 100 = 0x64
	UIImageView *_trackView;	// 104 = 0x68
	UIImageView *_progressView;	// 108 = 0x6c
	BOOL _isAnimating;	// 112 = 0x70
	UIImage *_trackImage;	// 116 = 0x74
	UIImage *_progressImage;	// 120 = 0x78
}
@property(assign) int barStyle;	// G=0x304aa3dd; S=0x304aa3ed; converted property
@property(assign, nonatomic) float progress;	// G=0x304aa38d; S=0x304a9d25; @synthesize=_progress
@property(retain, nonatomic) UIImage *progressImage;	// G=0x304aa3ad; S=0x304aa125; @synthesize=_progressImage
@property(retain, nonatomic) UIColor *progressTintColor;	// G=0x304aa3bd; S=0x304aa061; @synthesize=_progressTintColor
@property(assign, nonatomic) int progressViewStyle;	// G=0x304aa37d; S=0x304a9491; @synthesize=_progressViewStyle
@property(retain, nonatomic) UIImage *trackImage;	// G=0x304aa39d; S=0x304aa2b1; @synthesize=_trackImage
@property(retain, nonatomic) UIColor *trackTintColor;	// G=0x304aa3cd; S=0x304aa1fd; @synthesize=_trackTintColor
+ (int)_indexForStyle:(int)style barStyle:(int)style2;	// 0x304a8869
+ (XXStruct_OzJQfB)_standardImagesForStyle:(int)style barStyle:(int)style2;	// 0x304a88bd
+ (CGSize)defaultSize;	// 0x304aa431
- (id)initWithCoder:(id)coder;	// 0x304a8b81
- (id)initWithFrame:(CGRect)frame;	// 0x304a8aad
- (id)initWithProgressViewStyle:(int)progressViewStyle;	// 0x304a8b35
- (id)_appropriateProgressImage;	// 0x304a97ed
- (id)_appropriateTrackImage;	// 0x304a95d5
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x304a91c9
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x304a91cd
- (void)_populateArchivedSubviews:(id)subviews;	// 0x304a8ec9
- (id)_progressColor;	// 0x304aa041
- (void)_setProgress:(float)progress;	// 0x304a9d15
- (void)_setProgressAnimated:(float)animated duration:(double)duration delay:(double)delay options:(unsigned)options;	// 0x304a9ea5
- (void)_setProgressColor:(id)color;	// 0x304aa051
- (BOOL)_shouldTintProgress;	// 0x304a95a5
- (BOOL)_shouldTintTrack;	// 0x304a95bd
- (void)_updateImages;	// 0x304a9a05
- (UIEdgeInsets)alignmentRectInsets;	// 0x304a9325
// converted property getter: - (int)barStyle;	// 0x304aa3dd
- (void)dealloc;	// 0x304a8f3d
- (void)encodeWithCoder:(id)coder;	// 0x304a8d81
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x304afc05
- (void)layoutSubviews;	// 0x304a9b55
// declared property getter: - (float)progress;	// 0x304aa38d
// declared property getter: - (id)progressImage;	// 0x304aa3ad
// declared property getter: - (id)progressTintColor;	// 0x304aa3bd
// declared property getter: - (int)progressViewStyle;	// 0x304aa37d
// converted property setter: - (void)setBarStyle:(int)style;	// 0x304aa3ed
- (void)setBounds:(CGRect)bounds;	// 0x304a90b1
- (void)setFrame:(CGRect)frame;	// 0x304a8fc9
// declared property setter: - (void)setProgress:(float)progress;	// 0x304a9d25
- (void)setProgress:(float)progress animated:(BOOL)animated;	// 0x304a9dcd
// declared property setter: - (void)setProgressImage:(id)image;	// 0x304aa125
// declared property setter: - (void)setProgressTintColor:(id)color;	// 0x304aa061
// declared property setter: - (void)setProgressViewStyle:(int)style;	// 0x304a9491
// declared property setter: - (void)setTrackImage:(id)image;	// 0x304aa2b1
// declared property setter: - (void)setTrackTintColor:(id)color;	// 0x304aa1fd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x304a92f9
// declared property getter: - (id)trackImage;	// 0x304aa39d
// declared property getter: - (id)trackTintColor;	// 0x304aa3cd
@end


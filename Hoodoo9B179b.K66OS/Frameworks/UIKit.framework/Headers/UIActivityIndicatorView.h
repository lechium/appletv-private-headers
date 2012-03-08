/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, NSArray, UIColor, NSString;

@interface UIActivityIndicatorView : UIView <NSCoding> {
@private
	double _duration;	// 48 = 0x30
	BOOL _animating;	// 56 = 0x38
	int _activityIndicatorViewStyle;	// 60 = 0x3c
	int _actualActivityIndicatorViewStyle;	// 64 = 0x40
	BOOL _hidesWhenStopped;	// 68 = 0x44
	float _width;	// 72 = 0x48
	BOOL _hasShadow;	// 76 = 0x4c
	UIColor *_color;	// 80 = 0x50
	int _spokeCount;	// 84 = 0x54
	CGSize _shadowOffset;	// 88 = 0x58
	UIColor *_shadowColor;	// 96 = 0x60
	float _innerRadius;	// 100 = 0x64
	int _spokeFrameRatio;	// 104 = 0x68
	NSArray *_spokeImages;	// 108 = 0x6c
	BOOL _clockWise;	// 112 = 0x70
	BOOL _spinning;	// 113 = 0x71
	float _spinningDuration;	// 116 = 0x74
	BOOL _useArtwork;	// 120 = 0x78
	NSString *_artBackupKeyString;	// 124 = 0x7c
	UIImageView *_internalView;	// 128 = 0x80
}
@property(assign, nonatomic) int activityIndicatorViewStyle;	// G=0x33145095; S=0x32f83291; @synthesize=_activityIndicatorViewStyle
@property(assign, getter=isAnimating) BOOL animating;	// G=0x32f80c85; S=0x3314504d; converted property
@property(readonly, assign, nonatomic) NSString *artBackupKeyString;	// G=0x331451b1; @synthesize=_artBackupKeyString
@property(assign, nonatomic) BOOL clockWise;	// G=0x33145151; S=0x33144525; @synthesize=_clockWise
@property(retain, nonatomic) UIColor *color;	// G=0x331450d5; S=0x331442dd; @synthesize=_color
@property(assign) BOOL hasShadow;	// G=0x331450b5; S=0x331450c5; @synthesize=_hasShadow
@property(assign, nonatomic) BOOL hidesWhenStopped;	// G=0x33006159; S=0x32f80c3d; @synthesize=_hidesWhenStopped
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x33144215; S=0x33144239; converted property
@property(assign, nonatomic) float innerRadius;	// G=0x33145121; S=0x331444b5; @synthesize=_innerRadius
@property(readonly, assign, nonatomic) UIImageView *internalView;	// G=0x331451c1; @synthesize=_internalView
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x33145111; S=0x3314437d; @synthesize=_shadowColor
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x331450f5; S=0x33144419; @synthesize=_shadowOffset
@property(assign) BOOL spinning;	// G=0x33145161; S=0x33145171; @synthesize=_spinning
@property(assign, nonatomic) float spinningDuration;	// G=0x33145181; S=0x33144555; @synthesize=_spinningDuration
@property(assign, nonatomic) int spokeCount;	// G=0x331450e5; S=0x33144489; @synthesize=_spokeCount
@property(assign, nonatomic) int spokeFrameRatio;	// G=0x33145131; S=0x331444f1; @synthesize=_spokeFrameRatio
@property(readonly, assign) NSArray *spokeImages;	// G=0x33145141; @synthesize=_spokeImages
@property(assign, nonatomic) BOOL useArtwork;	// G=0x33145191; S=0x331451a1; @synthesize=_useArtwork
@property(assign, nonatomic) float width;	// G=0x331450a5; S=0x331442a1; @synthesize=_width
+ (id)_loadResourcesForStyle:(int)style;	// 0x32f81aa1
+ (CGSize)defaultSizeForStyle:(int)style;	// 0x32f808f9
+ (CGSize)size;	// 0x33145019
- (id)initWithActivityIndicatorStyle:(int)activityIndicatorStyle;	// 0x32f80859
- (id)initWithCoder:(id)coder;	// 0x33143eb1
- (id)initWithFrame:(CGRect)frame;	// 0x33143e75
- (float)_alphaValueForStep:(int)step;	// 0x331446b5
- (void)_applicationDidEnterBackground:(id)_application;	// 0x32f84951
- (void)_applicationWillEnterForeground:(id)_application;	// 0x33143e49
- (id)_artBackupKey;	// 0x32f81799
- (BOOL)_canCustomize;	// 0x33144ff5
- (BOOL)_canCustomizeStyle:(int)style;	// 0x33144fbd
- (id)_commonInitWithFrame:(CGRect)frame;	// 0x32f80935
- (int)_customStyleForStyle:(int)style;	// 0x33144f95
- (id)_defaulColorForStyle:(int)style;	// 0x32f81369
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x330054c1
- (void)_feedTheGear;	// 0x32f80c95
- (id)_generateImages;	// 0x33144ce9
- (id)_imageForStep:(int)step;	// 0x33144759
- (BOOL)_isArtWorkBased;	// 0x32f81779
- (id)_layoutInfosForStyle:(int)style;	// 0x32f81211
- (void)_populateArchivedSubviews:(id)subviews;	// 0x331440c9
- (void)_setUpAnimation;	// 0x330057e9
- (BOOL)_shouldGoBackToBaseStyle;	// 0x32f816b5
- (BOOL)_shouldGoToCustomStyle;	// 0x32f81525
- (float)_spokeLengthForGearWidth:(float)gearWidth;	// 0x33144629
- (float)_spokeWidthForGearWidth:(float)gearWidth;	// 0x3314457d
- (id)_styleNameForStyle:(int)style;	// 0x33144c91
- (void)_tearDownAnimation;	// 0x330061c1
- (void)_updateInternalViewFrameWithBounds:(CGRect)bounds;	// 0x32f80ad9
- (float)_widthForGearWidth:(float)gearWidth;	// 0x3314468d
// declared property getter: - (int)activityIndicatorViewStyle;	// 0x33145095
- (id)artBackupKey;	// 0x33144c49
// declared property getter: - (id)artBackupKeyString;	// 0x331451b1
// declared property getter: - (BOOL)clockWise;	// 0x33145151
// declared property getter: - (id)color;	// 0x331450d5
- (void)dealloc;	// 0x3300a2c1
- (void)encodeWithCoder:(id)coder;	// 0x3314411d
- (void)generateImages;	// 0x33144fe5
// declared property getter: - (BOOL)hasShadow;	// 0x331450b5
// declared property getter: - (BOOL)hidesWhenStopped;	// 0x33006159
// declared property getter: - (float)innerRadius;	// 0x33145121
// declared property getter: - (id)internalView;	// 0x331451c1
// converted property getter: - (BOOL)isAnimating;	// 0x32f80c85
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33149539
// converted property getter: - (BOOL)isHighlighted;	// 0x33144215
// declared property setter: - (void)setActivityIndicatorViewStyle:(int)style;	// 0x32f83291
// converted property setter: - (void)setAnimating:(BOOL)animating;	// 0x3314504d
- (void)setAnimationDuration:(double)duration;	// 0x33005331
- (void)setBounds:(CGRect)bounds;	// 0x33144d79
// declared property setter: - (void)setClockWise:(BOOL)wise;	// 0x33144525
// declared property setter: - (void)setColor:(id)color;	// 0x331442dd
- (void)setFrame:(CGRect)frame;	// 0x32f80a61
// declared property setter: - (void)setHasShadow:(BOOL)shadow;	// 0x331450c5
// declared property setter: - (void)setHidesWhenStopped:(BOOL)stopped;	// 0x32f80c3d
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x33144239
// declared property setter: - (void)setInnerRadius:(float)radius;	// 0x331444b5
// declared property setter: - (void)setShadowColor:(id)color;	// 0x3314437d
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x33144419
// declared property setter: - (void)setSpinning:(BOOL)spinning;	// 0x33145171
// declared property setter: - (void)setSpinningDuration:(float)duration;	// 0x33144555
// declared property setter: - (void)setSpokeCount:(int)count;	// 0x33144489
// declared property setter: - (void)setSpokeFrameRatio:(int)ratio;	// 0x331444f1
- (void)setStyle:(int)style;	// 0x3314503d
// declared property setter: - (void)setUseArtwork:(BOOL)artwork;	// 0x331451a1
// declared property setter: - (void)setWidth:(float)width;	// 0x331442a1
// declared property getter: - (id)shadowColor;	// 0x33145111
// declared property getter: - (CGSize)shadowOffset;	// 0x331450f5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f833e9
// declared property getter: - (BOOL)spinning;	// 0x33145161
// declared property getter: - (float)spinningDuration;	// 0x33145181
// declared property getter: - (int)spokeCount;	// 0x331450e5
// declared property getter: - (int)spokeFrameRatio;	// 0x33145131
// declared property getter: - (id)spokeImages;	// 0x33145141
- (void)startAnimating;	// 0x33005789
- (void)startAnimation;	// 0x33145075
- (void)stopAnimating;	// 0x33006169
- (void)stopAnimation;	// 0x33145085
// declared property getter: - (BOOL)useArtwork;	// 0x33145191
// declared property getter: - (float)width;	// 0x331450a5
@end


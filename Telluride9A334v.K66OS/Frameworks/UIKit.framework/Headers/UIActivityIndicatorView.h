/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, UIColor, NSString, NSArray;

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
@property(assign, nonatomic) int activityIndicatorViewStyle;	// G=0x302b1475; S=0x300f3311; @synthesize=_activityIndicatorViewStyle
@property(assign, getter=isAnimating) BOOL animating;	// G=0x300f0d25; S=0x302b142d; converted property
@property(readonly, assign, nonatomic) NSString *artBackupKeyString;	// G=0x302b1591; @synthesize=_artBackupKeyString
@property(assign, nonatomic) BOOL clockWise;	// G=0x302b1531; S=0x302b0905; @synthesize=_clockWise
@property(retain, nonatomic) UIColor *color;	// G=0x302b14b5; S=0x302b06bd; @synthesize=_color
@property(assign) BOOL hasShadow;	// G=0x302b1495; S=0x302b14a5; @synthesize=_hasShadow
@property(assign, nonatomic) BOOL hidesWhenStopped;	// G=0x301756a1; S=0x300f0cdd; @synthesize=_hidesWhenStopped
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x302b05f5; S=0x302b0619; converted property
@property(assign, nonatomic) float innerRadius;	// G=0x302b1501; S=0x302b0895; @synthesize=_innerRadius
@property(readonly, assign, nonatomic) UIImageView *internalView;	// G=0x302b15a1; @synthesize=_internalView
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x302b14f1; S=0x302b075d; @synthesize=_shadowColor
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x302b14d5; S=0x302b07f9; @synthesize=_shadowOffset
@property(assign) BOOL spinning;	// G=0x302b1541; S=0x302b1551; @synthesize=_spinning
@property(assign, nonatomic) float spinningDuration;	// G=0x302b1561; S=0x302b0935; @synthesize=_spinningDuration
@property(assign, nonatomic) int spokeCount;	// G=0x302b14c5; S=0x302b0869; @synthesize=_spokeCount
@property(assign, nonatomic) int spokeFrameRatio;	// G=0x302b1511; S=0x302b08d1; @synthesize=_spokeFrameRatio
@property(readonly, assign) NSArray *spokeImages;	// G=0x302b1521; @synthesize=_spokeImages
@property(assign, nonatomic) BOOL useArtwork;	// G=0x302b1571; S=0x302b1581; @synthesize=_useArtwork
@property(assign, nonatomic) float width;	// G=0x302b1485; S=0x302b0681; @synthesize=_width
+ (id)_loadResourcesForStyle:(int)style;	// 0x300f1b41
+ (CGSize)defaultSizeForStyle:(int)style;	// 0x300f0999
+ (CGSize)size;	// 0x302b13f9
- (id)initWithActivityIndicatorStyle:(int)activityIndicatorStyle;	// 0x300f08f9
- (id)initWithCoder:(id)coder;	// 0x302b0291
- (id)initWithFrame:(CGRect)frame;	// 0x302b0255
- (float)_alphaValueForStep:(int)step;	// 0x302b0a95
- (void)_applicationDidEnterBackground:(id)_application;	// 0x300f4a39
- (void)_applicationWillEnterForeground:(id)_application;	// 0x302b0229
- (id)_artBackupKey;	// 0x300f1839
- (BOOL)_canCustomize;	// 0x302b13d5
- (BOOL)_canCustomizeStyle:(int)style;	// 0x302b139d
- (id)_commonInitWithFrame:(CGRect)frame;	// 0x300f09d5
- (int)_customStyleForStyle:(int)style;	// 0x302b1375
- (id)_defaulColorForStyle:(int)style;	// 0x300f1409
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x30174a09
- (void)_feedTheGear;	// 0x300f0d35
- (id)_generateImages;	// 0x302b10c9
- (id)_imageForStep:(int)step;	// 0x302b0b39
- (BOOL)_isArtWorkBased;	// 0x300f1819
- (id)_layoutInfosForStyle:(int)style;	// 0x300f12b1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x302b04a9
- (void)_setUpAnimation;	// 0x30174d31
- (BOOL)_shouldGoBackToBaseStyle;	// 0x300f1755
- (BOOL)_shouldGoToCustomStyle;	// 0x300f15c5
- (float)_spokeLengthForGearWidth:(float)gearWidth;	// 0x302b0a09
- (float)_spokeWidthForGearWidth:(float)gearWidth;	// 0x302b095d
- (id)_styleNameForStyle:(int)style;	// 0x302b1071
- (void)_tearDownAnimation;	// 0x30175709
- (void)_updateInternalViewFrameWithBounds:(CGRect)bounds;	// 0x300f0b79
- (float)_widthForGearWidth:(float)gearWidth;	// 0x302b0a6d
// declared property getter: - (int)activityIndicatorViewStyle;	// 0x302b1475
- (id)artBackupKey;	// 0x302b1029
// declared property getter: - (id)artBackupKeyString;	// 0x302b1591
// declared property getter: - (BOOL)clockWise;	// 0x302b1531
// declared property getter: - (id)color;	// 0x302b14b5
- (void)dealloc;	// 0x30179809
- (void)encodeWithCoder:(id)coder;	// 0x302b04fd
- (void)generateImages;	// 0x302b13c5
// declared property getter: - (BOOL)hasShadow;	// 0x302b1495
// declared property getter: - (BOOL)hidesWhenStopped;	// 0x301756a1
// declared property getter: - (float)innerRadius;	// 0x302b1501
// declared property getter: - (id)internalView;	// 0x302b15a1
// converted property getter: - (BOOL)isAnimating;	// 0x300f0d25
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x302b551d
// converted property getter: - (BOOL)isHighlighted;	// 0x302b05f5
// declared property setter: - (void)setActivityIndicatorViewStyle:(int)style;	// 0x300f3311
// converted property setter: - (void)setAnimating:(BOOL)animating;	// 0x302b142d
- (void)setAnimationDuration:(double)duration;	// 0x30174879
- (void)setBounds:(CGRect)bounds;	// 0x302b1159
// declared property setter: - (void)setClockWise:(BOOL)wise;	// 0x302b0905
// declared property setter: - (void)setColor:(id)color;	// 0x302b06bd
- (void)setFrame:(CGRect)frame;	// 0x300f0b01
// declared property setter: - (void)setHasShadow:(BOOL)shadow;	// 0x302b14a5
// declared property setter: - (void)setHidesWhenStopped:(BOOL)stopped;	// 0x300f0cdd
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x302b0619
// declared property setter: - (void)setInnerRadius:(float)radius;	// 0x302b0895
// declared property setter: - (void)setShadowColor:(id)color;	// 0x302b075d
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x302b07f9
// declared property setter: - (void)setSpinning:(BOOL)spinning;	// 0x302b1551
// declared property setter: - (void)setSpinningDuration:(float)duration;	// 0x302b0935
// declared property setter: - (void)setSpokeCount:(int)count;	// 0x302b0869
// declared property setter: - (void)setSpokeFrameRatio:(int)ratio;	// 0x302b08d1
- (void)setStyle:(int)style;	// 0x302b141d
// declared property setter: - (void)setUseArtwork:(BOOL)artwork;	// 0x302b1581
// declared property setter: - (void)setWidth:(float)width;	// 0x302b0681
// declared property getter: - (id)shadowColor;	// 0x302b14f1
// declared property getter: - (CGSize)shadowOffset;	// 0x302b14d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x300f3469
// declared property getter: - (BOOL)spinning;	// 0x302b1541
// declared property getter: - (float)spinningDuration;	// 0x302b1561
// declared property getter: - (int)spokeCount;	// 0x302b14c5
// declared property getter: - (int)spokeFrameRatio;	// 0x302b1511
// declared property getter: - (id)spokeImages;	// 0x302b1521
- (void)startAnimating;	// 0x30174cd1
- (void)startAnimation;	// 0x302b1455
- (void)stopAnimating;	// 0x301756b1
- (void)stopAnimation;	// 0x302b1465
// declared property getter: - (BOOL)useArtwork;	// 0x302b1571
// declared property getter: - (float)width;	// 0x302b1485
@end

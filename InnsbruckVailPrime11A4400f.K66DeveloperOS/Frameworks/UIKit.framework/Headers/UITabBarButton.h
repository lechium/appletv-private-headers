/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class _UIBadgeView, UITabBarSelectionIndicatorView, UITabBarButtonLabel, UIImage, NSValue;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl {
	CGRect _hitRect;	// 120 = 0x78
	UIView *_info;	// 136 = 0x88
	UITabBarButtonLabel *_label;	// 140 = 0x8c
	_UIBadgeView *_badge;	// 144 = 0x90
	UITabBarSelectionIndicatorView *_selectedIndicator;	// 148 = 0x94
	BOOL _selected;	// 152 = 0x98
	BOOL _barHeight;	// 153 = 0x99
	BOOL _badgeAnimated;	// 154 = 0x9a
	UIEdgeInsets _infoInsets;	// 156 = 0x9c
	UIOffset _selectedInfoOffset;	// 172 = 0xac
	UIOffset _infoOffset;	// 180 = 0xb4
	UIImage *_customSelectedIndicatorImage;	// 188 = 0xbc
	NSValue *_labelOffsetValue;	// 192 = 0xc0
	BOOL _isLowProfileButton;	// 196 = 0xc4
	BOOL _selectedImageColoringIsStale;	// 197 = 0xc5
	BOOL _centerAllContents;	// 198 = 0xc6
	Class _appearanceGuideClass;	// 200 = 0xc8
}
@property(assign, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;	// G=0x2f6bc205; S=0x2f6bc009; @synthesize
@property(assign, nonatomic, setter=_setCenterAllContents:) BOOL _centerAllContents;	// G=0x2f6bc1e5; S=0x2f6bc1f5; @synthesize
@property(readonly, assign, nonatomic) BOOL _isLowProfileButton;	// G=0x2f6bc1b5; @synthesize
@property(assign, nonatomic, setter=_setSelectedImageColoringIsStale:) BOOL _selectedImageColoringIsStale;	// G=0x2f6bc1c5; S=0x2f6bc1d5; @synthesize
@property(retain, nonatomic) NSValue *labelOffsetValue;	// G=0x2f6bc195; S=0x2f6bc1a5; @synthesize=_labelOffsetValue
@property(readonly, assign, nonatomic) UITabBarButtonLabel *tabBarButtonLabel;	// G=0x2f495e4d; @synthesize=_label
+ (id)_defaultLabelColor;	// 0x2f46944d
+ (id)_defaultLabelFont;	// 0x2f4692c1
- (id)initLowProfileWithLabel:(id)label;	// 0x2f6bb80d
- (id)initWithImage:(id)image selectedImage:(id)image2 label:(id)label withInsets:(UIEdgeInsets)insets;	// 0x2f468f95
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x2f6bc04d
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x2f6bc049
// declared property getter: - (Class)_appearanceGuideClass;	// 0x2f6bc205
- (void)_applyTabBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x2f4698ad
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x2f6bbca1
// declared property getter: - (BOOL)_centerAllContents;	// 0x2f6bc1e5
- (CGRect)_frameForSelectedIndicator;	// 0x2f46e439
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x2f6bbe61
// declared property getter: - (BOOL)_isLowProfileButton;	// 0x2f6bc1b5
- (BOOL)_isSelected;	// 0x2f6bbba5
- (void)_layoutSubviewsLowProfile;	// 0x2f6bbf29
- (void)_positionBadge;	// 0x2f41a6e9
- (id)_scriptingInfo;	// 0x2f6c2dd1
// declared property getter: - (BOOL)_selectedImageColoringIsStale;	// 0x2f6bc1c5
- (id)_selectedIndicatorView;	// 0x2f6bb7f9
// declared property setter: - (void)_setAppearanceGuideClass:(Class)aClass;	// 0x2f6bc009
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x2f6bbd61
- (void)_setBadgeValue:(id)value;	// 0x2f46c941
- (void)_setBarHeight:(float)height;	// 0x2f469831
// declared property setter: - (void)_setCenterAllContents:(BOOL)contents;	// 0x2f6bc1f5
- (void)_setCustomSelectedIndicatorImage:(id)image;	// 0x2f497bb9
- (void)_setInfoOffset:(UIOffset)offset;	// 0x2f6bbc2d
- (void)_setLabelHidden:(BOOL)hidden;	// 0x2f6bbfe9
- (void)_setSelected:(BOOL)selected;	// 0x2f46a395
// declared property setter: - (void)_setSelectedImageColoringIsStale:(BOOL)stale;	// 0x2f6bc1d5
- (void)_setSelectedInfoOffset:(UIOffset)offset;	// 0x2f6bbbb5
- (void)_setTabBarHitRect:(CGRect)rect;	// 0x2f41a92d
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x2f6bc149
- (void)_showSelectedIndicator:(BOOL)indicator changeSelection:(BOOL)selection;	// 0x2f469a29
- (id)_swappableImageView;	// 0x2f6bbb91
- (CGRect)_tabBarHitRect;	// 0x2f6bbb79
- (UIOffset)_titlePositionAdjustment;	// 0x2f6bc159
- (void)_updateInfoFrame;	// 0x2f46e9b5
- (BOOL)_useBarHeight;	// 0x2f6bbfd9
- (void)dealloc;	// 0x2f6bba89
// declared property getter: - (id)labelOffsetValue;	// 0x2f6bc195
- (void)layoutSubviews;	// 0x2f46e119
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x2f6bbe29
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x2f4f6b09
- (void)setEnabled:(BOOL)enabled;	// 0x2f469951
- (void)setFrame:(CGRect)frame;	// 0x2f41a691
- (void)setImage:(id)image;	// 0x2f6bbb55
// declared property setter: - (void)setLabelOffsetValue:(id)value;	// 0x2f6bc1a5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f6bbef9
// declared property getter: - (id)tabBarButtonLabel;	// 0x2f495e4d
- (void)tintColorDidChange;	// 0x2f6bbdcd
@end


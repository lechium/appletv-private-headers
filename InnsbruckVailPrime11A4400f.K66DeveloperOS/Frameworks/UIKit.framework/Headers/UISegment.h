/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImageView.h"
#import "UIKit-Structs.h"

@class _UIBadgeView, _UISegmentedControlAppearanceStorage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UISegment : UIImageView {
	UIView *_info;	// 144 = 0x90
	_UISegmentedControlAppearanceStorage *_appearanceStorage;	// 148 = 0x94
	float _width;	// 152 = 0x98
	CGSize _contentOffset;	// 156 = 0x9c
	int _barStyle;	// 164 = 0xa4
	unsigned _rightSegmentState;	// 168 = 0xa8
	NSString *_badgeValue;	// 172 = 0xac
	_UIBadgeView *_badgeView;	// 176 = 0xb0
	id _objectValue;	// 180 = 0xb4
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
		unsigned wasSelected : 1;
	} _segmentFlags;	// 184 = 0xb8
	NSArray *_infoConstraints;	// 188 = 0xbc
}
@property(copy, nonatomic, setter=_setInfoConstraints:) NSArray *_infoConstraints;	// G=0x2f615b65; S=0x2f615b79; @synthesize
@property(copy, nonatomic) NSString *badgeValue;	// G=0x2f614af1; S=0x2f614b01; 
@property(readonly, assign) UIView *badgeView;	// G=0x2f4a4b9d; 
@property(assign) int controlSize;	// G=0x2f614be9; S=0x2f5167e5; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x2f49fc59; S=0x2f614a2d; converted property
@property(assign, getter=isMomentary) BOOL momentary;	// G=0x2f614bd5; S=0x2f4a0f81; 
@property(retain) id objectValue;	// G=0x2f615a25; S=0x2f615711; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x2f4a3f91; S=0x2f4a3d2d; 
@property(assign) BOOL showDivider;	// G=0x2f614c01; S=0x2f4a4b29; converted property
+ (id)_backgroundImageWithStorage:(id)storage style:(int)style mini:(BOOL)mini state:(unsigned)state position:(unsigned)position drawMode:(int *)mode defaultBlock:(id)block;	// 0x2f613555
- (id)initWithCoder:(id)coder;	// 0x2f613069
- (id)initWithInfo:(id)info style:(int)style size:(int)size barStyle:(int)style4 tintColor:(id)color appearanceStorage:(id)storage position:(unsigned)position autosizeText:(BOOL)text;	// 0x2f612f09
- (id)_attributedTextForState:(unsigned)state selected:(BOOL)selected;	// 0x2f613e9d
- (float)_barHeight;	// 0x2f4a4931
- (void)_commonSegmentInit;	// 0x2f612ea9
- (CGRect)_contentRectForBounds:(CGRect)bounds;	// 0x2f614e51
- (id)_currentOptionsStyleTextColor;	// 0x2f51ad25
- (id)_currentOptionsStyleTextShadowColor;	// 0x2f51ae99
- (id)_dividerImage;	// 0x2f4a03cd
- (id)_dividerImageIsCustom:(BOOL *)custom;	// 0x2f4a03e1
- (void)_forceInfoDisplay;	// 0x2f615a35
- (BOOL)_hasSelectedColor;	// 0x2f613cf5
- (float)_idealWidth;	// 0x2f4a4741
// declared property getter: - (id)_infoConstraints;	// 0x2f615b65
- (void)_invalidateInfoConstraints;	// 0x2f6152ed
- (BOOL)_isInMiniBar;	// 0x2f4a01e9
- (CGSize)_maximumTextSize;	// 0x2f61508d
- (UIEdgeInsets)_paddingInsets;	// 0x2f4a4965
- (void)_populateArchivedSubviews:(id)subviews;	// 0x2f613225
- (void)_positionInfo;	// 0x2f49ff01
- (unsigned)_segmentState;	// 0x2f49fe61
- (void)_setEnabledAppearance:(BOOL)appearance;	// 0x2f4a0ddd
// declared property setter: - (void)_setInfoConstraints:(id)constraints;	// 0x2f615b79
- (BOOL)_shouldUsePadMomentaryAppearance;	// 0x2f614c19
- (id)_tintColorArchivingKey;	// 0x2f613219
- (void)_updateBackgroundImage;	// 0x2f4a07c1
- (void)_updateTextColors;	// 0x2f49fdbd
- (void)animateAdd:(BOOL)add;	// 0x2f614c9d
- (void)animateRemoveForWidth:(float)width;	// 0x2f614cd9
// declared property getter: - (id)badgeValue;	// 0x2f614af1
// declared property getter: - (id)badgeView;	// 0x2f4a4b9d
- (CGRect)contentRect;	// 0x2f4a0195
- (CGSize)contentSize;	// 0x2f4a47d5
// declared property getter: - (int)controlSize;	// 0x2f614be9
- (void)dealloc;	// 0x2f518c25
- (id)disabledTextColor;	// 0x2f614715
- (void)encodeWithCoder:(id)coder;	// 0x2f6132a9
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x2f615ad5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x2f522859
- (id)infoName;	// 0x2f615a6d
- (void)insertDividerView;	// 0x2f4a0211
// converted property getter: - (BOOL)isHighlighted;	// 0x2f49fc59
// declared property getter: - (BOOL)isMomentary;	// 0x2f614bd5
// declared property getter: - (BOOL)isSelected;	// 0x2f4a3f91
// converted property getter: - (id)objectValue;	// 0x2f615a25
- (void)setAutosizeText:(BOOL)text;	// 0x2f6149c9
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x2f614b01
- (void)setBarStyle:(int)style;	// 0x2f6148ad
- (void)setBounds:(CGRect)bounds;	// 0x2f61563d
- (void)setContentOffset:(CGSize)offset;	// 0x2f523bdd
// declared property setter: - (void)setControlSize:(int)size;	// 0x2f5167e5
- (void)setEnabled:(BOOL)enabled;	// 0x2f4a0d79
- (void)setFrame:(CGRect)frame;	// 0x2f49fc71
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x2f614a2d
// declared property setter: - (void)setMomentary:(BOOL)momentary;	// 0x2f4a0f81
// converted property setter: - (void)setObjectValue:(id)value;	// 0x2f615711
- (void)setPosition:(unsigned)position;	// 0x2f4a4aa9
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x2f4a3d2d
// converted property setter: - (void)setShowDivider:(BOOL)divider;	// 0x2f4a4b29
- (void)setTintColor:(id)color;	// 0x2f5173d1
- (void)setWasSelected:(BOOL)selected;	// 0x2f613e5d
// converted property getter: - (BOOL)showDivider;	// 0x2f614c01
- (void)tintColorDidChange;	// 0x2f614a99
- (void)updateConstraints;	// 0x2f615381
- (void)updateDividerViewForChangedSegment:(id)changedSegment;	// 0x2f4a3da9
- (void)updateForAppearance:(id)appearance style:(int)style;	// 0x2f5171f5
- (void)updateMasking;	// 0x2f613d41
- (BOOL)useBlockyMagnificationInClassic;	// 0x2f615b51
- (id)viewForBaselineLayout;	// 0x2f615b55
@end

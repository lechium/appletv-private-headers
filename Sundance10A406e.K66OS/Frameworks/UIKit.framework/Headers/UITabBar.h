/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "_UIShadowedView.h"

@class UIImageView, NSArray, UITabBarItem, UIColor, NSMutableArray, UIImage;
@protocol UITabBarDelegate;

@interface UITabBar : UIView <_UIShadowedView> {
	UIView *_customizeView;	// 84 = 0x54
	UIView *_backgroundView;	// 88 = 0x58
	UIImageView *_shadowView;	// 92 = 0x5c
	id<UITabBarDelegate> _delegate;	// 96 = 0x60
	NSArray *_items;	// 100 = 0x64
	UITabBarItem *_selectedItem;	// 104 = 0x68
	NSArray *_customizationItems;	// 108 = 0x6c
	struct {
		unsigned pushedRunLoop : 1;
		unsigned isRotatingRight : 1;
		unsigned isZoomRubberBandEnabled : 1;
		unsigned zoomsFromCurrentToMinOrMax : 1;
		unsigned updatesScroller : 1;
		unsigned isAnimatingZoomFailure : 1;
	} _tabBarFlags;	// 112 = 0x70
	NSArray *_buttonItems;	// 116 = 0x74
	CFArrayRef _hiddenItems;	// 120 = 0x78
	id _appearanceStorage;	// 124 = 0x7c
	float _nextSelectionSlideDuration;	// 128 = 0x80
	float _tabButtonWidth;	// 132 = 0x84
	float _interTabButtonSpacing;	// 136 = 0x88
	BOOL _dividerImagesChangeWithSelection;	// 140 = 0x8c
	BOOL _dividerImagesAreInvalid;	// 141 = 0x8d
	NSMutableArray *_dividerImageViews;	// 144 = 0x90
}
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;	// G=0x30b392a1; S=0x30b39231; 
@property(retain, nonatomic, setter=_setDividerImageViews:) NSMutableArray *_dividerImageViews;	// G=0x30b3afc1; S=0x30b3afd1; @synthesize
@property(assign, nonatomic, setter=_setDividerImagesAreInvalid:) BOOL _dividerImagesAreInvalid;	// G=0x30b3afa1; S=0x30b3afb1; @synthesize
@property(assign, nonatomic, setter=_setDividerImagesChangeWithSelection:) BOOL _dividerImagesChangeWithSelection;	// G=0x30b3af81; S=0x30b3af91; @synthesize
@property(assign, nonatomic, setter=_setInterTabButtonSpacing:) float _interTabButtonSpacing;	// G=0x30b3af61; S=0x30b3af71; @synthesize
@property(assign, nonatomic, setter=_setNextSelectionSlideDuration:) float _nextSelectionSlideDuration;	// G=0x30b3af21; S=0x30b3af31; @synthesize
@property(assign, nonatomic, setter=_setTabButtonWidth:) float _tabButtonWidth;	// G=0x30b3af41; S=0x30b3af51; @synthesize
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x30b3ab7d; S=0x30974261; 
@property(retain) NSArray *buttonItems;	// G=0x30b3b56d; S=0x30b3b57d; converted property
@property(assign, nonatomic) id<UITabBarDelegate> delegate;	// G=0x30b3af11; S=0x30941ef5; @synthesize=_delegate
@property(copy, nonatomic) NSArray *items;	// G=0x30947c59; S=0x30b39e3d; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x308eedfd; S=0x308ee7b1; converted property
@property(retain, nonatomic) UIColor *selectedImageTintColor;	// G=0x30b3aecd; S=0x30b3ae25; 
@property(assign, nonatomic) UITabBarItem *selectedItem;	// G=0x3097278d; S=0x30945965; 
@property(retain, nonatomic) UIImage *selectionIndicatorImage;	// G=0x30b3abc1; S=0x309743b9; 
@property(retain, nonatomic) UIImage *shadowImage;	// G=0x30b3aba1; S=0x309745ad; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x30943abd; S=0x30b3ad6d; 
+ (float)_buttonGap;	// 0x30b3b5c1
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x30b3afe1
- (id)initWithCoder:(id)coder;	// 0x30b39839
- (id)initWithFrame:(CGRect)frame;	// 0x30941575
- (void)_activityViewControllerIsAppearing:(id)appearing;	// 0x30a45e95
- (void)_activityViewControllerIsDisappearing:(id)disappearing;	// 0x30a525d9
- (void)_adjustButtonSelection:(id)selection;	// 0x309e54d1
- (void)_alertDidHide;	// 0x30b3b8c1
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x30b3b5c9
- (void)_animateSelectionChangeFromView:(id)view toView:(id)view2 duration:(float)duration;	// 0x30b39e71
- (id)_appearanceStorage;	// 0x30943aa9
- (float)_autolayoutSpacingAtEdge:(int)edge inContainer:(id)container;	// 0x30ced4fd
- (float)_autolayoutSpacingAtEdge:(int)edge nextToNeighbor:(id)neighbor;	// 0x30ced515
// declared property getter: - (id)_backgroundView;	// 0x30b392a1
- (void)_buttonCancel:(id)cancel;	// 0x30b3b969
- (void)_buttonDown:(id)down;	// 0x309e53fd
- (void)_buttonDownDelayed:(id)delayed;	// 0x30b3b921
- (void)_buttonUp:(id)up;	// 0x309e5451
- (BOOL)_canDrawContent;	// 0x30941645
- (void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;	// 0x30b3c3b1
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x30b3a879
- (void)_customizeDoneButtonAction:(id)action;	// 0x30b3bba1
- (void)_customizeWithAvailableItems:(id)availableItems;	// 0x30b3bd19
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x30948d59
- (void)_dismissCustomizeSheet:(BOOL)sheet;	// 0x30b3b9a1
- (id)_dividerImageForLeftButtonState:(unsigned)leftButtonState rightButtonState:(unsigned)state;	// 0x30b3aef1
// declared property getter: - (id)_dividerImageViews;	// 0x30b3afc1
// declared property getter: - (BOOL)_dividerImagesAreInvalid;	// 0x30b3afa1
// declared property getter: - (BOOL)_dividerImagesChangeWithSelection;	// 0x30b3af81
- (void)_finishCustomizeAnimation:(id)animation;	// 0x30b3bbb5
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x308efbe9
- (BOOL)_hasCustomAutolayoutNeighborSpacing;	// 0x30ced4f9
- (void)_hideItemsAnimated:(BOOL)animated;	// 0x30b3a41d
// declared property getter: - (float)_interTabButtonSpacing;	// 0x30b3af61
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x30941e95
- (void)_invalidateDividerImages;	// 0x30974c2d
- (BOOL)_isHidden:(id)hidden;	// 0x30b3c64d
// declared property getter: - (float)_nextSelectionSlideDuration;	// 0x30b3af21
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30b39991
- (void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;	// 0x308eee99
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x309e55fd
- (void)_setBackgroundImage:(id)image;	// 0x30b392b1
// declared property setter: - (void)_setBackgroundView:(id)view;	// 0x30b39231
- (void)_setDividerImage:(id)image forLeftButtonState:(unsigned)leftButtonState rightButtonState:(unsigned)state;	// 0x309748e1
// declared property setter: - (void)_setDividerImageViews:(id)views;	// 0x30b3afd1
// declared property setter: - (void)_setDividerImagesAreInvalid:(BOOL)invalid;	// 0x30b3afb1
// declared property setter: - (void)_setDividerImagesChangeWithSelection:(BOOL)selection;	// 0x30b3af91
// declared property setter: - (void)_setInterTabButtonSpacing:(float)spacing;	// 0x30b3af71
- (void)_setLabelFont:(id)font;	// 0x30b392c1
- (void)_setLabelShadowColor:(id)color;	// 0x30b39581
- (void)_setLabelShadowOffset:(CGSize)offset;	// 0x30b396c9
- (void)_setLabelTextColor:(id)color selectedTextColor:(id)color2;	// 0x30b39409
// declared property setter: - (void)_setNextSelectionSlideDuration:(float)duration;	// 0x30b3af31
- (void)_setSelectionIndicatorImage:(id)image;	// 0x309743a9
// declared property setter: - (void)_setTabButtonWidth:(float)width;	// 0x30b3af51
- (id)_shadowView;	// 0x30a36ffd
- (void)_showItemsAnimated:(BOOL)animated;	// 0x30b3a729
- (BOOL)_subclassImplementsDrawRect;	// 0x309415c5
- (void)_tabBarFinishedAnimating;	// 0x30b3b005
// declared property getter: - (float)_tabButtonWidth;	// 0x30b3af41
- (id)_topmostDividerImageView;	// 0x30b39e51
- (void)_updateAppearanceCustomizationIfNecessaryForItem:(id)item;	// 0x30b3c251
- (void)_updateBackgroundImage;	// 0x3094177d
- (void)_updateDividerImagesIfNecessary;	// 0x308ef9f9
- (void)_updateTintedImages:(id)images selected:(BOOL)selected;	// 0x30b3abe1
- (void)addConstraint:(id)constraint;	// 0x30b3a8fd
// declared property getter: - (id)backgroundImage;	// 0x30b3ab7d
- (void)beginCustomizingItems:(id)items;	// 0x30b3aa01
// converted property getter: - (id)buttonItems;	// 0x30b3b56d
- (void)dealloc;	// 0x30b39c21
// declared property getter: - (id)delegate;	// 0x30b3af11
- (void)dismissCustomizeSheet:(BOOL)sheet;	// 0x30b3b025
- (void)drawRect:(CGRect)rect;	// 0x30b3b359
- (void)encodeWithCoder:(id)coder;	// 0x30b39ae1
- (BOOL)endCustomizingAnimated:(BOOL)animated;	// 0x30b3aaf9
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30b3c5e5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x309e5361
- (BOOL)isCustomizing;	// 0x30a34131
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x30b4aa5d
// converted property getter: - (BOOL)isLocked;	// 0x308eedfd
// declared property getter: - (id)items;	// 0x30947c59
- (void)layoutSubviews;	// 0x309492a1
- (void)removeConstraint:(id)constraint;	// 0x30b3a97d
// declared property getter: - (id)selectedImageTintColor;	// 0x30b3aecd
// declared property getter: - (id)selectedItem;	// 0x3097278d
// declared property getter: - (id)selectionIndicatorImage;	// 0x30b3abc1
- (void)setAutoresizingMask:(unsigned)mask;	// 0x30941ea5
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x30974261
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x30b3b251
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x30b3b1fd
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x30b3b1a9
- (void)setBounds:(CGRect)bounds;	// 0x30b3b2a9
// converted property setter: - (void)setButtonItems:(id)items;	// 0x30b3b57d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30941ef5
- (void)setFrame:(CGRect)frame;	// 0x30941691
// declared property setter: - (void)setItems:(id)items;	// 0x30b39e3d
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x308ee7e9
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x308ee7b1
// declared property setter: - (void)setSelectedImageTintColor:(id)color;	// 0x30b3ae25
// declared property setter: - (void)setSelectedItem:(id)item;	// 0x30945965
// declared property setter: - (void)setSelectionIndicatorImage:(id)image;	// 0x309743b9
// declared property setter: - (void)setShadowImage:(id)image;	// 0x309745ad
// declared property setter: - (void)setTintColor:(id)color;	// 0x30b3ad6d
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)constraints;	// 0x30b3a87d
// declared property getter: - (id)shadowImage;	// 0x30b3aba1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30941dcd
// declared property getter: - (id)tintColor;	// 0x30943abd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30b3b049
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30b3b151
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30b3b0f9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30b3b0a1
@end

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
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;	// G=0x32d6f7d1; S=0x32d6f761; 
@property(retain, nonatomic, setter=_setDividerImageViews:) NSMutableArray *_dividerImageViews;	// G=0x32d714f1; S=0x32d71501; @synthesize
@property(assign, nonatomic, setter=_setDividerImagesAreInvalid:) BOOL _dividerImagesAreInvalid;	// G=0x32d714d1; S=0x32d714e1; @synthesize
@property(assign, nonatomic, setter=_setDividerImagesChangeWithSelection:) BOOL _dividerImagesChangeWithSelection;	// G=0x32d714b1; S=0x32d714c1; @synthesize
@property(assign, nonatomic, setter=_setInterTabButtonSpacing:) float _interTabButtonSpacing;	// G=0x32d71491; S=0x32d714a1; @synthesize
@property(assign, nonatomic, setter=_setNextSelectionSlideDuration:) float _nextSelectionSlideDuration;	// G=0x32d71451; S=0x32d71461; @synthesize
@property(assign, nonatomic, setter=_setTabButtonWidth:) float _tabButtonWidth;	// G=0x32d71471; S=0x32d71481; @synthesize
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x32d710ad; S=0x32baa281; 
@property(retain) NSArray *buttonItems;	// G=0x32d71a9d; S=0x32d71aad; converted property
@property(assign, nonatomic) id<UITabBarDelegate> delegate;	// G=0x32d71441; S=0x32b77f15; @synthesize=_delegate
@property(copy, nonatomic) NSArray *items;	// G=0x32b7dc79; S=0x32d7036d; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x32b24e05; S=0x32b247b9; converted property
@property(retain, nonatomic) UIColor *selectedImageTintColor;	// G=0x32d713fd; S=0x32d71355; 
@property(assign, nonatomic) UITabBarItem *selectedItem;	// G=0x32ba87ad; S=0x32b7b985; 
@property(retain, nonatomic) UIImage *selectionIndicatorImage;	// G=0x32d710f1; S=0x32baa3d9; 
@property(retain, nonatomic) UIImage *shadowImage;	// G=0x32d710d1; S=0x32baa5cd; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32b79add; S=0x32d7129d; 
+ (float)_buttonGap;	// 0x32d71af1
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x32d71511
- (id)initWithCoder:(id)coder;	// 0x32d6fd69
- (id)initWithFrame:(CGRect)frame;	// 0x32b77595
- (void)_activityViewControllerIsAppearing:(id)appearing;	// 0x32c7bf7d
- (void)_activityViewControllerIsDisappearing:(id)disappearing;	// 0x32c886c1
- (void)_adjustButtonSelection:(id)selection;	// 0x32c1b5b1
- (void)_alertDidHide;	// 0x32d71df1
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x32d71af9
- (void)_animateSelectionChangeFromView:(id)view toView:(id)view2 duration:(float)duration;	// 0x32d703a1
- (id)_appearanceStorage;	// 0x32b79ac9
- (float)_autolayoutSpacingAtEdge:(int)edge inContainer:(id)container;	// 0x32f242f5
- (float)_autolayoutSpacingAtEdge:(int)edge nextToNeighbor:(id)neighbor;	// 0x32f2430d
// declared property getter: - (id)_backgroundView;	// 0x32d6f7d1
- (void)_buttonCancel:(id)cancel;	// 0x32d71e99
- (void)_buttonDown:(id)down;	// 0x32c1b4dd
- (void)_buttonDownDelayed:(id)delayed;	// 0x32d71e51
- (void)_buttonUp:(id)up;	// 0x32c1b531
- (BOOL)_canDrawContent;	// 0x32b77665
- (void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;	// 0x32d728e1
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x32d70da9
- (void)_customizeDoneButtonAction:(id)action;	// 0x32d720d1
- (void)_customizeWithAvailableItems:(id)availableItems;	// 0x32d72249
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32b7ed79
- (void)_dismissCustomizeSheet:(BOOL)sheet;	// 0x32d71ed1
- (id)_dividerImageForLeftButtonState:(unsigned)leftButtonState rightButtonState:(unsigned)state;	// 0x32d71421
// declared property getter: - (id)_dividerImageViews;	// 0x32d714f1
// declared property getter: - (BOOL)_dividerImagesAreInvalid;	// 0x32d714d1
// declared property getter: - (BOOL)_dividerImagesChangeWithSelection;	// 0x32d714b1
- (void)_finishCustomizeAnimation:(id)animation;	// 0x32d720e5
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x32b25bf1
- (BOOL)_hasCustomAutolayoutNeighborSpacing;	// 0x32f242f1
- (void)_hideItemsAnimated:(BOOL)animated;	// 0x32d7094d
// declared property getter: - (float)_interTabButtonSpacing;	// 0x32d71491
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x32b77eb5
- (void)_invalidateDividerImages;	// 0x32baac4d
- (BOOL)_isHidden:(id)hidden;	// 0x32d72b7d
// declared property getter: - (float)_nextSelectionSlideDuration;	// 0x32d71451
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32d6fec1
- (void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;	// 0x32b24ea1
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x32c1b6dd
- (void)_setBackgroundImage:(id)image;	// 0x32d6f7e1
// declared property setter: - (void)_setBackgroundView:(id)view;	// 0x32d6f761
- (void)_setDividerImage:(id)image forLeftButtonState:(unsigned)leftButtonState rightButtonState:(unsigned)state;	// 0x32baa901
// declared property setter: - (void)_setDividerImageViews:(id)views;	// 0x32d71501
// declared property setter: - (void)_setDividerImagesAreInvalid:(BOOL)invalid;	// 0x32d714e1
// declared property setter: - (void)_setDividerImagesChangeWithSelection:(BOOL)selection;	// 0x32d714c1
// declared property setter: - (void)_setInterTabButtonSpacing:(float)spacing;	// 0x32d714a1
- (void)_setLabelFont:(id)font;	// 0x32d6f7f1
- (void)_setLabelShadowColor:(id)color;	// 0x32d6fab1
- (void)_setLabelShadowOffset:(CGSize)offset;	// 0x32d6fbf9
- (void)_setLabelTextColor:(id)color selectedTextColor:(id)color2;	// 0x32d6f939
// declared property setter: - (void)_setNextSelectionSlideDuration:(float)duration;	// 0x32d71461
- (void)_setSelectionIndicatorImage:(id)image;	// 0x32baa3c9
// declared property setter: - (void)_setTabButtonWidth:(float)width;	// 0x32d71481
- (id)_shadowView;	// 0x32c6d0e5
- (void)_showItemsAnimated:(BOOL)animated;	// 0x32d70c59
- (BOOL)_subclassImplementsDrawRect;	// 0x32b775e5
- (void)_tabBarFinishedAnimating;	// 0x32d71535
// declared property getter: - (float)_tabButtonWidth;	// 0x32d71471
- (id)_topmostDividerImageView;	// 0x32d70381
- (void)_updateAppearanceCustomizationIfNecessaryForItem:(id)item;	// 0x32d72781
- (void)_updateBackgroundImage;	// 0x32b7779d
- (void)_updateDividerImagesIfNecessary;	// 0x32b25a01
- (void)_updateTintedImages:(id)images selected:(BOOL)selected;	// 0x32d71111
- (void)addConstraint:(id)constraint;	// 0x32d70e2d
// declared property getter: - (id)backgroundImage;	// 0x32d710ad
- (void)beginCustomizingItems:(id)items;	// 0x32d70f31
// converted property getter: - (id)buttonItems;	// 0x32d71a9d
- (void)dealloc;	// 0x32d70151
// declared property getter: - (id)delegate;	// 0x32d71441
- (void)dismissCustomizeSheet:(BOOL)sheet;	// 0x32d71555
- (void)drawRect:(CGRect)rect;	// 0x32d71889
- (void)encodeWithCoder:(id)coder;	// 0x32d70011
- (BOOL)endCustomizingAnimated:(BOOL)animated;	// 0x32d71029
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32d72b15
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32c1b441
- (BOOL)isCustomizing;	// 0x32c6a219
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32d80f8d
// converted property getter: - (BOOL)isLocked;	// 0x32b24e05
// declared property getter: - (id)items;	// 0x32b7dc79
- (void)layoutSubviews;	// 0x32b7f2c1
- (void)removeConstraint:(id)constraint;	// 0x32d70ead
// declared property getter: - (id)selectedImageTintColor;	// 0x32d713fd
// declared property getter: - (id)selectedItem;	// 0x32ba87ad
// declared property getter: - (id)selectionIndicatorImage;	// 0x32d710f1
- (void)setAutoresizingMask:(unsigned)mask;	// 0x32b77ec5
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x32baa281
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x32d71781
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x32d7172d
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x32d716d9
- (void)setBounds:(CGRect)bounds;	// 0x32d717d9
// converted property setter: - (void)setButtonItems:(id)items;	// 0x32d71aad
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32b77f15
- (void)setFrame:(CGRect)frame;	// 0x32b776b1
// declared property setter: - (void)setItems:(id)items;	// 0x32d7036d
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x32b247f1
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x32b247b9
// declared property setter: - (void)setSelectedImageTintColor:(id)color;	// 0x32d71355
// declared property setter: - (void)setSelectedItem:(id)item;	// 0x32b7b985
// declared property setter: - (void)setSelectionIndicatorImage:(id)image;	// 0x32baa3d9
// declared property setter: - (void)setShadowImage:(id)image;	// 0x32baa5cd
// declared property setter: - (void)setTintColor:(id)color;	// 0x32d7129d
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)constraints;	// 0x32d70dad
// declared property getter: - (id)shadowImage;	// 0x32d710d1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32b77ded
// declared property getter: - (id)tintColor;	// 0x32b79add
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32d71579
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32d71681
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32d71629
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32d715d1
@end

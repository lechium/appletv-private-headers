/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"
#import "_UIShadowedView.h"
#import "UIStatusBarTinting.h"

@class NSDictionary, NSMutableArray, UINavigationItem, UIColor, UIImage, NSArray;

@interface UINavigationBar : UIView <_UIShadowedView, UIStatusBarTinting, NSCoding> {
	NSMutableArray *_itemStack;	// 84 = 0x54
	float _rightMargin;	// 88 = 0x58
	unsigned _state;	// 92 = 0x5c
	id _delegate;	// 96 = 0x60
	UIView *_backgroundView;	// 100 = 0x64
	UIView *_titleView;	// 104 = 0x68
	NSArray *_leftViews;	// 108 = 0x6c
	NSArray *_rightViews;	// 112 = 0x70
	UIView *_prompt;	// 116 = 0x74
	UIView *_accessoryView;	// 120 = 0x78
	UIColor *_tintColor;	// 124 = 0x7c
	id _appearanceStorage;	// 128 = 0x80
	id _currentAlert;	// 132 = 0x84
	struct {
		unsigned animate : 1;
		unsigned animationDisabledCount : 10;
		unsigned transitioningBarStyle : 1;
		unsigned newBarStyle : 3;
		unsigned transitioningToTranslucent : 1;
		unsigned barStyle : 3;
		unsigned isTranslucent : 1;
		unsigned disableLayout : 1;
		unsigned backPressed : 1;
		unsigned animatePromptChange : 1;
		unsigned pendingHideBackButton : 1;
		unsigned titleAutosizesToFit : 1;
		unsigned usingNewAPI : 1;
		unsigned minibar : 1;
		unsigned forceFullHeightInLandscape : 1;
		unsigned isLocked : 1;
		unsigned shouldUpdatePromptAfterTransition : 1;
		unsigned crossfadeItems : 1;
		unsigned autoAdjustTitle : 1;
		unsigned isContainedInPopover : 1;
		unsigned needsDrawRect : 1;
		unsigned animationCleanupCancelled : 1;
		unsigned forceLayout : 1;
		unsigned layoutInProgress : 1;
		unsigned dynamicDuration : 1;
		unsigned isInteractive : 1;
		unsigned cancelledTransition : 1;
		unsigned animationCount : 4;
	} _navbarFlags;	// 136 = 0x88
}
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;	// G=0x33bab91d; S=0x33bab92d; 
@property(readonly, assign, nonatomic) UINavigationItem *backItem;	// G=0x33a6e975; 
@property(assign, nonatomic) int barStyle;	// G=0x33a41175; S=0x33aae2fd; 
@property(assign, nonatomic) id delegate;	// G=0x33aae62d; S=0x33a28015; 
@property(assign) BOOL forceFullHeightInLandscape;	// G=0x33a1b69d; S=0x33a1b419; converted property
@property(copy, nonatomic) NSArray *items;	// G=0x33a99d29; S=0x33a99ddd; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x33a2807d; S=0x33a28091; converted property
@property(retain) id navigationItems;	// G=0x33a99d4d; S=0x33badf5d; converted property
@property(retain) UIView *prompt;	// G=0x33a1b7f1; S=0x33a2ef25; converted property
@property(retain, nonatomic) UIImage *shadowImage;	// G=0x33bacbe1; S=0x33baca51; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x33a47919; S=0x33a93051; 
@property(assign) BOOL titleAutoresizesToFit;	// G=0x33a2d5c9; S=0x33baebe1; converted property
@property(copy, nonatomic) NSDictionary *titleTextAttributes;	// G=0x33bac895; S=0x33bac81d; 
@property(readonly, assign, nonatomic) UINavigationItem *topItem;	// G=0x33a29475; 
@property(assign) float topItemAlpha;	// G=0x33bb0b31; S=0x33bb0b51; converted property
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x33a478cd; S=0x33aae545; 
+ (id)_bottomColorForBackgroundImage:(id)backgroundImage viewSize:(CGSize)size;	// 0x33bac161
+ (void)_setUseCustomBackButtonAction:(BOOL)action;	// 0x33bb28f5
+ (id)_statusBarBaseTintColorForStyle:(int)style translucent:(BOOL)translucent tintColor:(id)color;	// 0x33bac53d
+ (id)_statusBarBaseTintColorForStyle:(int)style translucent:(BOOL)translucent tintColor:(id)color backgroundImage:(id)image viewSize:(CGSize)size;	// 0x33bac4c9
+ (BOOL)_useCustomBackButtonAction;	// 0x33bb2905
+ (id)defaultPromptFont;	// 0x33b58729
+ (CGSize)defaultSize;	// 0x33a27ed1
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x33a27ef9
+ (CGSize)defaultSizeWithPrompt;	// 0x33bacf1d
+ (CGSize)defaultSizeWithPromptForOrientation:(int)orientation;	// 0x33b58589
+ (void)setDefaultAnimationDuration:(double)duration;	// 0x33bacf45
- (id)initWithCoder:(id)coder;	// 0x33bacf59
- (id)initWithFrame:(CGRect)frame;	// 0x33a26d19
- (void)_alertIsAppearing:(id)appearing;	// 0x33bae355
- (void)_alertIsDisappearing:(id)disappearing;	// 0x33bae4dd
- (id)_allViews;	// 0x33b1ef0d
- (id)_appearanceStorage;	// 0x33a43779
- (void)_applySPIAppearanceToButtons;	// 0x33ab45f5
- (float)_autolayoutSpacingAtEdge:(int)edge inContainer:(id)container;	// 0x33e1b6a5
- (float)_autolayoutSpacingAtEdge:(int)edge nextToNeighbor:(id)neighbor;	// 0x33e1b6bd
- (void)_backgroundFadeDidFinish:(id)_backgroundFade finished:(id)finished context:(void *)context;	// 0x33b46831
// declared property getter: - (id)_backgroundView;	// 0x33bab91d
- (int)_barStyle:(BOOL)style;	// 0x33a2d031
- (CGRect)_boundsForPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;	// 0x33bb1639
- (BOOL)_canDrawContent;	// 0x33a26eb1
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x33b6c691
- (void)_cancelInProgressPushOrPop;	// 0x33aa84cd
- (void)_cancelInteractiveTransition;	// 0x33bae0e5
- (void)_cancelInteractiveTransition:(float)transition;	// 0x33badc01
- (id)_commonHitTest:(CGPoint)test forView:(id)view;	// 0x33abfa49
- (void)_commonNavBarInit;	// 0x33a26fc9
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x33badf71
- (void)_crossFadeToBarBackgroundImageForItem:(id)item;	// 0x33bb171d
- (int)_currentBarStyle;	// 0x33badee9
- (id)_currentLeftViews;	// 0x33a294e1
- (id)_currentRightViews;	// 0x33a29669
- (void)_customViewChangedForButtonItem:(id)buttonItem;	// 0x33b5de29
- (void)_decrementAnimationCountIfNecessary;	// 0x33baed69
- (id)_defaultTitleFont;	// 0x33a4a351
- (id)_defaultTitleFontFittingHeight:(float)height;	// 0x33bad4a9
- (BOOL)_deferShadowToSearchBar;	// 0x33bacce5
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x33a301b5
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)newItems oldItems:(id)items;	// 0x33a9a345
- (void)_drawPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;	// 0x33b58751
- (id)_effectiveTintColor;	// 0x33a2782d
- (void)_fadeAllViewsIn;	// 0x33b1ee2d
- (void)_fadeAllViewsOut;	// 0x33bb1f45
- (void)_fadeViewOut:(id)anOut;	// 0x33bb1ed5
- (void)_fadeViewsIn:(id)anIn;	// 0x33ac23bd
- (void)_fadeViewsOut:(id)anOut;	// 0x33ac2361
- (void)_finishInteractiveTransition:(float)transition;	// 0x33badac1
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3;	// 0x33a2967d
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views;	// 0x33a296a1
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views forItemAtIndex:(unsigned)index;	// 0x33a29739
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrames:(id)frames rightViewFrames:(id)frames3;	// 0x33bb2569
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrames:(id)frames rightViewFrames:(id)frames3 forItemAtIndex:(unsigned)index;	// 0x33a298f9
- (void)_handleMouseDownAtPoint:(CGPoint)point;	// 0x33ac0675
- (void)_handleMouseUpAtPoint:(CGPoint)point;	// 0x33ac09e9
- (BOOL)_hasBackButton;	// 0x33a295e1
- (BOOL)_hasCustomAutolayoutNeighborSpacing;	// 0x33e1b6a1
- (void)_hideButtonsAnimationDidStop:(id)_hideButtonsAnimation finished:(id)finished context:(void *)context;	// 0x33bb069d
- (BOOL)_hidesShadow;	// 0x33bacc01
- (void)_incrementAnimationCountIfNecessary;	// 0x33baed35
- (BOOL)_isIncomingButtonSameAsOutgoingButtonOnLeft:(BOOL)left;	// 0x33bafc25
- (id)_itemStack;	// 0x33bb25f9
- (void)_navBarButtonPressed:(id)pressed;	// 0x33bb2849
- (void)_navigationAnimationDidFinish:(id)_navigationAnimation finished:(id)finished context:(void *)context;	// 0x33ac2861
- (id)_popNavigationItemWithTransition:(int)transition;	// 0x33a777f1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33bad1d9
- (void)_prepareForPopAnimationWithNewTopItem:(id)newTopItem;	// 0x33a78381
- (void)_prepareForPushAnimationWithItems:(id)items;	// 0x33a2d141
- (void)_propagateEffectiveTintColorWithPreviousColor:(id)previousColor;	// 0x33bae901
- (void)_pushNavigationItem:(id)item transition:(int)transition;	// 0x33a2c721
- (void)_removeAccessoryView;	// 0x33bb14d1
- (void)_removeItemsFromSuperview:(id)superview;	// 0x33a9a431
- (void)_resetBackgroundImageAsNecessary;	// 0x33badcb5
- (void)_setAutoAdjustTitle:(BOOL)title;	// 0x33a93871
- (void)_setBackButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x33ab424d
- (void)_setBackgroundImage:(id)image mini:(id)mini;	// 0x33bab9c5
// declared property setter: - (void)_setBackgroundView:(id)view;	// 0x33bab92d
- (void)_setBarStyle:(int)style;	// 0x33a2d67d
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x33ab47bd
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color2;	// 0x33babc75
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color2 forState:(unsigned)state;	// 0x33bab9f9
- (void)_setButtonTextShadowOffset:(CGSize)offset;	// 0x33babcbd
- (void)_setDeferShadowToSearchBar:(BOOL)searchBar;	// 0x33bacd09
- (void)_setHidesShadow:(BOOL)shadow;	// 0x33bacc25
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x33bae991
- (void)_setItems:(id)items transition:(int)transition;	// 0x33a99ec9
- (void)_setLeftView:(id)view rightView:(id)view2;	// 0x33bafb29
- (void)_setLeftViews:(id)views rightViews:(id)views2;	// 0x33a2d931
- (void)_setNeedsLayoutForce:(BOOL)force;	// 0x33bb2609
- (void)_setPressedButtonItemTextColor:(id)color shadowColor:(id)color2;	// 0x33babc99
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)pressed;	// 0x33babf21
- (void)_setupTopNavItem:(id)item oldTopNavItem:(id)item2;	// 0x33a9a509
- (id)_shadowView;	// 0x33bb2915
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)navigationItem;	// 0x33a5fa25
- (void)_showLeftRightButtonsAnimationDidStop:(id)_showLeftRightButtonsAnimation finished:(id)finished context:(void *)context;	// 0x33ac2f25
- (void)_startBarStyleAnimation:(int)animation withTintColor:(id)tintColor;	// 0x33b45d89
- (void)_startPopAnimationFromItems:(id)items fromBarStyle:(int)barStyle toItems:(id)items3 toBarStyle:(int)barStyle4;	// 0x33ac1591
- (void)_startPushAnimationFromItems:(id)items fromBarStyle:(int)barStyle;	// 0x33b0a635
- (id)_statusBarTintColor;	// 0x33baea69
- (BOOL)_subclassImplementsDrawBackgroundInRect;	// 0x33a27109
- (BOOL)_subclassImplementsDrawRect;	// 0x33a26db1
- (unsigned)_subviewIndexAboveBackground;	// 0x33ac2291
- (void)_tintViewAppearanceDidChange;	// 0x33bac579
- (int)_transitionForOldItems:(id)oldItems newItems:(id)items;	// 0x33badf09
- (void)_updateBackgroundImage;	// 0x33a27b5d
- (void)_updateInteractiveTransition:(float)transition;	// 0x33bada09
- (void)_updateNavigationBarItem:(id)item forStyle:(int)style;	// 0x33a277ed
- (void)_updateNavigationBarItem:(id)item forStyle:(int)style previousTintColor:(id)color;	// 0x33a2785d
- (void)_updateNavigationBarItemsForStyle:(int)style;	// 0x33aae311
- (void)_updateNavigationBarItemsForStyle:(int)style previousTintColor:(id)color;	// 0x33aae349
- (void)_updateOpacity;	// 0x33a26f01
- (void)_updateTitleView;	// 0x33b251a9
- (void)_wrapView:(id)view inClippingViewWithLeftBoundary:(float)leftBoundary rightBoundary:(float)boundary tag:(int)tag;	// 0x33bb1ae5
- (void)addConstraint:(id)constraint;	// 0x33bae65d
- (unsigned)animationDisabledCount;	// 0x33baef11
- (CGRect)availableTitleArea;	// 0x33bb07e1
- (id)backButtonViewAtPoint:(CGPoint)point;	// 0x33ac0e21
// declared property getter: - (id)backItem;	// 0x33a6e975
- (id)backgroundImageForBarMetrics:(int)barMetrics;	// 0x33bac7c9
// declared property getter: - (int)barStyle;	// 0x33a41175
- (id)buttonItemShadowColor;	// 0x33a58681
- (id)buttonItemTextColor;	// 0x33a587f5
- (id)createButtonWithContents:(id)contents width:(float)width barStyle:(int)style buttonStyle:(int)style4 isRight:(BOOL)right;	// 0x33bb03b5
- (id)currentBackButton;	// 0x33a2bc69
- (id)currentLeftView;	// 0x33b26d55
- (id)currentRightView;	// 0x33b26dd9
- (void)dealloc;	// 0x33aaf439
- (float)defaultBackButtonAlignmentHeight;	// 0x33bacdf1
- (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x33a1b6b1
// declared property getter: - (id)delegate;	// 0x33aae62d
- (void)didAddSubview:(id)subview;	// 0x33a27791
- (void)disableAnimation;	// 0x33a2c96d
- (void)drawBackButtonBackgroundInRect:(CGRect)rect withStyle:(int)style pressed:(BOOL)pressed;	// 0x33a6f879
- (void)drawBackgroundInRect:(CGRect)rect withStyle:(int)style;	// 0x33baef25
- (void)drawRect:(CGRect)rect;	// 0x33ab52bd
- (void)enableAnimation;	// 0x33a2f2d1
- (void)encodeWithCoder:(id)coder;	// 0x33bad38d
// converted property getter: - (BOOL)forceFullHeightInLandscape;	// 0x33a1b69d
- (void)hideButtons;	// 0x33bb03d9
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x33bae2fd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33abf9f1
- (CGSize)intrinsicContentSize;	// 0x33badf75
- (void)invalidateIntrinsicContentSize;	// 0x33badffd
- (BOOL)isAnimationEnabled;	// 0x33a2edf9
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c62ef9
// converted property getter: - (BOOL)isLocked;	// 0x33a2807d
- (BOOL)isMinibar;	// 0x33a40bb9
// declared property getter: - (BOOL)isTranslucent;	// 0x33a478cd
// declared property getter: - (id)items;	// 0x33a99d29
- (void)layoutSubviews;	// 0x33a28bc1
- (void)mouseDown:(GSEventRef)down;	// 0x33bae535
- (void)mouseUp:(GSEventRef)up;	// 0x33bae589
- (id)navigationItemAtPoint:(CGPoint)point;	// 0x33ac075d
// converted property getter: - (id)navigationItems;	// 0x33a99d4d
- (void)popNavigationItem;	// 0x33a77ba1
- (id)popNavigationItemAnimated:(BOOL)animated;	// 0x33ac0e79
// converted property getter: - (id)prompt;	// 0x33a1b7f1
- (CGRect)promptBounds;	// 0x33baeea1
- (id)promptView;	// 0x33baee91
- (void)pushNavigationItem:(id)item;	// 0x33a2c989
- (void)pushNavigationItem:(id)item animated:(BOOL)animated;	// 0x33b7d04d
- (void)removeConstraint:(id)constraint;	// 0x33bae6dd
- (void)setAccessoryView:(id)view animate:(BOOL)animate;	// 0x33bad685
- (void)setAutoresizingMask:(unsigned)mask;	// 0x33bb0791
- (void)setBackgroundImage:(id)image forBarMetrics:(int)barMetrics;	// 0x33bac5f5
// declared property setter: - (void)setBarStyle:(int)style;	// 0x33aae2fd
- (void)setBounds:(CGRect)bounds;	// 0x33a28311
- (void)setButton:(int)button enabled:(BOOL)enabled;	// 0x33bb02c5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33a28015
// converted property setter: - (void)setForceFullHeightInLandscape:(BOOL)landscape;	// 0x33a1b419
- (void)setFrame:(CGRect)frame;	// 0x33a1b81d
// declared property setter: - (void)setItems:(id)items;	// 0x33a99ddd
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x33a99df1
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x33a28091
// converted property setter: - (void)setNavigationItems:(id)items;	// 0x33badf5d
- (void)setNeedsLayout;	// 0x33a27fcd
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x33a2ef25
- (void)setRightMargin:(float)margin;	// 0x33baeba9
// declared property setter: - (void)setShadowImage:(id)image;	// 0x33baca51
// declared property setter: - (void)setTintColor:(id)color;	// 0x33a93051
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x33baebe1
// declared property setter: - (void)setTitleTextAttributes:(id)attributes;	// 0x33bac81d
- (void)setTitleVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x33bac8b9
- (void)setTitleView:(id)view;	// 0x33a2d601
// converted property setter: - (void)setTopItemAlpha:(float)alpha;	// 0x33bb0b51
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)constraints;	// 0x33bae5dd
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x33aae545
// declared property getter: - (id)shadowImage;	// 0x33bacbe1
- (void)showBackButton:(BOOL)button animated:(BOOL)animated;	// 0x33a84a05
- (void)showButtonsWithLeft:(id)left right:(id)right leftBack:(BOOL)back;	// 0x33baf199
- (void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title;	// 0x33baf151
- (void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title leftBack:(BOOL)back;	// 0x33baf175
- (void)showHideBackButtomAnimationDidStop:(id)showHideBackButtomAnimation finished:(id)finished context:(void *)context;	// 0x33bb0711
- (void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;	// 0x33baf1c9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33a1b5d1
- (int)state;	// 0x33bad671
// declared property getter: - (id)tintColor;	// 0x33a47919
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x33a2d5c9
// declared property getter: - (id)titleTextAttributes;	// 0x33bac895
- (float)titleVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x33baca01
// declared property getter: - (id)topItem;	// 0x33a29475
// converted property getter: - (float)topItemAlpha;	// 0x33bb0b31
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33ac0621
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33b7cf69
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33ac0999
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33b72bd1
- (void)updatePrompt;	// 0x33a2ee4d
- (void)willRemoveSubview:(id)subview;	// 0x33bae7d5
@end

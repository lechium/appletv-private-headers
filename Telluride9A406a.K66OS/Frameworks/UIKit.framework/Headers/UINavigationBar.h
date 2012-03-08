/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UINavigationItem, UIColor, NSMutableArray, NSDictionary, NSArray;

@interface UINavigationBar : UIView <NSCoding> {
@private
	NSMutableArray *_itemStack;	// 48 = 0x30
	float _rightMargin;	// 52 = 0x34
	unsigned _state;	// 56 = 0x38
	id _delegate;	// 60 = 0x3c
	UIView *_backgroundView;	// 64 = 0x40
	UIView *_titleView;	// 68 = 0x44
	NSArray *_leftViews;	// 72 = 0x48
	NSArray *_rightViews;	// 76 = 0x4c
	UIView *_prompt;	// 80 = 0x50
	UIView *_accessoryView;	// 84 = 0x54
	UIColor *_tintColor;	// 88 = 0x58
	id _appearanceStorage;	// 92 = 0x5c
	struct {
		unsigned animate : 1;
		unsigned animationDisabledCount : 10;
		unsigned transitioningBarStyle : 1;
		unsigned newBarStyle : 3;
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
	} _navbarFlags;	// 96 = 0x60
}
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;	// G=0x3583cfb9; S=0x3583cfc9; 
@property(readonly, assign, nonatomic) UINavigationItem *backItem;	// G=0x356fb021; 
@property(assign, nonatomic) int barStyle;	// G=0x356c8921; S=0x3573eab9; 
@property(assign, nonatomic) id delegate;	// G=0x3573ee5d; S=0x356af4fd; 
@property(assign) BOOL forceFullHeightInLandscape;	// G=0x356a1929; S=0x356a16f5; converted property
@property(copy, nonatomic) NSArray *items;	// G=0x35728835; S=0x357288ed; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x356af565; S=0x356af579; converted property
@property(retain) id navigationItems;	// G=0x35728859; S=0x3583e5ad; converted property
@property(retain) UIView *prompt;	// G=0x356a1a81; S=0x356b54ad; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x356d04dd; S=0x357216e9; 
@property(assign) BOOL titleAutoresizesToFit;	// G=0x356b3ba1; S=0x3583e9b5; converted property
@property(copy, nonatomic) NSDictionary *titleTextAttributes;	// G=0x3583da75; S=0x3583da0d; 
@property(readonly, assign, nonatomic) UINavigationItem *topItem;	// G=0x356aff15; 
@property(assign) float topItemAlpha;	// G=0x358405bd; S=0x358405dd; converted property
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x356d0491; S=0x3573ed39; 
+ (void)_setUseCustomBackButtonAction:(BOOL)action;	// 0x358425f9
+ (BOOL)_useCustomBackButtonAction;	// 0x35842609
+ (id)defaultPromptFont;	// 0x357f2709
+ (CGSize)defaultSize;	// 0x356af3c5
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x356af3e9
+ (CGSize)defaultSizeWithPrompt;	// 0x3583dc11
+ (CGSize)defaultSizeWithPromptForOrientation:(int)orientation;	// 0x357f2459
+ (void)setDefaultAnimationDuration:(double)duration;	// 0x3583dc35
- (id)initWithCoder:(id)coder;	// 0x3583dc49
- (id)initWithFrame:(CGRect)frame;	// 0x356adc49
- (void)_adjustVisibleItemsByDelta:(float)delta;	// 0x357f2525
- (id)_allViews;	// 0x357b51e1
- (id)_appearanceStorage;	// 0x356cb47d
- (void)_applySPIAppearanceToButtons;	// 0x35745ba5
- (void)_backgroundFadeDidFinish:(id)_backgroundFade finished:(id)finished context:(void *)context;	// 0x357e008d
// declared property getter: - (id)_backgroundView;	// 0x3583cfb9
- (int)_barStyle:(BOOL)style;	// 0x356b3625
- (CGRect)_boundsForPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;	// 0x35841171
- (BOOL)_canDrawContent;	// 0x356adddd
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x3580da9d
- (void)_cancelInProgressPushOrPop;	// 0x35737b8d
- (id)_commonHitTest:(CGPoint)test forView:(id)view;	// 0x35751b29
- (void)_commonNavBarInit;	// 0x356adee9
- (id)_currentLeftViews;	// 0x356aff7d
- (id)_currentRightViews;	// 0x356b0101
- (void)_customViewChangedForButtonItem:(id)buttonItem;	// 0x357f8269
- (id)_defaultTitleFont;	// 0x356d2f75
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x356b6989
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)newItems oldItems:(id)items;	// 0x35728d91
- (void)_drawPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;	// 0x357f272d
- (id)_effectiveTintColor;	// 0x356aed49
- (void)_fadeAllViewsIn;	// 0x357b5105
- (void)_fadeAllViewsOut;	// 0x35841551
- (void)_fadeViewOut:(id)anOut;	// 0x358414e5
- (void)_fadeViewsIn:(id)anIn;	// 0x35754339
- (void)_fadeViewsOut:(id)anOut;	// 0x357542e1
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3;	// 0x356b0111
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views;	// 0x356b0135
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views forItemAtIndex:(unsigned)index;	// 0x356b01bd
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrames:(id)frames rightViewFrames:(id)frames3;	// 0x35841a81
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrames:(id)frames rightViewFrames:(id)frames3 forItemAtIndex:(unsigned)index;	// 0x356b0371
- (void)_handleMouseDownAtPoint:(CGPoint)point;	// 0x357527d9
- (void)_handleMouseUpAtPoint:(CGPoint)point;	// 0x35752b45
- (BOOL)_hasBackButton;	// 0x356b0079
- (void)_hideButtonsAnimationDidStop:(id)_hideButtonsAnimation finished:(id)finished context:(void *)context;	// 0x35840181
- (id)_itemStack;	// 0x35841b05
- (void)_navBarButtonPressed:(id)pressed;	// 0x35842559
- (void)_navigationAnimationDidFinish:(id)_navigationAnimation finished:(id)finished context:(void *)context;	// 0x35754771
- (id)_popNavigationItemWithTransition:(int)transition;	// 0x357048e5
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3583dec1
- (void)_prepareForPopAnimationWithNewTopItem:(id)newTopItem;	// 0x35705289
- (void)_prepareForPushAnimationWithItems:(id)items;	// 0x356b3729
- (void)_propagateEffectiveTintColorWithPreviousColor:(id)previousColor;	// 0x3583e819
- (void)_pushNavigationItem:(id)item transition:(int)transition;	// 0x356b2e81
- (void)_removeAccessoryView;	// 0x35840ffd
- (void)_removeItemsFromSuperview:(id)superview;	// 0x35728e71
- (void)_setAutoAdjustTitle:(BOOL)title;	// 0x35721edd
- (void)_setBackButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x35745809
- (void)_setBackgroundImage:(id)image mini:(id)mini;	// 0x3583d069
// declared property setter: - (void)_setBackgroundView:(id)view;	// 0x3583cfc9
- (void)_setBarStyle:(int)style;	// 0x356b3c51
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x35745d45
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color2;	// 0x3583d349
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color2 forState:(unsigned)state;	// 0x3583d095
- (void)_setButtonTextShadowOffset:(CGSize)offset;	// 0x3583d391
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x3583e8b1
- (void)_setItems:(id)items transition:(int)transition;	// 0x357289c1
- (void)_setLeftView:(id)view rightView:(id)view2;	// 0x3583f8e1
- (void)_setLeftViews:(id)views rightViews:(id)views2;	// 0x356b3ed5
- (void)_setNeedsLayoutForce:(BOOL)force;	// 0x35841b15
- (void)_setPressedButtonItemTextColor:(id)color shadowColor:(id)color2;	// 0x3583d36d
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)pressed;	// 0x3583d5f9
- (void)_setupTopNavItem:(id)item oldTopNavItem:(id)item2;	// 0x35728f41
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)navigationItem;	// 0x356ead69
- (void)_showLeftRightButtonsAnimationDidStop:(id)_showLeftRightButtonsAnimation finished:(id)finished context:(void *)context;	// 0x35754c39
- (void)_startBarStyleAnimation:(int)animation withTintColor:(id)tintColor;	// 0x357df739
- (void)_startPopAnimationFromItems:(id)items fromBarStyle:(int)barStyle toItems:(id)items3 toBarStyle:(int)barStyle4;	// 0x35753861
- (void)_startPushAnimationFromItems:(id)items fromBarStyle:(int)barStyle;	// 0x357a04fd
- (BOOL)_subclassImplementsDrawBackgroundInRect;	// 0x356ae009
- (BOOL)_subclassImplementsDrawRect;	// 0x356adce1
- (unsigned)_subviewIndexAboveBackground;	// 0x35754219
- (int)_transitionForOldItems:(id)oldItems newItems:(id)items;	// 0x3583e55d
- (void)_updateBackgroundImage;	// 0x356af065
- (void)_updateNavigationBarItem:(id)item forStyle:(int)style;	// 0x356aed0d
- (void)_updateNavigationBarItem:(id)item forStyle:(int)style previousTintColor:(id)color;	// 0x356aed71
- (void)_updateNavigationBarItemsForStyle:(int)style;	// 0x3573eb0d
- (void)_updateNavigationBarItemsForStyle:(int)style previousTintColor:(id)color;	// 0x3573eb41
- (void)_updateOpacity;	// 0x356ade2d
- (void)_updateTitleView;	// 0x357bb8a9
- (unsigned)animationDisabledCount;	// 0x3583eca1
- (CGRect)availableTitleArea;	// 0x35840269
- (id)backButtonViewAtPoint:(CGPoint)point;	// 0x35752f81
// declared property getter: - (id)backItem;	// 0x356fb021
- (id)backgroundImageForBarMetrics:(int)barMetrics;	// 0x3583d9d9
// declared property getter: - (int)barStyle;	// 0x356c8921
- (id)buttonItemShadowColor;	// 0x356e1ce1
- (id)buttonItemTextColor;	// 0x356e1e45
- (id)createButtonWithContents:(id)contents width:(float)width barStyle:(int)style buttonStyle:(int)style4 isRight:(BOOL)right;	// 0x3583fe8d
- (id)currentBackButton;	// 0x356b2235
- (id)currentLeftView;	// 0x357bd3c1
- (id)currentRightView;	// 0x357bd445
- (void)dealloc;	// 0x3573fb89
- (float)defaultButtonHeight;	// 0x356eb035
- (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x356a193d
// declared property getter: - (id)delegate;	// 0x3573ee5d
- (void)didAddSubview:(id)subview;	// 0x356aecc1
- (void)disableAnimation;	// 0x356b2f81
- (void)drawBackButtonBackgroundInRect:(CGRect)rect withStyle:(int)style pressed:(BOOL)pressed;	// 0x356fc059
- (void)drawBackgroundInRect:(CGRect)rect withStyle:(int)style;	// 0x3583ecb5
- (void)drawRect:(CGRect)rect;	// 0x357469a5
- (void)enableAnimation;	// 0x356b58e1
- (void)encodeWithCoder:(id)coder;	// 0x3583e04d
// converted property getter: - (BOOL)forceFullHeightInLandscape;	// 0x356a1929
- (void)hideButtons;	// 0x3583feb1
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3583e5c1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35751ad5
- (BOOL)isAnimationEnabled;	// 0x356b538d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x358ff601
// converted property getter: - (BOOL)isLocked;	// 0x356af565
- (BOOL)isMinibar;	// 0x356c839d
// declared property getter: - (BOOL)isTranslucent;	// 0x356d0491
// declared property getter: - (id)items;	// 0x35728835
- (void)layoutSubviews;	// 0x356afcad
- (void)mouseDown:(GSEventRef)down;	// 0x3583e615
- (void)mouseUp:(GSEventRef)up;	// 0x3583e671
- (id)navigationItemAtPoint:(CGPoint)point;	// 0x357528b9
// converted property getter: - (id)navigationItems;	// 0x35728859
- (void)popNavigationItem;	// 0x35704b5d
- (id)popNavigationItemAnimated:(BOOL)animated;	// 0x35752fd9
// converted property getter: - (id)prompt;	// 0x356a1a81
- (CGRect)promptBounds;	// 0x3583ec35
- (id)promptView;	// 0x3583ec25
- (void)pushNavigationItem:(id)item;	// 0x356b2f9d
- (void)pushNavigationItem:(id)item animated:(BOOL)animated;	// 0x3582003d
- (void)setAccessoryView:(id)view animate:(BOOL)animate;	// 0x3583e17d
- (void)setBackgroundImage:(id)image forBarMetrics:(int)barMetrics;	// 0x3583d855
// declared property setter: - (void)setBarStyle:(int)style;	// 0x3573eab9
- (void)setBounds:(CGRect)bounds;	// 0x356af7dd
- (void)setButton:(int)button enabled:(BOOL)enabled;	// 0x3583fda1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x356af4fd
// converted property setter: - (void)setForceFullHeightInLandscape:(BOOL)landscape;	// 0x356a16f5
- (void)setFrame:(CGRect)frame;	// 0x356a1aad
// declared property setter: - (void)setItems:(id)items;	// 0x357288ed
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x35728901
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x356af579
// converted property setter: - (void)setNavigationItems:(id)items;	// 0x3583e5ad
- (void)setNeedsLayout;	// 0x356af4b9
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x356b54ad
- (void)setRightMargin:(float)margin;	// 0x3583e979
// declared property setter: - (void)setTintColor:(id)color;	// 0x357216e9
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x3583e9b5
// declared property setter: - (void)setTitleTextAttributes:(id)attributes;	// 0x3583da0d
- (void)setTitleVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3583da95
- (void)setTitleView:(id)view;	// 0x356b3bd5
// converted property setter: - (void)setTopItemAlpha:(float)alpha;	// 0x358405dd
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x3573ed39
- (void)showBackButton:(BOOL)button animated:(BOOL)animated;	// 0x357116a9
- (void)showButtonsWithLeft:(id)left right:(id)right leftBack:(BOOL)back;	// 0x3583ef2d
- (void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title;	// 0x3583eee5
- (void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title leftBack:(BOOL)back;	// 0x3583ef09
- (void)showHideBackButtomAnimationDidStop:(id)showHideBackButtomAnimation finished:(id)finished context:(void *)context;	// 0x358401ed
- (void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;	// 0x3583ef5d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x356a1855
- (int)state;	// 0x3583e16d
// declared property getter: - (id)tintColor;	// 0x356d04dd
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x356b3ba1
// declared property getter: - (id)titleTextAttributes;	// 0x3583da75
- (float)titleVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x3583dbb9
// declared property getter: - (id)topItem;	// 0x356aff15
// converted property getter: - (float)topItemAlpha;	// 0x358405bd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35752781
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3581ff49
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35752aed
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35814b9d
- (void)updatePrompt;	// 0x356b53dd
@end


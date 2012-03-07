/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UITabBarDelegate.h"
#import "UIViewController.h"

@class UITabBar, NSMutableArray, UINavigationController, UIView, NSArray;
@protocol UITabBarControllerDelegate;

@interface UITabBarController : UIViewController <UITabBarDelegate, NSCoding> {
@private
	UITabBar *_tabBar;	// 156 = 0x9c
	UIView *_containerView;	// 160 = 0xa0
	UIView *_viewControllerTransitionView;	// 164 = 0xa4
	id _tabBarItemsToViewControllers;	// 168 = 0xa8
	UIViewController *_selectedViewController;	// 172 = 0xac
	UINavigationController *_moreNavigationController;	// 176 = 0xb0
	NSArray *_customizableViewControllers;	// 180 = 0xb4
	id<UITabBarControllerDelegate> _delegate;	// 184 = 0xb8
	UIViewController *_selectedViewControllerDuringWillAppear;	// 188 = 0xbc
	UIViewController *_transientViewController;	// 192 = 0xc0
	unsigned _maxItems;	// 196 = 0xc4
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _tabBarControllerFlags;	// 200 = 0xc8
	NSMutableArray *_moreChildViewControllers;	// 204 = 0xcc
}
@property(copy, nonatomic) NSArray *customizableViewControllers;	// G=0x32d2a591; S=0x32d11ee5; @synthesize=_customizableViewControllers
@property(assign, nonatomic) id<UITabBarControllerDelegate> delegate;	// G=0x32d2b1cd; S=0x32d11f69; @synthesize=_delegate
@property(assign, nonatomic) NSMutableArray *moreChildViewControllers;	// G=0x32e61f39; S=0x32e61f49; @synthesize=_moreChildViewControllers
@property(readonly, assign, nonatomic) UINavigationController *moreNavigationController;	// G=0x32ca3541; 
@property(assign, nonatomic) unsigned selectedIndex;	// G=0x32d0cba5; S=0x32d0f8d5; 
@property(assign, nonatomic) UIViewController *selectedViewController;	// G=0x32ca330d; S=0x32d12011; 
@property(assign) BOOL showsEditButtonOnLeft;	// G=0x32e61e31; S=0x32d2a309; converted property
@property(readonly, assign, nonatomic) UITabBar *tabBar;	// G=0x32d0d07d; 
@property(retain) UIViewController *transientViewController;	// G=0x32d0cb6d; S=0x32d0f9c9; converted property
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x32d11f79; S=0x32d0c4d1; 
+ (Class)_moreNavigationControllerClass;	// 0x32d40a9d
- (id)initWithCoder:(id)coder;	// 0x32e60cb9
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x32d0aa0d
- (void)__viewWillLayoutSubviews;	// 0x32d12569
- (BOOL)_allowSelectionWithinMoreList;	// 0x32ca33dd
- (BOOL)_allowsAutorotation;	// 0x32d418ad
- (BOOL)_allowsCustomizing;	// 0x32d2a561
- (void)_configureTargetActionForTabBarItem:(id)tabBarItem;	// 0x32d0d021
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(int)orientation;	// 0x32d12455
- (id)_existingMoreNavigationController;	// 0x32ca33b5
- (CGRect)_frameForViewController:(id)viewController;	// 0x32d1076d
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x32df4fb9
- (BOOL)_isBarHidden;	// 0x32e61dcd
- (BOOL)_isPresentationContextByDefault;	// 0x32d0aaf9
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x32d123e9
- (void)_layoutViewController:(id)controller;	// 0x32d12361
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x32e6110d
- (void)_prepareTabBar;	// 0x32d0b285
- (BOOL)_reallyWantsFullScreenLayout;	// 0x32d2a305
- (void)_rebuildTabBarItemsAnimated:(BOOL)animated;	// 0x32d0cccd
- (void)_rebuildTabBarItemsIfNeeded;	// 0x32d0fd31
- (void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(BOOL)appearanceTransitions;	// 0x32d125cd
- (id)_selectedViewControllerInTabBar;	// 0x32ca3391
- (void)_setMaximumNumberOfItems:(unsigned)items;	// 0x32e61e45
- (void)_setSelectedTabBarItem:(id)item;	// 0x32d0fd61
- (void)_setSelectedViewController:(id)controller;	// 0x32d0fb65
- (BOOL)_shouldPersistViewWhenCoding;	// 0x32e61181
- (BOOL)_shouldUseOnePartRotation;	// 0x32d41885
- (void)_tabBarItemClicked:(id)clicked;	// 0x32d979bd
- (id)_transitionView;	// 0x32d0b5e5
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// 0x32d12305
- (id)_viewControllerForTabBarItem:(id)tabBarItem;	// 0x32d97b75
- (id)_viewControllersInTabBar;	// 0x32d0f8c5
- (id)allViewControllers;	// 0x32d10869
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;	// 0x32de1ed9
- (void)beginCustomizingTabBar:(id)bar;	// 0x32e61655
- (void)concealTabBarSelection;	// 0x32de3365
// declared property getter: - (id)customizableViewControllers;	// 0x32d2a591
- (void)dealloc;	// 0x32e61351
- (id)defaultFirstResponder;	// 0x32dfd8a9
// declared property getter: - (id)delegate;	// 0x32d2b1cd
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x32e61ed5
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x32df9925
- (void)encodeWithCoder:(id)coder;	// 0x32e61185
- (void)hideBarWithTransition:(int)transition;	// 0x32dde6e5
- (void)loadView;	// 0x32d0ab25
// declared property getter: - (id)moreChildViewControllers;	// 0x32e61f39
// declared property getter: - (id)moreNavigationController;	// 0x32ca3541
- (void)purgeMemoryForReason:(int)reason;	// 0x32e615c5
- (void)revealTabBarSelection;	// 0x32de35ed
- (id)rotatingFooterView;	// 0x32df4f45
- (id)rotatingHeaderView;	// 0x32df4ea1
// declared property getter: - (unsigned)selectedIndex;	// 0x32d0cba5
// declared property getter: - (id)selectedViewController;	// 0x32ca330d
// declared property setter: - (void)setCustomizableViewControllers:(id)controllers;	// 0x32d11ee5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32d11f69
// declared property setter: - (void)setMoreChildViewControllers:(id)controllers;	// 0x32e61f49
// declared property setter: - (void)setSelectedIndex:(unsigned)index;	// 0x32d0f8d5
// declared property setter: - (void)setSelectedViewController:(id)controller;	// 0x32d12011
// converted property setter: - (void)setShowsEditButtonOnLeft:(BOOL)left;	// 0x32d2a309
- (void)setTabBar:(id)bar;	// 0x32e6152d
// converted property setter: - (void)setTransientViewController:(id)controller;	// 0x32d0f9c9
- (void)setTransientViewController:(id)controller animated:(BOOL)animated;	// 0x32d0f9dd
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x32d0c4d1
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x32d0c4e5
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x32d1243d
- (void)showBarWithTransition:(int)transition;	// 0x32d11b75
// converted property getter: - (BOOL)showsEditButtonOnLeft;	// 0x32e61e31
// declared property getter: - (id)tabBar;	// 0x32d0d07d
- (void)tabBar:(id)bar didEndCustomizingItems:(id)items changed:(BOOL)changed;	// 0x32e61d55
- (void)tabBar:(id)bar willBeginCustomizingItems:(id)items;	// 0x32e6181d
- (void)tabBar:(id)bar willEndCustomizingItems:(id)items changed:(BOOL)changed;	// 0x32e61885
// converted property getter: - (id)transientViewController;	// 0x32d0cb6d
- (void)transitionFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x32d10339
- (void)transitionFromViewController:(id)viewController toViewController:(id)viewController2 transition:(int)transition shouldSetSelected:(BOOL)selected;	// 0x32d1035d
- (void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;	// 0x32d119d5
- (void)updateTabBarItemForViewController:(id)viewController;	// 0x32db7d71
// declared property getter: - (id)viewControllers;	// 0x32d11f79
- (void)viewDidAppear:(BOOL)view;	// 0x32d12205
- (void)viewDidDisappear:(BOOL)view;	// 0x32d16c19
- (void)viewWillAppear:(BOOL)view;	// 0x32d12121
- (void)viewWillDisappear:(BOOL)view;	// 0x32d16b3d
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32e61e9d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32df8235
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32e61f01
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32df5509
@end

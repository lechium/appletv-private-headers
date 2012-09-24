/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class NSArray, UIMoreListController;

@interface UIMoreNavigationController : UINavigationController {
	UIMoreListController *_moreListController;	// 284 = 0x11c
	UINavigationController *_originalNavigationController;	// 288 = 0x120
	UIViewController *_originalRootViewController;	// 292 = 0x124
}
@property(assign, nonatomic) BOOL allowsCustomizing;	// G=0x33bd5ed9; S=0x33a1b2dd; 
@property(assign, nonatomic) UIViewController *displayedViewController;	// G=0x33bd5d59; S=0x33bd5db9; 
@property(retain, nonatomic) NSArray *moreViewControllers;	// G=0x33a9a7f5; S=0x33a9a6a5; 
@property(assign, nonatomic) BOOL moreViewControllersChanged;	// G=0x33bd5efd; S=0x33bd5f21; 
+ (Class)_moreListControllerClass;	// 0x33bd5c79
- (id)init;	// 0x33a99855
- (id)_preparedViewController:(id)controller;	// 0x33a999b5
- (void)_redisplayMoreTableView;	// 0x33bd5ea1
- (void)_restoreOriginalNavigationController;	// 0x33bd5c95
// declared property getter: - (BOOL)allowsCustomizing;	// 0x33bd5ed9
- (void)dealloc;	// 0x33aae6b5
- (void)didShowViewController:(id)controller animated:(BOOL)animated;	// 0x33bd5e4d
// declared property getter: - (id)displayedViewController;	// 0x33bd5d59
// declared property getter: - (id)moreViewControllers;	// 0x33a9a7f5
// declared property getter: - (BOOL)moreViewControllersChanged;	// 0x33bd5efd
- (void)pushViewController:(id)controller animated:(BOOL)animated;	// 0x33a9996d
// declared property setter: - (void)setAllowsCustomizing:(BOOL)customizing;	// 0x33a1b2dd
// declared property setter: - (void)setDisplayedViewController:(id)controller;	// 0x33bd5db9
// declared property setter: - (void)setMoreViewControllers:(id)controllers;	// 0x33a9a6a5
// declared property setter: - (void)setMoreViewControllersChanged:(BOOL)changed;	// 0x33bd5f21
@end

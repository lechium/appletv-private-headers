/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class BRController, NSArray, BRControllerStack;

__attribute__((visibility("hidden")))
@interface ATVNavigationBarController : BRViewController {
	BRControllerStack *_controllerStack;	// 104 = 0x68
	NSArray *_viewControllers;	// 108 = 0x6c
	BRController *_selectedViewController;	// 112 = 0x70
}
@property(retain, nonatomic) BRController *selectedViewController;	// G=0xb02d1; S=0xb0151; @synthesize=_selectedViewController
@property(copy, nonatomic) NSArray *viewControllers;	// G=0xb02ad; S=0xb02c1; @synthesize=_viewControllers
- (void)_stackWentBankrupt;	// 0xb0205
- (void)_updateControllerStack;	// 0xb01a9
- (void)dealloc;	// 0xafd31
- (id)navigationBar;	// 0xb0129
// declared property getter: - (id)selectedViewController;	// 0xb02d1
// declared property setter: - (void)setSelectedViewController:(id)controller;	// 0xb0151
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0xb02c1
- (id)view;	// 0xafde9
// declared property getter: - (id)viewControllers;	// 0xb02ad
@end


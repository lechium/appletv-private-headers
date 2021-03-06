/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSRootController.h"

@class NSDictionary, UIViewController;

@interface PSSetupController : PSRootController {
	NSDictionary *_rootInfo;	// 300 = 0x12c
	UIViewController<PSController> *_parentController;	// 304 = 0x130
	PSRootController *_parentRootController;	// 308 = 0x134
}
@property(retain) id parentController;	// G=0x352eedfd; S=0x352ef11d; converted property
- (id)init;	// 0x352eecd1
- (id)controller;	// 0x352ef1a1
- (void)dealloc;	// 0x352eed2d
- (void)dismiss;	// 0x352ef1cd
- (void)dismissAnimated:(BOOL)animated;	// 0x352ef1e1
- (void)handleURL:(id)url;	// 0x352eeda5
// converted property getter: - (id)parentController;	// 0x352eedfd
- (void)popControllerOnParent;	// 0x352ef37d
- (BOOL)popupStyleIsModal;	// 0x352ef3f5
- (void)pushController:(id)controller;	// 0x352ef099
- (void)pushControllerOnParentWithSpecifier:(id)specifier;	// 0x352ef279
// converted property setter: - (void)setParentController:(id)controller;	// 0x352ef11d
- (void)setupController;	// 0x352eee0d
- (void)statusBarWillChangeHeight:(id)statusBar;	// 0x352ef3f9
- (BOOL)usePopupStyle;	// 0x352ef3f1
- (void)viewDidDisappear:(BOOL)view;	// 0x352ef009
- (void)viewWillDisappear:(BOOL)view;	// 0x352eef79
@end


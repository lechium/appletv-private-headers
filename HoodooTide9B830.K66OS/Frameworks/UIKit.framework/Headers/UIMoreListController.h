/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIViewController.h"

@class UIBarButtonItem, UITableView, NSArray, UIMoreListCellLayoutManager;

__attribute__((visibility("hidden")))
@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
@private
	UITableView *_table;	// 156 = 0x9c
	BOOL _allowsCustomizing;	// 160 = 0xa0
	NSArray *_moreViewControllers;	// 164 = 0xa4
	UIMoreListCellLayoutManager *_layoutManager;	// 168 = 0xa8
	UIBarButtonItem *_moreEditButtonItem;	// 172 = 0xac
	BOOL _moreViewControllersChanged;	// 176 = 0xb0
}
@property(assign, nonatomic) BOOL allowsCustomizing;	// G=0x300ccbdd; S=0x30046b8d; 
@property(retain, nonatomic) NSArray *moreViewControllers;	// G=0x300cd699; S=0x300cd545; 
@property(assign, nonatomic) BOOL moreViewControllersChanged;	// G=0x30206cd1; S=0x30206ce1; 
@property(readonly, retain) UITableView *table;	// G=0x30206c25; converted property
- (id)init;	// 0x300cc855
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x30206cf1
- (void)_layoutCells;	// 0x30206c35
- (void)_updateEditButton;	// 0x300cca2d
// declared property getter: - (BOOL)allowsCustomizing;	// 0x300ccbdd
- (void)dealloc;	// 0x300e46dd
- (void)loadView;	// 0x30206cfd
// declared property getter: - (id)moreViewControllers;	// 0x300cd699
// declared property getter: - (BOOL)moreViewControllersChanged;	// 0x30206cd1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x30206ea1
// declared property setter: - (void)setAllowsCustomizing:(BOOL)customizing;	// 0x30046b8d
// declared property setter: - (void)setMoreViewControllers:(id)controllers;	// 0x300cd545
// declared property setter: - (void)setMoreViewControllersChanged:(BOOL)changed;	// 0x30206ce1
- (id)tabBarItem;	// 0x300cd5d9
// converted property getter: - (id)table;	// 0x30206c25
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30206ec5
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30207161
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30206ea5
- (void)viewWillAppear:(BOOL)view;	// 0x30206e25
@end


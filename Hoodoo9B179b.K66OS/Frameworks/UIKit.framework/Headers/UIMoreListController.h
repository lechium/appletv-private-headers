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
@property(assign, nonatomic) BOOL allowsCustomizing;	// G=0x32f6dd85; S=0x32ee7d35; 
@property(retain, nonatomic) NSArray *moreViewControllers;	// G=0x32f6e841; S=0x32f6e6ed; 
@property(assign, nonatomic) BOOL moreViewControllersChanged;	// G=0x330a7dbd; S=0x330a7dcd; 
@property(readonly, retain) UITableView *table;	// G=0x330a7d11; converted property
- (id)init;	// 0x32f6d9fd
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x330a7ddd
- (void)_layoutCells;	// 0x330a7d21
- (void)_updateEditButton;	// 0x32f6dbd5
// declared property getter: - (BOOL)allowsCustomizing;	// 0x32f6dd85
- (void)dealloc;	// 0x32f85885
- (void)loadView;	// 0x330a7de9
// declared property getter: - (id)moreViewControllers;	// 0x32f6e841
// declared property getter: - (BOOL)moreViewControllersChanged;	// 0x330a7dbd
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x330a7f8d
// declared property setter: - (void)setAllowsCustomizing:(BOOL)customizing;	// 0x32ee7d35
// declared property setter: - (void)setMoreViewControllers:(id)controllers;	// 0x32f6e6ed
// declared property setter: - (void)setMoreViewControllersChanged:(BOOL)changed;	// 0x330a7dcd
- (id)tabBarItem;	// 0x32f6e781
// converted property getter: - (id)table;	// 0x330a7d11
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x330a7fb1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x330a824d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x330a7f91
- (void)viewWillAppear:(BOOL)view;	// 0x330a7f11
@end


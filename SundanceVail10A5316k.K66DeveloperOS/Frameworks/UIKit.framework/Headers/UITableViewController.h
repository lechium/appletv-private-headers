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

@class UITableViewDataSource, UITableView, UIRefreshControl;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
@private
	int _tableViewStyle;	// 180 = 0xb4
	id _keyboardSupport;	// 184 = 0xb8
	id _staticDataSource;	// 188 = 0xbc
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	} _tableViewControllerFlags;	// 192 = 0xc0
	UIRefreshControl *_refreshControl;	// 196 = 0xc4
}
@property(assign, nonatomic) BOOL clearsSelectionOnViewWillAppear;	// G=0x302e8a51; S=0x302e8a65; 
@property(retain, nonatomic) UIRefreshControl *refreshControl;	// G=0x302e8ab1; S=0x302e8a85; 
@property(retain, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource *staticDataSource;	// G=0x302e8c75; S=0x302e8cad; 
@property(retain, nonatomic) UITableView *tableView;	// G=0x3012ed09; S=0x302e8929; 
- (id)init;	// 0x3020ac15
- (id)initWithCoder:(id)coder;	// 0x302e87c5
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x3012ebf1
- (id)initWithStyle:(int)style;	// 0x3012eb9d
- (void)_adjustTableForKeyboardInfo:(id)keyboardInfo;	// 0x301ff9cd
- (id)_existingTableView;	// 0x301c366d
// declared property setter: - (void)_setStaticDataSource:(id)source;	// 0x302e8cad
// declared property getter: - (id)_staticDataSource;	// 0x302e8c75
// declared property getter: - (BOOL)clearsSelectionOnViewWillAppear;	// 0x302e8a51
- (void)dealloc;	// 0x301c3569
- (void)encodeWithCoder:(id)coder;	// 0x302e8899
- (void)loadView;	// 0x3012ed5d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x301d589d
// declared property getter: - (id)refreshControl;	// 0x302e8ab1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3012f0d5
// declared property setter: - (void)setClearsSelectionOnViewWillAppear:(BOOL)appear;	// 0x302e8a65
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x301c191d
// declared property setter: - (void)setRefreshControl:(id)control;	// 0x302e8a85
// declared property setter: - (void)setTableView:(id)view;	// 0x302e8929
// declared property getter: - (id)tableView;	// 0x3012ed09
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x302e8b01
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x302e8c61
- (float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x302e8bc9
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x302e8ba1
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x302e8bf1
- (int)tableView:(id)view indentationLevelForRowAtIndexPath:(id)indexPath;	// 0x302e8c25
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x302e8ad9
- (id)tableView:(id)view titleForFooterInSection:(int)section;	// 0x302e8b41
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x302e8b21
- (id)tableView:(id)view viewForFooterInSection:(int)section;	// 0x302e8b81
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x302e8b61
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x302e8c4d
- (void)viewDidAppear:(BOOL)view;	// 0x301c19d9
- (void)viewWillAppear:(BOOL)view;	// 0x301c15c9
- (void)viewWillDisappear:(BOOL)view;	// 0x301c3455
@end


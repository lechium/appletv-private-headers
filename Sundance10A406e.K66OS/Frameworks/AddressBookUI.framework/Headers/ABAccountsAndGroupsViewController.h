/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDelegate.h"
#import "AddressBookUI-Structs.h"
#import "ABAbstractViewController.h"

@class ABPeoplePickerNavigationController, ABAccountsAndGroupDataSource, UITableView;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {
	ABAccountsAndGroupDataSource *_dataSource;	// 204 = 0xcc
	BOOL _needsReload;	// 208 = 0xd0
	BOOL _tableViewNeedsReloadAfterResume;	// 209 = 0xd1
	BOOL _showsRefreshButton;	// 210 = 0xd2
	ABPeoplePickerNavigationController *_peoplePickerNavigationController;	// 212 = 0xd4
}
@property(readonly, assign, nonatomic) ABAccountsAndGroupDataSource *dataSource;	// G=0x3147d0c5; @synthesize=_dataSource
@property(assign, nonatomic) BOOL hidesGlobalGroupWrapper;	// G=0x3147be55; S=0x3147be29; 
@property(assign, nonatomic) BOOL hidesSearchableSources;	// G=0x3147be01; S=0x3147bdd5; 
@property(retain) id model;	// G=0x3147c0b5; S=0x3147c0d5; converted property
@property(assign, nonatomic) ABPeoplePickerNavigationController *peoplePickerNavigationController;	// G=0x3147d0d5; S=0x3147d0e5; @synthesize=_peoplePickerNavigationController
@property(readonly, assign, nonatomic) UITableView *tableView;	// G=0x3147bbfd; 
- (id)initWithModel:(id)model;	// 0x3147be7d
- (void)_applyAccessibilityFontChanges;	// 0x3147bd45
- (void)_applyStylesToTableView:(id)tableView;	// 0x3147c161
- (void)_updateDisplayedContactsFilterFromSelection;	// 0x3147ce5d
- (int)abViewControllerType;	// 0x3147c65d
- (void)accessibilityLargeTextDidChange;	// 0x3147bd95
- (id)allGroupWrapperIndexPaths;	// 0x314ace99
- (void)applicationDidResume;	// 0x3147c649
// declared property getter: - (id)dataSource;	// 0x3147d0c5
- (void)dealloc;	// 0x3147bfed
- (void)done:(id)done;	// 0x3147c661
// declared property getter: - (BOOL)hidesGlobalGroupWrapper;	// 0x3147be55
// declared property getter: - (BOOL)hidesSearchableSources;	// 0x3147be01
- (void)loadView;	// 0x3147c37d
// converted property getter: - (id)model;	// 0x3147c0b5
- (void)modelDatabaseChange:(id)change;	// 0x3147d095
// declared property getter: - (id)peoplePickerNavigationController;	// 0x3147d0d5
- (void)refreshEverythingNow;	// 0x3147bacd
- (void)reloadData;	// 0x3147ba69
// declared property setter: - (void)setHidesGlobalGroupWrapper:(BOOL)wrapper;	// 0x3147be29
// declared property setter: - (void)setHidesSearchableSources:(BOOL)sources;	// 0x3147bdd5
// converted property setter: - (void)setModel:(id)model;	// 0x3147c0d5
// declared property setter: - (void)setPeoplePickerNavigationController:(id)controller;	// 0x3147d0e5
- (void)setStyleProvider:(id)provider;	// 0x3147c311
// declared property getter: - (id)tableView;	// 0x3147bbfd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3147ced1
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x3147cdc5
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x3147ca39
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x3147c6a1
- (void)updateRefreshButton;	// 0x3147bb01
- (void)viewDidAppear:(BOOL)view;	// 0x3147c5b1
- (void)viewWillAppear:(BOOL)view;	// 0x3147c4e9
- (void)viewWillDisappear:(BOOL)view;	// 0x3147c5fd
@end

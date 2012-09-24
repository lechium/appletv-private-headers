/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDataSource.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, ABModel, NSArray, AccountsManager, ACAccountStore;

@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource> {
	ABModel *_model;	// 4 = 0x4
	NSArray *_accountIdentifiers;	// 8 = 0x8
	NSArray *_accountDisplayNames;	// 12 = 0xc
	NSDictionary *_groupsByAccountIdentifier;	// 16 = 0x10
	BOOL _hidesSearchableSources;	// 20 = 0x14
	BOOL _hidesGlobalGroupWrapper;	// 21 = 0x15
	AccountsManager *_accountsManager;	// 24 = 0x18
	ACAccountStore *_accountStore;	// 28 = 0x1c
	BOOL _dirty;	// 32 = 0x20
}
@property(retain, nonatomic) ACAccountStore *accountStore;	// G=0x34fc1709; S=0x34fc2a21; @synthesize=_accountStore
@property(retain, nonatomic) AccountsManager *accountsManager;	// G=0x34fa31f9; S=0x34fa31e9; @synthesize=_accountsManager
@property(assign, nonatomic, getter=isDirty) BOOL dirty;	// G=0x34fc2a31; S=0x34fc2a41; @synthesize=_dirty
@property(assign, nonatomic) BOOL hidesGlobalGroupWrapper;	// G=0x34f6638d; S=0x34fc2a11; @synthesize=_hidesGlobalGroupWrapper
@property(assign, nonatomic) BOOL hidesSearchableSources;	// G=0x34fa3461; S=0x34f658d1; @synthesize=_hidesSearchableSources
@property(retain, nonatomic) ABModel *model;	// G=0x34f65895; S=0x34f658e1; @synthesize=_model
- (id)init;	// 0x34f657dd
- (id)accountDisplayNameAtIndex:(int)index;	// 0x34fc267d
// declared property getter: - (id)accountStore;	// 0x34fc1709
// declared property getter: - (id)accountsManager;	// 0x34fa31f9
- (void)cancelScheduledRefresh;	// 0x34fc29d9
- (void)dealloc;	// 0x34fc163d
- (id)defaultGroupWrapper;	// 0x34fc1749
- (id)groupWrapperForIndexPath:(id)indexPath;	// 0x34fc21a1
// declared property getter: - (BOOL)hidesGlobalGroupWrapper;	// 0x34f6638d
// declared property getter: - (BOOL)hidesSearchableSources;	// 0x34fa3461
- (id)indexPathForGroupWrapper:(id)groupWrapper;	// 0x34fc2229
// declared property getter: - (BOOL)isDirty;	// 0x34fc2a31
// declared property getter: - (id)model;	// 0x34f65895
- (id)newContactsFilterFromSelectedGroupWrappers;	// 0x34fc23d9
- (int)numberOfAccounts;	// 0x34f65bc1
- (int)numberOfGroupsForAccountIdentifier:(id)accountIdentifier;	// 0x34fc2881
- (int)numberOfGroupsInAccountAtIndex:(int)index;	// 0x34fa3579
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x34f65bb1
- (void)reloadData;	// 0x34fa31d5
- (void)reloadDataIncludingAccountsManager:(BOOL)manager usingArchivedState:(BOOL)state;	// 0x34fc17c5
- (void)scheduleRefresh;	// 0x34fc28b9
// declared property setter: - (void)setAccountStore:(id)store;	// 0x34fc2a21
// declared property setter: - (void)setAccountsManager:(id)manager;	// 0x34fa31e9
// declared property setter: - (void)setDirty:(BOOL)dirty;	// 0x34fc2a41
// declared property setter: - (void)setHidesGlobalGroupWrapper:(BOOL)wrapper;	// 0x34fc2a11
// declared property setter: - (void)setHidesSearchableSources:(BOOL)sources;	// 0x34f658d1
// declared property setter: - (void)setModel:(id)model;	// 0x34f658e1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34fc2711
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34fc269d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34fa3565
@end

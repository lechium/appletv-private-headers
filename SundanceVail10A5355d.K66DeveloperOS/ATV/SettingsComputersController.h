/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface SettingsComputersController : BRViewController {
	BOOL _isDiagnosticsItemEnabled;	// 100 = 0x64
}
- (id)init;	// 0xa8071
- (void)_diagnoseHomeSharing;	// 0xa8a6d
- (void)_existingHomeShareOptionSelected:(id)selected;	// 0xa8e89
- (void)_handleSettingsItemSelectedForRow:(long)row;	// 0xa8941
- (void)_iTunesConnectForHomeShare;	// 0xa896d
- (void)_inspectHomeShareAccount;	// 0xa8b09
- (void)_preferredAccountChangedState:(id)state;	// 0xa904d
- (id)_settingsItemForRow:(long)row;	// 0xa87dd
- (void)dealloc;	// 0xa83ad
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xa84d9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xa877d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xa8419
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xa847d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xa84a1
- (long)numberOfSectionsInList:(id)list;	// 0xa8479
@end


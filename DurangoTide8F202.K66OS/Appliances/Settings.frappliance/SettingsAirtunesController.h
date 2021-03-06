/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsAirtunesController.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRTextFieldDelegate.h"

@class NSDictionary, BRTextEntryController;

@interface SettingsAirtunesController : XXUnknownSuperclass <BRTextFieldDelegate> {
	BRTextEntryController *_localPasswordEntryController;	// 64 = 0x40
	NSDictionary *_selectedSpeakerInfo;	// 68 = 0x44
}
- (id)init;	// 0x15155
- (void)dealloc;	// 0x14e1d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x14d99
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x14dd9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x14cb5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x1510d
- (long)numberOfSectionsInList:(id)list;	// 0x14cb1
- (void)textDidChange:(id)text;	// 0x14cc1
- (void)textDidEndEditing:(id)text;	// 0x14cc5
@end

@interface SettingsAirtunesController (Private)
- (void)_handleSettingsItemSelectedForRow:(long)row;	// 0x14ea1
- (id)_settingsItemForRow:(long)row;	// 0x15291
@end


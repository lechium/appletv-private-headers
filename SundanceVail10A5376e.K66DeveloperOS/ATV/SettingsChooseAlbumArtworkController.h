/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class SettingsAlbumArtworkConnectorController, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsChooseAlbumArtworkController : BRViewController {
	NSArray *_servers;	// 104 = 0x68
	SettingsAlbumArtworkConnectorController *_connectionController;	// 108 = 0x6c
}
- (id)init;	// 0xbdae9
- (void).cxx_destruct;	// 0xbe921
- (void)_dataServersChanged:(id)changed;	// 0xbe8ad
- (void)_handleSelectionWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0xbe649
- (void)_handleSelectionWithDataServer:(id)dataServer dataClientType:(unsigned long)type;	// 0xbe6ed
- (id)_servers;	// 0xbe425
- (void)dealloc;	// 0xbdc55
- (void)handleHomeSharingSelectionWithServer:(id)server;	// 0xbe829
- (void)handleiTunesMatchSelection;	// 0xbe79d
- (BOOL)isITunesMatchAvailable;	// 0xbe4a1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xbe26d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xbe359
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xbde39
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xbe151
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xbe1cd
- (long)numberOfSectionsInList:(id)list;	// 0xbe14d
- (void)wasExhumed;	// 0xbdcc1
@end


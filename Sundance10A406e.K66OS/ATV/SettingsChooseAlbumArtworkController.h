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
	NSArray *_augmentedServers;	// 104 = 0x68
	NSArray *_servers;	// 108 = 0x6c
	SettingsAlbumArtworkConnectorController *_connectionController;	// 112 = 0x70
	id _completionHandler;	// 116 = 0x74
}
@property(copy, nonatomic) NSArray *augmentedServers;	// G=0xc24ad; S=0xc3165; @synthesize=_augmentedServers
@property(copy, nonatomic) id completionHandler;	// G=0xc31bd; S=0xc31d1; @synthesize=_completionHandler
@property(retain, nonatomic) SettingsAlbumArtworkConnectorController *connectionController;	// G=0xc3185; S=0xc3195; @synthesize=_connectionController
@property(readonly, assign, nonatomic) BOOL isAlbumArtAvailable;	// G=0xc134d; 
@property(copy, nonatomic) NSArray *servers;	// G=0xc2431; S=0xc3175; @synthesize=_servers
- (id)init;	// 0xc1175
- (void).cxx_destruct;	// 0xc31e1
- (int)_augmentedServerCount;	// 0xc2995
- (void)_dataServersChanged:(id)changed;	// 0xc30e1
- (void)_handleSelectionWithConnectedDataClient:(id)connectedDataClient;	// 0xc2fc9
- (void)_handleSelectionWithDataClient:(id)dataClient dataClientType:(unsigned long)type connectionController:(id *)controller;	// 0xc2f29
- (void)_handleSelectionWithDataServer:(id)dataServer dataClientType:(unsigned long)type connectionController:(id *)controller;	// 0xc2e51
- (BOOL)_isITunesMatchAvailable;	// 0xc2ca9
// declared property getter: - (id)augmentedServers;	// 0xc24ad
// declared property getter: - (id)completionHandler;	// 0xc31bd
// declared property getter: - (id)connectionController;	// 0xc3185
- (void)dealloc;	// 0xc12e1
- (id)defaultOptionName:(BOOL *)name;	// 0xc155d
- (BOOL)handleSelectionUsingStack:(id)stack selectDefault:(BOOL)aDefault completionHandler:(id)handler;	// 0xc1679
// declared property getter: - (BOOL)isAlbumArtAvailable;	// 0xc134d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xc2345
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc1f45
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc1b11
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc1e29
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xc1ea5
- (long)numberOfSectionsInList:(id)list;	// 0xc1e25
// declared property getter: - (id)servers;	// 0xc2431
// declared property setter: - (void)setAugmentedServers:(id)servers;	// 0xc3165
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0xc31d1
// declared property setter: - (void)setConnectionController:(id)controller;	// 0xc3195
// declared property setter: - (void)setServers:(id)servers;	// 0xc3175
- (void)wasExhumed;	// 0xc19e5
- (void)wasPopped;	// 0xc198d
- (void)wasPushed;	// 0xc190d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, SettingsAlbumArtworkConnectorController;

__attribute__((visibility("hidden")))
@interface SettingsChooseAlbumArtworkController : BRViewController {
	NSArray *_augmentedServers;	// 104 = 0x68
	NSArray *_servers;	// 108 = 0x6c
	SettingsAlbumArtworkConnectorController *_connectionController;	// 112 = 0x70
	id _completionHandler;	// 116 = 0x74
}
@property(copy, nonatomic) NSArray *augmentedServers;	// G=0xc990d; S=0xca5c5; @synthesize=_augmentedServers
@property(copy, nonatomic) id completionHandler;	// G=0xca61d; S=0xca631; @synthesize=_completionHandler
@property(retain, nonatomic) SettingsAlbumArtworkConnectorController *connectionController;	// G=0xca5e5; S=0xca5f5; @synthesize=_connectionController
@property(readonly, assign, nonatomic) BOOL isAlbumArtAvailable;	// G=0xc87a1; 
@property(copy, nonatomic) NSArray *servers;	// G=0xc9891; S=0xca5d5; @synthesize=_servers
- (id)init;	// 0xc85c9
- (void).cxx_destruct;	// 0xca641
- (int)_augmentedServerCount;	// 0xc9df5
- (void)_dataServersChanged:(id)changed;	// 0xca541
- (void)_handleSelectionWithConnectedDataClient:(id)connectedDataClient;	// 0xca429
- (void)_handleSelectionWithDataClient:(id)dataClient dataClientType:(unsigned long)type connectionController:(id *)controller;	// 0xca389
- (void)_handleSelectionWithDataServer:(id)dataServer dataClientType:(unsigned long)type connectionController:(id *)controller;	// 0xca2b1
- (BOOL)_isITunesMatchAvailable;	// 0xca109
// declared property getter: - (id)augmentedServers;	// 0xc990d
// declared property getter: - (id)completionHandler;	// 0xca61d
// declared property getter: - (id)connectionController;	// 0xca5e5
- (void)dealloc;	// 0xc8735
- (BOOL)handleSelectionUsingStack:(id)stack selectDefault:(BOOL)aDefault completionHandler:(id)handler;	// 0xc8ad9
- (BOOL)hasMultipleOptions:(id *)options;	// 0xc89b1
// declared property getter: - (BOOL)isAlbumArtAvailable;	// 0xc87a1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xc97a5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc93a5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc8f71
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc9289
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xc9305
- (long)numberOfSectionsInList:(id)list;	// 0xc9285
// declared property getter: - (id)servers;	// 0xc9891
// declared property setter: - (void)setAugmentedServers:(id)servers;	// 0xca5c5
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0xca631
// declared property setter: - (void)setConnectionController:(id)controller;	// 0xca5f5
// declared property setter: - (void)setServers:(id)servers;	// 0xca5d5
- (void)wasExhumed;	// 0xc8e45
- (void)wasPopped;	// 0xc8ded
- (void)wasPushed;	// 0xc8d6d
@end


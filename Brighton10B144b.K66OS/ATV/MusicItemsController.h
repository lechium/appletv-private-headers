/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class NSNumber, NSString, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface MusicItemsController : MusicController {
	ATVDataCollection *_album;	// 164 = 0xa4
	ATVDataCollection *_artist;	// 168 = 0xa8
	ATVDataCollection *_musicVideoArtist;	// 172 = 0xac
	ATVDataCollection *_composer;	// 176 = 0xb0
	ATVDataCollection *_playlist;	// 180 = 0xb4
	NSString *_genre;	// 184 = 0xb8
	NSNumber *_albumID;	// 188 = 0xbc
	BOOL _displaysMusicVideosOnly;	// 192 = 0xc0
	BOOL _displayAudiobooksOnly;	// 193 = 0xc1
	BOOL _displayCompilationTracksOnly;	// 194 = 0xc2
	BOOL _sortItemsByName;	// 195 = 0xc3
	BOOL _refreshList;	// 196 = 0xc4
}
+ (id)allMusicVideosControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1d4e05
+ (id)allSongsControllerByGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d4d5d
+ (id)allSongsControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1d4d2d
+ (id)audiobooksControllerForAlbum:(id)album dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d5091
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x1d4ce1
+ (id)musicVideosControllerForArtist:(id)artist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d5049
+ (id)songsControllerForAlbum:(id)album byGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d4e91
+ (id)songsControllerForAlbumWithID:(id)anId dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d4f51
+ (id)songsControllerForArtist:(id)artist byGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d4ef5
+ (id)songsControllerForComposer:(id)composer dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d4f99
+ (id)songsControllerForPlaylist:(id)playlist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d4ff1
- (id)initWithAlbum:(id)album byGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d5179
- (id)initWithAlbumID:(id)albumID dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d53c1
- (id)initWithArtist:(id)artist byGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d52b9
- (id)initWithAudiobookAlbum:(id)audiobookAlbum dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d5735
- (id)initWithComposer:(id)composer dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d5455
- (id)initWithGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d50d9
- (id)initWithMusiVideoArtist:(id)musiVideoArtist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d563d
- (id)initWithPlaylist:(id)playlist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d553d
- (void)_playerUpdated:(id)updated;	// 0x1d6cb5
- (void)_registerForPlayerNotifications;	// 0x1d6bfd
- (void)_setDisplaysAudiobooksOnly:(BOOL)only;	// 0x1d6bed
- (void)_setDisplaysMusicVideosOnly:(BOOL)only;	// 0x1d6bdd
- (void)_setPreviewForMedia:(id)media;	// 0x1d6ac1
- (BOOL)_shuffleEnabled;	// 0x1d6a81
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1d5e79
- (void)dealloc;	// 0x1d5791
- (id)errorForNoContent;	// 0x1d5de9
- (id)indexPathForDataItem:(void *)dataItem;	// 0x1d5e09
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1d616d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1d67b1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1d6331
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1d60ed
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1d6899
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1d67c1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1d5f4d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1d5ef5
- (id)newDataQuery;	// 0x1d5aa1
- (id)newPreDataQuery;	// 0x1d58cd
- (long)numberOfSectionsInList:(id)list;	// 0x1d5f49
- (BOOL)preDataQueryComplete:(id)complete;	// 0x1d5985
- (void)setSortItemsByName:(BOOL)name;	// 0x1d6a01
- (BOOL)shouldShowSearch;	// 0x1d6a15
- (int)typeaheadSelectionOffset;	// 0x1d6a11
- (void)wasExhumed;	// 0x1d5859
@end

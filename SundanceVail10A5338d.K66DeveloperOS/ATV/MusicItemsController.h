/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class ATVDataCollection, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MusicItemsController : MusicController {
	ATVDataCollection *_album;	// 156 = 0x9c
	ATVDataCollection *_artist;	// 160 = 0xa0
	ATVDataCollection *_musicVideoArtist;	// 164 = 0xa4
	ATVDataCollection *_composer;	// 168 = 0xa8
	ATVDataCollection *_playlist;	// 172 = 0xac
	NSString *_genre;	// 176 = 0xb0
	NSNumber *_albumID;	// 180 = 0xb4
	BOOL _displaysMusicVideosOnly;	// 184 = 0xb8
	BOOL _displayAudiobooksOnly;	// 185 = 0xb9
	BOOL _displayCompilationTracksOnly;	// 186 = 0xba
	BOOL _sortItemsByName;	// 187 = 0xbb
	BOOL _refreshList;	// 188 = 0xbc
}
+ (id)allMusicVideosControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1a94a5
+ (id)allSongsControllerByGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a93fd
+ (id)allSongsControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1a93cd
+ (id)audiobooksControllerForAlbum:(id)album dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9731
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x1a9381
+ (id)musicVideosControllerForArtist:(id)artist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a96e9
+ (id)songsControllerForAlbum:(id)album byGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9531
+ (id)songsControllerForAlbumWithID:(id)anId dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a95f1
+ (id)songsControllerForArtist:(id)artist byGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9595
+ (id)songsControllerForComposer:(id)composer dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9639
+ (id)songsControllerForPlaylist:(id)playlist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9691
- (id)initWithAlbum:(id)album byGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9819
- (id)initWithAlbumID:(id)albumID dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9a61
- (id)initWithArtist:(id)artist byGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9959
- (id)initWithAudiobookAlbum:(id)audiobookAlbum dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9dd5
- (id)initWithComposer:(id)composer dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9af5
- (id)initWithGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9779
- (id)initWithMusiVideoArtist:(id)musiVideoArtist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9cdd
- (id)initWithPlaylist:(id)playlist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1a9bdd
- (int)_headerCount;	// 0x1aadb9
- (void)_playerUpdated:(id)updated;	// 0x1aaff5
- (void)_registerForPlayerNotifications;	// 0x1aaf3d
- (void)_setDisplaysAudiobooksOnly:(BOOL)only;	// 0x1aaf2d
- (void)_setDisplaysMusicVideosOnly:(BOOL)only;	// 0x1aaf1d
- (void)_setPreviewForMedia:(id)media;	// 0x1aae01
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1aa53d
- (void)dealloc;	// 0x1a9e31
- (id)errorForNoContent;	// 0x1aa485
- (id)indexPathForDataItem:(void *)dataItem;	// 0x1aa4a5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1aa7f5
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1aab81
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1aa939
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1aa731
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1aac71
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1aab91
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1aa5e1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1aa79d
- (id)newDataQuery;	// 0x1aa13d
- (id)newPreDataQuery;	// 0x1a9f6d
- (BOOL)preDataQueryComplete:(id)complete;	// 0x1aa021
- (void)setSortItemsByName:(BOOL)name;	// 0x1aada9
- (void)wasExhumed;	// 0x1a9ef9
@end


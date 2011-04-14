/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"
#import "Computers-Structs.h"
#import "MusicItemsController.h"

@class NSNumber, NSString;

@interface MusicItemsController : MusicController {
	ATVMediaCollectionRef _album;	// 120 = 0x78
	ATVMediaCollectionRef _artist;	// 124 = 0x7c
	ATVMediaCollectionRef _musicVideoArtist;	// 128 = 0x80
	ATVMediaCollectionRef _composer;	// 132 = 0x84
	ATVMediaCollectionRef _playlist;	// 136 = 0x88
	NSString *_genre;	// 140 = 0x8c
	NSNumber *_albumID;	// 144 = 0x90
	BOOL _displaysMusicVideosOnly;	// 148 = 0x94
	BOOL _displayAudiobooksOnly;	// 149 = 0x95
	BOOL _sortItemsByName;	// 150 = 0x96
	BOOL _refreshList;	// 151 = 0x97
}
+ (id)allMusicVideosController;	// 0xa4e5
+ (id)allSongsController;	// 0x98f9
+ (id)allSongsControllerByGenre:(id)genre;	// 0xa55d
+ (id)audiobooksControllerForAlbum:(ATVMediaCollectionRef)album;	// 0x9745
+ (id)musicVideosControllerForArtist:(ATVMediaCollectionRef)artist;	// 0x9779
+ (id)songsControllerForAlbum:(ATVMediaCollectionRef)album byGenre:(id)genre;	// 0x98b1
+ (id)songsControllerForAlbumWithID:(id)anId;	// 0x9835
+ (id)songsControllerForArtist:(ATVMediaCollectionRef)artist byGenre:(id)genre;	// 0x9869
+ (id)songsControllerForComposer:(ATVMediaCollectionRef)composer;	// 0x97f1
+ (id)songsControllerForPlaylist:(ATVMediaCollectionRef)playlist;	// 0x97ad
- (id)init;	// 0x96f5
- (id)initWithAlbum:(ATVMediaCollectionRef)album byGenre:(id)genre;	// 0x9d81
- (id)initWithAlbumID:(id)albumID;	// 0x961d
- (id)initWithArtist:(ATVMediaCollectionRef)artist byGenre:(id)genre;	// 0x9a95
- (id)initWithAudiobookAlbum:(ATVMediaCollectionRef)audiobookAlbum;	// 0x95ed
- (id)initWithComposer:(ATVMediaCollectionRef)composer;	// 0x99dd
- (id)initWithGenre:(id)genre;	// 0x9689
- (id)initWithMusiVideoArtist:(ATVMediaCollectionRef)musiVideoArtist;	// 0x9919
- (id)initWithPlaylist:(ATVMediaCollectionRef)playlist;	// 0x9c95
- (ATVMediaQueryRef)createDataQuery;	// 0xa069
- (ATVMediaQueryRef)createPreDataQuery;	// 0x9ff1
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x944d
- (void)dealloc;	// 0x9f3d
- (id)errorForNoContent;	// 0x955d
- (id)indexPathForDataItem:(void *)dataItem;	// 0x94dd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x92b1
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x9149
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x915d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x93f5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xa2dd
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xa411
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x9b69
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x93a5
- (BOOL)preDataQueryComplete:(id)complete;	// 0x9e8d
- (void)setSortItemsByName:(BOOL)name;	// 0x8fd1
- (void)wasExhumed;	// 0x9581
@end

@interface MusicItemsController (Private)
- (int)_headerCount;	// 0x910d
- (void)_playerUpdated:(id)updated;	// 0x9001
- (void)_registerForPlayerNotifications;	// 0x9065
- (void)_setDisplaysAudiobooksOnly:(BOOL)only;	// 0x8ff1
- (void)_setDisplaysMusicVideosOnly:(BOOL)only;	// 0x8fe1
- (void)_setPreviewForMedia:(void *)media;	// 0xa5d5
@end


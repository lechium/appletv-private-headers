/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"

@class NSString, NSNumber;

@interface MusicItemsController : MusicController {
@private
	ATVMediaCollectionRef _album;	// 124 = 0x7c
	ATVMediaCollectionRef _artist;	// 128 = 0x80
	ATVMediaCollectionRef _musicVideoArtist;	// 132 = 0x84
	ATVMediaCollectionRef _composer;	// 136 = 0x88
	ATVMediaCollectionRef _playlist;	// 140 = 0x8c
	NSString *_genre;	// 144 = 0x90
	NSNumber *_albumID;	// 148 = 0x94
	BOOL _displaysMusicVideosOnly;	// 152 = 0x98
	BOOL _displayAudiobooksOnly;	// 153 = 0x99
	BOOL _sortItemsByName;	// 154 = 0x9a
	BOOL _refreshList;	// 155 = 0x9b
}
+ (id)allMusicVideosControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x3318bf45
+ (id)allSongsControllerByGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318beb1
+ (id)allSongsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x3318be81
+ (id)audiobooksControllerForAlbum:(ATVMediaCollectionRef)album dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c1cd
+ (id)controllerForATVMediaType:(ATVMediaTypeRef)atvmediaType collection:(ATVMediaCollectionRef)collection dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x3318be39
+ (id)musicVideosControllerForArtist:(ATVMediaCollectionRef)artist dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c185
+ (id)songsControllerForAlbum:(ATVMediaCollectionRef)album byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318bfd5
+ (id)songsControllerForAlbumWithID:(id)anId dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c08d
+ (id)songsControllerForArtist:(ATVMediaCollectionRef)artist byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c031
+ (id)songsControllerForComposer:(ATVMediaCollectionRef)composer dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c0d5
+ (id)songsControllerForPlaylist:(ATVMediaCollectionRef)playlist dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c12d
- (id)initWithAlbum:(ATVMediaCollectionRef)album byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c295
- (id)initWithAlbumID:(id)albumID dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c4b5
- (id)initWithArtist:(ATVMediaCollectionRef)artist byGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c3c5
- (id)initWithAudiobookAlbum:(ATVMediaCollectionRef)audiobookAlbum dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c7f1
- (id)initWithComposer:(ATVMediaCollectionRef)composer dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c535
- (id)initWithGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c215
- (id)initWithMusiVideoArtist:(ATVMediaCollectionRef)musiVideoArtist dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c711
- (id)initWithPlaylist:(ATVMediaCollectionRef)playlist dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3318c605
- (int)_headerCount;	// 0x3318d705
- (void)_playerUpdated:(id)updated;	// 0x3318d91d
- (void)_registerForPlayerNotifications;	// 0x3318d865
- (void)_setDisplaysAudiobooksOnly:(BOOL)only;	// 0x3318d855
- (void)_setDisplaysMusicVideosOnly:(BOOL)only;	// 0x3318d845
- (void)_setPreviewForMedia:(void *)media;	// 0x3318d751
- (ATVMediaQueryRef)createDataQuery;	// 0x3318cb11
- (ATVMediaQueryRef)createPreDataQuery;	// 0x3318c979
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x3318ce75
- (void)dealloc;	// 0x3318c835
- (id)errorForNoContent;	// 0x3318cdc5
- (id)indexPathForDataItem:(void *)dataItem;	// 0x3318cde5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3318d121
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x3318d4a9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3318d271
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x3318d069
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x3318d5a5
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x3318d4b9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3318cf19
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3318d0d5
- (BOOL)preDataQueryComplete:(id)complete;	// 0x3318c9ed
- (void)setSortItemsByName:(BOOL)name;	// 0x3318d6f5
- (void)wasExhumed;	// 0x3318c905
@end


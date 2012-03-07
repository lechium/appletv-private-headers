/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"
#import "AppleTV-Structs.h"

@class PlayHandler, BRAsyncTaskContext, NSString;

__attribute__((visibility("hidden")))
@interface MusicSearchAgent : ATVSearchAgent {
@private
	NSString *_initialSearchTerm;	// 12 = 0xc
	NSString *_searchTerm;	// 16 = 0x10
	ATVMediaQueryRef _artistQuery;	// 20 = 0x14
	ATVMediaQueryRef _albumQuery;	// 24 = 0x18
	ATVMediaQueryRef _playlistQuery;	// 28 = 0x1c
	ATVMediaQueryRef _songQuery;	// 32 = 0x20
	int _pendingQueryCount;	// 36 = 0x24
	BRAsyncTaskContext *_taskContext;	// 40 = 0x28
	PlayHandler *_playHandler;	// 44 = 0x2c
	ATVDataClientRef dataClient;	// 48 = 0x30
	unsigned long clientType;	// 52 = 0x34
}
@property(assign, nonatomic) unsigned long clientType;	// G=0x342fe285; S=0x342fe295; @synthesize
@property(retain, nonatomic) ATVDataClientRef dataClient;	// G=0x342fe251; S=0x342fe261; @synthesize
+ (id)searchAgent;	// 0x342fde75
- (id)init;	// 0x342fdead
- (void)_addMediaTypeFilterForQuery:(ATVMediaQueryRef)query;	// 0x342ff3ed
- (void)_addSearchTermFilterForQuery:(ATVMediaQueryRef)query operator:(int)anOperator;	// 0x342ff3a9
- (ATVMediaQueryRef)_createAlbumQuery;	// 0x342ff291
- (ATVMediaQueryRef)_createArtistQuery;	// 0x342ff12d
- (ATVMediaQueryRef)_createPlaylistQuery;	// 0x342ff21d
- (ATVMediaQueryRef)_createSongQuery;	// 0x342ff31d
- (void)_dataClientSearch;	// 0x342fe3e1
- (void)_dataClientSearchComplete;	// 0x342febc9
- (id)_filterData:(id)data forSearchTerm:(id)searchTerm;	// 0x342fe99d
- (id)_filterExistingResultsForSearchTerm:(id)searchTerm;	// 0x342fe62d
- (void)_postSearchResults:(id)results searchTerm:(id)term;	// 0x342ff0b1
- (id)_providerForSearchResults:(id)searchResults title:(id)title label:(id)label;	// 0x342ff51d
- (void)_queryComplete;	// 0x342ff60d
- (void)_search;	// 0x342fe2a5
- (void)_searchFilteringComplete:(id)complete;	// 0x342fe8a1
- (void)_searchForMultiCharFirstSearchTerm;	// 0x342fe315
- (void)_setAlbumQuery:(ATVMediaQueryRef)query;	// 0x342ff4b5
- (void)_setArtistQuery:(ATVMediaQueryRef)query;	// 0x342ff44d
- (void)_setPlaylistQuery:(ATVMediaQueryRef)query;	// 0x342ff481
- (void)_setSongQuery:(ATVMediaQueryRef)query;	// 0x342ff4e9
- (void)_startSearchTask;	// 0x342fe325
- (long)cacheSize;	// 0x342fe24d
// declared property getter: - (unsigned long)clientType;	// 0x342fe285
- (id)contextMenuUtility;	// 0x342fe1ad
// declared property getter: - (ATVDataClientRef)dataClient;	// 0x342fe251
- (void)dealloc;	// 0x342fdf29
- (BOOL)handlePlayForObject:(id)object;	// 0x342fe1c9
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x342fe069
// declared property setter: - (void)setClientType:(unsigned long)type;	// 0x342fe295
// declared property setter: - (void)setDataClient:(ATVDataClientRef)client;	// 0x342fe261
- (BOOL)showRecentSearches;	// 0x342fe065
@end

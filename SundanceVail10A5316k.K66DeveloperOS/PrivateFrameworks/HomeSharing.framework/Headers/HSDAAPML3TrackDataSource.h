/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library
#import "ML3TrackInsertionDataSource.h"

@class NSData, NSArray;

@interface HSDAAPML3TrackDataSource : NSObject <ML3TrackInsertionDataSource> {
	XXStruct_rf32zC _parsedValues[256];	// 4 = 0x4
	int _parsedValuesPropertyIndex[83];	// 4100 = 0x1004
@private
	NSData *_itemsResponseData;	// 4432 = 0x1150
	NSArray *_rawItems;	// 4436 = 0x1154
	unsigned _idx;	// 4440 = 0x1158
}
- (id)initWithItemsResponseData:(id)itemsResponseData;	// 0x308d85f9
- (void)_parseCurrentItem;	// 0x308d87c5
- (id)currentTrackAlbum;	// 0x308dbc05
- (id)currentTrackAlbumArtist;	// 0x308dbc39
- (id)currentTrackArtist;	// 0x308dbc6d
- (id)currentTrackArtworkCacheID;	// 0x308dc505
- (long long)currentTrackAudioFormat;	// 0x308dc5b9
- (int)currentTrackAudioLanguage;	// 0x308dc635
- (int)currentTrackAudioTrackID;	// 0x308dc639
- (int)currentTrackAudioTrackIndex;	// 0x308dc63d
- (int)currentTrackBPM;	// 0x308dc641
- (int)currentTrackBitRate;	// 0x308db0b1
- (double)currentTrackBookmarkTimeMS;	// 0x308d9741
- (id)currentTrackCategory;	// 0x308dbca1
- (id)currentTrackChapterData;	// 0x308daa55
- (BOOL)currentTrackChosenByAutoFill;	// 0x308dc58d
- (id)currentTrackComment;	// 0x308dbcd5
- (id)currentTrackComposer;	// 0x308dbd09
- (int)currentTrackContentRating;	// 0x308db13d
- (double)currentTrackDateAdded;	// 0x308daa89
- (double)currentTrackDateLastUsed;	// 0x308dc575
- (double)currentTrackDateModified;	// 0x308dab81
- (double)currentTrackDatePlayed;	// 0x308dac79
- (double)currentTrackDateReleased;	// 0x308dad71
- (double)currentTrackDateSkipped;	// 0x308dc649
- (int)currentTrackDiscCount;	// 0x308db21d
- (int)currentTrackDiscNumber;	// 0x308db2a5
- (long long)currentTrackDurationInSamples;	// 0x308d9829
- (int)currentTrackEpisodeSortID;	// 0x308dc135
- (BOOL)currentTrackExcludeFromShuffle;	// 0x308d9359
- (id)currentTrackFeedURL;	// 0x308dc2c5
- (id)currentTrackFilePath;	// 0x308dc511
- (long long)currentTrackGaplessEncodingDelay;	// 0x308d98fd
- (long long)currentTrackGaplessEncodingDrain;	// 0x308d99d1
- (long long)currentTrackGaplessHeuristicInfo;	// 0x308d9aa5
- (long long)currentTrackGaplessLastFrameResync;	// 0x308d9b79
- (long long)currentTrackGeniusChecksum;	// 0x308dc5c9
- (id)currentTrackGenre;	// 0x308dbd3d
- (long long)currentTrackGlobalID;	// 0x308dc5d1
- (BOOL)currentTrackHasAlternateAudio;	// 0x308dc591
- (BOOL)currentTrackHasBeenPlayed;	// 0x308dc51d
- (BOOL)currentTrackHasSubtitles;	// 0x308dc595
- (BOOL)currentTrackIsAudibleAudioBook;	// 0x308dc599
- (BOOL)currentTrackIsCompilation;	// 0x308d93e9
- (BOOL)currentTrackIsDemoRental;	// 0x308dc59d
- (int)currentTrackIsDownloading;	// 0x308db331
- (BOOL)currentTrackIsHD;	// 0x308d9479
- (BOOL)currentTrackIsHidden;	// 0x308dc5a1
- (BOOL)currentTrackIsITunesU;	// 0x308d9509
- (BOOL)currentTrackIsOTAPurchased;	// 0x308dc5a5
- (BOOL)currentTrackIsPodcast;	// 0x308d9595
- (BOOL)currentTrackIsRental;	// 0x308d9621
- (BOOL)currentTrackIsTemporaryCloudDownload;	// 0x308dc5a9
- (BOOL)currentTrackIsUserDisabled;	// 0x308db1c5
- (id)currentTrackKind;	// 0x308dbd71
- (unsigned long)currentTrackMediaType;	// 0x308da979
- (long long)currentTrackPendingGeniusChecksum;	// 0x308dc5d9
- (long long)currentTrackPersistentID;	// 0x308d9c4d
- (int)currentTrackPlayCountRecent;	// 0x308db335
- (int)currentTrackPlayCountUser;	// 0x308db3c1
- (long long)currentTrackRatingLevel;	// 0x308d9d1d
- (double)currentTrackRelativeVolume;	// 0x308dc5ad
- (BOOL)currentTrackRememberBookmarkTime;	// 0x308d96ad
- (long long)currentTrackRentalDuration;	// 0x308d9ddd
- (long long)currentTrackRentalPlaybackDuration;	// 0x308d9eb1
- (double)currentTrackRentalPlaybackStartDate;	// 0x308dae69
- (double)currentTrackRentalStartDate;	// 0x308daf11
- (int)currentTrackSampleRate;	// 0x308db44d
- (id)currentTrackSeasonNumber;	// 0x308dbb65
- (id)currentTrackSeriesName;	// 0x308dbdfd
- (int)currentTrackSkipCountRecent;	// 0x308db4d9
- (int)currentTrackSkipCountUser;	// 0x308db565
- (id)currentTrackSortAlbum;	// 0x308dbe31
- (id)currentTrackSortAlbumArtist;	// 0x308dbe6d
- (id)currentTrackSortArtist;	// 0x308dbea9
- (id)currentTrackSortComposer;	// 0x308dbee5
- (id)currentTrackSortSeriesName;	// 0x308dbf21
- (id)currentTrackSortTitle;	// 0x308dbf61
- (double)currentTrackStartTimeMS;	// 0x308db5f1
- (double)currentTrackStopTimeMS;	// 0x308db6d9
- (long long)currentTrackStoreAccountID;	// 0x308d9f85
- (long long)currentTrackStoreArtistID;	// 0x308da059
- (long long)currentTrackStoreComposerID;	// 0x308da12d
- (double)currentTrackStoreDatePurchased;	// 0x308dafb9
- (long long)currentTrackStoreGenreID;	// 0x308da201
- (long long)currentTrackStoreItemID;	// 0x308da2d5
- (long long)currentTrackStoreKeyID;	// 0x308da3a9
- (long long)currentTrackStoreKeyPlatformID;	// 0x308da47d
- (long long)currentTrackStoreKeyVersions;	// 0x308da551
- (long long)currentTrackStoreMatchedStatus;	// 0x308dc5e1
- (long long)currentTrackStorePlaylistID;	// 0x308da625
- (long long)currentTrackStoreRedownloadedStatus;	// 0x308dc5e9
- (long long)currentTrackStoreSagaID;	// 0x308da6f9
- (long long)currentTrackStoreStoreKind;	// 0x308dc5f1
- (long long)currentTrackStoreStorefrontID;	// 0x308da701
- (long long)currentTrackStoreXID;	// 0x308dc5f9
- (int)currentTrackSubtitleLanguage;	// 0x308dc601
- (int)currentTrackSubtitleTrackID;	// 0x308dc605
- (int)currentTrackSubtitleTrackIndex;	// 0x308dc609
- (id)currentTrackTitle;	// 0x308dbf9d
- (long long)currentTrackTotalSize;	// 0x308da7d5
- (double)currentTrackTotalTimeMS;	// 0x308db7c1
- (int)currentTrackTrackCount;	// 0x308db8a9
- (int)currentTrackTrackNumber;	// 0x308db935
- (int)currentTrackUserAlbumRating;	// 0x308dba4d
- (int)currentTrackUserRating;	// 0x308db9c1
- (long long)currentTrackVolumeNormalization;	// 0x308da8a5
- (int)currentTrackYear;	// 0x308dbad9
- (void)dealloc;	// 0x308d875d
- (void)getCurrentTrackArtworkCacheID:(sqlite3_context *)anId;	// 0x308dc509
- (void)getCurrentTrackCategory:(sqlite3_context *)category;	// 0x308dbfd1
- (void)getCurrentTrackChapterData:(sqlite3_context *)data;	// 0x308dbfd9
- (void)getCurrentTrackCollectionDescription:(sqlite3_context *)description;	// 0x308dc585
- (void)getCurrentTrackComment:(sqlite3_context *)comment;	// 0x308dc031
- (void)getCurrentTrackCopyright:(sqlite3_context *)copyright;	// 0x308dc661
- (void)getCurrentTrackDescription:(sqlite3_context *)description;	// 0x308dc085
- (void)getCurrentTrackDownloadIdentifier:(sqlite3_context *)identifier;	// 0x308dc5c1
- (void)getCurrentTrackEQPreset:(sqlite3_context *)preset;	// 0x308dc1c1
- (void)getCurrentTrackEpisodeID:(sqlite3_context *)anId;	// 0x308dc0dd
- (void)getCurrentTrackExtendedContentRating:(sqlite3_context *)rating;	// 0x308dc219
- (void)getCurrentTrackFeedURL:(sqlite3_context *)url;	// 0x308dc271
- (void)getCurrentTrackGrouping:(sqlite3_context *)grouping;	// 0x308dc2f9
- (void)getCurrentTrackIntegrity:(sqlite3_context *)integrity;	// 0x308dc669
- (void)getCurrentTrackLongDescription:(sqlite3_context *)description;	// 0x308dc351
- (void)getCurrentTrackLyrics:(sqlite3_context *)lyrics;	// 0x308dc515
- (void)getCurrentTrackMovieInfo:(sqlite3_context *)info;	// 0x308dc3a5
- (void)getCurrentTrackNetworkName:(sqlite3_context *)name;	// 0x308dc3fd
- (void)getCurrentTrackPodcastExternalGUID:(sqlite3_context *)guid;	// 0x308dc62d
- (void)getCurrentTrackRedownloadActionParameters:(sqlite3_context *)parameters;	// 0x308dbda5
- (void)getCurrentTrackSortTitle:(sqlite3_context *)title;	// 0x308dc455
- (void)getCurrentTrackStoreArtworkURL:(sqlite3_context *)url;	// 0x308dc60d
- (void)getCurrentTrackStoreFlavor:(sqlite3_context *)flavor;	// 0x308dc61d
- (void)getCurrentTrackStoreLinkID:(sqlite3_context *)anId;	// 0x308dc615
- (void)getCurrentTrackStoreURL:(sqlite3_context *)url;	// 0x308dc625
- (void)getCurrentTrackTitle:(sqlite3_context *)title;	// 0x308dc4ad
- (BOOL)hasNextTrack;	// 0x308d92fd
- (BOOL)mediaKindIsSupported:(unsigned)supported;	// 0x308d91d5
- (void)postParseCurrentTrack;	// 0x308d87c1
- (void)seekToNextTrack;	// 0x308d91f1
- (void)seekToStart;	// 0x308d9339
@end


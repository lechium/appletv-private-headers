/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"

@class NSArray, MPMediaItemArtwork, NSString, NSDate;

@interface MPMediaItem : MPMediaEntity {
}
@property(readonly, assign, nonatomic) BOOL _hasDownloadProgress;	// G=0x31a6cc75; 
@property(readonly, assign, nonatomic) BOOL _isDownloadable;	// G=0x31a6d089; 
@property(readonly, assign, nonatomic) NSString *albumArtist;	// G=0x31a0edad; 
@property(readonly, assign, nonatomic) NSString *albumTitle;	// G=0x31a0ee05; 
@property(readonly, assign, nonatomic) NSString *artist;	// G=0x31a0ee21; 
@property(readonly, assign, nonatomic) MPMediaItemArtwork *artwork;	// G=0x31a0ee3d; 
@property(assign, nonatomic) double bookmarkTime;	// G=0x31a0ee59; S=0x31a0ee8d; 
@property(readonly, assign, nonatomic) NSArray *chapters;	// G=0x31a0e609; 
@property(readonly, assign, nonatomic) NSString *composer;	// G=0x31a0eed1; 
@property(readonly, assign, nonatomic) NSString *effectiveAlbumArtist;	// G=0x31a0edc9; 
@property(readonly, assign, nonatomic) double effectiveStopTime;	// G=0x31a0f039; 
@property(readonly, assign, nonatomic) NSString *genre;	// G=0x31a0eeed; 
@property(assign, nonatomic) BOOL hasBeenPlayed;	// G=0x31a0f40d; S=0x31a0f43d; 
@property(readonly, assign, nonatomic) BOOL isITunesU;	// G=0x31a0ef39; 
@property(readonly, assign, nonatomic) BOOL isRental;	// G=0x31a0ef09; 
@property(copy, nonatomic) NSDate *lastPlayedDate;	// G=0x31a0f2ad; S=0x31a0f2c9; 
@property(copy, nonatomic) NSDate *lastSkippedDate;	// G=0x31a0f3d5; S=0x31a0f3f1; 
@property(readonly, assign, nonatomic) int mediaType;	// G=0x31a0ef69; 
@property(assign, nonatomic) unsigned playCount;	// G=0x31a0f1bd; S=0x31a0f1f1; 
@property(assign, nonatomic) unsigned playCountSinceSync;	// G=0x31a0f235; S=0x31a0f269; 
@property(readonly, assign, nonatomic) double playbackDuration;	// G=0x31a0ef9d; 
@property(readonly, assign, nonatomic) NSString *podcastTitle;	// G=0x31a0f07d; 
@property(assign, nonatomic) unsigned rating;	// G=0x31a0f099; S=0x31a0f0cd; 
@property(readonly, assign, nonatomic) NSDate *releaseDate;	// G=0x31a0f111; 
@property(readonly, assign, nonatomic) BOOL rememberBookmarkTime;	// G=0x31a0f481; 
@property(assign, nonatomic) unsigned skipCount;	// G=0x31a0f2e5; S=0x31a0f319; 
@property(assign, nonatomic) unsigned skipCountSinceSync;	// G=0x31a0f35d; S=0x31a0f391; 
@property(readonly, assign, nonatomic) double startTime;	// G=0x31a0efd1; 
@property(readonly, assign, nonatomic) double stopTime;	// G=0x31a0f005; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x31a0f12d; 
@property(readonly, assign, nonatomic) unsigned year;	// G=0x31a0f149; 
+ (void)_createFilterableDictionary;	// 0x31a0e625
+ (BOOL)_hasDownloadProgressForDownloadStatus:(int)downloadStatus downloadIdentifier:(id)identifier isTemporaryCloudDownload:(BOOL)download mediaItemPersistentID:(id)anId;	// 0x31a6cba9
+ (BOOL)_isDownloadableForRedownloadParameters:(id)redownloadParameters filePath:(id)path downloadStatus:(int)status isTemporaryCloudDownload:(BOOL)download;	// 0x31a6d04d
+ (BOOL)_isValidItemProperty:(id)property;	// 0x31a0ed69
+ (BOOL)canFilterByProperty:(id)property;	// 0x31a0e115
+ (id)daapKeyForMediaProperty:(id)mediaProperty;	// 0x31a739bd
+ (id)daapValueFromMediaValue:(id)mediaValue mediaProperty:(id)property;	// 0x31a73c09
+ (id)dynamicProperties;	// 0x31a0e519
+ (id)mediaPropertyForDAAPKey:(id)daapkey;	// 0x31a738b5
+ (id)mediaValueFromDAAPValue:(id)daapvalue mediaProperty:(id)property;	// 0x31a73ac9
+ (id)persistentIDPropertyForGroupingType:(int)groupingType;	// 0x31a0e301
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x31a0e401
- (id)initWithCoder:(id)coder;	// 0x31a0e011
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x31a0df05
- (id)_bestStoreURL;	// 0x31a0e24d
- (id)_directStoreURL;	// 0x31a0fb15
// declared property getter: - (BOOL)_hasDownloadProgress;	// 0x31a6cc75
// declared property getter: - (BOOL)_isDownloadable;	// 0x31a6d089
- (id)_libraryLinkArtist;	// 0x31a0fcb9
- (id)_libraryLinkKind;	// 0x31a0fd2d
- (id)_libraryLinkPlaylistName;	// 0x31a0fded
- (id)_libraryLinkURL;	// 0x31a0fe81
// declared property getter: - (id)albumArtist;	// 0x31a0edad
// declared property getter: - (id)albumTitle;	// 0x31a0ee05
// declared property getter: - (id)artist;	// 0x31a0ee21
// declared property getter: - (id)artwork;	// 0x31a0ee3d
// declared property getter: - (double)bookmarkTime;	// 0x31a0ee59
- (id)chapterOfType:(int)type atIndex:(unsigned)index;	// 0x31a0f5cd
- (id)chapterOfType:(int)type atTime:(double)time;	// 0x31a0f69d
// declared property getter: - (id)chapters;	// 0x31a0e609
- (id)chaptersOfType:(int)type;	// 0x31a0f4b1
// declared property getter: - (id)composer;	// 0x31a0eed1
- (unsigned)countOfChaptersOfType:(int)type;	// 0x31a0f7a1
// declared property getter: - (id)effectiveAlbumArtist;	// 0x31a0edc9
// declared property getter: - (double)effectiveStopTime;	// 0x31a0f039
- (void)encodeWithCoder:(id)coder;	// 0x31a0e099
- (BOOL)existsInLibrary;	// 0x31a0e285
- (void)gaplessHeuristicInfo:(unsigned *)info duration:(unsigned *)duration lastPacketsResync:(unsigned *)resync encodingDelay:(unsigned *)delay encodingDrain:(unsigned *)drain;	// 0x31a0f861
// declared property getter: - (id)genre;	// 0x31a0eeed
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x31a0f40d
- (unsigned)hash;	// 0x31a0df61
- (BOOL)isEqual:(id)equal;	// 0x31a0df79
// declared property getter: - (BOOL)isITunesU;	// 0x31a0ef39
// declared property getter: - (BOOL)isRental;	// 0x31a0ef09
// declared property getter: - (id)lastPlayedDate;	// 0x31a0f2ad
// declared property getter: - (id)lastSkippedDate;	// 0x31a0f3d5
// declared property getter: - (int)mediaType;	// 0x31a0ef69
// declared property getter: - (unsigned)playCount;	// 0x31a0f1bd
// declared property getter: - (unsigned)playCountSinceSync;	// 0x31a0f235
// declared property getter: - (double)playbackDuration;	// 0x31a0ef9d
// declared property getter: - (id)podcastTitle;	// 0x31a0f07d
- (id)predicateForProperty:(id)property;	// 0x31a0f17d
// declared property getter: - (unsigned)rating;	// 0x31a0f099
// declared property getter: - (id)releaseDate;	// 0x31a0f111
// declared property getter: - (BOOL)rememberBookmarkTime;	// 0x31a0f481
- (id)representativeItem;	// 0x31a0e281
// declared property setter: - (void)setBookmarkTime:(double)time;	// 0x31a0ee8d
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x31a0f43d
// declared property setter: - (void)setLastPlayedDate:(id)date;	// 0x31a0f2c9
// declared property setter: - (void)setLastSkippedDate:(id)date;	// 0x31a0f3f1
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x31a0f1f1
// declared property setter: - (void)setPlayCountSinceSync:(unsigned)sync;	// 0x31a0f269
// declared property setter: - (void)setRating:(unsigned)rating;	// 0x31a0f0cd
// declared property setter: - (void)setSkipCount:(unsigned)count;	// 0x31a0f319
// declared property setter: - (void)setSkipCountSinceSync:(unsigned)sync;	// 0x31a0f391
// declared property getter: - (unsigned)skipCount;	// 0x31a0f2e5
// declared property getter: - (unsigned)skipCountSinceSync;	// 0x31a0f35d
// declared property getter: - (double)startTime;	// 0x31a0efd1
// declared property getter: - (double)stopTime;	// 0x31a0f005
// declared property getter: - (id)title;	// 0x31a0f12d
- (id)valueForProperty:(id)property;	// 0x31a0e1a5
// declared property getter: - (unsigned)year;	// 0x31a0f149
@end


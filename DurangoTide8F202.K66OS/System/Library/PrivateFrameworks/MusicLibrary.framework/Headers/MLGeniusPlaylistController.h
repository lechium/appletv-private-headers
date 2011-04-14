/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {
@private
	void *_echo;	// 4 = 0x4
	void *_echo_library;	// 8 = 0x8
	void *_echo_cluster_playlist;	// 12 = 0xc
	NSMutableData *_sharedBlobMutableData;	// 16 = 0x10
}
+ (unsigned)defaultMinTrackCount;	// 0x317fb141
+ (unsigned)defaultTrackCount;	// 0x317fb115
+ (BOOL)hasGeniusCapableiTunes;	// 0x317fb16d
+ (BOOL)hasGeniusDataAvailable;	// 0x317fb1c1
+ (BOOL)hasGeniusFeatureEnabled;	// 0x317eb829
+ (void)ignoreUnusedWarnings;	// 0x317fd135
+ (id)playlistControllerWithSeedTracks:(id)seedTracks error:(id *)error;	// 0x317faf69
+ (BOOL)populateContainer:(id)container withSeedTrack:(id)seedTrack error:(id *)error;	// 0x317fb259
+ (BOOL)useFakeGeniusData;	// 0x317ec14d
- (id)init;	// 0x317fbfb5
- (BOOL)_canIncludeTrackInGeniusContainer:(id)geniusContainer;	// 0x317fafd5
- (BOOL)_canIncludeTrackInGeniusPlaylist:(id)geniusPlaylist;	// 0x317fb08d
- (BOOL)_createClusterPlaylistWithSeedTracks:(id)seedTracks error:(id *)error;	// 0x317fced9
- (BOOL)_fakePopulateContainer:(id)container withSeedTrack:(id)seedTrack error:(id *)error;	// 0x317fc3ad
- (BOOL)_populateContainer:(id)container seedTrack:(id)track error:(id *)error;	// 0x317fca1d
- (id)_sharedBlobMutableData;	// 0x317fb0c9
- (id)_tracksFromClusterForPlaylistItemMax:(unsigned)playlistItemMax error:(id *)error;	// 0x317fc785
- (void)dealloc;	// 0x317fc295
- (id)tracksFromClusterForCount:(unsigned)count error:(id *)error;	// 0x317fb8d9
@end


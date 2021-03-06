/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProviderML3.h"


@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
}
+ (BOOL)_isGeniusEnabled;	// 0x33759f39
+ (id)_localizedCloudGeniusErrorForError:(id)error;	// 0x3375ac15
+ (id)_localizedGeniusErrorForError:(id)error;	// 0x3375af99
- (id)_cacheIDForItemIdentifier:(long long)itemIdentifier;	// 0x3375bc0d
- (id)_cacheIDForItemIdentifier:(long long)itemIdentifier atPlaybackTime:(double)playbackTime;	// 0x3375bc91
- (void)_loadArtworkImageDataForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId completionBlock:(id)block;	// 0x3375b1cd
- (void)_loadArtworkImageForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;	// 0x3375b30d
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)seedItemIdentifiers count:(unsigned)count error:(id *)error;	// 0x3375aa51
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x3375c701
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)geniusClusterPlaylist count:(unsigned *)count error:(id *)error;	// 0x3375ab5d
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;	// 0x3375c595
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)identifier otherItemWithIdentifier:(long long)identifier2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;	// 0x3375c635
- (BOOL)isGeniusEnabled;	// 0x33759f9d
- (void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;	// 0x3375bf39
- (void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID completionBlock:(id)block;	// 0x3375bf05
- (void)loadArtworkImageForFormat:(int)format ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x3375beb9
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x3375bd09
- (void)loadBestArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x3375bf6d
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x3375bddd
- (void)loadBestTimedArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x3375c005
- (void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x3375c0a5
- (void)releaseGeniusClusterPlaylist:(void *)playlist;	// 0x3375ac01
- (void)seedPlaylistWithIdentifier:(long long)identifier withItemWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x33759fc5
@end


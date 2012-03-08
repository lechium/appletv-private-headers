/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, MPMediaPlaylist, MPMediaQuery, NSString;

@interface MPGeniusMix : NSObject <NSCoding> {
@private
	MPMediaPlaylist *_playlist;	// 4 = 0x4
	MPMediaQuery *_seedTracksQuery;	// 8 = 0x8
	NSArray *_representativeArtists;	// 12 = 0xc
	NSMutableArray *_representativeImageItems;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31a32d19; 
@property(readonly, assign, nonatomic) MPMediaPlaylist *playlist;	// G=0x31a33bbd; @synthesize=_playlist
@property(readonly, assign, nonatomic) NSArray *representativeArtists;	// G=0x31a32dfd; 
@property(readonly, assign, nonatomic) MPMediaQuery *seedTracksQuery;	// G=0x31a32d45; 
+ (id)artworkCacheDirectoryPath;	// 0x31a332d1
+ (id)artworkImageForMediaItem:(id)mediaItem;	// 0x31a3326d
- (id)initWithCoder:(id)coder;	// 0x31a32b69
- (id)initWithMPMediaPlaylist:(id)mpmediaPlaylist;	// 0x31a328cd
- (id)_cacheDirectoryPath;	// 0x31a33acd
- (id)_cachedRepresentativeImagePath;	// 0x31a33b89
- (unsigned)countOfRepresentativeImagesWithMaxCount:(unsigned)maxCount;	// 0x31a32eb5
- (void)dealloc;	// 0x31a32955
- (id)description;	// 0x31a32ad9
- (void)encodeWithCoder:(id)coder;	// 0x31a32cad
- (unsigned)hash;	// 0x31a32a95
- (BOOL)isEqual:(id)equal;	// 0x31a329dd
// declared property getter: - (id)name;	// 0x31a32d19
// declared property getter: - (id)playlist;	// 0x31a33bbd
// declared property getter: - (id)representativeArtists;	// 0x31a32dfd
- (CGImageRef)representativeImageWithSize:(CGSize)size count:(unsigned)count;	// 0x31a332d5
- (CGImageRef)representativeImageWithSize:(CGSize)size count:(unsigned)count cacheOnly:(BOOL)only;	// 0x31a332f9
// declared property getter: - (id)seedTracksQuery;	// 0x31a32d45
@end


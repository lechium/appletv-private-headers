/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSData, MLMovieProperties, NSArray, MLContentRating, NSString;

@interface MLTrackImport : NSObject <NSCopying> {
@private
	NSData *_artworkData;	// 4 = 0x4
	NSString *_assetFilePath;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSMutableDictionary *_properties;	// 16 = 0x10
	BOOL _shouldAddToPurchasedPlaylist;	// 20 = 0x14
	BOOL _shouldDeleteExistingArtwork;	// 21 = 0x15
	BOOL _assignArtworkCacheIDFromAlbum;	// 22 = 0x16
}
@property(copy, nonatomic) NSData *artworkData;	// G=0x3462b8ed; S=0x3462b901; @synthesize=_artworkData
@property(copy, nonatomic) NSString *assetFilePath;	// G=0x3462b911; S=0x3462b925; @synthesize=_assetFilePath
@property(assign, nonatomic) BOOL assignArtworkCacheIDFromAlbum;	// G=0x3462b935; S=0x3462b945; @synthesize=_assignArtworkCacheIDFromAlbum
@property(copy, nonatomic) NSArray *chapters;	// G=0x3462b955; S=0x3462b969; @synthesize=_chapters
@property(copy, nonatomic) MLContentRating *contentRating;	// G=0x3462b039; S=0x3462b235; 
@property(readonly, assign, nonatomic) NSDictionary *entityProperties;	// G=0x3462b0c1; 
@property(assign, nonatomic) unsigned long mediaType;	// G=0x3462b0ed; S=0x3462b27d; 
@property(copy, nonatomic) MLMovieProperties *movieProperties;	// G=0x3462b14d; S=0x3462b321; 
@property(assign, nonatomic) BOOL shouldAddToPurchasedPlaylist;	// G=0x3462b979; S=0x3462b989; @synthesize=_shouldAddToPurchasedPlaylist
@property(assign, nonatomic) BOOL shouldDeleteExistingArtwork;	// G=0x3462b999; S=0x3462b9a9; @synthesize=_shouldDeleteExistingArtwork
+ (void)initialize;	// 0x3462adc5
- (id)init;	// 0x3462ad79
- (void).cxx_destruct;	// 0x3462b9b9
- (void)_addSortStrings;	// 0x3462b7fd
// declared property getter: - (id)artworkData;	// 0x3462b8ed
// declared property getter: - (id)assetFilePath;	// 0x3462b911
// declared property getter: - (BOOL)assignArtworkCacheIDFromAlbum;	// 0x3462b935
// declared property getter: - (id)chapters;	// 0x3462b955
// declared property getter: - (id)contentRating;	// 0x3462b039
- (id)copyEntityProperties;	// 0x3462b4f5
- (id)copyWithZone:(NSZone *)zone;	// 0x3462af29
// declared property getter: - (id)entityProperties;	// 0x3462b0c1
// declared property getter: - (unsigned long)mediaType;	// 0x3462b0ed
// declared property getter: - (id)movieProperties;	// 0x3462b14d
- (void)normalizeEntityProperties;	// 0x3462b515
// declared property setter: - (void)setArtworkData:(id)data;	// 0x3462b901
// declared property setter: - (void)setAssetFilePath:(id)path;	// 0x3462b925
// declared property setter: - (void)setAssignArtworkCacheIDFromAlbum:(BOOL)album;	// 0x3462b945
// declared property setter: - (void)setChapters:(id)chapters;	// 0x3462b969
// declared property setter: - (void)setContentRating:(id)rating;	// 0x3462b235
// declared property setter: - (void)setMediaType:(unsigned long)type;	// 0x3462b27d
// declared property setter: - (void)setMovieProperties:(id)properties;	// 0x3462b321
// declared property setter: - (void)setShouldAddToPurchasedPlaylist:(BOOL)addToPurchasedPlaylist;	// 0x3462b989
// declared property setter: - (void)setShouldDeleteExistingArtwork:(BOOL)deleteExistingArtwork;	// 0x3462b9a9
- (void)setValue:(id)value forEntityProperty:(id)entityProperty;	// 0x3462b419
// declared property getter: - (BOOL)shouldAddToPurchasedPlaylist;	// 0x3462b979
// declared property getter: - (BOOL)shouldDeleteExistingArtwork;	// 0x3462b999
- (id)valueForEntityProperty:(id)entityProperty;	// 0x3462b4d5
@end


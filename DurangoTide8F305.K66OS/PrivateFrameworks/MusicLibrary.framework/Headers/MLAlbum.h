/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSString, NSArray, NSDictionary, NSMutableDictionary;

@interface MLAlbum : NSObject {
@private
	int _albumID;	// 4 = 0x4
	NSString *_albumName;	// 8 = 0x8
	NSString *_uuid;	// 12 = 0xc
	NSArray *_albumContents;	// 16 = 0x10
	NSArray *_filteredImages;	// 20 = 0x14
	id _posterImage;	// 24 = 0x18
	BOOL _isLibrary;	// 28 = 0x1c
	unsigned char _albumKind;	// 29 = 0x1d
	int _currentFilter;	// 32 = 0x20
	unsigned long long _playlistID;	// 36 = 0x24
	unsigned long long _songID;	// 44 = 0x2c
	NSDictionary *_slideshowSettings;	// 52 = 0x34
	int _keyPhotoKeyITunes;	// 56 = 0x38
	int _keyPhotoFaceIndexITunes;	// 60 = 0x3c
	int _posterImageIndex;	// 64 = 0x40
	unsigned _didSetPosterImageIndex : 1;	// 68 = 0x44
	int _hasPendingItems;	// 72 = 0x48
	NSMutableDictionary *_cachedIndexesByFilter;	// 76 = 0x4c
}
@property(assign) int albumKind;	// G=0x333d1611; S=0x333d1621; converted property
@property(retain) id contents;	// G=0x333d1be1; S=0x333d1add; converted property
@property(assign) int currentFilter;	// G=0x333d16f1; S=0x333d1701; converted property
@property(assign) int keyPhotoFaceIndex;	// G=0x333d16c1; S=0x333d16d1; converted property
@property(assign) int keyPhotoKey;	// G=0x333d1689; S=0x333d1699; converted property
@property(assign, getter=isLibrary) BOOL library;	// G=0x333d15d1; S=0x333d15e1; converted property
@property(retain) id name;	// G=0x333d15f1; S=0x333d2239; converted property
@property(retain) id photoAlbumSlideshowSettings;	// G=0x333d16e1; S=0x333d1ef1; converted property
@property(assign) unsigned long long slideshowPlaylistID;	// G=0x333d1631; S=0x333d1641; converted property
@property(retain) NSDictionary *slideshowSettings;	// G=0x333d2139; S=0x333d202d; converted property
@property(assign) unsigned long long slideshowSongID;	// G=0x333d1655; S=0x333d1665; converted property
@property(retain) NSString *uuid;	// G=0x333d1601; S=0x333d21fd; converted property
+ (id)libraryAlbum;	// 0x333d286d
- (id)init;	// 0x333d1755
- (id)initWithAlbumID:(unsigned)albumID albumName:(id)name;	// 0x333d2471
- (id)_contentIndexesMatchingFilter:(int)filter albumContents:(id)contents;	// 0x333d1c5d
- (void)_decrementPendingItems;	// 0x333d2961
- (void)_incrementPendingItems;	// 0x333d1731
- (void)_insertIndexInFilterCache:(unsigned)filterCache;	// 0x333d25c9
- (void)_insertItemInAlbumContents:(id)albumContents atIndex:(unsigned)index;	// 0x333d19d1
- (void)_invalidateFilterCache;	// 0x333d1e11
- (id)_posterImage;	// 0x333d1679
- (void)_removeIndexFromFilterCache:(unsigned)filterCache;	// 0x333d26b9
- (void)_setAlbumContents:(id)contents invalidateFilterCache:(BOOL)cache;	// 0x333d1af5
- (void)_setPosterImage:(id)image;	// 0x333d1f41
- (unsigned)addItemToAlbumContents:(id)albumContents sorted:(BOOL)sorted;	// 0x333d24b9
- (unsigned)albumID;	// 0x333d15c1
// converted property getter: - (int)albumKind;	// 0x333d1611
- (unsigned)audioCount;	// 0x333d1899
// converted property getter: - (id)contents;	// 0x333d1be1
- (id)contentsWithCurrentFilter;	// 0x333d1b99
- (id)contentsWithFilter:(int)filter;	// 0x333d1b55
- (unsigned)count;	// 0x333d191d
- (unsigned)countWithCurrentFilter;	// 0x333d18e1
- (unsigned)countWithFilter:(int)filter;	// 0x333d182d
// converted property getter: - (int)currentFilter;	// 0x333d16f1
- (id)date;	// 0x333d1e59
- (void)dealloc;	// 0x333d239d
- (void)deleteItemAtIndex:(int)index;	// 0x333d294d
- (void)deleteItemsAtIndexes:(id)indexes;	// 0x333d2939
- (BOOL)deletedWhenEmpty;	// 0x333d172d
- (id)description;	// 0x333d2275
- (id)faceImageWithSize:(CGSize)size returnLocationInImage:(CGRect *)image;	// 0x333d17a5
- (BOOL)hasPendingItems;	// 0x333d1745
- (id)imageWithImageID:(int)imageID;	// 0x333d27b1
- (int)indexOfPosterImage;	// 0x333d1f7d
- (BOOL)isEditable;	// 0x333d1729
- (BOOL)isEmpty;	// 0x333d1e31
// converted property getter: - (BOOL)isLibrary;	// 0x333d15d1
// converted property getter: - (int)keyPhotoFaceIndex;	// 0x333d16c1
// converted property getter: - (int)keyPhotoKey;	// 0x333d1689
- (unsigned)knownCount;	// 0x333d1869
// converted property getter: - (id)name;	// 0x333d15f1
// converted property getter: - (id)photoAlbumSlideshowSettings;	// 0x333d16e1
- (unsigned)photoCount;	// 0x333d18c9
- (void)removeItemFromAlbumContent:(id)albumContent;	// 0x333d1941
// converted property setter: - (void)setAlbumKind:(int)kind;	// 0x333d1621
// converted property setter: - (void)setContents:(id)contents;	// 0x333d1add
// converted property setter: - (void)setCurrentFilter:(int)filter;	// 0x333d1701
- (void)setHasPendingItem:(BOOL)item;	// 0x333d1ab9
// converted property setter: - (void)setKeyPhotoFaceIndex:(int)index;	// 0x333d16d1
// converted property setter: - (void)setKeyPhotoKey:(int)key;	// 0x333d1699
// converted property setter: - (void)setLibrary:(BOOL)library;	// 0x333d15e1
// converted property setter: - (void)setName:(id)name;	// 0x333d2239
// converted property setter: - (void)setPhotoAlbumSlideshowSettings:(id)settings;	// 0x333d1ef1
// converted property setter: - (void)setSlideshowPlaylistID:(unsigned long long)anId;	// 0x333d1641
// converted property setter: - (void)setSlideshowSettings:(id)settings;	// 0x333d202d
// converted property setter: - (void)setSlideshowSongID:(unsigned long long)anId;	// 0x333d1665
// converted property setter: - (void)setUuid:(id)uuid;	// 0x333d21fd
- (BOOL)shouldSortImagesByDate;	// 0x333d1ec1
// converted property getter: - (unsigned long long)slideshowPlaylistID;	// 0x333d1631
// converted property getter: - (id)slideshowSettings;	// 0x333d2139
// converted property getter: - (unsigned long long)slideshowSongID;	// 0x333d1655
- (unsigned)unknownCount;	// 0x333d1881
// converted property getter: - (id)uuid;	// 0x333d1601
- (unsigned)videoCount;	// 0x333d18b1
@end

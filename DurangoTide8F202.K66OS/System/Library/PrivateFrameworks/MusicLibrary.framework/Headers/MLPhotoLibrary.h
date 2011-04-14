/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSString, NSDate, NSMutableArray;

@interface MLPhotoLibrary : NSObject {
@private
	NSString *_path;	// 4 = 0x4
	NSMutableArray *_albums;	// 8 = 0x8
	NSDate *_referenceDate;	// 12 = 0xc
	BOOL _cancelFileSystemGarbageCollection;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *albums;	// G=0x31808a4d; converted property
+ (BOOL)formatHasJPEGFile:(int)file;	// 0x31808951
+ (BOOL)formatIsCropped:(int)cropped;	// 0x31808965
+ (BOOL)formatWasSynced:(int)synced;	// 0x3180893d
+ (id)imageFormats;	// 0x31808789
+ (BOOL)isAlbumVideoPath:(id)path;	// 0x318094d5
+ (BOOL)isApplicationWildcat;	// 0x318079bd
+ (BOOL)needsToBeSyncedWithiTunes;	// 0x31808285
+ (void)setApplicationIsWildcat:(BOOL)wildcat;	// 0x318079b1
+ (id)sharedPhotoLibrary;	// 0x318079a5
+ (CGSize)sizeForFormat:(int)format;	// 0x31809775
+ (BOOL)transformForImage:(CGImageRef)image captureOrientation:(int)orientation format:(int)format sizeInOut:(CGSize *)anOut contextSizeOut:(CGSize *)anOut5 transformOut:(CGAffineTransform *)anOut6;	// 0x31809509
- (id)initWithPath:(id)path;	// 0x31809929
- (id)_albums;	// 0x318079e9
- (id)_faceImageDataForRecordID:(int)recordID faceIndex:(int)index returnLocationInImage:(CGRect *)image;	// 0x318097a5
- (void)_flushImageLibrary;	// 0x31808011
- (BOOL)_hasAtLeastOnePhoto:(BOOL)leastOnePhoto;	// 0x3180928d
- (ITImageInfo *)_imageInfoForPhoto:(id)photo;	// 0x31808121
- (id)_imagesForAlbum:(id)album firstImageOnly:(BOOL)only;	// 0x318090c9
- (void)_loadImageLibrary;	// 0x31807f2d
- (void)_setAlbums:(id)albums;	// 0x31807de9
// converted property getter: - (id)albums;	// 0x31808a4d
- (id)albumsWithKinds:(id)kinds;	// 0x3180818d
- (BOOL)containersAreSorted;	// 0x31807b61
- (id)countOfAllPhotosAndVideos;	// 0x318092f1
- (id)dataForPhoto:(id)photo format:(int)format width:(int *)width height:(int *)height bytesPerRow:(int *)row dataWidth:(int *)width6 dataHeight:(int *)height7 imageDataOffset:(int *)offset;	// 0x31807e25
- (id)databasePath;	// 0x31807f01
- (id)dateForPhoto:(id)photo;	// 0x31808979
- (void)dealloc;	// 0x3180808d
- (id)eventAlbums;	// 0x31807d99
- (id)faceAlbums;	// 0x31807d61
- (CGRect)faceRectangles:(id)rectangles forPhoto:(id)photo;	// 0x31809829
- (id)firstImageForAlbum:(id)album;	// 0x31807a2d
- (void)flushAlbums;	// 0x31808e2d
- (BOOL)hasAtLeastOneItem;	// 0x31807ad5
- (BOOL)hasAtLeastOnePhoto;	// 0x31807abd
- (BOOL)hasAtLeastOnePhotoWithGPS;	// 0x318093d5
- (id)iTunesDataForPhoto:(id)photo format:(int)format width:(int *)width height:(int *)height bytesPerRow:(int *)row dataWidth:(int *)width6 dataHeight:(int *)height7 imageDataOffset:(int *)offset;	// 0x31808821
- (void)iTunesFaceForID:(int)anId faceIndex:(int)index photoOut:(id *)anOut rectOut:(CGRect *)anOut4;	// 0x31809451
- (id)iTunesFaceImageForRecordID:(int)recordID faceIndex:(int)index size:(CGSize)size returnLocationInImage:(CGRect *)image;	// 0x318079f9
- (BOOL)iTunesLibraryFromAperture;	// 0x31807c29
- (BOOL)iTunesLibraryFromIPhoto;	// 0x31807c55
- (id)imageWithITImageInfo:(ITImageInfo *)itimageInfo;	// 0x31808e6d
- (id)imagesForAlbum:(id)album;	// 0x31807a15
- (BOOL)isPosterPhoto:(id)photo forAlbum:(id)album;	// 0x31807a51
- (int)numberOfImagesInAlbum:(id)album;	// 0x3180905d
- (int)numberOfVideosInAlbum:(id)album;	// 0x31807aed
- (id)pathForPhotoJPEG:(id)photoJPEG format:(int)format;	// 0x31808165
- (id)placeAlbums;	// 0x31807d29
- (void)reloadAlbums;	// 0x31807b3d
- (id)slideshowSettingsPathForUuid:(id)uuid;	// 0x31807e71
- (BOOL)sortITunesAlbumsByDate;	// 0x31807b05
- (BOOL)supportsAlbums;	// 0x31807bf9
- (BOOL)supportsAllPhotos;	// 0x31807c11
- (BOOL)supportsEvents;	// 0x31807be1
- (BOOL)supportsFaces;	// 0x31807bad
- (BOOL)supportsPlaces;	// 0x31807b95
- (void)updateHasAtLeastOnePhotoWithGPS;	// 0x318091dd
- (id)userAlbums;	// 0x31807c81
- (id)videosPath;	// 0x31807ed5
@end


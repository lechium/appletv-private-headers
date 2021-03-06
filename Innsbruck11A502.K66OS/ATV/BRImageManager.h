/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSMutableDictionary, BRAsyncTaskContext, NSString, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRImageManager : XXUnknownSuperclass {
	unsigned long long _maxCacheSize;	// 4 = 0x4
	unsigned long long _cacheSize;	// 12 = 0xc
	unsigned long long _maxCacheCount;	// 20 = 0x14
	unsigned long long _cacheCount;	// 28 = 0x1c
	unsigned long long _cacheSizePurgeThreshhold;	// 36 = 0x24
	BOOL _cachePurging;	// 44 = 0x2c
	BOOL _purgeCacheOnLoadAndQuit;	// 45 = 0x2d
	BOOL _disableAccessDateUpdates;	// 46 = 0x2e
	NSString *_imageCachePath;	// 48 = 0x30
	NSObject<OS_dispatch_queue> *_imagesAccessQueue;	// 52 = 0x34
	NSMutableDictionary *_images;	// 56 = 0x38
	NSMutableDictionary *_remoteImageRequests;	// 60 = 0x3c
	NSLock *_remoteImageLock;	// 64 = 0x40
	NSObject<OS_dispatch_queue> *_loadJobAccessQueue;	// 68 = 0x44
	NSMutableDictionary *_loadJobs;	// 72 = 0x48
	NSObject<OS_dispatch_queue> *_pendingImageWriteQueue;	// 76 = 0x4c
	NSMutableDictionary *_pendingCachedImagesToFlush;	// 80 = 0x50
	BOOL _processJobs;	// 84 = 0x54
	BRAsyncTaskContext *_writeTaskContext;	// 88 = 0x58
	int _pruneCount;	// 92 = 0x5c
}
@property(assign, nonatomic) int pruneCount;	// G=0x44c6c9; S=0x44c6d9; @synthesize=_pruneCount
+ (void)_initSerialAsyncPurgeQueue;	// 0x44c6e9
+ (void)_queuePurgeForPath:(id)path;	// 0x44c979
+ (BOOL)_removeCachPath:(id)path error:(id *)error;	// 0x44c82d
+ (id)fullScreenImageResizingOptions;	// 0x44a541
+ (id)generalPurposeManager;	// 0x44ad69
+ (id)screenSaverManager;	// 0x44aec1
+ (id)trickPlayManager;	// 0x44afd9
- (id)initWithCachePath:(id)cachePath purgeCacheOnLoadAndQuit:(BOOL)quit maxCacheSizeInMB:(unsigned long long)mb maxCacheCount:(unsigned long long)count cacheSizePurgeThreshholdInMB:(unsigned long long)mb5 pruneCount:(int)count6 disableAccessDateUpdates:(BOOL)updates;	// 0x44a5d1
- (void)_ATVDataImageAvailable:(id)available;	// 0x44ed51
- (void)_addLoadJobToQueue:(id)queue;	// 0x44d0c9
- (void)_addWriteJobToQueue:(id)queue withImageID:(id)imageID height:(int)height width:(int)width cropped:(BOOL)cropped;	// 0x44cb95
- (id)_cachedCommonImagePathForImageIDKey:(id)imageIDKey extension:(id)extension;	// 0x44eb39
- (id)_cachedCroppedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x44eadd
- (id)_cachedCroppedImagePathForImageID:(id)imageID forSize:(CGSize)size extension:(id)extension;	// 0x44ea45
- (id)_cachedOriginalImagePathForImageID:(id)imageID extension:(id)extension;	// 0x44e9f9
- (id)_cachedResizedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x44ea81
- (id)_cachedResizedImagePathForImageID:(id)imageID forSize:(CGSize)size extension:(id)extension;	// 0x44ea09
- (void)_checkCache;	// 0x44e7a1
- (void)_decrementCacheSize:(unsigned long long)size;	// 0x44e751
- (id)_defaultResizingImageOptions;	// 0x44da95
- (id)_extensionForImageID:(id)imageID;	// 0x44ecc5
- (id)_imageFromWriteQueue:(id)writeQueue;	// 0x44eb85
- (void)_imageLoadFailed:(id)failed;	// 0x44e399
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x44e10d
- (id)_imageRecordForName:(id)name;	// 0x44ca55
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x44e6ed
- (void)_maintainImageCache;	// 0x44dc99
- (void)_performWriteJob:(id)job;	// 0x44cf2d
- (void)_postUnavailableImageNotification:(id)notification;	// 0x44e541
- (void)_postUpdateNotification:(id)notification;	// 0x44e509
- (void)_postWriteCompletedNotification:(id)notification size:(CGSize)size cropped:(BOOL)cropped;	// 0x44e5ad
- (void)_purgeRemoveDirectory:(BOOL)directory;	// 0x44ef35
- (void)_removeCacheFile:(id)file;	// 0x44dc5d
- (void)_removeLoadJobFromQueue:(id)queue;	// 0x44d1f9
- (void)_removeRemoteImageRequestNamed:(id)named;	// 0x44db25
- (void)_removeWriteJobFromQueue:(id)queue;	// 0x44ce4d
- (void)_scheduleMaintainCache;	// 0x44e8a1
- (void)_startWriteJob:(id)job;	// 0x44cdb5
- (void)_terminateNotification:(id)notification;	// 0x44e919
- (BOOL)_updateExistingImageRecord:(id)record;	// 0x44d2e9
- (id)_writeIDForImageID:(id)imageID cropped:(BOOL)cropped size:(CGSize)size;	// 0x44e985
- (void)_writeImage:(id)image named:(id)named forSize:(CGSize)size cropped:(BOOL)cropped;	// 0x44d471
- (id)cachePath;	// 0x44c69d
- (float)cacheSize;	// 0x44c6ad
- (id)cachedPathForImageID:(id)imageID;	// 0x44c531
- (void)cancelWriteForImageWithURL:(id)url imageID:(id)anId;	// 0x44b529
- (void)dealloc;	// 0x44ac3d
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x44bf21
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk original:(BOOL)original rotate:(BOOL)rotate;	// 0x44bf59
- (id)imageNameFromURL:(id)url;	// 0x44b175
- (id)imageNamed:(id)named;	// 0x44bd0d
- (id)imageNamed:(id)named croppedToSize:(CGSize)size create:(BOOL)create;	// 0x44b8ed
- (id)imageNamed:(id)named scaledToSize:(CGSize)size;	// 0x44bcc9
- (BOOL)isImageAvailable:(id)available;	// 0x44b0dd
- (BOOL)isImageAvailable:(id)available scaledToSize:(CGSize)size;	// 0x44b13d
- (BOOL)isImageWritten:(id)written;	// 0x44b125
- (id)loadImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x44b57d
- (id)loadImageFromURL:(id)url imageID:(id)anId headerFields:(id)fields decryptionAgent:(id)agent writeToCache:(BOOL)cache;	// 0x44b485
// declared property getter: - (int)pruneCount;	// 0x44c6c9
- (void)purge;	// 0x44c689
- (void)purgeAndRemoveDirectory;	// 0x44c675
- (id)reallyWriteImageFromURL:(id)url imageID:(id)anId;	// 0x44b2ed
- (void)receivedRemoteImage:(id)image forID:(id)anId;	// 0x44c3c9
// declared property setter: - (void)setPruneCount:(int)count;	// 0x44c6d9
- (void)writeCroppedImage:(id)image named:(id)named;	// 0x44b885
- (id)writeEncryptedImageFromURL:(id)url;	// 0x44b23d
- (void)writeImage:(id)image named:(id)named;	// 0x44b5cd
- (void)writeImage:(id)image named:(id)named asynchronous:(BOOL)asynchronous;	// 0x44b5f1
- (id)writeImageFromImageProxy:(id)imageProxy;	// 0x44b1b9
- (id)writeImageFromURL:(id)url;	// 0x44b221
- (id)writeImageFromURL:(id)url decryptionAgent:(id)agent;	// 0x44b295
- (id)writeImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x44b2c5
- (void)writeScaledImage:(id)image named:(id)named withSize:(CGSize)size;	// 0x44b7e1
@end


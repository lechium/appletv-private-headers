/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPImageRequestDelegate.h"
#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class CPLRUDictionary, NSOperationQueue;
@protocol MPImageCacheDelegate;

@interface MPImageCache : NSObject <MPImageRequestDelegate> {
@private
	CPLRUDictionary *_cachedImages;	// 4 = 0x4
	dispatch_queue_s *_cachedImagesQueue;	// 8 = 0x8
	unsigned _cacheSize;	// 12 = 0xc
	id<MPImageCacheDelegate> _delegate;	// 16 = 0x10
	NSOperationQueue *_operationQueue;	// 20 = 0x14
	int _retainCount;	// 24 = 0x18
}
@property(assign, nonatomic) unsigned cacheSize;	// G=0x31a59bf1; S=0x31a591b5; @synthesize=_cacheSize
@property(assign, nonatomic) id<MPImageCacheDelegate> delegate;	// G=0x31a59c01; S=0x31a59c11; @synthesize=_delegate
@property(assign, nonatomic) BOOL imageRequestsSuspended;	// G=0x31a592a5; S=0x31a592c9; 
+ (id)sharedImageCache;	// 0x31a58e25
- (id)init;	// 0x31a58a25
- (void)_cacheImage:(id)image forKey:(id)key;	// 0x31a594e1
- (id)_cachedImageForKey:(id)key;	// 0x31a5960d
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x31a59481
- (void)_didReceiveMemoryWarningNotification:(id)notification;	// 0x31a594d1
- (void)_enqueueRequest:(id)request;	// 0x31a5985d
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)request;	// 0x31a58f05
- (BOOL)_isDeallocating;	// 0x31a589f9
- (BOOL)_tryRetain;	// 0x31a5899d
- (void)_zapCache;	// 0x31a59a39
- (void)_zapCachedPlaceholders;	// 0x31a598e9
// declared property getter: - (unsigned)cacheSize;	// 0x31a59bf1
- (id)cachedImageForRequest:(id)request;	// 0x31a58ed5
- (void)cancelAllImageRequests;	// 0x31a592f5
- (void)dealloc;	// 0x31a58c5d
// declared property getter: - (id)delegate;	// 0x31a59c01
- (id)imageForRequest:(id)request error:(id *)error;	// 0x31a59019
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary;	// 0x31a59ac5
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary waitUntilFetched:(BOOL)fetched;	// 0x31a59ae9
- (void)imageRequest:(id)request failedWithError:(id)error;	// 0x31a59315
- (void)imageRequest:(id)request loadedImage:(id)image;	// 0x31a593b5
// declared property getter: - (BOOL)imageRequestsSuspended;	// 0x31a592a5
- (void)loadImageForRequest:(id)request asynchronously:(BOOL)asynchronously completionHandler:(id)handler;	// 0x31a590f1
- (oneway void)release;	// 0x31a588e9
- (id)retain;	// 0x31a588b1
- (unsigned)retainCount;	// 0x31a58989
// declared property setter: - (void)setCacheSize:(unsigned)size;	// 0x31a591b5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31a59c11
// declared property setter: - (void)setImageRequestsSuspended:(BOOL)suspended;	// 0x31a592c9
@end


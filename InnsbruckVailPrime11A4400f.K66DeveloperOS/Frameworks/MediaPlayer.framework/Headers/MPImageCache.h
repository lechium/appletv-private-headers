/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPImageRequestDelegate.h"
#import </libobjc.A.h>

@class CPLRUDictionary, NSOperationQueue;
@protocol MPImageCacheDelegate, OS_dispatch_queue;

@interface MPImageCache : NSObject <MPImageRequestDelegate> {
	CPLRUDictionary *_cachedImages;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_cachedImagesQueue;	// 8 = 0x8
	unsigned _cacheSize;	// 12 = 0xc
	id<MPImageCacheDelegate> _delegate;	// 16 = 0x10
	NSOperationQueue *_operationQueue;	// 20 = 0x14
	int _resumeToForegroundCacheSize;	// 24 = 0x18
	int _suspendToBackgroundCacheSize;	// 28 = 0x1c
	id _idleEventHandler;	// 32 = 0x20
	id _libraryDisplayValueChangeObserver;	// 36 = 0x24
}
@property(assign, nonatomic) unsigned cacheSize;	// G=0x2e3154b9; S=0x2e314209; @synthesize=_cacheSize
@property(assign, nonatomic) __weak id<MPImageCacheDelegate> delegate;	// G=0x2e3154c9; S=0x2e3154e9; @synthesize=_delegate
@property(copy, nonatomic) id idleEventHandler;	// G=0x2e3154fd; S=0x2e315511; @synthesize=_idleEventHandler
@property(assign, nonatomic) BOOL imageRequestsSuspended;	// G=0x2e3140a1; S=0x2e31457d; 
@property(readonly, assign, nonatomic) BOOL isIdle;	// G=0x2e3140c5; 
@property(assign, nonatomic) __weak id libraryDisplayValueChangeObserver;	// G=0x2e315521; S=0x2e315541; @synthesize=_libraryDisplayValueChangeObserver
- (id)init;	// 0x2e313b19
- (void).cxx_destruct;	// 0x2e315555
- (void)_cacheImage:(id)image forKey:(id)key;	// 0x2e3149f1
- (id)_cachedImageForKey:(id)key;	// 0x2e314b51
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x2e314911
- (void)_didReceiveMemoryWarningNotification:(id)notification;	// 0x2e3149e1
- (void)_enqueueRequest:(id)request;	// 0x2e314eb9
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)request;	// 0x2e314d55
- (void)_removeCachedImageForKey:(id)key;	// 0x2e3151cd
- (void)_willEnterForegroundNotification:(id)notification;	// 0x2e3149b9
- (void)_zapCache;	// 0x2e31542d
- (void)_zapCachedPlaceholders;	// 0x2e3152a1
// declared property getter: - (unsigned)cacheSize;	// 0x2e3154b9
- (id)cachedImageForRequest:(id)request;	// 0x2e313f31
- (void)cancelAllImageRequests;	// 0x2e313f7d
- (void)dealloc;	// 0x2e313df5
// declared property getter: - (id)delegate;	// 0x2e3154c9
// declared property getter: - (id)idleEventHandler;	// 0x2e3154fd
- (id)imageForRequest:(id)request error:(id *)error;	// 0x2e313f9d
- (void)imageRequest:(id)request failedWithError:(id)error;	// 0x2e3145a5
- (void)imageRequest:(id)request loadedImage:(id)image;	// 0x2e314691
// declared property getter: - (BOOL)imageRequestsSuspended;	// 0x2e3140a1
// declared property getter: - (BOOL)isIdle;	// 0x2e3140c5
// declared property getter: - (id)libraryDisplayValueChangeObserver;	// 0x2e315521
- (void)loadImageForRequest:(id)request asynchronously:(BOOL)asynchronously completionHandler:(id)handler;	// 0x2e3140f5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2e3147b5
// declared property setter: - (void)setCacheSize:(unsigned)size;	// 0x2e314209
- (void)setCacheSize:(unsigned)size preserveExisting:(BOOL)existing;	// 0x2e31421d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2e3154e9
// declared property setter: - (void)setIdleEventHandler:(id)handler;	// 0x2e315511
// declared property setter: - (void)setImageRequestsSuspended:(BOOL)suspended;	// 0x2e31457d
// declared property setter: - (void)setLibraryDisplayValueChangeObserver:(id)observer;	// 0x2e315541
@end


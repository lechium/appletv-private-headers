/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, CPLRUDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreOfferArtworkImageCache : NSObject {
@private
	CPLRUDictionary *_lruCache;	// 4 = 0x4
	NSMutableDictionary *_didLoadBlocksByURL;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_queue;	// 12 = 0xc
}
+ (id)sharedArtworkImageCache;	// 0x348f73a9
- (id)init;	// 0x348f7415
- (void)_applicationDidReceiveMemoryWarningNotification:(id)_application;	// 0x348f75d1
- (void)_dumpCache;	// 0x348f7b2d
- (void)_onQueueCallDidLoadBlocksWithImage:(id)_onQueueCall forURL:(id)url;	// 0x348f7bb5
- (void)dealloc;	// 0x348f751d
- (id)imageForURL:(id)url;	// 0x348f75e1
@end


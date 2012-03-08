/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MCMediaControlClientRemote : NSObject {
}
- (void)authorizeWithPICRequest:(id)picrequest completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x31a4c2bd
- (void)dealloc;	// 0x31a4c211
- (void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x31a4c605
- (void)getPositionWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x31a4c681
- (void)getVolumeWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x31a4c7f5
- (void)invalidate;	// 0x31a4c2ad
- (void)playRemoteWithParams:(id)params completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x31a4c4ad
- (void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x31a4c3c1
- (void)setEventHandlerQueue:(dispatch_queue_s *)queue eventHandlerBlock:(id)block;	// 0x31a4c8ed
- (void)setHost:(id)host;	// 0x31a4c259
- (void)setPassword:(id)password;	// 0x31a4c36d
- (void)setPosition:(float)position completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x31a4c6fd
- (void)setRate:(float)rate completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x31a4c779
- (void)setVolume:(float)volume completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x31a4c871
- (void)stopWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x31a4c589
@end


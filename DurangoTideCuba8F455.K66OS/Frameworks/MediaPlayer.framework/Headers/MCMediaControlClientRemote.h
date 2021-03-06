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
- (void)authorizeWithPICRequest:(id)picrequest completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x3364fb71
- (void)dealloc;	// 0x3364fad1
- (void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x3364fe79
- (void)getPositionWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x3364feed
- (void)getVolumeWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x33650049
- (void)invalidate;	// 0x3364fb61
- (void)playRemoteWithParams:(id)params completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x3364fd3d
- (void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x3364fc5d
- (void)setEventHandlerQueue:(dispatch_queue_s *)queue eventHandlerBlock:(id)block;	// 0x33650131
- (void)setHost:(id)host;	// 0x3364fb15
- (void)setPassword:(id)password;	// 0x3364fc11
- (void)setPosition:(float)position completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x3364ff61
- (void)setRate:(float)rate completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x3364ffd5
- (void)setVolume:(float)volume completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x336500bd
- (void)stopWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x3364fe05
@end


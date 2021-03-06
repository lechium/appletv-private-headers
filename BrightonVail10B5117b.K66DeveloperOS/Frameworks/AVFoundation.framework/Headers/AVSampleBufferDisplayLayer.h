/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <CALayer.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSString, AVSampleBufferDisplayLayerInternal;

@interface AVSampleBufferDisplayLayer : CALayer {
	AVSampleBufferDisplayLayerInternal *_sampleBufferDisplayLayerInternal;	// 48 = 0x30
}
@property(retain) OpaqueCMTimebase *controlTimebase;	// G=0x302eab7d; S=0x302eaafd; 
@property(readonly, assign, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;	// G=0x302ec135; 
@property(copy) NSString *videoGravity;	// G=0x302eb051; S=0x302ead71; 
- (id)init;	// 0x302ea4c1
- (void)_addAnimationsForContentLayer:(id)contentLayer size:(CGSize)size gravity:(id)gravity;	// 0x302eb581
- (long)_createVideoQueue;	// 0x302e985d
- (void)_refreshAboveHighWaterLevel;	// 0x302ea225
- (void)_setControlTimebase:(OpaqueCMTimebase *)timebase;	// 0x302e9775
- (void)_updatePresentationSize:(CGSize)size;	// 0x302e99cd
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x302eba4d
// declared property getter: - (OpaqueCMTimebase *)controlTimebase;	// 0x302eab7d
- (void)dealloc;	// 0x302ea87d
- (void)enqueueSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x302ebecd
- (void)finalize;	// 0x302ea9f1
- (void)flush;	// 0x302ec015
- (void)flushAndRemoveImage;	// 0x302ec0a5
// declared property getter: - (BOOL)isReadyForMoreMediaData;	// 0x302ec135
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id)block;	// 0x302ec22d
- (void)setBounds:(CGRect)bounds;	// 0x302eb181
// declared property setter: - (void)setControlTimebase:(OpaqueCMTimebase *)timebase;	// 0x302eaafd
// declared property setter: - (void)setVideoGravity:(id)gravity;	// 0x302ead71
- (void)stopRequestingMediaData;	// 0x302ec3fd
// declared property getter: - (id)videoGravity;	// 0x302eb051
@end


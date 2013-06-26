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
@property(retain) OpaqueCMTimebase *controlTimebase;	// G=0x302e1dbd; S=0x302e1d3d; 
@property(readonly, assign, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;	// G=0x302e32ed; 
@property(copy) NSString *videoGravity;	// G=0x302e2291; S=0x302e1fb1; 
- (id)init;	// 0x302e186d
- (void)_addAnimationsForContentLayer:(id)contentLayer size:(CGSize)size gravity:(id)gravity;	// 0x302e27c1
- (long)_createVideoQueue;	// 0x302e0cd5
- (void)_refreshAboveHighWaterLevel;	// 0x302e15d1
- (void)_setControlTimebase:(OpaqueCMTimebase *)timebase;	// 0x302e0bed
- (void)_updatePresentationSize:(CGSize)size;	// 0x302e0e09
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x302e2c8d
// declared property getter: - (OpaqueCMTimebase *)controlTimebase;	// 0x302e1dbd
- (void)dealloc;	// 0x302e1abd
- (void)enqueueSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x302e310d
- (void)finalize;	// 0x302e1c31
- (void)flush;	// 0x302e3255
- (void)flushAndRemoveImage;	// 0x302e32a1
// declared property getter: - (BOOL)isReadyForMoreMediaData;	// 0x302e32ed
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id)block;	// 0x302e33e5
- (void)setBounds:(CGRect)bounds;	// 0x302e23c1
// declared property setter: - (void)setControlTimebase:(OpaqueCMTimebase *)timebase;	// 0x302e1d3d
// declared property setter: - (void)setVideoGravity:(id)gravity;	// 0x302e1fb1
- (void)stopRequestingMediaData;	// 0x302e35b5
// declared property getter: - (id)videoGravity;	// 0x302e2291
@end

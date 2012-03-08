/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterInputHelper.h"


@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper {
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x30e96b65
- (id)initWithMediaType:(id)mediaType outputSettings:(id)settings;	// 0x30e94259
- (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x30e94531
- (void)setMediaTimeScale:(int)scale;	// 0x30e96c91
- (void)setMetadata:(id)metadata;	// 0x30e94505
- (void)setSampleBufferFormatHint:(opaqueCMFormatDescription *)hint;	// 0x30e96d65
- (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x30e9455d
- (void)setTransform:(CGAffineTransform)transform;	// 0x30e944d5
- (int)status;	// 0x30e93b81
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVFigAssetWriterTrack.h"

@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {
@private
	NSMutableArray *_pendingAudioSampleBuffers;	// 56 = 0x38
}
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 outputSettings:(id)settings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x347534c1
- (int)_attachToFigAssetWriterUsingOutputSettings:(id)figAssetWriterUsingOutputSettings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x34756c15
- (BOOL)_flushPendingSampleBuffersReturningError:(id *)error;	// 0x34756d71
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x34756ed5
- (void)dealloc;	// 0x34753479
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x34753409
@end


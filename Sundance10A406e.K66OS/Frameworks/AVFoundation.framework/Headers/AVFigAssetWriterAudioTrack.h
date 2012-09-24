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
	NSMutableArray *_pendingAudioSampleBuffers;	// 56 = 0x38
}
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 formatSpecification:(id)specification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x302e294d
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)figAssetWriterUsingFormatSpecification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x302e2a1d
- (BOOL)_flushPendingSampleBuffersReturningError:(id *)error;	// 0x302e2bd1
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x302e2d91
- (void)dealloc;	// 0x302e29d1
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x302e3085
- (void)prepareToEndSession;	// 0x302e3045
@end

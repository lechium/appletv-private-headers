/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterInputHelper.h"

@class AVAssetWriterInputMediaDataRequester, AVFigAssetWriterTrack;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper {
@private
	AVFigAssetWriterTrack *_assetWriterTrack;	// 12 = 0xc
	AVAssetWriterInputMediaDataRequester *_mediaDataRequester;	// 16 = 0x10
	CVPixelBufferPoolRef _pixelBufferPool;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack;	// G=0x30adb2b9; @synthesize=_assetWriterTrack
@property(readonly, assign) CVPixelBufferPoolRef pixelBufferPool;	// G=0x30adb115; converted property
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;	// 0x30adabe5
- (id)initWithConfigurationState:(id)configurationState;	// 0x30ada931
- (id)initWithConfigurationState:(id)configurationState assetWriterTrack:(id)track error:(id *)error;	// 0x30ada951
// declared property getter: - (id)_assetWriterTrack;	// 0x30adb2b9
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x30adae85
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x30adadb1
- (void)dealloc;	// 0x30adab2d
- (void)finalize;	// 0x30adaba1
- (BOOL)isReadyForMoreMediaData;	// 0x30adac0d
- (void)markAsFinished;	// 0x30adafd5
// converted property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x30adb115
- (void)prepareToEndSession;	// 0x30adaf81
- (BOOL)prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x30adafa9
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x30adac41
- (int)status;	// 0x30adabe1
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x30adb031
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVAssetWriterInputInternal, AVWeakReference, NSDictionary, NSArray, AVAssetWriterInputHelper, NSString;

@interface AVAssetWriterInput : NSObject {
@private
	AVAssetWriterInputInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic, getter=_isAttachedToPixelBufferAdaptor, setter=_setAttachedToPixelBufferAdaptor:) BOOL attachedToPixelBufferAdaptor;	// G=0x30e93b41; S=0x30e93b61; 
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x30e940fd; S=0x30e94125; 
@property(retain, nonatomic, getter=_helper, setter=_setHelper:) AVAssetWriterInputHelper *helper;	// G=0x30e975c1; S=0x30e97559; 
@property(assign) int mediaTimeScale;	// G=0x30e93fb1; S=0x30e96995; converted property
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x30e93e79; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x30e93f2d; S=0x30e93f55; 
@property(readonly, assign, nonatomic) NSDictionary *outputSettings;	// G=0x30e93ea1; 
@property(readonly, assign, nonatomic, getter=_pixelBufferPool) CVPixelBufferPoolRef pixelBufferPool;	// G=0x30e93fd9; 
@property(readonly, assign, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;	// G=0x30e940d5; 
@property(retain, nonatomic) opaqueCMFormatDescription *sampleBufferFormatHint;	// G=0x30e93ed9; S=0x30e93f01; 
@property(copy, nonatomic, getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:) NSDictionary *sourcePixelBufferAttributes;	// G=0x30e94001; S=0x30e94029; 
@property(readonly, assign, nonatomic, getter=_status) int status;	// G=0x30e93dad; 
@property(assign) CGAffineTransform transform;	// G=0x30e97529; S=0x30e93f81; converted property
@property(retain, nonatomic, getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:) AVWeakReference *weakReferenceToAssetWriter;	// G=0x30e93b21; S=0x30e93d15; 
+ (id)assetWriterInputWithMediaType:(id)mediaType outputSettings:(id)settings;	// 0x30e941c9
+ (void)initialize;	// 0x30e9731d
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;	// 0x30e94231
+ (id)keyPathsForValuesAffectingStatus;	// 0x30e94209
- (id)init;	// 0x30e93cc5
- (id)initWithMediaType:(id)mediaType outputSettings:(id)settings;	// 0x30e96ecd
- (BOOL)_appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x30e94151
// declared property getter: - (id)_helper;	// 0x30e975c1
// declared property getter: - (BOOL)_isAttachedToPixelBufferAdaptor;	// 0x30e93b41
// declared property getter: - (CVPixelBufferPoolRef)_pixelBufferPool;	// 0x30e93fd9
- (BOOL)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaFileType:(id)type error:(id *)error;	// 0x30e97349
- (void)_prepareToEndSession;	// 0x30e94055
- (BOOL)_prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x30e9407d
// declared property setter: - (void)_setAttachedToPixelBufferAdaptor:(BOOL)pixelBufferAdaptor;	// 0x30e93b61
// declared property setter: - (void)_setHelper:(id)helper;	// 0x30e97559
// declared property setter: - (void)_setSourcePixelBufferAttributes:(id)attributes;	// 0x30e94029
// declared property setter: - (void)_setWeakReferenceToAssetWriter:(id)assetWriter;	// 0x30e93d15
// declared property getter: - (id)_sourcePixelBufferAttributes;	// 0x30e94001
// declared property getter: - (int)_status;	// 0x30e93dad
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)error;	// 0x30e93d71
- (void)_transitionToTerminalStatus:(int)terminalStatus;	// 0x30e940a9
// declared property getter: - (id)_weakReferenceToAssetWriter;	// 0x30e93b21
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x30e96ae5
- (void)dealloc;	// 0x30e97765
- (id)description;	// 0x30e96e49
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x30e940fd
- (void)finalize;	// 0x30e97709
// declared property getter: - (BOOL)isReadyForMoreMediaData;	// 0x30e940d5
- (void)markAsFinished;	// 0x30e941a1
// converted property getter: - (int)mediaTimeScale;	// 0x30e93fb1
// declared property getter: - (id)mediaType;	// 0x30e93e79
// declared property getter: - (id)metadata;	// 0x30e93f2d
// declared property getter: - (id)outputSettings;	// 0x30e93ea1
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x30e96a1d
// declared property getter: - (opaqueCMFormatDescription *)sampleBufferFormatHint;	// 0x30e93ed9
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x30e94125
// converted property setter: - (void)setMediaTimeScale:(int)scale;	// 0x30e96995
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30e93f55
// declared property setter: - (void)setSampleBufferFormatHint:(opaqueCMFormatDescription *)hint;	// 0x30e93f01
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x30e93f81
// converted property getter: - (CGAffineTransform)transform;	// 0x30e97529
@end

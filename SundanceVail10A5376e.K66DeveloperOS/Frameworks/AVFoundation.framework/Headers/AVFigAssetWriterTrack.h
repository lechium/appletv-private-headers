/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType, NSString, AVWeakReference;
@protocol OS_dispatch_queue;

@interface AVFigAssetWriterTrack : NSObject {
	AVWeakReference *_weakReference;	// 4 = 0x4
	OpaqueFigAssetWriter *_figAssetWriter;	// 8 = 0x8
	int _trackID;	// 12 = 0xc
	NSString *_mediaType;	// 16 = 0x10
	AVMediaFileType *_mediaFileType;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;	// 24 = 0x18
	BOOL _aboveHighWaterLevel;	// 28 = 0x1c
	XXStruct_pwHToB _sampleBufferCoalescingInterval;	// 32 = 0x20
}
@property(readonly, assign, getter=isAboveHighWaterLevel) BOOL aboveHighWaterLevel;	// G=0x368c4179; 
@property(readonly, assign, nonatomic) OpaqueFigAssetWriter *figAssetWriter;	// G=0x368c4a95; @synthesize=_figAssetWriter
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x368c4ac5; @synthesize=_mediaFileType
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x368c4ab5; @synthesize=_mediaType
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x368c3f59; 
@property(assign, nonatomic) XXStruct_pwHToB sampleBufferCoalescingInterval;	// G=0x368c4a2d; S=0x368c4a61; @synthesize=_sampleBufferCoalescingInterval
@property(readonly, assign, nonatomic) int trackID;	// G=0x368c4aa5; @synthesize=_trackID
+ (id)assetWriterTrackWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 formatSpecification:(id)specification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x368c37b9
- (id)init;	// 0x368c38a1
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 formatSpecification:(id)specification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x368c38c9
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)figAssetWriterUsingFormatSpecification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x368c49a9
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)_figAssetWriter;	// 0x368c3fd5
- (void)_refreshAboveHighWaterLevel;	// 0x368c400d
- (BOOL)addPixelBuffer:(CVBufferRef)buffer atPresentationTime:(XXStruct_pwHToB)presentationTime error:(id *)error;	// 0x368c4411
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x368c4249
- (void)dealloc;	// 0x368c3d71
// declared property getter: - (OpaqueFigAssetWriter *)figAssetWriter;	// 0x368c4a95
- (void)finalize;	// 0x368c3e89
// declared property getter: - (BOOL)isAboveHighWaterLevel;	// 0x368c4179
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x368c4541
// declared property getter: - (id)mediaFileType;	// 0x368c4ac5
// declared property getter: - (id)mediaType;	// 0x368c4ab5
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x368c3f59
- (void)prepareToEndSession;	// 0x368c453d
// declared property getter: - (XXStruct_pwHToB)sampleBufferCoalescingInterval;	// 0x368c4a2d
- (void)setAlternateGroupID:(short)anId;	// 0x368c48a9
- (void)setExcludeFromAutoSelection:(BOOL)autoSelection;	// 0x368c4929
- (void)setExtendedLanguageTag:(id)tag;	// 0x368c47c9
- (void)setFigDimensions:(id)dimensions;	// 0x368c4709
- (void)setFigMetadata:(id)metadata;	// 0x368c45c9
- (void)setFigTrackMatrix:(id)matrix;	// 0x368c4629
- (void)setLanguageCode:(id)code;	// 0x368c4769
- (void)setMarksOutputTrackAsEnabled:(BOOL)enabled;	// 0x368c4829
- (void)setMediaTimeScale:(int)scale;	// 0x368c4689
// declared property setter: - (void)setSampleBufferCoalescingInterval:(XXStruct_pwHToB)interval;	// 0x368c4a61
// declared property getter: - (int)trackID;	// 0x368c4aa5
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, CALayer, AVCamera, NSDictionary, NSURL, NSString;

@interface AVCapture : NSObject {
@private
	AVCapturePrivate *_priv;	// 4 = 0x4
	AVCamera *_sourceCamera;	// 8 = 0x8
	NSString *_captureMode;	// 12 = 0xc
	NSString *_qualityPreset;	// 16 = 0x10
	BOOL _isCapturingPhoto;	// 20 = 0x14
	NSURL *_fileURLForRecording;	// 24 = 0x18
	BOOL _returnIOSurface;	// 28 = 0x1c
}
@property(assign) unsigned audioCaptureFormat;	// G=0x323e91bd; S=0x323d4de5; 
@property(readonly, assign) NSArray *audioLevel;	// G=0x323d70fd; 
@property(assign) BOOL audioMeteringEnabled;	// G=0x323e8ee1; S=0x323d4e45; 
@property(assign, nonatomic) float autoExposureTarget;	// G=0x323e9965; S=0x323e99cd; 
@property(retain) NSString *captureMode;	// G=0x323ea7e9; S=0x323d4d9d; @synthesize=_captureMode
@property(assign) BOOL chapterMarkersEnabled;	// G=0x323e8fe5; S=0x323e900d; 
@property(assign, nonatomic) float contrast;	// G=0x323e9c45; S=0x323e9cad; 
@property(assign) BOOL dumpSensorInfo;	// G=0x323e880d; S=0x323e8835; 
@property(retain) NSString *faceDetectionMode;	// G=0x323ea2bd; S=0x323ea381; 
@property(retain) NSURL *fileURLForRecording;	// G=0x323d84fd; S=0x323d6b89; @synthesize=_fileURLForRecording
@property(retain) NSString *flashMode;	// G=0x323ea095; S=0x323ea159; 
@property(assign) long long freeDiskSpaceLimit;	// G=0x323e9755; S=0x323d842d; 
@property(readonly, assign) BOOL isCapturingPhoto;	// G=0x323d8b2d; @synthesize=_isCapturingPhoto
@property(readonly, assign, nonatomic) BOOL isHighDynamicRangeAvailable;	// G=0x323e9e59; 
@property(readonly, assign) BOOL isPaused;	// G=0x323e910d; 
@property(readonly, assign) BOOL isPreviewing;	// G=0x323d5c19; 
@property(readonly, assign) BOOL isRecording;	// G=0x323d4dbd; 
@property(readonly, assign) BOOL isTorchReady;	// G=0x323e9e31; 
@property(assign) BOOL locationMetadataTrackEnabled;	// G=0x323e9225; S=0x323e924d; 
@property(assign) BOOL lockAutoExposure;	// G=0x323e995d; S=0x323e9961; 
@property(assign) BOOL lockAutoWhiteBalance;	// G=0x323e9a2d; S=0x323e9a55; 
@property(readonly, assign) int maxJPEGSize;	// G=0x323e98cd; 
@property(copy) NSDictionary *metadata;	// G=0x323e8a89; S=0x323e8aed; 
@property(assign) BOOL mirrorPreview;	// G=0x323e9ed5; S=0x323e9efd; 
@property(assign) BOOL monitorSubjectArea;	// G=0x323e9935; S=0x323d801d; 
@property(assign) int noiseReductionMethod;	// G=0x323e9d0d; S=0x323e9d71; 
@property(readonly, assign) int noiseReductionMethodCount;	// G=0x323e9dcd; 
@property(readonly, assign) NSString *noiseReductionMethodName;	// G=0x323e9e81; 
@property(retain) NSString *orientation;	// G=0x323e89c5; S=0x323d8355; 
@property(assign, nonatomic) BOOL pauseRecordingOnInterruption;	// G=0x323e9135; S=0x323e915d; 
@property(retain) NSString *qualityPreset;	// G=0x323ea7fd; S=0x323e8895; @synthesize=_qualityPreset
@property(readonly, assign) double recordedDuration;	// G=0x323e9845; 
@property(assign) double recordedDurationLimit;	// G=0x323e9645; S=0x323e96cd; 
@property(readonly, assign) long long recordedFileSizeBytes;	// G=0x323e97cd; 
@property(assign) long long recordedFileSizeBytesLimit;	// G=0x323e95cd; S=0x323d83c9; 
@property(assign, nonatomic) float saturation;	// G=0x323e9b7d; S=0x323e9be5; 
@property(retain) AVCamera *sourceCamera;	// G=0x323d7485; S=0x323ea7c5; @synthesize=_sourceCamera
@property(assign) BOOL suspendPreviewOnPhotoCapture;	// G=0x323e8f09; S=0x323d8ab5; 
@property(retain) NSString *torchMode;	// G=0x323e9f5d; S=0x323ea021; 
@property(assign) BOOL useFlashAFAssist;	// G=0x323ea3f5; S=0x323ea41d; 
@property(assign) BOOL useFlashRedEyeReduction;	// G=0x323ea47d; S=0x323ea4a5; 
@property(retain) CALayer *videoPreviewLayer;	// G=0x323e8c0d; S=0x323d75d9; 
@property(retain) NSString *videoPreviewLayerOrientation;	// G=0x323e8c71; S=0x323e8d35; 
@property(retain) NSString *videoPreviewLayerScalingMode;	// G=0x323e8e1d; S=0x323e8da9; 
@property(assign, nonatomic) float whiteBalance;	// G=0x323e9ab5; S=0x323e9b1d; 
+ (id)avOrientationMap;	// 0x323e8041
+ (id)availableModes;	// 0x323d42d9
+ (id)convertMoofToMoovInFile:(id)file;	// 0x323e7dc9
+ (id)faceDetectionModeMap;	// 0x323ea1cd
+ (id)flashModeMap;	// 0x323e7e15
+ (id)focusModeMap;	// 0x323d7f51
+ (id)presetMap;	// 0x323d4ed5
+ (id)reasonMap;	// 0x323e7f75
+ (id)scalingModeMap;	// 0x323e810d
+ (id)torchModeMap;	// 0x323e7ec5
+ (id)updateMetadataInFile:(id)file withMetadata:(id)metadata;	// 0x323e7d7d
- (id)init;	// 0x323d42ad
- (id)initLocal;	// 0x323e87e1
- (id)initWithCaptureMode:(id)captureMode qualityPreset:(id)preset;	// 0x323e87b5
- (id)initWithFigRecorderCreateFunction:(/*function-pointer*/ void *)figRecorderCreateFunction captureMode:(id)mode qualityPreset:(id)preset;	// 0x323e844d
- (BOOL)addChapterMarker:(id)marker atTime:(double)time;	// 0x323e906d
// declared property getter: - (unsigned)audioCaptureFormat;	// 0x323e91bd
- (void)audioInputDevicesDidChangeHandler:(id)audioInputDevices;	// 0x323ea779
// declared property getter: - (id)audioLevel;	// 0x323d70fd
// declared property getter: - (BOOL)audioMeteringEnabled;	// 0x323e8ee1
// declared property getter: - (float)autoExposureTarget;	// 0x323e9965
- (id)captureFormatForCaptureMode:(id)captureMode qualityPreset:(id)preset;	// 0x323e8389
// declared property getter: - (id)captureMode;	// 0x323ea7e9
- (BOOL)capturePhoto;	// 0x323d8b15
- (BOOL)capturePhoto:(id)photo;	// 0x323e92ad
// declared property getter: - (BOOL)chapterMarkersEnabled;	// 0x323e8fe5
// declared property getter: - (float)contrast;	// 0x323e9c45
- (void)dealloc;	// 0x323d6bad
- (void)didCancelFocusingHandler:(id)handler;	// 0x323d89b9
- (void)didCompleteOutputHandler:(id)handler;	// 0x323ea505
- (void)didFailToStartRecordingHandler:(id)startRecordingHandler;	// 0x323ea6e1
- (void)didFinishFocusingHandler:(id)handler;	// 0x323d8185
- (void)didStartFocusingHandler:(id)handler;	// 0x323d807d
- (void)didStopRecordingHandler:(id)handler;	// 0x323ea72d
// declared property getter: - (BOOL)dumpSensorInfo;	// 0x323e880d
// declared property getter: - (id)faceDetectionMode;	// 0x323ea2bd
// declared property getter: - (id)fileURLForRecording;	// 0x323d84fd
// declared property getter: - (id)flashMode;	// 0x323ea095
- (BOOL)focusUsingMethod:(id)method options:(id)options;	// 0x323d7db1
// declared property getter: - (long long)freeDiskSpaceLimit;	// 0x323e9755
- (BOOL)getRecorderBoolForKey:(id)key withDefault:(BOOL)aDefault;	// 0x323e83e9
// declared property getter: - (BOOL)isCapturingPhoto;	// 0x323d8b2d
// declared property getter: - (BOOL)isHighDynamicRangeAvailable;	// 0x323e9e59
// declared property getter: - (BOOL)isPaused;	// 0x323e910d
// declared property getter: - (BOOL)isPreviewing;	// 0x323d5c19
// declared property getter: - (BOOL)isRecording;	// 0x323d4dbd
// declared property getter: - (BOOL)isTorchReady;	// 0x323e9e31
// declared property getter: - (BOOL)locationMetadataTrackEnabled;	// 0x323e9225
// declared property getter: - (BOOL)lockAutoExposure;	// 0x323e995d
// declared property getter: - (BOOL)lockAutoWhiteBalance;	// 0x323e9a2d
// declared property getter: - (int)maxJPEGSize;	// 0x323e98cd
// declared property getter: - (id)metadata;	// 0x323e8a89
// declared property getter: - (BOOL)mirrorPreview;	// 0x323e9ed5
// declared property getter: - (BOOL)monitorSubjectArea;	// 0x323e9935
// declared property getter: - (int)noiseReductionMethod;	// 0x323e9d0d
// declared property getter: - (int)noiseReductionMethodCount;	// 0x323e9dcd
// declared property getter: - (id)noiseReductionMethodName;	// 0x323e9e81
- (id)objectForMetadataKey:(id)metadataKey;	// 0x323e8be1
- (id)optionsForCaptureMode:(id)captureMode qualityPreset:(id)preset;	// 0x323e819d
// declared property getter: - (id)orientation;	// 0x323e89c5
- (BOOL)pausePreview;	// 0x323e8f31
- (BOOL)pauseRecording;	// 0x323e8f85
// declared property getter: - (BOOL)pauseRecordingOnInterruption;	// 0x323e9135
- (void)photoTakenHandler:(id)handler;	// 0x323d9051
// declared property getter: - (id)qualityPreset;	// 0x323ea7fd
// declared property getter: - (double)recordedDuration;	// 0x323e9845
// declared property getter: - (double)recordedDurationLimit;	// 0x323e9645
// declared property getter: - (long long)recordedFileSizeBytes;	// 0x323e97cd
// declared property getter: - (long long)recordedFileSizeBytesLimit;	// 0x323e95cd
- (BOOL)resumePreview;	// 0x323d94d5
- (BOOL)resumeRecording;	// 0x323e8fb5
// declared property getter: - (float)saturation;	// 0x323e9b7d
// declared property setter: - (void)setAudioCaptureFormat:(unsigned)format;	// 0x323d4de5
// declared property setter: - (void)setAudioMeteringEnabled:(BOOL)enabled;	// 0x323d4e45
// declared property setter: - (void)setAutoExposureTarget:(float)target;	// 0x323e99cd
// declared property setter: - (void)setCaptureMode:(id)mode;	// 0x323d4d9d
- (BOOL)setCaptureMode:(id)mode qualityPreset:(id)preset;	// 0x323e88b9
// declared property setter: - (void)setChapterMarkersEnabled:(BOOL)enabled;	// 0x323e900d
// declared property setter: - (void)setContrast:(float)contrast;	// 0x323e9cad
// declared property setter: - (void)setDumpSensorInfo:(BOOL)info;	// 0x323e8835
// declared property setter: - (void)setFaceDetectionMode:(id)mode;	// 0x323ea381
// declared property setter: - (void)setFileURLForRecording:(id)recording;	// 0x323d6b89
// declared property setter: - (void)setFlashMode:(id)mode;	// 0x323ea159
// declared property setter: - (void)setFreeDiskSpaceLimit:(long long)limit;	// 0x323d842d
- (void)setIsCapturingPhoto:(BOOL)photo;	// 0x323d8cf1
// declared property setter: - (void)setLocationMetadataTrackEnabled:(BOOL)enabled;	// 0x323e924d
// declared property setter: - (void)setLockAutoExposure:(BOOL)exposure;	// 0x323e9961
// declared property setter: - (void)setLockAutoWhiteBalance:(BOOL)balance;	// 0x323e9a55
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x323e8aed
// declared property setter: - (void)setMirrorPreview:(BOOL)preview;	// 0x323e9efd
// declared property setter: - (void)setMonitorSubjectArea:(BOOL)area;	// 0x323d801d
// declared property setter: - (void)setNoiseReductionMethod:(int)method;	// 0x323e9d71
- (void)setObject:(id)object forMetadataKey:(id)metadataKey;	// 0x323e8b31
// declared property setter: - (void)setOrientation:(id)orientation;	// 0x323d8355
// declared property setter: - (void)setPauseRecordingOnInterruption:(BOOL)interruption;	// 0x323e915d
// declared property setter: - (void)setQualityPreset:(id)preset;	// 0x323e8895
// declared property setter: - (void)setRecordedDurationLimit:(double)limit;	// 0x323e96cd
// declared property setter: - (void)setRecordedFileSizeBytesLimit:(long long)limit;	// 0x323d83c9
// declared property setter: - (void)setSaturation:(float)saturation;	// 0x323e9be5
// declared property setter: - (void)setSourceCamera:(id)camera;	// 0x323ea7c5
// declared property setter: - (void)setSuspendPreviewOnPhotoCapture:(BOOL)capture;	// 0x323d8ab5
// declared property setter: - (void)setTorchMode:(id)mode;	// 0x323ea021
// declared property setter: - (void)setUseFlashAFAssist:(BOOL)assist;	// 0x323ea41d
// declared property setter: - (void)setUseFlashRedEyeReduction:(BOOL)reduction;	// 0x323ea4a5
// declared property setter: - (void)setVideoPreviewLayer:(id)layer;	// 0x323d75d9
// declared property setter: - (void)setVideoPreviewLayerOrientation:(id)orientation;	// 0x323e8d35
// declared property setter: - (void)setVideoPreviewLayerScalingMode:(id)mode;	// 0x323e8da9
// declared property setter: - (void)setWhiteBalance:(float)balance;	// 0x323e9b1d
// declared property getter: - (id)sourceCamera;	// 0x323d7485
- (BOOL)startPreview;	// 0x323d4ea5
- (BOOL)startRecording;	// 0x323d8491
- (BOOL)stopPreview;	// 0x323d6d39
- (BOOL)stopRecording;	// 0x323d6d09
// declared property getter: - (BOOL)suspendPreviewOnPhotoCapture;	// 0x323e8f09
// declared property getter: - (id)torchMode;	// 0x323e9f5d
// declared property getter: - (BOOL)useFlashAFAssist;	// 0x323ea3f5
// declared property getter: - (BOOL)useFlashRedEyeReduction;	// 0x323ea47d
// declared property getter: - (id)videoPreviewLayer;	// 0x323e8c0d
// declared property getter: - (id)videoPreviewLayerOrientation;	// 0x323e8c71
// declared property getter: - (id)videoPreviewLayerScalingMode;	// 0x323e8e1d
// declared property getter: - (float)whiteBalance;	// 0x323e9ab5
@end


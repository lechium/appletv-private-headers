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
@property(assign) unsigned audioCaptureFormat;	// G=0x30eb61bd; S=0x30ea1de5; 
@property(readonly, assign) NSArray *audioLevel;	// G=0x30ea40fd; 
@property(assign) BOOL audioMeteringEnabled;	// G=0x30eb5ee1; S=0x30ea1e45; 
@property(assign, nonatomic) float autoExposureTarget;	// G=0x30eb6965; S=0x30eb69cd; 
@property(retain) NSString *captureMode;	// G=0x30eb77e9; S=0x30ea1d9d; @synthesize=_captureMode
@property(assign) BOOL chapterMarkersEnabled;	// G=0x30eb5fe5; S=0x30eb600d; 
@property(assign, nonatomic) float contrast;	// G=0x30eb6c45; S=0x30eb6cad; 
@property(assign) BOOL dumpSensorInfo;	// G=0x30eb580d; S=0x30eb5835; 
@property(retain) NSString *faceDetectionMode;	// G=0x30eb72bd; S=0x30eb7381; 
@property(retain) NSURL *fileURLForRecording;	// G=0x30ea54fd; S=0x30ea3b89; @synthesize=_fileURLForRecording
@property(retain) NSString *flashMode;	// G=0x30eb7095; S=0x30eb7159; 
@property(assign) long long freeDiskSpaceLimit;	// G=0x30eb6755; S=0x30ea542d; 
@property(readonly, assign) BOOL isCapturingPhoto;	// G=0x30ea5b2d; @synthesize=_isCapturingPhoto
@property(readonly, assign, nonatomic) BOOL isHighDynamicRangeAvailable;	// G=0x30eb6e59; 
@property(readonly, assign) BOOL isPaused;	// G=0x30eb610d; 
@property(readonly, assign) BOOL isPreviewing;	// G=0x30ea2c19; 
@property(readonly, assign) BOOL isRecording;	// G=0x30ea1dbd; 
@property(readonly, assign) BOOL isTorchReady;	// G=0x30eb6e31; 
@property(assign) BOOL locationMetadataTrackEnabled;	// G=0x30eb6225; S=0x30eb624d; 
@property(assign) BOOL lockAutoExposure;	// G=0x30eb695d; S=0x30eb6961; 
@property(assign) BOOL lockAutoWhiteBalance;	// G=0x30eb6a2d; S=0x30eb6a55; 
@property(readonly, assign) int maxJPEGSize;	// G=0x30eb68cd; 
@property(copy) NSDictionary *metadata;	// G=0x30eb5a89; S=0x30eb5aed; 
@property(assign) BOOL mirrorPreview;	// G=0x30eb6ed5; S=0x30eb6efd; 
@property(assign) BOOL monitorSubjectArea;	// G=0x30eb6935; S=0x30ea501d; 
@property(assign) int noiseReductionMethod;	// G=0x30eb6d0d; S=0x30eb6d71; 
@property(readonly, assign) int noiseReductionMethodCount;	// G=0x30eb6dcd; 
@property(readonly, assign) NSString *noiseReductionMethodName;	// G=0x30eb6e81; 
@property(retain) NSString *orientation;	// G=0x30eb59c5; S=0x30ea5355; 
@property(assign, nonatomic) BOOL pauseRecordingOnInterruption;	// G=0x30eb6135; S=0x30eb615d; 
@property(retain) NSString *qualityPreset;	// G=0x30eb77fd; S=0x30eb5895; @synthesize=_qualityPreset
@property(readonly, assign) double recordedDuration;	// G=0x30eb6845; 
@property(assign) double recordedDurationLimit;	// G=0x30eb6645; S=0x30eb66cd; 
@property(readonly, assign) long long recordedFileSizeBytes;	// G=0x30eb67cd; 
@property(assign) long long recordedFileSizeBytesLimit;	// G=0x30eb65cd; S=0x30ea53c9; 
@property(assign, nonatomic) float saturation;	// G=0x30eb6b7d; S=0x30eb6be5; 
@property(retain) AVCamera *sourceCamera;	// G=0x30ea4485; S=0x30eb77c5; @synthesize=_sourceCamera
@property(assign) BOOL suspendPreviewOnPhotoCapture;	// G=0x30eb5f09; S=0x30ea5ab5; 
@property(retain) NSString *torchMode;	// G=0x30eb6f5d; S=0x30eb7021; 
@property(assign) BOOL useFlashAFAssist;	// G=0x30eb73f5; S=0x30eb741d; 
@property(assign) BOOL useFlashRedEyeReduction;	// G=0x30eb747d; S=0x30eb74a5; 
@property(retain) CALayer *videoPreviewLayer;	// G=0x30eb5c0d; S=0x30ea45d9; 
@property(retain) NSString *videoPreviewLayerOrientation;	// G=0x30eb5c71; S=0x30eb5d35; 
@property(retain) NSString *videoPreviewLayerScalingMode;	// G=0x30eb5e1d; S=0x30eb5da9; 
@property(assign, nonatomic) float whiteBalance;	// G=0x30eb6ab5; S=0x30eb6b1d; 
+ (id)avOrientationMap;	// 0x30eb5041
+ (id)availableModes;	// 0x30ea12d9
+ (id)convertMoofToMoovInFile:(id)file;	// 0x30eb4dc9
+ (id)faceDetectionModeMap;	// 0x30eb71cd
+ (id)flashModeMap;	// 0x30eb4e15
+ (id)focusModeMap;	// 0x30ea4f51
+ (id)presetMap;	// 0x30ea1ed5
+ (id)reasonMap;	// 0x30eb4f75
+ (id)scalingModeMap;	// 0x30eb510d
+ (id)torchModeMap;	// 0x30eb4ec5
+ (id)updateMetadataInFile:(id)file withMetadata:(id)metadata;	// 0x30eb4d7d
- (id)init;	// 0x30ea12ad
- (id)initLocal;	// 0x30eb57e1
- (id)initWithCaptureMode:(id)captureMode qualityPreset:(id)preset;	// 0x30eb57b5
- (id)initWithFigRecorderCreateFunction:(/*function-pointer*/ void *)figRecorderCreateFunction captureMode:(id)mode qualityPreset:(id)preset;	// 0x30eb544d
- (BOOL)addChapterMarker:(id)marker atTime:(double)time;	// 0x30eb606d
// declared property getter: - (unsigned)audioCaptureFormat;	// 0x30eb61bd
- (void)audioInputDevicesDidChangeHandler:(id)audioInputDevices;	// 0x30eb7779
// declared property getter: - (id)audioLevel;	// 0x30ea40fd
// declared property getter: - (BOOL)audioMeteringEnabled;	// 0x30eb5ee1
// declared property getter: - (float)autoExposureTarget;	// 0x30eb6965
- (id)captureFormatForCaptureMode:(id)captureMode qualityPreset:(id)preset;	// 0x30eb5389
// declared property getter: - (id)captureMode;	// 0x30eb77e9
- (BOOL)capturePhoto;	// 0x30ea5b15
- (BOOL)capturePhoto:(id)photo;	// 0x30eb62ad
// declared property getter: - (BOOL)chapterMarkersEnabled;	// 0x30eb5fe5
// declared property getter: - (float)contrast;	// 0x30eb6c45
- (void)dealloc;	// 0x30ea3bad
- (void)didCancelFocusingHandler:(id)handler;	// 0x30ea59b9
- (void)didCompleteOutputHandler:(id)handler;	// 0x30eb7505
- (void)didFailToStartRecordingHandler:(id)startRecordingHandler;	// 0x30eb76e1
- (void)didFinishFocusingHandler:(id)handler;	// 0x30ea5185
- (void)didStartFocusingHandler:(id)handler;	// 0x30ea507d
- (void)didStopRecordingHandler:(id)handler;	// 0x30eb772d
// declared property getter: - (BOOL)dumpSensorInfo;	// 0x30eb580d
// declared property getter: - (id)faceDetectionMode;	// 0x30eb72bd
// declared property getter: - (id)fileURLForRecording;	// 0x30ea54fd
// declared property getter: - (id)flashMode;	// 0x30eb7095
- (BOOL)focusUsingMethod:(id)method options:(id)options;	// 0x30ea4db1
// declared property getter: - (long long)freeDiskSpaceLimit;	// 0x30eb6755
- (BOOL)getRecorderBoolForKey:(id)key withDefault:(BOOL)aDefault;	// 0x30eb53e9
// declared property getter: - (BOOL)isCapturingPhoto;	// 0x30ea5b2d
// declared property getter: - (BOOL)isHighDynamicRangeAvailable;	// 0x30eb6e59
// declared property getter: - (BOOL)isPaused;	// 0x30eb610d
// declared property getter: - (BOOL)isPreviewing;	// 0x30ea2c19
// declared property getter: - (BOOL)isRecording;	// 0x30ea1dbd
// declared property getter: - (BOOL)isTorchReady;	// 0x30eb6e31
// declared property getter: - (BOOL)locationMetadataTrackEnabled;	// 0x30eb6225
// declared property getter: - (BOOL)lockAutoExposure;	// 0x30eb695d
// declared property getter: - (BOOL)lockAutoWhiteBalance;	// 0x30eb6a2d
// declared property getter: - (int)maxJPEGSize;	// 0x30eb68cd
// declared property getter: - (id)metadata;	// 0x30eb5a89
// declared property getter: - (BOOL)mirrorPreview;	// 0x30eb6ed5
// declared property getter: - (BOOL)monitorSubjectArea;	// 0x30eb6935
// declared property getter: - (int)noiseReductionMethod;	// 0x30eb6d0d
// declared property getter: - (int)noiseReductionMethodCount;	// 0x30eb6dcd
// declared property getter: - (id)noiseReductionMethodName;	// 0x30eb6e81
- (id)objectForMetadataKey:(id)metadataKey;	// 0x30eb5be1
- (id)optionsForCaptureMode:(id)captureMode qualityPreset:(id)preset;	// 0x30eb519d
// declared property getter: - (id)orientation;	// 0x30eb59c5
- (BOOL)pausePreview;	// 0x30eb5f31
- (BOOL)pauseRecording;	// 0x30eb5f85
// declared property getter: - (BOOL)pauseRecordingOnInterruption;	// 0x30eb6135
- (void)photoTakenHandler:(id)handler;	// 0x30ea6051
// declared property getter: - (id)qualityPreset;	// 0x30eb77fd
// declared property getter: - (double)recordedDuration;	// 0x30eb6845
// declared property getter: - (double)recordedDurationLimit;	// 0x30eb6645
// declared property getter: - (long long)recordedFileSizeBytes;	// 0x30eb67cd
// declared property getter: - (long long)recordedFileSizeBytesLimit;	// 0x30eb65cd
- (BOOL)resumePreview;	// 0x30ea64d5
- (BOOL)resumeRecording;	// 0x30eb5fb5
// declared property getter: - (float)saturation;	// 0x30eb6b7d
// declared property setter: - (void)setAudioCaptureFormat:(unsigned)format;	// 0x30ea1de5
// declared property setter: - (void)setAudioMeteringEnabled:(BOOL)enabled;	// 0x30ea1e45
// declared property setter: - (void)setAutoExposureTarget:(float)target;	// 0x30eb69cd
// declared property setter: - (void)setCaptureMode:(id)mode;	// 0x30ea1d9d
- (BOOL)setCaptureMode:(id)mode qualityPreset:(id)preset;	// 0x30eb58b9
// declared property setter: - (void)setChapterMarkersEnabled:(BOOL)enabled;	// 0x30eb600d
// declared property setter: - (void)setContrast:(float)contrast;	// 0x30eb6cad
// declared property setter: - (void)setDumpSensorInfo:(BOOL)info;	// 0x30eb5835
// declared property setter: - (void)setFaceDetectionMode:(id)mode;	// 0x30eb7381
// declared property setter: - (void)setFileURLForRecording:(id)recording;	// 0x30ea3b89
// declared property setter: - (void)setFlashMode:(id)mode;	// 0x30eb7159
// declared property setter: - (void)setFreeDiskSpaceLimit:(long long)limit;	// 0x30ea542d
- (void)setIsCapturingPhoto:(BOOL)photo;	// 0x30ea5cf1
// declared property setter: - (void)setLocationMetadataTrackEnabled:(BOOL)enabled;	// 0x30eb624d
// declared property setter: - (void)setLockAutoExposure:(BOOL)exposure;	// 0x30eb6961
// declared property setter: - (void)setLockAutoWhiteBalance:(BOOL)balance;	// 0x30eb6a55
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30eb5aed
// declared property setter: - (void)setMirrorPreview:(BOOL)preview;	// 0x30eb6efd
// declared property setter: - (void)setMonitorSubjectArea:(BOOL)area;	// 0x30ea501d
// declared property setter: - (void)setNoiseReductionMethod:(int)method;	// 0x30eb6d71
- (void)setObject:(id)object forMetadataKey:(id)metadataKey;	// 0x30eb5b31
// declared property setter: - (void)setOrientation:(id)orientation;	// 0x30ea5355
// declared property setter: - (void)setPauseRecordingOnInterruption:(BOOL)interruption;	// 0x30eb615d
// declared property setter: - (void)setQualityPreset:(id)preset;	// 0x30eb5895
// declared property setter: - (void)setRecordedDurationLimit:(double)limit;	// 0x30eb66cd
// declared property setter: - (void)setRecordedFileSizeBytesLimit:(long long)limit;	// 0x30ea53c9
// declared property setter: - (void)setSaturation:(float)saturation;	// 0x30eb6be5
// declared property setter: - (void)setSourceCamera:(id)camera;	// 0x30eb77c5
// declared property setter: - (void)setSuspendPreviewOnPhotoCapture:(BOOL)capture;	// 0x30ea5ab5
// declared property setter: - (void)setTorchMode:(id)mode;	// 0x30eb7021
// declared property setter: - (void)setUseFlashAFAssist:(BOOL)assist;	// 0x30eb741d
// declared property setter: - (void)setUseFlashRedEyeReduction:(BOOL)reduction;	// 0x30eb74a5
// declared property setter: - (void)setVideoPreviewLayer:(id)layer;	// 0x30ea45d9
// declared property setter: - (void)setVideoPreviewLayerOrientation:(id)orientation;	// 0x30eb5d35
// declared property setter: - (void)setVideoPreviewLayerScalingMode:(id)mode;	// 0x30eb5da9
// declared property setter: - (void)setWhiteBalance:(float)balance;	// 0x30eb6b1d
// declared property getter: - (id)sourceCamera;	// 0x30ea4485
- (BOOL)startPreview;	// 0x30ea1ea5
- (BOOL)startRecording;	// 0x30ea5491
- (BOOL)stopPreview;	// 0x30ea3d39
- (BOOL)stopRecording;	// 0x30ea3d09
// declared property getter: - (BOOL)suspendPreviewOnPhotoCapture;	// 0x30eb5f09
// declared property getter: - (id)torchMode;	// 0x30eb6f5d
// declared property getter: - (BOOL)useFlashAFAssist;	// 0x30eb73f5
// declared property getter: - (BOOL)useFlashRedEyeReduction;	// 0x30eb747d
// declared property getter: - (id)videoPreviewLayer;	// 0x30eb5c0d
// declared property getter: - (id)videoPreviewLayerOrientation;	// 0x30eb5c71
// declared property getter: - (id)videoPreviewLayerScalingMode;	// 0x30eb5e1d
// declared property getter: - (float)whiteBalance;	// 0x30eb6ab5
@end


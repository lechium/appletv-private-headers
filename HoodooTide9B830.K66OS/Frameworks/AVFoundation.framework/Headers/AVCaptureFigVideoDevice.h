/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureDevice.h"
#import "MCProfileConnectionObserver.h"

@class NSDictionary, AVWeakReference;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
	NSDictionary *_deviceProperties;	// 8 = 0x8
	int _focusMode;	// 12 = 0xc
	CGPoint _focusPointOfInterest;	// 16 = 0x10
	int _focusInFlightCount;	// 24 = 0x18
	BOOL _adjustingFocus;	// 28 = 0x1c
	int _exposureMode;	// 32 = 0x20
	XXStruct_pwHToB _exposureDuration;	// 36 = 0x24
	float _exposureGain;	// 60 = 0x3c
	BOOL _manualExposureSupportEnabled;	// 64 = 0x40
	float _autoExposureBias;	// 68 = 0x44
	CGPoint _exposurePointOfInterest;	// 72 = 0x48
	BOOL _adjustingExposure;	// 80 = 0x50
	int _wbMode;	// 84 = 0x54
	float _whiteBalanceTemperature;	// 88 = 0x58
	BOOL _adjustingWB;	// 92 = 0x5c
	BOOL _automaticallyAdjustsImageControlMode;	// 93 = 0x5d
	int _imageControlMode;	// 96 = 0x60
	int _flashMode;	// 100 = 0x64
	BOOL _flashActive;	// 104 = 0x68
	BOOL _flashAvailable;	// 105 = 0x69
	int _torchMode;	// 108 = 0x6c
	float _torchLevel;	// 112 = 0x70
	BOOL _torchAvailable;	// 116 = 0x74
	BOOL _isConnected;	// 117 = 0x75
	CGRect _faceRectangle;	// 120 = 0x78
	int _faceRectangleAngle;	// 136 = 0x88
	BOOL _faceDetectionMetadataEnabled;	// 140 = 0x8c
	dispatch_queue_s *_torchAppsSerialQueue;	// 144 = 0x90
	dispatch_source_s *_torchAppsKillTimer;	// 148 = 0x94
	OpaqueFigRecorder *_recorderForTorchApps;	// 152 = 0x98
	float _saturation;	// 156 = 0x9c
	float _contrast;	// 160 = 0xa0
	AVWeakReference *_weakReference;	// 164 = 0xa4
}
@property(readonly, assign, getter=isAdjustingExposure) BOOL adjustingExposure;	// G=0x35e51569; converted property
@property(readonly, assign, getter=isAdjustingFocus) BOOL adjustingFocus;	// G=0x35e50b11; converted property
@property(assign) float autoExposureBias;	// G=0x35e512f5; S=0x35e51365; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x35e52bd5; S=0x35e52be5; converted property
@property(assign) float contrast;	// G=0x35e53665; S=0x35e536d5; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x35e510f5; S=0x35e51129; converted property
@property(assign) float exposureGain;	// G=0x35e511fd; S=0x35e5120d; converted property
@property(assign) int exposureMode;	// G=0x35e50e69; S=0x35e50e79; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x35e5148d; S=0x35e514a9; converted property
@property(assign, getter=isFaceDetectionDebugMetadataReportingEnabled) BOOL faceDetectionDebugMetadataReportingEnabled;	// G=0x35e53331; S=0x35e53225; converted property
@property(readonly, assign) CGRect faceRectangle;	// G=0x35e531f1; converted property
@property(readonly, assign) int faceRectangleAngle;	// G=0x35e53215; converted property
@property(readonly, assign, getter=isFlashActive) BOOL flashActive;	// G=0x35e51a95; converted property
@property(readonly, assign, getter=isFlashAvailable) BOOL flashAvailable;	// G=0x35e51ce9; converted property
@property(assign) int flashMode;	// G=0x35e51cd9; S=0x35e51d25; converted property
@property(assign) int focusMode;	// G=0x35e50871; S=0x35e50881; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x35e50a35; S=0x35e50a51; converted property
@property(assign) int imageControlMode;	// G=0x35e52c55; S=0x35e52d15; converted property
@property(readonly, assign) BOOL isConnected;	// G=0x35e4fbcd; converted property
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x35e512d5; S=0x35e512e5; converted property
@property(assign) float saturation;	// G=0x35e5350d; S=0x35e5357d; converted property
@property(readonly, assign, getter=isTorchAvailable) BOOL torchAvailable;	// G=0x35e51eed; converted property
@property(readonly, assign) float torchLevel;	// G=0x35e51e69; converted property
@property(assign) int torchMode;	// G=0x35e52395; S=0x35e523a5; converted property
@property(assign) int whiteBalanceMode;	// G=0x35e5170d; S=0x35e5171d; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x35e518fd; S=0x35e5196d; converted property
+ (BOOL)_cameraAccessIsEnabled;	// 0x35e4f56d
+ (id)_devices;	// 0x35e4f3f5
+ (void)initialize;	// 0x35e4f3f1
- (id)init;	// 0x35e4f8ad
- (id)initWithProperties:(id)properties;	// 0x35e4f5b9
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x35e53341
- (void)_applyPendingPropertiesToRecorder;	// 0x35e4fc1d
- (OpaqueFigRecorder *)_createFigRecorderForTorchApps;	// 0x35e527b5
- (dispatch_source_s *)_createTorchAppsKillTimer;	// 0x35e51ff9
- (BOOL)_faceDetectionDrivenImageProcessingEnabled;	// 0x35e53165
- (int)_flashMode;	// 0x35e51b4d
- (float)_floatValueForRecorderProperty:(CFStringRef)recorderProperty;	// 0x35e533f1
- (void)_restoreColorProperties;	// 0x35e537c1
- (void)_sessionDidStart;	// 0x35e50331
- (void)_sessionWillStart;	// 0x35e50291
- (void)_setAdjustingExposure:(BOOL)exposure;	// 0x35e50b31
- (void)_setAdjustingFocus:(BOOL)focus;	// 0x35e50b21
- (void)_setAdjustingWhiteBalance:(BOOL)balance;	// 0x35e51589
- (BOOL)_setAutoExposureBias:(float)bias;	// 0x35e51341
- (BOOL)_setContrast:(float)contrast;	// 0x35e536b1
- (BOOL)_setExposureWithMode:(int)mode pointOfInterest:(id)interest;	// 0x35e50bd5
- (BOOL)_setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x35e532b1
- (BOOL)_setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x35e52fd9
- (void)_setFlashActive:(BOOL)active;	// 0x35e51b19
- (BOOL)_setFlashMode:(int)mode;	// 0x35e51c05
- (BOOL)_setFloatValue:(float)value forRecorderProperty:(CFStringRef)recorderProperty;	// 0x35e53489
- (BOOL)_setFocusWithMode:(int)mode pointOfInterest:(id)interest;	// 0x35e50529
- (BOOL)_setImageControlMode:(int)mode;	// 0x35e52c65
- (BOOL)_setSaturation:(float)saturation;	// 0x35e53559
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x35e52a2d
- (BOOL)_setTorchMode:(int)mode;	// 0x35e5210d
- (BOOL)_setWhiteBalanceMode:(int)mode;	// 0x35e51691
- (BOOL)_setWhiteBalanceTemperature:(float)temperature;	// 0x35e51949
- (BOOL)_subjectAreaChangeMonitoringEnabled;	// 0x35e52b4d
- (void)_teardownFigRecorderForTorchApps;	// 0x35e52915
- (void)_teardownTorchAppsKillTimer;	// 0x35e520dd
- (int)_torchMode;	// 0x35e51f29
- (void)_updateFlashAndTorchAvailability;	// 0x35e524a9
- (void)_updateImageControlMode;	// 0x35e52e61
- (int)_whiteBalanceMode;	// 0x35e5160d
// converted property getter: - (float)autoExposureBias;	// 0x35e512f5
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x35e52bd5
// converted property getter: - (float)contrast;	// 0x35e53665
- (void)dealloc;	// 0x35e4f901
- (id)devicePropertiesDictionary;	// 0x35e4fbe5
- (BOOL)doesHandleNotification:(id)notification;	// 0x35e53895
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x35e510f5
// converted property getter: - (float)exposureGain;	// 0x35e511fd
// converted property getter: - (int)exposureMode;	// 0x35e50e69
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x35e5148d
// converted property getter: - (CGRect)faceRectangle;	// 0x35e531f1
// converted property getter: - (int)faceRectangleAngle;	// 0x35e53215
// converted property getter: - (int)flashMode;	// 0x35e51cd9
// converted property getter: - (int)focusMode;	// 0x35e50871
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x35e50a35
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x35e539b1
- (BOOL)hasFlash;	// 0x35e51a55
- (BOOL)hasMediaType:(id)type;	// 0x35e4fb65
- (BOOL)hasTorch;	// 0x35e51e29
// converted property getter: - (int)imageControlMode;	// 0x35e52c55
// converted property getter: - (BOOL)isAdjustingExposure;	// 0x35e51569
// converted property getter: - (BOOL)isAdjustingFocus;	// 0x35e50b11
- (BOOL)isAdjustingWhiteBalance;	// 0x35e51579
// converted property getter: - (BOOL)isConnected;	// 0x35e4fbcd
- (BOOL)isExposureModeSupported:(int)supported;	// 0x35e50b41
- (BOOL)isExposurePointOfInterestSupported;	// 0x35e5144d
// converted property getter: - (BOOL)isFaceDetectionDebugMetadataReportingEnabled;	// 0x35e53331
- (BOOL)isFaceDetectionSupported;	// 0x35e52f9d
// converted property getter: - (BOOL)isFlashActive;	// 0x35e51a95
// converted property getter: - (BOOL)isFlashAvailable;	// 0x35e51ce9
- (BOOL)isFlashModeSupported:(int)supported;	// 0x35e51aa5
- (BOOL)isFocusModeSupported:(int)supported;	// 0x35e504b5
- (BOOL)isFocusPointOfInterestSupported;	// 0x35e50a1d
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x35e52bc5
- (BOOL)isInUseByAnotherApplication;	// 0x35e4fbc9
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x35e512d5
// converted property getter: - (BOOL)isTorchAvailable;	// 0x35e51eed
- (BOOL)isTorchModeSupported:(int)supported;	// 0x35e51e79
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x35e51599
- (id)localizedName;	// 0x35e4fb25
- (id)modelID;	// 0x35e4fafd
- (int)position;	// 0x35e50471
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x35e4fa09
// converted property getter: - (float)saturation;	// 0x35e5350d
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x35e51365
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x35e52be5
// converted property setter: - (void)setContrast:(float)contrast;	// 0x35e536d5
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x35e51129
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x35e5120d
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x35e50e79
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x35e514a9
// converted property setter: - (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)enabled;	// 0x35e53225
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x35e530c5
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x35e51d25
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x35e50881
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x35e50a51
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x35e52d15
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x35e512e5
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x35e5357d
- (void)setSession:(id)session;	// 0x35e50371
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x35e52aad
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x35e523a5
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x35e5171d
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x35e5196d
- (BOOL)startUsingDevice:(id *)device;	// 0x35e4fbdd
- (void)stopUsingDevice;	// 0x35e4fbe1
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x35e4fb99
// converted property getter: - (float)torchLevel;	// 0x35e51e69
// converted property getter: - (int)torchMode;	// 0x35e52395
- (id)uniqueID;	// 0x35e4fad5
// converted property getter: - (int)whiteBalanceMode;	// 0x35e5170d
// converted property getter: - (float)whiteBalanceTemperature;	// 0x35e518fd
@end


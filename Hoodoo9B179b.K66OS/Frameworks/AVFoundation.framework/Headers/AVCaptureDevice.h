/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureDeviceInternal, NSString;

@interface AVCaptureDevice : NSObject {
	AVCaptureDeviceInternal *_internal;	// 4 = 0x4
}
@property(assign) float autoExposureBias;	// G=0x30af208d; S=0x30af2091; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x30af2299; S=0x30af229d; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x30af147d; 
@property(assign) float contrast;	// G=0x30af2375; S=0x30af2379; converted property
@property(assign) XXStruct_pwHToB exposureDuration;	// G=0x30af1ea9; S=0x30af1ee1; converted property
@property(assign) float exposureGain;	// G=0x30af1f8d; S=0x30af1f95; converted property
@property(assign) int exposureMode;	// G=0x30af1df5; S=0x30af1dfd; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x30af20d5; S=0x30af20e1; converted property
@property(assign, getter=isFaceDetectionDrivenImageProcessingEnabled) BOOL faceDetectionDrivenImageProcessingEnabled;	// G=0x30af1439; S=0x30af1459; converted property
@property(assign) int flashMode;	// G=0x30af1b11; S=0x30af1b15; converted property
@property(assign) int focusMode;	// G=0x30af1c85; S=0x30af1c8d; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x30af1d3d; S=0x30af1d49; converted property
@property(assign) int imageControlMode;	// G=0x30af22e1; S=0x30af22e9; converted property
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x30af1391; 
@property(assign, getter=isManualExposureSupportEnabled) BOOL manualExposureSupportEnabled;	// G=0x30af2045; S=0x30af2049; converted property
@property(readonly, assign, nonatomic) NSString *modelID;	// G=0x30af1385; 
@property(assign) float saturation;	// G=0x30af232d; S=0x30af2331; converted property
@property(retain) id session;	// G=0x30af13b1; S=0x30af13d1; converted property
@property(assign, getter=isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;	// G=0x30af13f9; S=0x30af1419; converted property
@property(assign) int torchMode;	// G=0x30af1bd1; S=0x30af1bd5; converted property
@property(readonly, assign, nonatomic) NSString *uniqueID;	// G=0x30af1379; 
@property(assign) int whiteBalanceMode;	// G=0x30af2191; S=0x30af2199; converted property
@property(assign) float whiteBalanceTemperature;	// G=0x30af2245; S=0x30af2249; converted property
+ (id)_devices;	// 0x30af121d
+ (id)defaultDeviceWithMediaType:(id)mediaType;	// 0x30af1091
+ (id)deviceWithUniqueID:(id)uniqueID;	// 0x30af1135
+ (id)devices;	// 0x30af0e19
+ (id)devicesWithMediaType:(id)mediaType;	// 0x30af0ccd
- (id)init;	// 0x30af1239
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x30af23c5
- (void)_forceClosed;	// 0x30af1949
- (void)_sessionDidStart;	// 0x30af13f5
- (void)_sessionWillStart;	// 0x30af13f1
- (BOOL)_startUsingDevice:(id *)device;	// 0x30af19c1
- (void)_stopUsingDevice;	// 0x30af1abd
// converted property getter: - (float)autoExposureBias;	// 0x30af208d
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x30af2299
- (void)close;	// 0x30af180d
// converted property getter: - (float)contrast;	// 0x30af2375
- (void)dealloc;	// 0x30af131d
- (id)description;	// 0x30af1369
- (void)deviceConnectionDidChange;	// 0x30af18d1
- (void)deviceConnectionWillChange;	// 0x30af1899
- (BOOL)doesHandleNotification:(id)notification;	// 0x30af23bd
// converted property getter: - (XXStruct_pwHToB)exposureDuration;	// 0x30af1ea9
// converted property getter: - (float)exposureGain;	// 0x30af1f8d
// converted property getter: - (int)exposureMode;	// 0x30af1df5
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x30af20d5
// converted property getter: - (int)flashMode;	// 0x30af1b11
// converted property getter: - (int)focusMode;	// 0x30af1c85
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x30af1d3d
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x30af23c1
- (BOOL)hasFlash;	// 0x30af1b01
- (BOOL)hasMediaType:(id)type;	// 0x30af13a9
- (BOOL)hasTorch;	// 0x30af1bc1
// converted property getter: - (int)imageControlMode;	// 0x30af22e1
- (BOOL)isAdjustingExposure;	// 0x30af2189
- (BOOL)isAdjustingWhiteBalance;	// 0x30af228d
- (BOOL)isAudioLevelMeteringSupported;	// 0x30af2291
// declared property getter: - (BOOL)isConnected;	// 0x30af147d
- (BOOL)isExposureModeSupported:(int)supported;	// 0x30af1df1
- (BOOL)isExposurePointOfInterestSupported;	// 0x30af2041
// converted property getter: - (BOOL)isFaceDetectionDrivenImageProcessingEnabled;	// 0x30af1439
- (BOOL)isFlashActive;	// 0x30af1b09
- (BOOL)isFlashAvailable;	// 0x30af1b05
- (BOOL)isFlashModeSupported:(int)supported;	// 0x30af1b0d
- (BOOL)isFocusModeSupported:(int)supported;	// 0x30af1c81
- (BOOL)isFocusPointOfInterestSupported;	// 0x30af1d39
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x30af2295
- (BOOL)isInUseByAnotherApplication;	// 0x30af1479
- (BOOL)isLockedForConfiguration;	// 0x30af1481
// converted property getter: - (BOOL)isManualExposureSupportEnabled;	// 0x30af2045
- (BOOL)isOpen;	// 0x30af1725
// converted property getter: - (BOOL)isSubjectAreaChangeMonitoringEnabled;	// 0x30af13f9
- (BOOL)isTorchAvailable;	// 0x30af1bcd
- (BOOL)isTorchModeSupported:(int)supported;	// 0x30af1bc9
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x30af218d
// declared property getter: - (id)localizedName;	// 0x30af1391
- (BOOL)lockForConfiguration:(id *)configuration;	// 0x30af14a9
// declared property getter: - (id)modelID;	// 0x30af1385
- (BOOL)open:(id *)open;	// 0x30af174d
- (int)position;	// 0x30af1afd
// converted property getter: - (float)saturation;	// 0x30af232d
// converted property getter: - (id)session;	// 0x30af13b1
// converted property setter: - (void)setAutoExposureBias:(float)bias;	// 0x30af2091
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x30af229d
// converted property setter: - (void)setContrast:(float)contrast;	// 0x30af2379
// converted property setter: - (void)setExposureDuration:(XXStruct_pwHToB)duration;	// 0x30af1ee1
// converted property setter: - (void)setExposureGain:(float)gain;	// 0x30af1f95
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x30af1dfd
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x30af20e1
// converted property setter: - (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)enabled;	// 0x30af1459
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x30af1b15
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x30af1c8d
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x30af1d49
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x30af22e9
// converted property setter: - (void)setManualExposureSupportEnabled:(BOOL)enabled;	// 0x30af2049
// converted property setter: - (void)setSaturation:(float)saturation;	// 0x30af2331
// converted property setter: - (void)setSession:(id)session;	// 0x30af13d1
// converted property setter: - (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x30af1419
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x30af1bd5
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x30af2199
// converted property setter: - (void)setWhiteBalanceTemperature:(float)temperature;	// 0x30af2249
- (BOOL)startUsingDevice:(id *)device;	// 0x30af1af5
- (void)stopUsingDevice;	// 0x30af1af9
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x30af13ad
- (float)torchLevel;	// 0x30af1bc5
// converted property getter: - (int)torchMode;	// 0x30af1bd1
// declared property getter: - (id)uniqueID;	// 0x30af1379
- (void)unlockForConfiguration;	// 0x30af1635
// converted property getter: - (int)whiteBalanceMode;	// 0x30af2191
// converted property getter: - (float)whiteBalanceTemperature;	// 0x30af2245
@end


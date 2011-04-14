/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureDevice.h"
#import "MCProfileConnectionObserver.h"

@class NSDictionary;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
	NSDictionary *_deviceProperties;	// 8 = 0x8
	int _focusMode;	// 12 = 0xc
	CGPoint _focusPointOfInterest;	// 16 = 0x10
	int _focusInFlightCount;	// 24 = 0x18
	BOOL _adjustingFocus;	// 28 = 0x1c
	int _exposureMode;	// 32 = 0x20
	CGPoint _exposurePointOfInterest;	// 36 = 0x24
	BOOL _adjustingExposure;	// 44 = 0x2c
	int _wbMode;	// 48 = 0x30
	BOOL _adjustingWB;	// 52 = 0x34
	BOOL _automaticallyAdjustsImageControlMode;	// 53 = 0x35
	int _imageControlMode;	// 56 = 0x38
	int _flashMode;	// 60 = 0x3c
	BOOL _flashActive;	// 64 = 0x40
	BOOL _flashAvailable;	// 65 = 0x41
	int _torchMode;	// 68 = 0x44
	float _torchLevel;	// 72 = 0x48
	BOOL _torchAvailable;	// 76 = 0x4c
	BOOL _isConnected;	// 77 = 0x4d
}
@property(readonly, assign, getter=isAdjustingExposure) BOOL adjustingExposure;	// G=0x303fdae5; converted property
@property(readonly, assign, getter=isAdjustingFocus) BOOL adjustingFocus;	// G=0x303fda8d; converted property
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x303fdb71; S=0x303fe691; converted property
@property(assign) int exposureMode;	// G=0x303fdabd; S=0x303ff63d; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x303fdacd; S=0x303fe95d; converted property
@property(readonly, assign, getter=isFlashActive) BOOL flashActive;	// G=0x303fdb25; converted property
@property(readonly, assign, getter=isFlashAvailable) BOOL flashAvailable;	// G=0x303fdd91; converted property
@property(assign) int flashMode;	// G=0x303fdb35; S=0x303fe86d; converted property
@property(assign) int focusMode;	// G=0x303fda65; S=0x303ff00d; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x303fda75; S=0x303fea09; converted property
@property(assign) int imageControlMode;	// G=0x303fdb81; S=0x303fe561; converted property
@property(readonly, assign) BOOL isConnected;	// G=0x303fda4d; converted property
@property(readonly, assign, getter=isTorchAvailable) BOOL torchAvailable;	// G=0x303fdcbd; converted property
@property(readonly, assign) float torchLevel;	// G=0x303fdb45; converted property
@property(assign) int torchMode;	// G=0x303fdb55; S=0x303fe77d; converted property
@property(assign) int whiteBalanceMode;	// G=0x303fdb15; S=0x303feae5; converted property
+ (BOOL)_cameraAccessIsEnabled;	// 0x303fe33d
+ (id)_devices;	// 0x303fed01
+ (void)initialize;	// 0x303fda45
- (id)init;	// 0x303fe485
- (id)initWithProperties:(id)properties;	// 0x303fee71
- (void)_applyPendingPropertiesToRecorder;	// 0x303ff179
- (int)_flashMode;	// 0x303ffb9d
- (void)_sessionDidStart;	// 0x303fe105
- (void)_setAdjustingExposure:(BOOL)exposure;	// 0x303fdaad
- (void)_setAdjustingFocus:(BOOL)focus;	// 0x303fda9d
- (void)_setAdjustingWhiteBalance:(BOOL)balance;	// 0x303fdb05
- (BOOL)_setExposureWithMode:(int)mode pointOfInterest:(id)interest;	// 0x3040036d
- (void)_setFlashActive:(BOOL)active;	// 0x303feab5
- (BOOL)_setFlashMode:(int)mode;	// 0x30400875
- (BOOL)_setFocusWithMode:(int)mode pointOfInterest:(id)interest;	// 0x30400649
- (BOOL)_setImageControlMode:(int)mode;	// 0x30400281
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x3040030d
- (BOOL)_setTorchMode:(int)mode;	// 0x30400801
- (BOOL)_setWhiteBalanceMode:(int)mode;	// 0x30400915
- (BOOL)_subjectAreaChangeMonitoringEnabled;	// 0x303ff94d
- (int)_torchMode;	// 0x303ffaf5
- (void)_updateFlashAndTorchAvailability;	// 0x303ff9b9
- (void)_updateImageControlMode;	// 0x303ff83d
- (int)_whiteBalanceMode;	// 0x303fec8d
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x303fdb71
- (void)dealloc;	// 0x303fe2cd
- (id)devicePropertiesDictionary;	// 0x303fe141
- (BOOL)doesHandleNotification:(id)notification;	// 0x303fdb91
// converted property getter: - (int)exposureMode;	// 0x303fdabd
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x303fdacd
// converted property getter: - (int)flashMode;	// 0x303fdb35
// converted property getter: - (int)focusMode;	// 0x303fda65
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x303fda75
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x303ffc45
- (BOOL)hasFlash;	// 0x303fde29
- (BOOL)hasMediaType:(id)type;	// 0x303fe199
- (BOOL)hasTorch;	// 0x303fdd55
// converted property getter: - (int)imageControlMode;	// 0x303fdb81
// converted property getter: - (BOOL)isAdjustingExposure;	// 0x303fdae5
// converted property getter: - (BOOL)isAdjustingFocus;	// 0x303fda8d
- (BOOL)isAdjustingWhiteBalance;	// 0x303fdaf5
// converted property getter: - (BOOL)isConnected;	// 0x303fda4d
- (BOOL)isExposureModeSupported:(int)supported;	// 0x303fdf05
- (BOOL)isExposurePointOfInterestSupported;	// 0x303fdecd
// converted property getter: - (BOOL)isFlashActive;	// 0x303fdb25
// converted property getter: - (BOOL)isFlashAvailable;	// 0x303fdd91
- (BOOL)isFlashModeSupported:(int)supported;	// 0x303fddc1
- (BOOL)isFocusModeSupported:(int)supported;	// 0x303fdf85
- (BOOL)isFocusPointOfInterestSupported;	// 0x303fdf6d
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x303fdb65
- (BOOL)isInUseByAnotherApplication;	// 0x303fda49
// converted property getter: - (BOOL)isTorchAvailable;	// 0x303fdcbd
- (BOOL)isTorchModeSupported:(int)supported;	// 0x303fdced
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x303fde65
- (id)localizedName;	// 0x303fe4d1
- (id)modelID;	// 0x303fe1c5
- (int)position;	// 0x303fdfed
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x303fe215
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x303fe691
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x303ff63d
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x303fe95d
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x303fe86d
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x303ff00d
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x303fea09
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x303fe561
- (void)setSession:(id)session;	// 0x303fe025
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x303fe6f1
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x303fe77d
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x303feae5
- (BOOL)startUsingDevice:(id *)device;	// 0x303fda5d
- (void)stopUsingDevice;	// 0x303fda61
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x303fe171
// converted property getter: - (float)torchLevel;	// 0x303fdb45
// converted property getter: - (int)torchMode;	// 0x303fdb55
- (id)uniqueID;	// 0x303fe1ed
// converted property getter: - (int)whiteBalanceMode;	// 0x303fdb15
@end


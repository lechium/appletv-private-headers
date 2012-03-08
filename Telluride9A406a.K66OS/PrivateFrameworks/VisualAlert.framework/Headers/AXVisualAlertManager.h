/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSArray, AXTimer, AXNotificationHandler;
@protocol AXCameraTorchManager;

@interface AXVisualAlertManager : NSObject {
	unsigned _alertTypes;	// 4 = 0x4
	id<AXCameraTorchManager> _cameraTorchManager;	// 8 = 0x8
	AXTimer *_timer;	// 12 = 0xc
	AXTimer *_torchForceShutdownTimer;	// 16 = 0x10
	NSDictionary *_patterns;	// 20 = 0x14
	NSDictionary *_activePattern;	// 24 = 0x18
	unsigned _activePatternCursor;	// 28 = 0x1c
	BOOL _shouldRepeatPattern;	// 32 = 0x20
	NSDictionary *_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;	// 36 = 0x24
	NSArray *_notificationHandlers;	// 40 = 0x28
	AXNotificationHandler *_deviceLockStateChangedNotificationHandler;	// 44 = 0x2c
	BOOL _torchDeviceOpen;	// 48 = 0x30
	BOOL _torchDeviceOn;	// 49 = 0x31
	BOOL _isDeviceLocked;	// 50 = 0x32
	BOOL _captureSessionRunning;	// 51 = 0x33
	BOOL _conferenceCallRinging;	// 52 = 0x34
	BOOL _skipAutomaticStopOnUserInteraction;	// 53 = 0x35
}
@property(retain, nonatomic, setter=_setActivePattern:) NSDictionary *_activePattern;	// G=0x34b2e631; S=0x34b2e641; @synthesize
@property(retain, nonatomic, setter=_setPatternToUseForVisualAlertAfterCaptureSessionStopsRunning:) NSDictionary *_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;	// G=0x34b2e665; S=0x34b2e675; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *_patterns;	// G=0x34b2cc75; 
@property(assign, nonatomic, getter=_isTorchDeviceOn, setter=_setTorchDeviceOn:) BOOL _torchDeviceOn;	// G=0x34b2e6a9; S=0x34b2cbdd; @synthesize
@property(assign, nonatomic, getter=_isTorchDeviceOpen, setter=_setTorchDeviceOpen:) BOOL _torchDeviceOpen;	// G=0x34b2e699; S=0x34b2cb45; @synthesize
+ (void)initialize;	// 0x34b2c97d
+ (id)sharedVisualAlertManager;	// 0x34b2cdbd
- (id)init;	// 0x34b2c9e1
// declared property getter: - (id)_activePattern;	// 0x34b2e631
- (BOOL)_axHasConferenceCameraTorchManager;	// 0x34b2e585
- (BOOL)_axShouldHandleVisualAlertsForConferenceCallsInConferenceFramework;	// 0x34b2e5fd
- (void)_beginVisualAlertWithPattern:(id)pattern repeat:(BOOL)repeat;	// 0x34b2d6fd
- (void)_beginVisualAlertWithPattern:(id)pattern repeat:(BOOL)repeat skipAutomaticStopOnUserInteraction:(BOOL)interaction;	// 0x34b2d721
- (void)_endVisualAlert;	// 0x34b2d8e5
- (void)_handleBeginVisualAlertForAlarmWithSound:(BOOL)sound;	// 0x34b2dcc1
- (void)_handleBeginVisualAlertForIncomingCall;	// 0x34b2db8d
- (void)_handleBeginVisualAlertForIncomingConferenceCall;	// 0x34b2dbfd
- (void)_handleCaptureSessionDidStartRunning;	// 0x34b2dfa1
- (void)_handleCaptureSessionDidStopRunning;	// 0x34b2dfb5
- (void)_handleDeviceWasLocked;	// 0x34b2df51
- (void)_handleDeviceWasUnlocked;	// 0x34b2df65
- (void)_handleEndVisualAlertForAlarm;	// 0x34b2dd29
- (void)_handleEndVisualAlertForIncomingCall;	// 0x34b2dbed
- (void)_handleEndVisualAlertForIncomingConferenceCall;	// 0x34b2dc71
- (void)_handleFaceTimeCallRinging;	// 0x34b2decd
- (void)_handleLockButtonPressed;	// 0x34b2df15
- (void)_handleSecondaryVisualAlertManagerDidStart;	// 0x34b2de51
- (void)_handleVisualAlertForExternalApplication;	// 0x34b2ddb5
- (void)_handleVisualAlertForIncomingMessage;	// 0x34b2ddf1
- (void)_handleVisualAlertForRegularNotification;	// 0x34b2dd55
- (void)_handleVolumeChanged;	// 0x34b2df41
- (void)_insertCustomLogicForSystemWideServer;	// 0x34b2e085
// declared property getter: - (BOOL)_isTorchDeviceOn;	// 0x34b2e6a9
// declared property getter: - (BOOL)_isTorchDeviceOpen;	// 0x34b2e699
- (id)_normalizedStrobePatternForOriginalPattern:(id)originalPattern;	// 0x34b2e2f5
// declared property getter: - (id)_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;	// 0x34b2e665
// declared property getter: - (id)_patterns;	// 0x34b2cc75
- (void)_processNextVisualAlertComponent;	// 0x34b2d99d
// declared property setter: - (void)_setActivePattern:(id)pattern;	// 0x34b2e641
// declared property setter: - (void)_setPatternToUseForVisualAlertAfterCaptureSessionStopsRunning:(id)visualAlertAfterCaptureSessionStopsRunning;	// 0x34b2e675
// declared property setter: - (void)_setTorchDeviceOn:(BOOL)on;	// 0x34b2cbdd
// declared property setter: - (void)_setTorchDeviceOpen:(BOOL)open;	// 0x34b2cb45
- (void)_startForAlertTypes:(unsigned)alertTypes cameraTorchManager:(id)manager;	// 0x34b2cdcd
- (void)_stop;	// 0x34b2d531
- (void)dealloc;	// 0x34b2caa9
- (id)description;	// 0x34b2cd2d
- (void)startForAlertTypes:(unsigned)alertTypes cameraTorchManager:(id)manager;	// 0x34b2d5e9
- (void)stop;	// 0x34b2d691
@end


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
@property(retain, nonatomic, setter=_setActivePattern:) NSDictionary *_activePattern;	// G=0x30df8641; S=0x30df8651; @synthesize
@property(retain, nonatomic, setter=_setPatternToUseForVisualAlertAfterCaptureSessionStopsRunning:) NSDictionary *_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;	// G=0x30df8675; S=0x30df8685; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *_patterns;	// G=0x30df6c85; 
@property(assign, nonatomic, getter=_isTorchDeviceOn, setter=_setTorchDeviceOn:) BOOL _torchDeviceOn;	// G=0x30df86b9; S=0x30df6bed; @synthesize
@property(assign, nonatomic, getter=_isTorchDeviceOpen, setter=_setTorchDeviceOpen:) BOOL _torchDeviceOpen;	// G=0x30df86a9; S=0x30df6b55; @synthesize
+ (void)initialize;	// 0x30df698d
+ (id)sharedVisualAlertManager;	// 0x30df6dcd
- (id)init;	// 0x30df69f1
// declared property getter: - (id)_activePattern;	// 0x30df8641
- (BOOL)_axHasConferenceCameraTorchManager;	// 0x30df8595
- (BOOL)_axShouldHandleVisualAlertsForConferenceCallsInConferenceFramework;	// 0x30df860d
- (void)_beginVisualAlertWithPattern:(id)pattern repeat:(BOOL)repeat;	// 0x30df770d
- (void)_beginVisualAlertWithPattern:(id)pattern repeat:(BOOL)repeat skipAutomaticStopOnUserInteraction:(BOOL)interaction;	// 0x30df7731
- (void)_endVisualAlert;	// 0x30df78f5
- (void)_handleBeginVisualAlertForAlarmWithSound:(BOOL)sound;	// 0x30df7cd1
- (void)_handleBeginVisualAlertForIncomingCall;	// 0x30df7b9d
- (void)_handleBeginVisualAlertForIncomingConferenceCall;	// 0x30df7c0d
- (void)_handleCaptureSessionDidStartRunning;	// 0x30df7fb1
- (void)_handleCaptureSessionDidStopRunning;	// 0x30df7fc5
- (void)_handleDeviceWasLocked;	// 0x30df7f61
- (void)_handleDeviceWasUnlocked;	// 0x30df7f75
- (void)_handleEndVisualAlertForAlarm;	// 0x30df7d39
- (void)_handleEndVisualAlertForIncomingCall;	// 0x30df7bfd
- (void)_handleEndVisualAlertForIncomingConferenceCall;	// 0x30df7c81
- (void)_handleFaceTimeCallRinging;	// 0x30df7edd
- (void)_handleLockButtonPressed;	// 0x30df7f25
- (void)_handleSecondaryVisualAlertManagerDidStart;	// 0x30df7e61
- (void)_handleVisualAlertForExternalApplication;	// 0x30df7dc5
- (void)_handleVisualAlertForIncomingMessage;	// 0x30df7e01
- (void)_handleVisualAlertForRegularNotification;	// 0x30df7d65
- (void)_handleVolumeChanged;	// 0x30df7f51
- (void)_insertCustomLogicForSystemWideServer;	// 0x30df8095
// declared property getter: - (BOOL)_isTorchDeviceOn;	// 0x30df86b9
// declared property getter: - (BOOL)_isTorchDeviceOpen;	// 0x30df86a9
- (id)_normalizedStrobePatternForOriginalPattern:(id)originalPattern;	// 0x30df8305
// declared property getter: - (id)_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;	// 0x30df8675
// declared property getter: - (id)_patterns;	// 0x30df6c85
- (void)_processNextVisualAlertComponent;	// 0x30df79ad
// declared property setter: - (void)_setActivePattern:(id)pattern;	// 0x30df8651
// declared property setter: - (void)_setPatternToUseForVisualAlertAfterCaptureSessionStopsRunning:(id)visualAlertAfterCaptureSessionStopsRunning;	// 0x30df8685
// declared property setter: - (void)_setTorchDeviceOn:(BOOL)on;	// 0x30df6bed
// declared property setter: - (void)_setTorchDeviceOpen:(BOOL)open;	// 0x30df6b55
- (void)_startForAlertTypes:(unsigned)alertTypes cameraTorchManager:(id)manager;	// 0x30df6ddd
- (void)_stop;	// 0x30df7541
- (void)dealloc;	// 0x30df6ab9
- (id)description;	// 0x30df6d3d
- (void)startForAlertTypes:(unsigned)alertTypes cameraTorchManager:(id)manager;	// 0x30df75f9
- (void)stop;	// 0x30df76a1
@end


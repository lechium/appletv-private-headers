/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import <NSObject.h> // Unknown library

@class NSArray, AXTimer, AXNotificationHandler, NSDictionary;
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
	BOOL _isQuietModeEnabled;	// 51 = 0x33
	BOOL _captureSessionRunning;	// 52 = 0x34
	BOOL _conferenceCallRinging;	// 53 = 0x35
	BOOL _skipAutomaticStopOnUserInteraction;	// 54 = 0x36
	unsigned _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;	// 56 = 0x38
}
@property(retain, nonatomic, setter=_setActivePattern:) NSDictionary *_activePattern;	// G=0x346195e9; S=0x346195f9; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *_patterns;	// G=0x346177b1; 
@property(assign, nonatomic, getter=_isTorchDeviceOn, setter=_setTorchDeviceOn:) BOOL _torchDeviceOn;	// G=0x34619639; S=0x346176b1; @synthesize
@property(assign, nonatomic, getter=_isTorchDeviceOpen, setter=_setTorchDeviceOpen:) BOOL _torchDeviceOpen;	// G=0x34619629; S=0x346175d1; @synthesize
@property(assign, nonatomic, setter=_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:) unsigned _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;	// G=0x34619609; S=0x34619619; @synthesize
+ (void)initialize;	// 0x346172cd
+ (id)sharedVisualAlertManager;	// 0x346178f1
- (id)init;	// 0x3461746d
// declared property getter: - (id)_activePattern;	// 0x346195e9
- (BOOL)_axHasConferenceCameraTorchManager;	// 0x34619541
- (BOOL)_axShouldHandleVisualAlertsForConferenceCallsInConferenceFramework;	// 0x346195b9
- (void)_beginVisualAlertForType:(unsigned)type repeat:(BOOL)repeat;	// 0x3461828d
- (void)_beginVisualAlertForType:(unsigned)type repeat:(BOOL)repeat skipAutomaticStopOnUserInteraction:(BOOL)interaction;	// 0x346182b1
- (void)_endVisualAlert;	// 0x346185b5
- (void)_handleBeginVisualAlertForAlarmWithSound:(BOOL)sound;	// 0x34618949
- (void)_handleBeginVisualAlertForIncomingCall;	// 0x3461884d
- (void)_handleBeginVisualAlertForIncomingConferenceCall;	// 0x34618889
- (void)_handleCaptureSessionDidStartRunning;	// 0x34618bb1
- (void)_handleCaptureSessionDidStopRunning;	// 0x34618bc5
- (void)_handleDeviceWasLocked;	// 0x34618b35
- (void)_handleDeviceWasUnlocked;	// 0x34618b49
- (void)_handleEndVisualAlertForAlarm;	// 0x3461897d
- (void)_handleEndVisualAlertForIncomingCall;	// 0x34618879
- (void)_handleEndVisualAlertForIncomingConferenceCall;	// 0x346188f9
- (void)_handleFaceTimeCallRinging;	// 0x34618ab5
- (void)_handleLockButtonPressed;	// 0x34618b01
- (void)_handleQuietModeWasDisabled;	// 0x34618b9d
- (void)_handleQuietModeWasEnabled;	// 0x34618b7d
- (void)_handleSecondaryVisualAlertManagerDidStart;	// 0x34618a35
- (void)_handleVisualAlertForExternalApplication;	// 0x346189d1
- (void)_handleVisualAlertForIncomingMessage;	// 0x34618a09
- (void)_handleVisualAlertForRegularNotification;	// 0x346189a5
- (void)_handleVolumeChanged;	// 0x34618b25
- (void)_insertCustomLogicForSystemWideServer;	// 0x34618c81
// declared property getter: - (BOOL)_isTorchDeviceOn;	// 0x34619639
// declared property getter: - (BOOL)_isTorchDeviceOpen;	// 0x34619629
- (id)_normalizedStrobePatternForOriginalPattern:(id)originalPattern;	// 0x346192a1
// declared property getter: - (id)_patterns;	// 0x346177b1
- (void)_processNextVisualAlertComponent;	// 0x34618671
// declared property setter: - (void)_setActivePattern:(id)pattern;	// 0x346195f9
// declared property setter: - (void)_setTorchDeviceOn:(BOOL)on;	// 0x346176b1
// declared property setter: - (void)_setTorchDeviceOpen:(BOOL)open;	// 0x346175d1
// declared property setter: - (void)_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:(unsigned)visualAlertAfterCaptureSessionStopsRunning;	// 0x34619619
- (void)_startForAlertTypes:(unsigned)alertTypes cameraTorchManager:(id)manager;	// 0x34617901
- (void)_stop;	// 0x346180b5
// declared property getter: - (unsigned)_typeToUseForVisualAlertAfterCaptureSessionStopsRunning;	// 0x34619609
- (void)dealloc;	// 0x34617535
- (id)description;	// 0x34617865
- (void)startForAlertTypes:(unsigned)alertTypes cameraTorchManager:(id)manager;	// 0x34618179
- (void)stop;	// 0x34618221
@end


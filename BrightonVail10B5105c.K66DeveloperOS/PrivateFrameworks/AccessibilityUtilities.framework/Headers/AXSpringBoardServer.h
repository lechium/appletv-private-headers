/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AXServer.h"
#import "AccessibilityUtilities-Structs.h"

@class NSMutableArray;

@interface AXSpringBoardServer : AXServer {
	id _currentAlertHandler;	// 16 = 0x10
	NSMutableArray *_gestureOverrides;	// 20 = 0x14
	NSMutableArray *_actionHandlers;	// 24 = 0x18
}
+ (id)server;	// 0x31ca2d51
- (id)init;	// 0x31ca2dbd
- (BOOL)_connectIfNecessary;	// 0x31ca35f5
- (void)_connectServerIfNecessary;	// 0x31ca336d
- (id)_handleActionResult:(id)result;	// 0x31ca3141
- (id)_handleGestureOverrideResult:(id)result;	// 0x31ca2f49
- (id)_handleReplyResult:(id)result;	// 0x31ca2ea9
- (id)_serviceName;	// 0x31ca2e99
- (BOOL)_shouldValidateEntitlements;	// 0x31ca3369
- (int)activeApplicationOrientation;	// 0x31ca4ec5
- (void)cleanupAlertHandler;	// 0x31ca3d89
- (void)dealloc;	// 0x31ca2e4d
- (void)hideAlert;	// 0x31ca3db9
- (BOOL)isMakingEmergencyCall;	// 0x31ca397d
- (BOOL)isOrientationLocked;	// 0x31ca3a71
- (BOOL)isPointInsideAccessibilityInspector:(XXStruct_uk_lJC *)inspector;	// 0x31ca4dcd
- (BOOL)isRingerMuted;	// 0x31ca3ba9
- (BOOL)isScreenLockedWithPasscode:(BOOL *)passcode;	// 0x31ca3bc1
- (BOOL)isSideSwitchUsedForOrientation;	// 0x31ca3b91
- (BOOL)isSystemSleeping;	// 0x31ca3a59
- (BOOL)isVideoPlaying;	// 0x31ca3b65
- (BOOL)isVoiceControlRunning;	// 0x31ca3965
- (void)openAppSwitcher;	// 0x31ca37f9
- (void)openAssistiveTouchCustomGestureCreation;	// 0x31ca380d
- (void)openSiri;	// 0x31ca37d1
- (void)openVoiceControl;	// 0x31ca37e5
- (int)pid;	// 0x31ca4dd1
- (void)registerOverrideIntentForGesture:(int)gesture withHandler:(id)handler withIdentifierCallback:(id)identifierCallback;	// 0x31ca4ae9
- (void)registerSpringBoardActionHandler:(id)handler withIdentifierCallback:(id)identifierCallback;	// 0x31ca42d1
- (void)removeActionHandler:(NSString *)handler;	// 0x31ca411d
- (void)removeOverrideIntent:(NSString *)intent;	// 0x31ca4681
- (void)resetDimTimer;	// 0x31ca3b7d
- (void)setCancelGestureActivation:(int)activation cancelEnabled:(BOOL)enabled;	// 0x31ca4945
- (void)setSystemGesturesEnabled:(BOOL)enabled;	// 0x31ca3a89
- (void)setVolume:(float)volume;	// 0x31ca3821
- (void)showAlert:(int)alert withHandler:(id)handler;	// 0x31ca3eb5
- (void)showAlert:(int)alert withHandler:(id)handler withData:(id)data;	// 0x31ca3ed9
- (void)takeScreenshot;	// 0x31ca37bd
- (void)toggleGuidedAccess;	// 0x31ca38a9
- (void)toggleHearingControl;	// 0x31ca3825
- (int)topEventPidOverride;	// 0x31ca3995
- (float)volumeLevel;	// 0x31ca3cc5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@class NSString, BKSMachSendRight, NSMutableArray, BKSApplicationActivationAssertion;
@protocol OS_xpc_object, OS_dispatch_queue, BKSWorkspaceDelegate;

@interface BKSWorkspace : NSObject {
@private
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_applicationInfoQueue;	// 8 = 0x8
	id<BKSWorkspaceDelegate> _delegate;	// 12 = 0xc
	NSObject<OS_xpc_object> *_serverConnection;	// 16 = 0x10
	NSString *_topApplicationBundleID;	// 20 = 0x14
	NSMutableArray *_runningApplicationInfo;	// 24 = 0x18
	NSMutableArray *_activatingApplications;	// 28 = 0x1c
	BKSMachSendRight *_topEventPortOverride;	// 32 = 0x20
	unsigned _serverPort;	// 36 = 0x24
	BOOL _suspended;	// 40 = 0x28
	BOOL _locked;	// 41 = 0x29
	BOOL _workspaceOwner;	// 42 = 0x2a
	BKSApplicationActivationAssertion *_topApplicationAssertion;	// 44 = 0x2c
}
@property(readonly, retain) NSMutableArray *activatingApplications;	// G=0x30626e35; converted property
@property(assign, nonatomic) id<BKSWorkspaceDelegate> delegate;	// G=0x30629ba1; S=0x30629bb1; @synthesize=_delegate
@property(assign, getter=isLocked) BOOL locked;	// G=0x306274d5; S=0x306274b5; converted property
@property(readonly, assign, nonatomic) unsigned serverPort;	// G=0x30629bc1; @synthesize=_serverPort
@property(readonly, assign, nonatomic) BOOL suspended;	// G=0x30629bd1; @synthesize=_suspended
@property(retain, nonatomic) BKSMachSendRight *topEventPortOverride;	// G=0x30629be1; S=0x306274f9; @synthesize=_topEventPortOverride
- (id)init;	// 0x3062674d
- (id)initWithQueue:(id)queue;	// 0x30626761
- (void)_acquireApplicationActivationAssertion:(id)assertion uniqueID:(id)anId name:(id)name;	// 0x30627cbd
- (void)_handleMessage:(id)message;	// 0x30627cdd
- (id)_infoForBundleIdentifier:(id)bundleIdentifier;	// 0x30627551
- (void)_invalidate;	// 0x30626c89
- (BOOL)_isServerBeingDebugged;	// 0x30626cc9
- (void)_receiveApplicationDidActivate:(id)_receiveApplication;	// 0x3062922d
- (void)_receiveApplicationDidFailToActivate:(id)_receiveApplication;	// 0x30629559
- (void)_receiveApplicationExited:(id)exited;	// 0x306295d1
- (void)_receiveApplicationIsBeingDebuggedStateChanged:(id)changed;	// 0x30629af9
- (void)_receiveApplicationLaunchBegan:(id)began;	// 0x30628fa9
- (void)_receiveApplicationSuspended:(id)suspended;	// 0x30629771
- (void)_receiveApplicationSuspensionSettingsUpdated:(id)updated;	// 0x30629851
- (void)_receiveDidBecomeReceiver:(id)_receive;	// 0x30628b55
- (void)_receiveHandleOpenURL:(id)url;	// 0x30628de9
- (void)_receiveHandleStatusBarReturnActionFromApplication:(id)application;	// 0x30628ec5
- (void)_receiveWillBecomeReceiver:(id)_receive;	// 0x306289a9
- (void)_receiveWorkspaceActivationResponse:(id)response;	// 0x306299b9
- (void)_receiveWorkspaceIsSuspended:(id)suspended;	// 0x30629931
- (void)_registerWithServer;	// 0x306269dd
- (void)_releaseApplicationActivationAssertion:(id)assertion;	// 0x30627ccd
- (void)_reregister;	// 0x30626c59
- (void)_sendAcquireApplicationActivationAssertion:(id)assertion uniqueID:(id)anId name:(id)name;	// 0x30628821
- (void)_sendActivate:(id)activate withActivation:(id)activation withDeactivation:(id)deactivation;	// 0x30627f59
- (void)_sendApplication:(id)application setIsConnectionToEA:(BOOL)ea;	// 0x3062846d
- (void)_sendApplication:(id)application setNowPlayingAudio:(BOOL)audio;	// 0x306285f5
- (void)_sendApplication:(id)application setRecordingAudio:(BOOL)audio;	// 0x306283b9
- (void)_sendApplication:(id)application setTaskPort:(id)port;	// 0x30628521
- (void)_sendApplication:(id)application simpleGSEvent:(int)event;	// 0x306286a9
- (void)_sendApplication:(id)application simpleGSEvent:(int)event withSubtype:(int)subtype;	// 0x30628755
- (void)_sendClientBundleIdentifier:(id)identifier;	// 0x30627ed9
- (void)_sendLocked:(BOOL)locked;	// 0x30628241
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker;	// 0x30627e39
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker replyHandler:(id)handler;	// 0x30627e79
- (void)_sendReleaseApplicationActivationAssertion:(id)assertion;	// 0x30628929
- (void)_sendResume:(id)resume;	// 0x3062818d
- (void)_sendShutdown:(BOOL)shutdown;	// 0x306282bd
- (void)_sendSuspend:(id)suspend;	// 0x306280d9
- (void)_sendTopEventPortOverride:(id)override;	// 0x30628339
- (void)activate:(id)activate withActivation:(id)activation;	// 0x30626e45
// converted property getter: - (id)activatingApplications;	// 0x30626e35
- (void)application:(id)application resignActiveForReason:(int)reason;	// 0x30627c39
- (void)application:(id)application resumeActiveForReason:(int)reason;	// 0x30627c59
- (void)application:(id)application sendSimpleGSEvent:(int)event;	// 0x30627c19
- (void)application:(id)application sendSimpleGSEvent:(int)event withSubtype:(int)subtype;	// 0x30627c29
- (void)application:(id)application setIsConnectedToExternalAccessory:(BOOL)externalAccessory;	// 0x30627b89
- (void)application:(id)application setNowPlayingWithAudio:(BOOL)audio;	// 0x30627c09
- (void)application:(id)application setRecordingAudio:(BOOL)audio;	// 0x30627765
- (void)application:(id)application setTaskPort:(id)port;	// 0x30627bf9
- (double)backgroundTimeRemaining:(id)remaining;	// 0x3062796d
- (void)dealloc;	// 0x306268ad
// declared property getter: - (id)delegate;	// 0x30629ba1
- (id)description;	// 0x30626cf1
- (void)elapsedCPUTimesForApplications:(id)applications completion:(id)completion;	// 0x306277d5
- (BOOL)isApplicationConnectedToExternalAccessory:(id)externalAccessory;	// 0x30627bd1
- (BOOL)isApplicationRecordingAudio:(id)audio;	// 0x306277ad
- (BOOL)isBeingDebugged:(id)debugged;	// 0x306278e9
- (BOOL)isBusy;	// 0x306274e5
// converted property getter: - (BOOL)isLocked;	// 0x306274d5
- (void)kill:(id)kill;	// 0x30627379
- (void)kill:(id)kill withReason:(int)reason description:(id)description;	// 0x30627385
- (void)killall:(BOOL)killall;	// 0x3062736d
- (id)newActivationAssertionForApplication:(id)application named:(id)named;	// 0x30627c79
- (void)resume:(id)resume;	// 0x30627455
- (id)runningApplications;	// 0x30626f4d
- (id)runningBundleIDForPID:(int)pid;	// 0x30627185
// declared property getter: - (unsigned)serverPort;	// 0x30629bc1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30629bb1
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x306274b5
// declared property setter: - (void)setTopEventPortOverride:(id)override;	// 0x306274f9
- (void)shutdown:(BOOL)shutdown;	// 0x306274e9
- (void)suspend:(id)suspend;	// 0x30627391
// declared property getter: - (BOOL)suspended;	// 0x30629bd1
- (id)topActivatingApplication;	// 0x30626de9
- (id)topApplication;	// 0x30626dd9
// declared property getter: - (id)topEventPortOverride;	// 0x30629be1
@end


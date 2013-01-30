/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@class BKSMachSendRight, BKSSignal, NSString, NSMutableArray, NSMutableDictionary, BKSApplicationActivationAssertion;
@protocol OS_xpc_object, OS_dispatch_queue, BKSWorkspaceDelegate;

@interface BKSWorkspace : NSObject {
	BKSSignal *_invalidationSignal;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_connectionQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_applicationInfoQueue;	// 16 = 0x10
	id<BKSWorkspaceDelegate> _delegate;	// 20 = 0x14
	NSObject<OS_xpc_object> *_serverConnection;	// 24 = 0x18
	NSString *_topApplicationBundleID;	// 28 = 0x1c
	NSMutableArray *_runningApplicationInfo;	// 32 = 0x20
	NSMutableArray *_activatingApplications;	// 36 = 0x24
	NSMutableDictionary *_activationTokens;	// 40 = 0x28
	BKSMachSendRight *_topEventPortOverride;	// 44 = 0x2c
	unsigned _serverPort;	// 48 = 0x30
	BOOL _suspended;	// 52 = 0x34
	BOOL _locked;	// 53 = 0x35
	BOOL _workspaceOwner;	// 54 = 0x36
	BKSApplicationActivationAssertion *_topApplicationAssertion;	// 56 = 0x38
}
@property(readonly, retain) NSMutableArray *activatingApplications;	// G=0x3306dda1; converted property
@property(assign, nonatomic) id<BKSWorkspaceDelegate> delegate;	// G=0x33070e11; S=0x33070e21; @synthesize=_delegate
@property(assign, getter=isLocked) BOOL locked;	// G=0x3306e665; S=0x3306e645; converted property
@property(readonly, assign, nonatomic) unsigned serverPort;	// G=0x33070e31; @synthesize=_serverPort
@property(readonly, assign, nonatomic) BOOL suspended;	// G=0x33070e41; @synthesize=_suspended
@property(retain, nonatomic) BKSMachSendRight *topEventPortOverride;	// G=0x33070e51; S=0x3306e689; @synthesize=_topEventPortOverride
- (id)init;	// 0x3306d309
- (id)initWithQueue:(id)queue;	// 0x3306d31d
- (void)_acquireApplicationActivationAssertion:(id)assertion uniqueID:(id)anId name:(id)name;	// 0x3306f145
- (id)_activationTokenForBundleID:(id)bundleID;	// 0x3306ddb1
- (void)_clearActivationStateForBundleID:(id)bundleID;	// 0x3306dde5
- (void)_handleDidBecomeReceiverFrom:(id)_handle to:(id)to workspaceWillResume:(BOOL)workspace;	// 0x3306ee95
- (void)_handleMessage:(id)message;	// 0x3306f165
- (id)_handleWillBecomeReceiverFrom:(id)_handle to:(id)to activationToken:(id)token;	// 0x3306ee19
- (id)_infoForBundleIdentifier:(id)bundleIdentifier;	// 0x3306e6e1
- (void)_invalidateConnection;	// 0x3306da8d
- (BOOL)_isServerBeingDebugged;	// 0x3306dc35
- (void)_noteWillActivateBundleIdentifier:(id)_note suspended:(BOOL)suspended activationToken:(id)token;	// 0x3306de41
- (void)_receiveApplicationDidActivate:(id)_receiveApplication;	// 0x33070431
- (void)_receiveApplicationExited:(id)exited;	// 0x3307075d
- (void)_receiveApplicationIsBeingDebuggedStateChanged:(id)changed;	// 0x33070d55
- (void)_receiveApplicationLaunchBegan:(id)began;	// 0x33070179
- (void)_receiveApplicationSuspended:(id)suspended;	// 0x3307098d
- (void)_receiveApplicationSuspensionSettingsUpdated:(id)updated;	// 0x33070a6d
- (void)_receiveDidBecomeReceiver:(id)_receive;	// 0x3306ff2d
- (void)_receiveHandleOpenURL:(id)url;	// 0x3306ffb9
- (void)_receiveHandleStatusBarReturnActionFromApplication:(id)application;	// 0x33070095
- (void)_receiveWillBecomeReceiver:(id)_receive;	// 0x3306fe15
- (void)_receiveWorkspaceActivationResponse:(id)response;	// 0x33070bd5
- (void)_receiveWorkspaceIsSuspended:(id)suspended;	// 0x33070b4d
- (void)_registerWithServer;	// 0x3306d5e1
- (void)_releaseApplicationActivationAssertion:(id)assertion;	// 0x3306f155
- (void)_reregister;	// 0x3306da5d
- (void)_sendAcquireApplicationActivationAssertion:(id)assertion uniqueID:(id)anId name:(id)name;	// 0x3306fc8d
- (void)_sendActivate:(id)activate withActivation:(id)activation withDeactivation:(id)deactivation token:(id)token;	// 0x3306f415
- (void)_sendApplication:(id)application setIsConnectionToEA:(BOOL)ea;	// 0x3306f8d9
- (void)_sendApplication:(id)application setNowPlayingAudio:(BOOL)audio;	// 0x3306fa61
- (void)_sendApplication:(id)application setRecordingAudio:(BOOL)audio;	// 0x3306f825
- (void)_sendApplication:(id)application setTaskPort:(id)port;	// 0x3306f98d
- (void)_sendApplication:(id)application simpleGSEvent:(int)event;	// 0x3306fb15
- (void)_sendApplication:(id)application simpleGSEvent:(int)event withSubtype:(int)subtype;	// 0x3306fbc1
- (void)_sendClientBundleIdentifier:(id)identifier;	// 0x3306f395
- (void)_sendLocked:(BOOL)locked;	// 0x3306f6ad
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker;	// 0x3306f2b1
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker replyHandler:(id)handler;	// 0x3306f2f1
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker replyHandler:(id)handler replyQueue:(id)queue;	// 0x3306f331
- (void)_sendReleaseApplicationActivationAssertion:(id)assertion;	// 0x3306fd95
- (void)_sendResume:(id)resume;	// 0x3306f5f9
- (void)_sendShutdown:(BOOL)shutdown;	// 0x3306f729
- (void)_sendSuspend:(id)suspend;	// 0x3306f579
- (void)_sendTopEventPortOverride:(id)override;	// 0x3306f7a5
- (void)activate:(id)activate withActivation:(id)activation;	// 0x3306df19
// converted property getter: - (id)activatingApplications;	// 0x3306dda1
- (void)application:(id)application resignActiveForReason:(int)reason;	// 0x3306edd9
- (void)application:(id)application resumeActiveForReason:(int)reason;	// 0x3306edf9
- (void)application:(id)application sendSimpleGSEvent:(int)event;	// 0x3306edb9
- (void)application:(id)application sendSimpleGSEvent:(int)event withSubtype:(int)subtype;	// 0x3306edc9
- (void)application:(id)application setIsConnectedToExternalAccessory:(BOOL)externalAccessory;	// 0x3306ed29
- (void)application:(id)application setNowPlayingWithAudio:(BOOL)audio;	// 0x3306eda9
- (void)application:(id)application setRecordingAudio:(BOOL)audio;	// 0x3306e8f5
- (void)application:(id)application setTaskPort:(id)port;	// 0x3306ed99
- (double)backgroundTimeRemaining:(id)remaining;	// 0x3306eafd
- (void)dealloc;	// 0x3306d4ad
// declared property getter: - (id)delegate;	// 0x33070e11
- (id)description;	// 0x3306dc5d
- (void)elapsedCPUTimesForApplications:(id)applications completion:(id)completion;	// 0x3306e965
- (void)invalidate;	// 0x3306dae9
- (BOOL)isApplicationConnectedToExternalAccessory:(id)externalAccessory;	// 0x3306ed71
- (BOOL)isApplicationRecordingAudio:(id)audio;	// 0x3306e93d
- (BOOL)isBeingDebugged:(id)debugged;	// 0x3306ea79
- (BOOL)isBusy;	// 0x3306e675
// converted property getter: - (BOOL)isLocked;	// 0x3306e665
- (void)kill:(id)kill;	// 0x3306e509
- (void)kill:(id)kill withReason:(int)reason description:(id)description;	// 0x3306e515
- (void)killall:(BOOL)killall;	// 0x3306e4fd
- (id)newActivationAssertionForApplication:(id)application named:(id)named;	// 0x3306f101
- (void)resume:(id)resume;	// 0x3306e5e5
- (id)runningApplications;	// 0x3306e0dd
- (id)runningBundleIDForPID:(int)pid;	// 0x3306e315
// declared property getter: - (unsigned)serverPort;	// 0x33070e31
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33070e21
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x3306e645
// declared property setter: - (void)setTopEventPortOverride:(id)override;	// 0x3306e689
- (void)shutdown:(BOOL)shutdown;	// 0x3306e679
- (void)suspend:(id)suspend;	// 0x3306e521
// declared property getter: - (BOOL)suspended;	// 0x33070e41
- (id)topActivatingApplication;	// 0x3306dd55
- (id)topApplication;	// 0x3306dd45
// declared property getter: - (id)topEventPortOverride;	// 0x33070e51
@end

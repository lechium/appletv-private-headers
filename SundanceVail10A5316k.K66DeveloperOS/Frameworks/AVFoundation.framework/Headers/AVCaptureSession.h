/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVCaptureSessionInternal, NSString, NSArray;

@interface AVCaptureSession : NSObject {
@private
	AVCaptureSessionInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x3675f8a5; 
@property(readonly, assign, nonatomic, getter=isInterrupted) BOOL interrupted;	// G=0x36762f49; 
@property(readonly, assign, nonatomic) NSArray *outputs;	// G=0x367610d9; 
@property(readonly, assign, nonatomic, getter=isRunning) BOOL running;	// G=0x367630bd; 
@property(copy, nonatomic) NSString *sessionPreset;	// G=0x3675f2ad; S=0x3675f399; 
@property(retain) id videoPreviewLayer;	// G=0x36761db1; S=0x367623a1; converted property
+ (id)avCaptureSessionPlist;	// 0x367649d5
+ (void)initialize;	// 0x3675e5e1
- (id)init;	// 0x3675e605
- (void)_addConnection:(id)connection;	// 0x36762a39
- (id)_addFastSwitchOptionsToCaptureOptions:(id)captureOptions forDevice:(id)device preset:(id)preset;	// 0x367656f5
- (void)_addInputWithNoConnections:(id)noConnections;	// 0x367607d1
- (void)_addOutputWithNoConnections:(id)noConnections;	// 0x3676180d
- (void)_beginConfiguration;	// 0x3675f80d
- (void)_beginSessionUpdates;	// 0x36766199
- (BOOL)_buildAndRunGraph;	// 0x36766c81
- (BOOL)_canAddConnection:(id)connection failureReason:(id *)reason;	// 0x367625b5
- (BOOL)_canAddInput:(id)input failureReason:(id *)reason;	// 0x3675fd31
- (BOOL)_canAddOutput:(id)output failureReason:(id *)reason;	// 0x367611c5
- (void)_commitConfiguration;	// 0x3675f831
- (id)_connectionsForNewInputPort:(id)newInputPort;	// 0x3676584d
- (id)_connectionsForNewOutput:(id)newOutput;	// 0x367659c9
- (id)_connectionsForNewVideoPreviewLayer:(id)newVideoPreviewLayer;	// 0x36765c25
- (id)_createCaptureOptionsForPreset:(id)preset audioDevice:(id)device videoDevice:(id)device3 errorStatus:(int *)status;	// 0x3676509d
- (long)_createRecorderIfNeeded;	// 0x36764a91
- (id)_currentVideoDevice;	// 0x36768629
- (void)_doDidStart;	// 0x36766781
- (void)_doDidStartSources;	// 0x36766325
- (void)_doDidStop:(id)_do;	// 0x367669ad
- (void)_doWillStart;	// 0x367666b5
- (void)_endSessionUpdates;	// 0x3676619d
- (id)_errorForFigRecorderNotification:(id)figRecorderNotification;	// 0x367687c1
- (void)_excludeOutputsForCaptureOptions:(id)captureOptions;	// 0x36764e2d
- (BOOL)_figRecorderOldOptionsAreEqual:(id)equal toNewOptions:(id)newOptions livesourceOptionsAreEqual:(BOOL *)equal3;	// 0x36766b45
- (void)_handleNotification:(id)notification payload:(id)payload;	// 0x36768895
- (id)_liveConnections;	// 0x36762e5d
- (void)_postRuntimeError:(id)error;	// 0x367661f1
- (void)_rebuildGraph;	// 0x36764381
- (void)_rebuildInternalCaptureOptions;	// 0x36764fad
- (void)_removeConnection:(id)connection;	// 0x36762cb9
- (void)_removeConnectionsForInputPort:(id)inputPort;	// 0x36765e5d
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)inputPort;	// 0x36766005
- (id)_resolvedCaptureOptionsByApplyingOverridesToCaptureOptions:(id)captureOptions;	// 0x367654a1
- (id)_resolvedCaptureOptionsForPreset:(id)preset audioDevice:(id)device videoDevice:(id)device3;	// 0x367657e5
- (BOOL)_sessionHasEnabledMovieFileOutput;	// 0x367652f1
- (void)_setInterrupted:(BOOL)interrupted;	// 0x36762f69
- (void)_setRunning:(BOOL)running;	// 0x36763f39
- (BOOL)_startPreviewing;	// 0x36763591
- (long)_startRecording;	// 0x367642b1
- (void)_stopAndTearDownGraph;	// 0x36768461
- (id)_stopError;	// 0x367661d1
- (BOOL)_stopPreviewing;	// 0x36763791
- (long)_stopRecording;	// 0x36764319
- (void)_teardownFigRecorder;	// 0x3675e771
- (void)addConnection:(id)connection;	// 0x367629e1
- (void)addInput:(id)input;	// 0x36760149
- (void)addInputWithNoConnections:(id)noConnections;	// 0x3676078d
- (void)addOutput:(id)output;	// 0x367614fd
- (void)addOutputWithNoConnections:(id)noConnections;	// 0x367617c9
- (void)addVideoPreviewLayer:(id)layer;	// 0x36761f01
- (void)addVideoPreviewLayerConnection:(id)connection;	// 0x36761dd1
- (void)beginConfiguration;	// 0x3675f665
- (BOOL)canAddConnection:(id)connection;	// 0x367629c9
- (BOOL)canAddInput:(id)input;	// 0x36760131
- (BOOL)canAddOutput:(id)output;	// 0x367614e5
- (BOOL)canSetSessionPreset:(id)preset;	// 0x3675f065
- (id)captureOptions;	// 0x36764a09
- (void)commitConfiguration;	// 0x3675f739
- (void)dealloc;	// 0x3675edf9
- (id)description;	// 0x36760575
- (id)figRecorderOptions;	// 0x36764a4d
- (id)inputWithClass:(Class)aClass;	// 0x3675fb61
// declared property getter: - (id)inputs;	// 0x3675f8a5
- (BOOL)isBeingConfigured;	// 0x3675f87d
// declared property getter: - (BOOL)isInterrupted;	// 0x36762f49
- (BOOL)isPreviewing;	// 0x3676351d
// declared property getter: - (BOOL)isRunning;	// 0x367630bd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x367643b1
- (id)outputWithClass:(Class)aClass;	// 0x3675f991
// declared property getter: - (id)outputs;	// 0x367610d9
- (OpaqueFigRecorder *)recorder;	// 0x3675f045
- (void)removeConnection:(id)connection;	// 0x36762c61
- (void)removeInput:(id)input;	// 0x36760bb5
- (void)removeOutput:(id)output;	// 0x367619d9
- (void)removeVideoPreviewLayer;	// 0x367620e9
- (void)removeVideoPreviewLayerConnection:(id)connection;	// 0x36761e71
// declared property getter: - (id)sessionPreset;	// 0x3675f2ad
// declared property setter: - (void)setSessionPreset:(id)preset;	// 0x3675f399
// converted property setter: - (void)setVideoPreviewLayer:(id)layer;	// 0x367623a1
- (void)startRunning;	// 0x367630dd
- (void)stopRunning;	// 0x367632fd
// converted property getter: - (id)videoPreviewLayer;	// 0x36761db1
@end


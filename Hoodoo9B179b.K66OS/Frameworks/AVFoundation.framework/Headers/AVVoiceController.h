/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;
@protocol AVVoiceControllerRecordDelegate, Endpointer, AVVoiceControllerPlaybackDelegate;

@interface AVVoiceController : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(assign) float alertVolume;	// G=0x30b28e75; S=0x30b28d85; 
@property(assign, getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled;	// G=0x30b25a65; S=0x30b25a7d; 
@property(assign) id<Endpointer> endpointerDelegate;	// G=0x30b28a5d; S=0x30b28a71; 
@property(assign) int hardwareConfiguration;	// G=0x30b2658d; S=0x30b265a1; 
@property(readonly, assign) unsigned long long lastRecordStartTime;	// G=0x30b25a51; 
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x30b28f8d; S=0x30b28fa5; 
@property(assign) id<AVVoiceControllerPlaybackDelegate> playbackDelegate;	// G=0x30b28cb1; S=0x30b28cc5; @dynamic
@property(readonly, assign) NSDictionary *playbackSettings;	// G=0x30b28ce9; 
@property(assign) float playbackVolume;	// G=0x30b28f79; S=0x30b28e89; 
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x30b28d49; 
@property(assign) id<AVVoiceControllerRecordDelegate> recordDelegate;	// G=0x30b2895d; S=0x30b28971; @dynamic
@property(assign) double recordEndWaitTime;	// G=0x30b28c35; S=0x30b28c4d; 
@property(assign) int recordEndpointMode;	// G=0x30b28ae9; S=0x30b28afd; 
@property(assign) double recordInterspeechWaitTime;	// G=0x30b28bb9; S=0x30b28bd1; 
@property(readonly, assign) NSString *recordRoute;	// G=0x30b25a3d; 
@property(readonly, assign) NSDictionary *recordSettings;	// G=0x30b28995; 
@property(assign) double recordStartWaitTime;	// G=0x30b28b3d; S=0x30b28b55; 
@property(readonly, assign, getter=isRecording) BOOL recording;	// G=0x30b28d61; 
@property(assign, getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled;	// G=0x30b25a9d; S=0x30b25ab5; 
@property(assign, getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled;	// G=0x30b29255; S=0x30b2926d; 
- (id)init;	// 0x30b24899
- (id)initWithHardwareConfig:(int)hardwareConfig error:(id *)error;	// 0x30b25ba1
// declared property getter: - (float)alertVolume;	// 0x30b28e75
- (float)averagePowerForChannel:(unsigned)channel;	// 0x30b29221
- (void)beganPlaying;	// 0x30b2559d
- (void)beganRecording;	// 0x30b252b9
- (void)beginPlaybackInterruption;	// 0x30b259dd
- (void)beginRecordInterruption;	// 0x30b2597d
- (void)dealloc;	// 0x30b25ec5
- (void)decodeError;	// 0x30b258ed
- (void)encodeError;	// 0x30b2550d
- (void)endPlaybackInterruption;	// 0x30b25a0d
- (void)endRecordInterruption;	// 0x30b259ad
- (void)endpointDetected;	// 0x30b254ad
// declared property getter: - (id)endpointerDelegate;	// 0x30b28a5d
- (void)finalize;	// 0x30b25d1d
- (void)finishedPlaying;	// 0x30b25665
- (void)finishedRecording;	// 0x30b25385
- (double)getPlaybackBufferDuration;	// 0x30b28cfd
- (double)getRecordBufferDuration;	// 0x30b289a9
- (void)hardwareConfigChanged;	// 0x30b250b1
// declared property getter: - (int)hardwareConfiguration;	// 0x30b2658d
- (ControllerImpl *)impl;	// 0x30b24889
- (void)interspeechPointDetected;	// 0x30b25449
// declared property getter: - (BOOL)isBargeInDetectEnabled;	// 0x30b25a65
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x30b28f8d
// declared property getter: - (BOOL)isPlaying;	// 0x30b28d49
// declared property getter: - (BOOL)isRecording;	// 0x30b28d61
// declared property getter: - (BOOL)isStopOnBargeInEnabled;	// 0x30b25a9d
// declared property getter: - (BOOL)isStopOnEndpointEnabled;	// 0x30b29255
// declared property getter: - (unsigned long long)lastRecordStartTime;	// 0x30b25a51
- (float)peakPowerForChannel:(unsigned)channel;	// 0x30b291ed
- (BOOL)playAlertSoundForType:(int)type;	// 0x30b27895
- (void)playbackBufferReceived:(MyAudioQueueBuffer *)received;	// 0x30b255ed
// declared property getter: - (id)playbackDelegate;	// 0x30b28cb1
// declared property getter: - (id)playbackSettings;	// 0x30b28ce9
// declared property getter: - (float)playbackVolume;	// 0x30b28f79
- (BOOL)preparePlaybackFromURL:(id)url error:(id *)error;	// 0x30b28109
- (BOOL)preparePlaybackWithSettings:(id)settings error:(id *)error;	// 0x30b27c95
- (BOOL)prepareRecordWithSettings:(id)settings error:(id *)error;	// 0x30b26b81
- (void)recordBufferReceived:(MyAudioQueueBuffer *)received;	// 0x30b25311
// declared property getter: - (id)recordDelegate;	// 0x30b2895d
// declared property getter: - (double)recordEndWaitTime;	// 0x30b28c35
// declared property getter: - (int)recordEndpointMode;	// 0x30b28ae9
// declared property getter: - (double)recordInterspeechWaitTime;	// 0x30b28bb9
// declared property getter: - (id)recordRoute;	// 0x30b25a3d
// declared property getter: - (id)recordSettings;	// 0x30b28995
// declared property getter: - (double)recordStartWaitTime;	// 0x30b28b3d
- (void)releaseAudioSession;	// 0x30b264c9
- (BOOL)setAlertSoundFromURL:(id)url forType:(int)type;	// 0x30b27809
// declared property setter: - (void)setAlertVolume:(float)volume;	// 0x30b28d85
// declared property setter: - (void)setBargeInDetectEnabled:(BOOL)detectEnabled;	// 0x30b25a7d
// declared property setter: - (void)setEndpointerDelegate:(id)delegate;	// 0x30b28a71
// declared property setter: - (void)setHardwareConfiguration:(int)configuration;	// 0x30b265a1
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x30b28fa5
- (BOOL)setPlaybackBufferDuration:(double)duration;	// 0x30b28d15
// declared property setter: - (void)setPlaybackDelegate:(id)delegate;	// 0x30b28cc5
// declared property setter: - (void)setPlaybackVolume:(float)volume;	// 0x30b28e89
- (BOOL)setRecordBufferDuration:(double)duration;	// 0x30b28a05
// declared property setter: - (void)setRecordDelegate:(id)delegate;	// 0x30b28971
// declared property setter: - (void)setRecordEndWaitTime:(double)time;	// 0x30b28c4d
// declared property setter: - (void)setRecordEndpointMode:(int)mode;	// 0x30b28afd
// declared property setter: - (void)setRecordInterspeechWaitTime:(double)time;	// 0x30b28bd1
// declared property setter: - (void)setRecordStartWaitTime:(double)time;	// 0x30b28b55
// declared property setter: - (void)setStopOnBargeInEnabled:(BOOL)enabled;	// 0x30b25ab5
// declared property setter: - (void)setStopOnEndpointEnabled:(BOOL)enabled;	// 0x30b2926d
- (BOOL)startPlaying;	// 0x30b28745
- (BOOL)startRecording;	// 0x30b27afd
- (void)startpointDetected;	// 0x30b253e9
- (void)stopPlaying;	// 0x30b28949
- (void)stopRecording;	// 0x30b27c7d
- (void)updateMeters;	// 0x30b290cd
@end

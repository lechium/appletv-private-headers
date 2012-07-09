/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSString, AVAudioSessionRouteDescription;

@interface AVAudioSession : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSString *category;	// G=0x31736a69; 
@property(readonly, assign) unsigned categoryOptions;	// G=0x31736b99; 
@property(readonly, assign) AVAudioSessionRouteDescription *currentRoute;	// G=0x31737591; 
@property(assign) id delegate;	// G=0x31737721; S=0x31737731; converted property
@property(readonly, assign) NSString *mode;	// G=0x31737301; 
@property(readonly, assign, getter=isOtherAudioPlaying) BOOL otherAudioPlaying;	// G=0x317370d1; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x31736a29
+ (void)privateAllocInitSingleton;	// 0x317369dd
+ (id)sharedInstance;	// 0x3173697d
- (id)init;	// 0x31736905
- (double)IOBufferDuration;	// 0x317371d9
- (id)autorelease;	// 0x31736a65
// declared property getter: - (id)category;	// 0x31736a69
// declared property getter: - (unsigned)categoryOptions;	// 0x31736b99
- (id)copyWithZone:(NSZone *)zone;	// 0x31736a51
- (int)currentHardwareInputNumberOfChannels;	// 0x317377b1
- (int)currentHardwareOutputNumberOfChannels;	// 0x317377c1
- (double)currentHardwareSampleRate;	// 0x317377a1
// declared property getter: - (id)currentRoute;	// 0x31737591
// converted property getter: - (id)delegate;	// 0x31737721
- (float)inputGain;	// 0x31737055
- (BOOL)inputIsAvailable;	// 0x31737789
- (double)inputLatency;	// 0x31737159
- (int)inputNumberOfChannels;	// 0x317372a9
- (BOOL)isInputAvailable;	// 0x3173709d
- (BOOL)isInputGainSettable;	// 0x31737069
// declared property getter: - (BOOL)isOtherAudioPlaying;	// 0x317370d1
// declared property getter: - (id)mode;	// 0x31737301
- (double)outputLatency;	// 0x31737199
- (int)outputNumberOfChannels;	// 0x317372d5
- (float)outputVolume;	// 0x31737041
- (BOOL)overrideOutputAudioPort:(unsigned)port error:(id *)error;	// 0x31737535
- (double)preferredHardwareSampleRate;	// 0x317377d1
- (double)preferredIOBufferDuration;	// 0x31737269
- (double)preferredSampleRate;	// 0x31737219
- (void)privateBeginInterruption;	// 0x31737841
- (void)privateEndInterruptionWithFlags:(id)flags;	// 0x31737931
- (void)privateHandleInputGainChange;	// 0x31737a89
- (void)privateHandleOutputVolumeChange;	// 0x31737a9d
- (void)privateHandleServerDied;	// 0x31737ab1
- (void)privateInputIsAvailableChanged:(id)changed;	// 0x317377e1
- (BOOL)privateSetAllowBluetooth:(BOOL)bluetooth error:(id *)error;	// 0x31737b81
- (BOOL)privateSetCategoryDefaultToSpeaker:(BOOL)speaker error:(id *)error;	// 0x31737cad
- (BOOL)privateSetDuckOthers:(BOOL)others error:(id *)error;	// 0x31737c49
- (BOOL)privateSetMixWithOthers:(BOOL)others error:(id *)error;	// 0x31737be5
- (void)privateUpdateInputGain:(BOOL)gain;	// 0x31737db5
- (void)privateUpdateOutputVolume:(BOOL)volume;	// 0x31737d11
- (oneway void)release;	// 0x31736a61
- (id)retain;	// 0x31736a55
- (unsigned)retainCount;	// 0x31736a59
- (double)sampleRate;	// 0x31737109
- (BOOL)setActive:(BOOL)active error:(id *)error;	// 0x31736e79
- (BOOL)setActive:(BOOL)active withFlags:(int)flags error:(id *)error;	// 0x31737741
- (BOOL)setActive:(BOOL)active withOptions:(unsigned)options error:(id *)error;	// 0x31736ec9
- (BOOL)setCategory:(id)category error:(id *)error;	// 0x31736c51
- (BOOL)setCategory:(id)category withOptions:(unsigned)options error:(id *)error;	// 0x31736dc1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31737731
- (BOOL)setInputGain:(float)gain error:(id *)error;	// 0x31736fe5
- (BOOL)setMode:(id)mode error:(id *)error;	// 0x317373e1
- (BOOL)setPreferredHardwareSampleRate:(double)rate error:(id *)error;	// 0x31737765
- (BOOL)setPreferredIOBufferDuration:(double)duration error:(id *)error;	// 0x31736f81
- (BOOL)setPreferredSampleRate:(double)rate error:(id *)error;	// 0x31736f19
@end

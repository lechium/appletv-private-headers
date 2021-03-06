/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSDictionary, NSURL;
@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(assign) double currentTime;	// G=0x30aa7561; S=0x30aa77c1; @dynamic
@property(readonly, assign) NSData *data;	// G=0x30aa7061; @dynamic
@property(assign) id<AVAudioPlayerDelegate> delegate;	// G=0x30aa7075; S=0x30aa7089; @dynamic
@property(readonly, assign) double deviceCurrentTime;	// G=0x30aa7665; @dynamic
@property(readonly, assign) double duration;	// G=0x30aa70bd; 
@property(assign) BOOL enableRate;	// G=0x30aa732d; S=0x30aa7215; @dynamic
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x30aa7d31; S=0x30aa7d49; @dynamic
@property(readonly, assign) unsigned numberOfChannels;	// G=0x30aa754d; @dynamic
@property(assign) int numberOfLoops;	// G=0x30aa7d1d; S=0x30aa7d09; @dynamic
@property(assign) float pan;	// G=0x30aa7539; S=0x30aa7469; @dynamic
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x30aa7035; @dynamic
@property(assign) float rate;	// G=0x30aa7455; S=0x30aa7341; @dynamic
@property(readonly, assign) NSDictionary *settings;	// G=0x30aa70a9; @dynamic
@property(readonly, assign) NSURL *url;	// G=0x30aa704d; @dynamic
@property(assign) float volume;	// G=0x30aa7201; S=0x30aa7131; @dynamic
- (id)initWithContentsOfURL:(id)url error:(id *)error;	// 0x30aa5c0d
- (id)initWithData:(id)data error:(id *)error;	// 0x30aa6175
- (float)averagePowerForChannel:(unsigned)channel;	// 0x30aa7fcd
- (id)baseInit;	// 0x30aa5395
- (void)beginInterruption;	// 0x30aa5719
// declared property getter: - (double)currentTime;	// 0x30aa7561
// declared property getter: - (id)data;	// 0x30aa7061
- (void)dealloc;	// 0x30aa5b89
- (void)decodeError;	// 0x30aa5691
// declared property getter: - (id)delegate;	// 0x30aa7075
// declared property getter: - (double)deviceCurrentTime;	// 0x30aa7665
// declared property getter: - (double)duration;	// 0x30aa70bd
// declared property getter: - (BOOL)enableRate;	// 0x30aa732d
- (void)endInterruption;	// 0x30aa5765
- (void)endInterruptionWithFlags;	// 0x30aa573d
- (void)finalize;	// 0x30aa5b35
- (void)finishedPlaying;	// 0x30aa541d
- (AudioPlayerImpl *)impl;	// 0x30aa5385
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x30aa7d31
// declared property getter: - (BOOL)isPlaying;	// 0x30aa7035
// declared property getter: - (unsigned)numberOfChannels;	// 0x30aa754d
// declared property getter: - (int)numberOfLoops;	// 0x30aa7d1d
// declared property getter: - (float)pan;	// 0x30aa7539
- (void)pause;	// 0x30aa6dbd
- (float)peakPowerForChannel:(unsigned)channel;	// 0x30aa7f8d
- (BOOL)play;	// 0x30aa6831
- (BOOL)playAtTime:(double)time;	// 0x30aa6b5d
- (BOOL)prepareToPlay;	// 0x30aa6399
- (void)privCommonCleanup;	// 0x30aa5789
// declared property getter: - (float)rate;	// 0x30aa7455
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x30aa77c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30aa7089
// declared property setter: - (void)setEnableRate:(BOOL)rate;	// 0x30aa7215
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x30aa7d49
// declared property setter: - (void)setNumberOfLoops:(int)loops;	// 0x30aa7d09
// declared property setter: - (void)setPan:(float)pan;	// 0x30aa7469
// declared property setter: - (void)setRate:(float)rate;	// 0x30aa7341
// declared property setter: - (void)setVolume:(float)volume;	// 0x30aa7131
// declared property getter: - (id)settings;	// 0x30aa70a9
- (void)stop;	// 0x30aa6e95
- (void)updateMeters;	// 0x30aa7e4d
// declared property getter: - (id)url;	// 0x30aa704d
// declared property getter: - (float)volume;	// 0x30aa7201
@end


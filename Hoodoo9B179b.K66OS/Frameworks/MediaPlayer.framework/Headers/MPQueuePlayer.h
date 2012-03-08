/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class AVPlayer, NSArray, AVPlayerItem, NSMutableArray, AVAudioSessionMediaPlayerOnly, AVQueuePlayer, NSError;

@interface MPQueuePlayer : NSObject {
@private
	AVPlayerItem *_currentItem;	// 4 = 0x4
	XXStruct_pwHToB _currentTime;	// 8 = 0x8
	BOOL _isAirPlayVideoActive;	// 32 = 0x20
	BOOL _pausedForPlaybackTransaction;	// 33 = 0x21
	id _playbackQueueCommitHandler;	// 36 = 0x24
	int _playbackQueueTransactionCount;	// 40 = 0x28
	AVQueuePlayer *_player;	// 44 = 0x2c
	NSMutableArray *_queuedOperations;	// 48 = 0x30
	float _rate;	// 52 = 0x34
	float _rateBeforePlaybackQueueTransaction;	// 56 = 0x38
	int _status;	// 60 = 0x3c
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x309fabd1; S=0x309fb57d; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x309fac11; 
@property(readonly, assign, nonatomic) AVPlayer *_player;	// G=0x309fae7d; 
@property(assign, nonatomic) int actionAtItemEnd;	// G=0x309fa839; S=0x309fb3a1; 
@property(readonly, assign, nonatomic, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;	// G=0x309fac51; 
@property(assign, nonatomic) BOOL allowsAirPlayVideo;	// G=0x309fa899; S=0x309fb48d; 
@property(assign, nonatomic, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x309fac61; S=0x309faefd; 
@property(readonly, assign, nonatomic) AVPlayerItem *currentItem;	// G=0x309fab25; 
@property(readonly, assign) XXStruct_pwHToB currentTime;	// G=0x309fab5d; converted property
@property(readonly, assign, nonatomic) NSError *error;	// G=0x309fabf1; 
@property(readonly, assign, nonatomic) BOOL isPlaybackQueueTransactionActive;	// G=0x309fa9c1; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x309fac85; 
@property(copy, nonatomic) id playbackQueueCommitHandler;	// G=0x309fbf69; S=0x309fbf79; @synthesize=_playbackQueueCommitHandler
@property(readonly, assign, nonatomic) AVAudioSessionMediaPlayerOnly *playerAVAudioSession;	// G=0x309fb7c9; 
@property(assign, nonatomic) float rate;	// G=0x309faead; S=0x309fb59d; 
@property(readonly, assign, nonatomic) int status;	// G=0x309fb795; 
@property(assign, nonatomic) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;	// G=0x309fb7a5; S=0x309fb6a5; 
- (id)init;	// 0x309fa3d1
- (BOOL)_CALayerDestinationIsTVOut;	// 0x309fb7e9
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x309fabd1
// declared property getter: - (int)_externalProtectionStatus;	// 0x309fac11
// declared property getter: - (id)_player;	// 0x309fae7d
- (BOOL)_resumePlayback:(double)playback error:(id *)error;	// 0x309fb80d
- (void)_setCALayerDestinationIsTVOut:(BOOL)anOut;	// 0x309fb935
- (void)_setClientName:(id)name;	// 0x309fba25
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x309fb57d
- (void)_setEQPreset:(int)preset;	// 0x309fbb3d
- (void)_setPreferredLanguageList:(id)list;	// 0x309fbc29
- (void)_setStoppingFadeOutDuration:(float)duration;	// 0x309fbd41
- (void)_setVolume:(float)volume;	// 0x309fbe39
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;	// 0x309fbe59
- (float)_volume;	// 0x309fbf49
// declared property getter: - (int)actionAtItemEnd;	// 0x309fa839
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x309fa859
- (void)advanceToNextItem;	// 0x309fa879
// declared property getter: - (BOOL)allowsAirPlayVideo;	// 0x309fa899
- (void)beginPlaybackQueueTransactionAndPause:(BOOL)pause;	// 0x309fa8bd
- (void)commitPlaybackQueueTransaction;	// 0x309fa9d9
// declared property getter: - (id)currentItem;	// 0x309fab25
// converted property getter: - (XXStruct_pwHToB)currentTime;	// 0x309fab5d
- (void)dealloc;	// 0x309fa52d
// declared property getter: - (id)error;	// 0x309fabf1
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x309fac31
// declared property getter: - (BOOL)isAirPlayVideoActive;	// 0x309fac51
// declared property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x309fac61
// declared property getter: - (BOOL)isPlaybackQueueTransactionActive;	// 0x309fa9c1
// declared property getter: - (id)items;	// 0x309fac85
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x309fa649
- (void)pause;	// 0x309faca5
- (void)play;	// 0x309fad91
// declared property getter: - (id)playbackQueueCommitHandler;	// 0x309fbf69
// declared property getter: - (id)playerAVAudioSession;	// 0x309fb7c9
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x309fae8d
// declared property getter: - (float)rate;	// 0x309faead
- (void)removeItem:(id)item;	// 0x309faebd
- (void)removeTimeObserver:(id)observer;	// 0x309faedd
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x309fb021
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x309fb16d
// declared property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x309fb3a1
// declared property setter: - (void)setAllowsAirPlayVideo:(BOOL)video;	// 0x309fb48d
// declared property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x309faefd
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(XXStruct_pwHToB)time;	// 0x309fafed
// declared property setter: - (void)setPlaybackQueueCommitHandler:(id)handler;	// 0x309fbf79
// declared property setter: - (void)setRate:(float)rate;	// 0x309fb59d
// declared property setter: - (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)active;	// 0x309fb6a5
// declared property getter: - (int)status;	// 0x309fb795
// declared property getter: - (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x309fb7a5
@end


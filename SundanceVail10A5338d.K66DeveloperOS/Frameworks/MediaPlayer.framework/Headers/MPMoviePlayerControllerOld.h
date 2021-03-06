/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMoviePlayerControllerInternalOld, MPMoviePlayerController;

@interface MPMoviePlayerControllerOld : NSObject {
	MPMoviePlayerController *_moviePlayer;	// 4 = 0x4
	MPMoviePlayerControllerInternalOld *_internalOld;	// 8 = 0x8
}
@property(retain) id backgroundColor;	// G=0x341fe051; S=0x341fe071; converted property
@property(assign) double initialPlaybackTime;	// G=0x341fe241; S=0x341fe1bd; converted property
@property(assign) int movieControlMode;	// G=0x341fe19d; S=0x341fe16d; converted property
@property(assign) int scalingMode;	// G=0x341fe14d; S=0x341fe0a9; converted property
+ (id)_currentMoviePlayerController;	// 0x341fe2b9
+ (BOOL)_playbackInProgress;	// 0x341fe2d9
+ (id)_playerKeysToObserve;	// 0x341fe625
+ (void)_setCurrentMoviePlayerController:(id)controller;	// 0x341fe279
+ (void)_setPlaybackInProgress:(BOOL)progress;	// 0x341fe2c9
+ (Class)windowClass;	// 0x341fdb29
- (id)initWithContentURL:(id)contentURL;	// 0x341fdca5
- (void)_audioRouteChanged:(id)changed;	// 0x342009f5
- (void)_bufferingStatusDidChangeNotification:(id)_bufferingStatus;	// 0x34200e2d
- (void)_checkNetworkMediaType;	// 0x341fe2f9
- (void)_createPlayer;	// 0x341fea3d
- (void)_delayedBeginFadeOut;	// 0x341ffeb1
- (void)_delayedHideOverlay;	// 0x34200dad
- (void)_expireImplicitAudioRouteChangePlaybackRestart;	// 0x34200bc5
- (void)_itemFailedToPlay:(id)play;	// 0x342008a5
- (id)_localizedDescriptionForErrorCode:(int)errorCode;	// 0x342003d5
- (void)_mediaServerDied:(id)died;	// 0x3420095d
- (void)_observeAVPlayer;	// 0x341fe685
- (void)_pausePlaybackForNotification:(id)notification;	// 0x34200639
- (void)_play;	// 0x341ff4b5
- (void)_playbackEnded:(id)ended;	// 0x34200b8d
- (void)_playbackFailedWithError:(id)error;	// 0x342002b1
- (void)_playbackRateChangedFrom:(float)from to:(float)to;	// 0x34200aa9
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x34200be9
- (void)_playerFadeInAnimationDidEnd:(id)_playerFadeInAnimation finished:(id)finished;	// 0x341fff71
- (void)_playerFadeOutAnimationDidEnd:(id)_playerFadeOutAnimation finished:(id)finished;	// 0x34200071
- (void)_playerFinishAndFadeOut;	// 0x341ffbf9
- (void)_preloadingComplete;	// 0x342005bd
- (void)_setMoviePlayer:(id)player;	// 0x341fe269
- (void)_simpleRemoteNotification:(id)notification;	// 0x34200731
- (void)_tearDownPlayer:(BOOL)player;	// 0x341ff3ad
- (void)_unobserveAVPlayer;	// 0x341fe79d
- (void)_updateForCurrentMovieControlMode;	// 0x34200501
- (void)_videoViewScaleModeDidChange:(id)_videoViewScaleMode;	// 0x34200f51
- (unsigned long long)_visiblePartsForMovieControlMode;	// 0x34200491
- (id)_volumeAudioCategory;	// 0x341fe2e9
- (void)_willBeginSuspendAnimationNotification:(id)notification;	// 0x34200701
- (void)_willResignNotification:(id)notification;	// 0x34200711
- (void)_willSuspendNotification:(id)notification;	// 0x342006f1
- (void)_willTerminateNotification:(id)notification;	// 0x34200721
// converted property getter: - (id)backgroundColor;	// 0x341fe051
- (id)contentURL;	// 0x341fdfad
- (void)dealloc;	// 0x341fdb45
// converted property getter: - (double)initialPlaybackTime;	// 0x341fe241
// converted property getter: - (int)movieControlMode;	// 0x341fe19d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x341fe8ad
- (void)play;	// 0x341fdfcd
// converted property getter: - (int)scalingMode;	// 0x341fe14d
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x341fe071
// converted property setter: - (void)setInitialPlaybackTime:(double)time;	// 0x341fe1bd
// converted property setter: - (void)setMovieControlMode:(int)mode;	// 0x341fe16d
// converted property setter: - (void)setScalingMode:(int)mode;	// 0x341fe0a9
- (void)stop;	// 0x341fdfdd
- (void)viewControllerRequestsExit:(id)exit;	// 0x34200fed
@end


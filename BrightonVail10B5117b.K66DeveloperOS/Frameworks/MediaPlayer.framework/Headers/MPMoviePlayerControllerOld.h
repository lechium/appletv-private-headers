/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMoviePlayerController, MPMoviePlayerControllerInternalOld;

@interface MPMoviePlayerControllerOld : NSObject {
	MPMoviePlayerController *_moviePlayer;	// 4 = 0x4
	MPMoviePlayerControllerInternalOld *_internalOld;	// 8 = 0x8
}
@property(retain) id backgroundColor;	// G=0x31e0f061; S=0x31e0f081; converted property
@property(assign) double initialPlaybackTime;	// G=0x31e0f251; S=0x31e0f1cd; converted property
@property(assign) int movieControlMode;	// G=0x31e0f1ad; S=0x31e0f17d; converted property
@property(assign) int scalingMode;	// G=0x31e0f15d; S=0x31e0f0b9; converted property
+ (id)_currentMoviePlayerController;	// 0x31e0f2c9
+ (BOOL)_playbackInProgress;	// 0x31e0f2e9
+ (id)_playerKeysToObserve;	// 0x31e0f635
+ (void)_setCurrentMoviePlayerController:(id)controller;	// 0x31e0f289
+ (void)_setPlaybackInProgress:(BOOL)progress;	// 0x31e0f2d9
+ (Class)windowClass;	// 0x31e0eb39
- (id)initWithContentURL:(id)contentURL;	// 0x31e0ecb5
- (void)_audioRouteChanged:(id)changed;	// 0x31e11a05
- (void)_bufferingStatusDidChangeNotification:(id)_bufferingStatus;	// 0x31e11e3d
- (void)_checkNetworkMediaType;	// 0x31e0f309
- (void)_createPlayer;	// 0x31e0fa4d
- (void)_delayedBeginFadeOut;	// 0x31e10ec1
- (void)_delayedHideOverlay;	// 0x31e11dbd
- (void)_expireImplicitAudioRouteChangePlaybackRestart;	// 0x31e11bd5
- (void)_itemFailedToPlay:(id)play;	// 0x31e118b5
- (id)_localizedDescriptionForErrorCode:(int)errorCode;	// 0x31e113e5
- (void)_mediaServerDied:(id)died;	// 0x31e1196d
- (void)_observeAVPlayer;	// 0x31e0f695
- (void)_pausePlaybackForNotification:(id)notification;	// 0x31e11649
- (void)_play;	// 0x31e104c5
- (void)_playbackEnded:(id)ended;	// 0x31e11b9d
- (void)_playbackFailedWithError:(id)error;	// 0x31e112c1
- (void)_playbackRateChangedFrom:(float)from to:(float)to;	// 0x31e11ab9
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x31e11bf9
- (void)_playerFadeInAnimationDidEnd:(id)_playerFadeInAnimation finished:(id)finished;	// 0x31e10f81
- (void)_playerFadeOutAnimationDidEnd:(id)_playerFadeOutAnimation finished:(id)finished;	// 0x31e11081
- (void)_playerFinishAndFadeOut;	// 0x31e10c09
- (void)_preloadingComplete;	// 0x31e115cd
- (void)_setMoviePlayer:(id)player;	// 0x31e0f279
- (void)_simpleRemoteNotification:(id)notification;	// 0x31e11741
- (void)_tearDownPlayer:(BOOL)player;	// 0x31e103bd
- (void)_unobserveAVPlayer;	// 0x31e0f7ad
- (void)_updateForCurrentMovieControlMode;	// 0x31e11511
- (void)_videoViewScaleModeDidChange:(id)_videoViewScaleMode;	// 0x31e11f61
- (unsigned long long)_visiblePartsForMovieControlMode;	// 0x31e114a1
- (id)_volumeAudioCategory;	// 0x31e0f2f9
- (void)_willBeginSuspendAnimationNotification:(id)notification;	// 0x31e11711
- (void)_willResignNotification:(id)notification;	// 0x31e11721
- (void)_willSuspendNotification:(id)notification;	// 0x31e11701
- (void)_willTerminateNotification:(id)notification;	// 0x31e11731
// converted property getter: - (id)backgroundColor;	// 0x31e0f061
- (id)contentURL;	// 0x31e0efbd
- (void)dealloc;	// 0x31e0eb55
// converted property getter: - (double)initialPlaybackTime;	// 0x31e0f251
// converted property getter: - (int)movieControlMode;	// 0x31e0f1ad
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31e0f8bd
- (void)play;	// 0x31e0efdd
// converted property getter: - (int)scalingMode;	// 0x31e0f15d
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x31e0f081
// converted property setter: - (void)setInitialPlaybackTime:(double)time;	// 0x31e0f1cd
// converted property setter: - (void)setMovieControlMode:(int)mode;	// 0x31e0f17d
// converted property setter: - (void)setScalingMode:(int)mode;	// 0x31e0f0b9
- (void)stop;	// 0x31e0efed
- (void)viewControllerRequestsExit:(id)exit;	// 0x31e11ffd
@end

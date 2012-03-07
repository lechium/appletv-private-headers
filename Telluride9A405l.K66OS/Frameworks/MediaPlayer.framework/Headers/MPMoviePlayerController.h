/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaPlayback.h"
#import <NSObject.h> // Unknown library

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
@private
	void *_internal;	// 4 = 0x4
}
@property(assign) BOOL allowsAirPlay;	// G=0x33ba9c89; S=0x33ba9cbd; converted property
@property(readonly, assign, nonatomic) UIView *backgroundView;	// G=0x33ba99a9; 
@property(copy, nonatomic) NSURL *contentURL;	// G=0x33ba9925; S=0x33ba9951; 
@property(assign, nonatomic) int controlStyle;	// G=0x33ba9a2d; S=0x33ba9a59; 
@property(assign, nonatomic) float currentPlaybackRate;	// G=0x33baa141; S=0x33baa16d; 
@property(assign, nonatomic) double currentPlaybackTime;	// G=0x33baa0e1; S=0x33baa10d; 
@property(assign) double endPlaybackTime;	// G=0x33baa0b5; S=0x33baa081; converted property
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x33ba9b9d; S=0x33ba9bd1; 
@property(assign) double initialPlaybackTime;	// G=0x33baa055; S=0x33baa021; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;	// G=0x33ba9d49; 
@property(readonly, assign, nonatomic) int loadState;	// G=0x33ba9a01; 
@property(assign) int movieSourceType;	// G=0x33ba9f61; S=0x33ba9f35; converted property
@property(readonly, assign, nonatomic) int playbackState;	// G=0x33ba99d5; 
@property(assign, nonatomic) int repeatMode;	// G=0x33ba9a85; S=0x33ba9ab1; 
@property(assign, nonatomic) int scalingMode;	// G=0x33ba9c31; S=0x33ba9c5d; 
@property(assign, nonatomic) BOOL shouldAutoplay;	// G=0x33ba9add; S=0x33ba9b11; 
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x33ba9b3d; S=0x33ba9b71; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x33ba997d; 
+ (void)allInstancesResignActive;	// 0x33baa199
- (id)init;	// 0x33ba94e9
- (id)initWithContentURL:(id)contentURL;	// 0x33ba95dd
- (void)_resignActive;	// 0x33baa1d1
// converted property getter: - (BOOL)allowsAirPlay;	// 0x33ba9c89
// declared property getter: - (id)backgroundView;	// 0x33ba99a9
- (void)beginSeekingBackward;	// 0x33ba9e2d
- (void)beginSeekingForward;	// 0x33ba9e01
// declared property getter: - (id)contentURL;	// 0x33ba9925
// declared property getter: - (int)controlStyle;	// 0x33ba9a2d
// declared property getter: - (float)currentPlaybackRate;	// 0x33baa141
// declared property getter: - (double)currentPlaybackTime;	// 0x33baa0e1
- (void)dealloc;	// 0x33ba97e9
- (double)duration;	// 0x33ba9f8d
// converted property getter: - (double)endPlaybackTime;	// 0x33baa0b5
- (void)endSeeking;	// 0x33ba9e59
- (void)forwardInvocation:(id)invocation;	// 0x33ba98d9
// converted property getter: - (double)initialPlaybackTime;	// 0x33baa055
- (BOOL)isAirPlayVideoActive;	// 0x33ba9ce9
// declared property getter: - (BOOL)isFullscreen;	// 0x33ba9b9d
// declared property getter: - (BOOL)isPreparedToPlay;	// 0x33ba9d49
// declared property getter: - (int)loadState;	// 0x33ba9a01
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33ba9881
- (int)movieMediaTypes;	// 0x33ba9f09
// converted property getter: - (int)movieSourceType;	// 0x33ba9f61
- (CGSize)naturalSize;	// 0x33ba9fe5
- (void)pause;	// 0x33ba9da9
- (void)play;	// 0x33ba9d7d
- (double)playableDuration;	// 0x33ba9fb9
// declared property getter: - (int)playbackState;	// 0x33ba99d5
- (void)prepareToPlay;	// 0x33ba9d1d
// declared property getter: - (int)repeatMode;	// 0x33ba9a85
// declared property getter: - (int)scalingMode;	// 0x33ba9c31
// converted property setter: - (void)setAllowsAirPlay:(BOOL)play;	// 0x33ba9cbd
// declared property setter: - (void)setContentURL:(id)url;	// 0x33ba9951
// declared property setter: - (void)setControlStyle:(int)style;	// 0x33ba9a59
// declared property setter: - (void)setCurrentPlaybackRate:(float)rate;	// 0x33baa16d
// declared property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x33baa10d
// converted property setter: - (void)setEndPlaybackTime:(double)time;	// 0x33baa081
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x33ba9bd1
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x33ba9bfd
// converted property setter: - (void)setInitialPlaybackTime:(double)time;	// 0x33baa021
// converted property setter: - (void)setMovieSourceType:(int)type;	// 0x33ba9f35
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x33ba9ab1
// declared property setter: - (void)setScalingMode:(int)mode;	// 0x33ba9c5d
// declared property setter: - (void)setShouldAutoplay:(BOOL)autoplay;	// 0x33ba9b11
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x33ba9b71
// declared property getter: - (BOOL)shouldAutoplay;	// 0x33ba9add
- (void)skipToBeginning;	// 0x33ba9eb1
- (void)skipToNextItem;	// 0x33ba9e85
- (void)skipToPreviousItem;	// 0x33ba9edd
- (void)stop;	// 0x33ba9dd5
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x33ba9b3d
// declared property getter: - (id)view;	// 0x33ba997d
@end

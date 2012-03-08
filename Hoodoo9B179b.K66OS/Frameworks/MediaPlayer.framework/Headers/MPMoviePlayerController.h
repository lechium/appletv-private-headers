/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "MPMediaPlayback.h"

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
@private
	void *_internal;	// 4 = 0x4
}
@property(assign) BOOL allowsAirPlay;	// G=0x3092f041; S=0x3092f075; converted property
@property(readonly, assign, nonatomic) UIView *backgroundView;	// G=0x3092ed61; 
@property(copy, nonatomic) NSURL *contentURL;	// G=0x3092ecdd; S=0x3092ed09; 
@property(assign, nonatomic) int controlStyle;	// G=0x3092ede5; S=0x3092ee11; 
@property(assign, nonatomic) float currentPlaybackRate;	// G=0x3092f4f9; S=0x3092f525; 
@property(assign, nonatomic) double currentPlaybackTime;	// G=0x3092f499; S=0x3092f4c5; 
@property(assign) double endPlaybackTime;	// G=0x3092f46d; S=0x3092f439; converted property
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x3092ef55; S=0x3092ef89; 
@property(assign) double initialPlaybackTime;	// G=0x3092f40d; S=0x3092f3d9; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;	// G=0x3092f101; 
@property(readonly, assign, nonatomic) int loadState;	// G=0x3092edb9; 
@property(assign) int movieSourceType;	// G=0x3092f319; S=0x3092f2ed; converted property
@property(readonly, assign, nonatomic) int playbackState;	// G=0x3092ed8d; 
@property(assign, nonatomic) int repeatMode;	// G=0x3092ee3d; S=0x3092ee69; 
@property(assign, nonatomic) int scalingMode;	// G=0x3092efe9; S=0x3092f015; 
@property(assign, nonatomic) BOOL shouldAutoplay;	// G=0x3092ee95; S=0x3092eec9; 
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x3092eef5; S=0x3092ef29; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x3092ed35; 
+ (void)allInstancesResignActive;	// 0x3092f551
- (id)init;	// 0x3092e8a1
- (id)initWithContentURL:(id)contentURL;	// 0x3092e995
- (void)_resignActive;	// 0x3092f589
// converted property getter: - (BOOL)allowsAirPlay;	// 0x3092f041
// declared property getter: - (id)backgroundView;	// 0x3092ed61
- (void)beginSeekingBackward;	// 0x3092f1e5
- (void)beginSeekingForward;	// 0x3092f1b9
// declared property getter: - (id)contentURL;	// 0x3092ecdd
// declared property getter: - (int)controlStyle;	// 0x3092ede5
// declared property getter: - (float)currentPlaybackRate;	// 0x3092f4f9
// declared property getter: - (double)currentPlaybackTime;	// 0x3092f499
- (void)dealloc;	// 0x3092eba1
- (double)duration;	// 0x3092f345
// converted property getter: - (double)endPlaybackTime;	// 0x3092f46d
- (void)endSeeking;	// 0x3092f211
- (void)forwardInvocation:(id)invocation;	// 0x3092ec91
// converted property getter: - (double)initialPlaybackTime;	// 0x3092f40d
- (BOOL)isAirPlayVideoActive;	// 0x3092f0a1
// declared property getter: - (BOOL)isFullscreen;	// 0x3092ef55
// declared property getter: - (BOOL)isPreparedToPlay;	// 0x3092f101
// declared property getter: - (int)loadState;	// 0x3092edb9
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3092ec39
- (int)movieMediaTypes;	// 0x3092f2c1
// converted property getter: - (int)movieSourceType;	// 0x3092f319
- (CGSize)naturalSize;	// 0x3092f39d
- (void)pause;	// 0x3092f161
- (void)play;	// 0x3092f135
- (double)playableDuration;	// 0x3092f371
// declared property getter: - (int)playbackState;	// 0x3092ed8d
- (void)prepareToPlay;	// 0x3092f0d5
// declared property getter: - (int)repeatMode;	// 0x3092ee3d
// declared property getter: - (int)scalingMode;	// 0x3092efe9
// converted property setter: - (void)setAllowsAirPlay:(BOOL)play;	// 0x3092f075
// declared property setter: - (void)setContentURL:(id)url;	// 0x3092ed09
// declared property setter: - (void)setControlStyle:(int)style;	// 0x3092ee11
// declared property setter: - (void)setCurrentPlaybackRate:(float)rate;	// 0x3092f525
// declared property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x3092f4c5
// converted property setter: - (void)setEndPlaybackTime:(double)time;	// 0x3092f439
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x3092ef89
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x3092efb5
// converted property setter: - (void)setInitialPlaybackTime:(double)time;	// 0x3092f3d9
// converted property setter: - (void)setMovieSourceType:(int)type;	// 0x3092f2ed
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x3092ee69
// declared property setter: - (void)setScalingMode:(int)mode;	// 0x3092f015
// declared property setter: - (void)setShouldAutoplay:(BOOL)autoplay;	// 0x3092eec9
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x3092ef29
// declared property getter: - (BOOL)shouldAutoplay;	// 0x3092ee95
- (void)skipToBeginning;	// 0x3092f269
- (void)skipToNextItem;	// 0x3092f23d
- (void)skipToPreviousItem;	// 0x3092f295
- (void)stop;	// 0x3092f18d
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x3092eef5
// declared property getter: - (id)view;	// 0x3092ed35
@end


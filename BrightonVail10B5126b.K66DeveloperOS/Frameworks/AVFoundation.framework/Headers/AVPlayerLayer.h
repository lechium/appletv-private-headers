/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library

@class AVPlayer, NSString, AVPlayerLayerInternal;

@interface AVPlayerLayer : CALayer {
	AVPlayerLayerInternal *_playerLayer;	// 48 = 0x30
}
@property(assign, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;	// G=0x30239285; S=0x30239385; converted property
@property(retain, nonatomic) AVPlayer *player;	// G=0x302386a9; S=0x302387d5; 
@property(readonly, assign, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;	// G=0x30238f1d; 
@property(copy) NSString *videoGravity;	// G=0x30238ab5; S=0x30238c21; 
+ (id)playerLayerWithPlayer:(id)player;	// 0x30235331
- (id)init;	// 0x3023538d
- (id)initWithLayer:(id)layer;	// 0x30235625
- (void)_addAnimationsForContentLayer:(id)contentLayer size:(CGSize)size gravity:(id)gravity;	// 0x30235db5
- (void)_addAnimationsForSubtitleLayer:(id)subtitleLayer size:(CGSize)size;	// 0x30236281
- (void)_calculateSubtitleLayerBounds:(CGRect)bounds presentationSize:(CGSize)size playLayerTransform:(CATransform3D)transform shouldUpdateCachedSubtitleSample:(BOOL)sample outBound:(CGRect *)bound;	// 0x30237cad
- (void)_connectContentLayerToPlayer;	// 0x30236ee1
- (void)_disconnectContentLayerFromPlayer;	// 0x30236f1d
- (CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)player;	// 0x30236f59
- (CGRect)_minRectToFitVideoAndSubtitlesInBounds:(CGRect)bounds;	// 0x3023969d
- (float)_pctOfSubtitleLayerHeight;	// 0x302391f9
- (void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;	// 0x30237599
- (void)_setItem:(id)item readyForDisplay:(BOOL)display;	// 0x30238f71
- (void)_setSubtitleDisplayEnabled:(BOOL)enabled;	// 0x30239075
- (void)_setSubtitleGravity:(id)gravity;	// 0x30239131
- (BOOL)_subtitleDisplayEnabled;	// 0x3023903d
- (id)_subtitleGravity;	// 0x30239101
- (void)_subtitlesDidChange:(id)_subtitles;	// 0x30238675
- (void)_updatePresentationSize:(CGSize)size;	// 0x30236fc5
- (void)_updateSubtitleLayerForPlayerLayerBounds:(CGRect)playerLayerBounds presentationSize:(CGSize)size playLayerTransform:(CATransform3D)transform forceRender:(BOOL)render;	// 0x30237e91
- (void)_updateSubtitles:(id)subtitles forceRender:(BOOL)render;	// 0x302382d9
- (CGRect)_videoRectForBounds:(CGRect)bounds;	// 0x30239679
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x302366b5
- (void)dealloc;	// 0x30236cd5
- (void)finalize;	// 0x30236e21
// converted property getter: - (BOOL)isOverscanSubtitleSupportEnabled;	// 0x30239285
// declared property getter: - (BOOL)isReadyForDisplay;	// 0x30238f1d
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x302389c9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30237b81
// declared property getter: - (id)player;	// 0x302386a9
- (void)removeAllAnimations;	// 0x30236c09
- (void)removeAnimationForKey:(id)key;	// 0x30236ab1
- (void)setBounds:(CGRect)bounds;	// 0x30235769
// converted property setter: - (void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;	// 0x30239385
// declared property setter: - (void)setPlayer:(id)player;	// 0x302387d5
// declared property setter: - (void)setVideoGravity:(id)gravity;	// 0x30238c21
// declared property getter: - (id)videoGravity;	// 0x30238ab5
- (CGRect)videoRect;	// 0x3023948d
@end


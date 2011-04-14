/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMusicNowPlayingLayer : BRControl {
@private
	NSMutableDictionary *_currentTrackInfo;	// 44 = 0x2c
	int _scheduledAnimationCount;	// 48 = 0x30
	float _coverArtRotation;	// 52 = 0x34
	float _coverArtSizeX;	// 56 = 0x38
	float _coverArtSizeY;	// 60 = 0x3c
	float _stateIconWidth;	// 64 = 0x40
	float _textWidth;	// 68 = 0x44
	BOOL _shuffleState;	// 72 = 0x48
	BOOL _repeatState;	// 73 = 0x49
	BOOL _geniusState;	// 74 = 0x4a
	BOOL _isRadio;	// 75 = 0x4b
	CGPoint _randomOffset;	// 76 = 0x4c
	CGPoint _coverArtPosition;	// 84 = 0x54
	CGPoint _trackNameTextPosition;	// 92 = 0x5c
	CGPoint _artistNameTextPosition;	// 100 = 0x64
	CGPoint _albumNameTextPosition;	// 108 = 0x6c
	CGPoint _trackXofXTextPosition;	// 116 = 0x74
	CGPoint _transportPosition;	// 124 = 0x7c
	CGPoint _stateIconsLowerRightCornerPosition;	// 132 = 0x84
	float _coverArtReflectionAmount;	// 140 = 0x8c
	CGSize _transportSize;	// 144 = 0x90
	BOOL _flip;	// 152 = 0x98
}
@property(readonly, retain) NSMutableDictionary *currentTrackInfo;	// G=0x328cb4c5; converted property
- (id)init;	// 0x328ca649
- (id)_createFrontLayer;	// 0x32902e15
- (void)_flipFrame:(CGRect *)frame parentFrame:(CGRect)frame2;	// 0x32902da5
- (void)_startScrolling;	// 0x32902dd5
- (void)_updateRandomOffset;	// 0x32904329
- (void)_updateTextStrings;	// 0x32903ee9
- (id)accessibilityLabel;	// 0x32903e2d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3290331d
- (void)controlWasActivated;	// 0x329037d1
- (void)controlWasDeactivated;	// 0x328cbda1
// converted property getter: - (id)currentTrackInfo;	// 0x328cb4c5
- (void)dealloc;	// 0x328cbe9d
- (int)frontLayerSide;	// 0x32902d85
- (BOOL)isAccessibilityElement;	// 0x32902da1
- (void)layoutSubcontrols;	// 0x329043f5
- (void)performFlipAnimation:(float)animation;	// 0x329033d9
- (void)removeAllPendingActions;	// 0x328cbd75
- (void)setCurrentTrackInfo:(id)info WithTransition:(BOOL)transition TransitionDirection:(int)direction TransitionDuration:(float)duration NewTrackKicksInTime:(double)time OldTrackFadeOutTime:(double)time6 isRadio:(BOOL)radio;	// 0x32903855
- (void)setElapsedTime:(double)time;	// 0x32903729
- (void)setElapsedTime:(double)time andDuration:(double)duration;	// 0x328cb4d5
- (void)setGeniusState:(BOOL)state;	// 0x32903709
- (void)setPlayerState:(int)state;	// 0x32902d9d
- (void)setRepeatMode:(int)mode;	// 0x328cb7f1
- (void)setShuffleState:(BOOL)state;	// 0x328cb791
- (void)updateCoverArt:(id)art;	// 0x3290325d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSMutableDictionary, CALayer, CADisplayLink, NSMutableArray, UIImage, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDictationMeterView : UIView {
@private
	UIImageView *_background;	// 48 = 0x30
	UIImageView *_overlay;	// 52 = 0x34
	NSMutableArray *_micListeningImages;	// 56 = 0x38
	NSMutableDictionary *_micFullImageDict;	// 60 = 0x3c
	UIImage *_micThinkingOnImage;	// 64 = 0x40
	CALayer *_micImageLayer;	// 68 = 0x44
	CALayer *_animatingLayer;	// 72 = 0x48
	CALayer *_fullRingLayer;	// 76 = 0x4c
	NSTimer *_fillTimer;	// 80 = 0x50
	int _phase;	// 84 = 0x54
	int _state;	// 88 = 0x58
	float _runningPowerLevels[5];	// 92 = 0x5c
	unsigned _powerPointer;	// 112 = 0x70
	CADisplayLink *_displayLink;	// 116 = 0x74
}
- (id)initWithFrame:(CGRect)frame;	// 0x35a28eed
- (float)_adjustedDuration:(float)duration;	// 0x35a298c5
- (double)_animationInterval;	// 0x35a29541
- (id)_basicAnimationForOpacityFrom:(unsigned)from to:(unsigned)to duration:(double)duration;	// 0x35a2a28d
- (id)_beginningKeyFrameAnimation;	// 0x35a29a39
- (void)_clearDisplayLink;	// 0x35a2a5f5
- (id)_currentMicPowerImage;	// 0x35a295d9
- (float)_currentMicPowerLevel;	// 0x35a29879
- (void)_displayLinkCallback:(id)callback;	// 0x35a2a569
- (id)_emptyMicImage;	// 0x35a295b1
- (id)_fullMicImage;	// 0x35a295c5
- (void)_handleBeginning;	// 0x35a2a44d
- (void)_handleListening;	// 0x35a2a635
- (void)_handleListeningBegin;	// 0x35a2a4c5
- (void)_handleListeningEnd;	// 0x35a2a6f5
- (void)_handleListeningStart;	// 0x35a2a4b5
- (void)_handleThinking;	// 0x35a2a7d9
- (void)_handleThinkingBegin;	// 0x35a2a771
- (void)_handleThinkingEnd;	// 0x35a2a889
- (void)_handleThinkingResolve;	// 0x35a2a925
- (id)_imageForMicFullIndex:(unsigned)micFullIndex;	// 0x35a29569
- (BOOL)_isSuitableStoppingPhase:(int)phase;	// 0x35a2a9d1
- (id)_keyframeAnimationForCGImages:(id)cgimages duration:(double)duration;	// 0x35a29969
- (id)_listeningBeginKeyFrameAnimation;	// 0x35a29bd5
- (id)_listeningEndKeyFrameAnimation;	// 0x35a29d99
- (float)_powerLevelForMicPower:(float)micPower;	// 0x35a29811
- (void)_removeAnimationsAndClearLayers;	// 0x35a298e9
- (void)_reset;	// 0x35a296e1
- (id)_thinkingBeginKeyFrameAnimation;	// 0x35a29f5d
- (id)_thinkingEndKeyFrameAnimation;	// 0x35a2a3bd
- (id)_thinkingResolveKeyFrameAnimation;	// 0x35a2a405
- (id)_thinkingRingAnimation;	// 0x35a2a131
- (float)_updateMedianWithNewValue:(float)newValue;	// 0x35a29771
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x35a2a9dd
- (void)dealloc;	// 0x35a293e5
- (void)layoutSubviews;	// 0x35a29495
- (void)setState:(int)state;	// 0x35a2964d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIControl.h> // Unknown library


@interface TPPhonePad : UIControl {
	int _downKey;	// 72 = 0x48
	id _delegate;	// 76 = 0x4c
	BOOL _playsSounds;	// 80 = 0x50
	BOOL _supportsHardPause;	// 81 = 0x51
	float _topHeight;	// 84 = 0x54
	float _midHeight;	// 88 = 0x58
	float _bottomHeight;	// 92 = 0x5c
	float _leftWidth;	// 96 = 0x60
	float _midWidth;	// 100 = 0x64
	float _rightWidth;	// 104 = 0x68
	CFSetRef _inflightSounds;	// 108 = 0x6c
	CFDictionaryRef _keyToButtonMap;	// 112 = 0x70
	unsigned _incompleteSounds;	// 116 = 0x74
	unsigned _delegateSoundCallbacks : 1;	// 120 = 0x78
	unsigned _soundsActivated : 1;	// 120 = 0x78
}
@property(assign) BOOL supportsHardPause;	// G=0x3141db3d; S=0x3141db4d; @synthesize=_supportsHardPause
+ (void)_delayedDeactivate;	// 0x3141dc6d
+ (BOOL)launchFieldTestIfNeeded:(id)needed;	// 0x3141dca9
+ (BOOL)shouldStringAutoDial:(id)dial givenLastChar:(BOOL)aChar;	// 0x3141dd05
- (id)initWithFrame:(CGRect)frame;	// 0x3141db5d
- (void)_activateSounds:(BOOL)sounds;	// 0x3141f2b5
- (void)_appResumed;	// 0x3141f215
- (void)_appSuspended;	// 0x3141f241
- (id)_buttonForKeyAtIndex:(int)index;	// 0x3141ee19
- (void)_handleKey:(id)key forUIEvent:(id)uievent;	// 0x3141e3bd
- (void)_handleKeyPressAndHold:(id)hold;	// 0x3141e2b5
- (id)_imageByCroppingImage:(id)image toRect:(CGRect)rect;	// 0x3141eb49
- (int)_keyForPoint:(CGPoint)point;	// 0x3141e17d
- (id)_keypadImage;	// 0x3141ebf1
- (CGPoint)_keypadOrigin;	// 0x3141ed09
- (void)_notifySoundCompletionIfNecessary:(unsigned long)necessary;	// 0x3141dfd1
- (void)_playSoundForKey:(int)key;	// 0x3141df0d
- (id)_pressedImage;	// 0x3141ec81
- (CGRect)_rectForKey:(int)key;	// 0x3141e039
- (void)_stopAllSoundsForcingCallbacks:(BOOL)callbacks;	// 0x3141de21
- (void)_stopSoundForKey:(int)key;	// 0x3141decd
- (CGRect)_updateRect:(CGRect)rect withScale:(float)scale;	// 0x3141dad1
- (float)_yFudge;	// 0x3141dac9
- (BOOL)cancelTouchTracking;	// 0x3141e6e9
- (void)dealloc;	// 0x3141f3f5
- (void)drawRect:(CGRect)rect;	// 0x3141e921
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3141e8a9
- (void)movedFromWindow:(id)window;	// 0x3141f1d1
- (void)movedToWindow:(id)window;	// 0x3141f17d
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x3141db39
- (void)removeFromSuperview;	// 0x3141f255
- (id)scriptingInfoWithChildren;	// 0x3141f4d5
- (void)setButton:(id)button forKeyAtIndex:(int)index;	// 0x3141ee3d
- (void)setDelegate:(id)delegate;	// 0x3141f0ed
- (void)setHighlighted:(BOOL)highlighted;	// 0x3141e7dd
- (void)setNeedsDisplayForKey:(int)key;	// 0x3141edb9
- (void)setPlaysSounds:(BOOL)sounds;	// 0x3141eef9
// declared property setter: - (void)setSupportsHardPause:(BOOL)pause;	// 0x3141db4d
// declared property getter: - (BOOL)supportsHardPause;	// 0x3141db3d
@end


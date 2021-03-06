/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface BRMusicNowPlayingTransportLayer : BRControl {
@private
	NSDictionary *_textAttributes;	// 48 = 0x30
	float _percent;	// 52 = 0x34
	float _duration;	// 56 = 0x38
	float _elapsedTime;	// 60 = 0x3c
	float _timeTextWidth;	// 64 = 0x40
	float _fillLayerHeight;	// 68 = 0x44
	float _fillLayerWidth;	// 72 = 0x48
	float _ordinaryTimeTextWidth;	// 76 = 0x4c
	BOOL _flip;	// 80 = 0x50
	BOOL _isRadio;	// 81 = 0x51
}
@property(readonly, assign) float duration;	// G=0x302b9e31; converted property
@property(readonly, assign) float elapsedTime;	// G=0x302b9e21; converted property
- (id)init;	// 0x302b96e9
- (void)_layoutRadioSublayers;	// 0x302ba289
- (void)dealloc;	// 0x302b9b25
// converted property getter: - (float)duration;	// 0x302b9e31
// converted property getter: - (float)elapsedTime;	// 0x302b9e21
- (void)layoutSubcontrols;	// 0x302b9e41
- (void)setElapsedTime:(float)time andDuration:(float)duration;	// 0x302b9bd1
- (void)setFlip:(BOOL)flip;	// 0x302ba249
- (void)setIsRadio:(BOOL)radio;	// 0x302ba279
- (void)setPercentage:(float)percentage;	// 0x302b9bb1
- (void)setTextAttributes:(id)attributes;	// 0x302b9b71
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface ATVFadeLayer : BRControl {
	int _orientation;	// 84 = 0x54
	float _maxAlpha;	// 88 = 0x58
	float _minAlpha;	// 92 = 0x5c
}
- (id)initWithOrientation:(int)orientation;	// 0x3cab9d
- (id)initWithOrientation:(int)orientation maxAlpha:(float)alpha minAlpha:(float)alpha3;	// 0x3cabc1
- (id)_bottomFadeFilters;	// 0x3caf2d
- (id)_leftFadeFilters;	// 0x3cb0b1
- (id)_rightFadeFilters;	// 0x3cb235
- (id)_topFadeFilters;	// 0x3cada9
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"


@interface MREffectDotProgress : MREffect {
	short _selectedDotIndex;	// 116 = 0x74
	short _countOfDots;	// 118 = 0x76
}
- (BOOL)isNative3D;	// 0x365e5dcd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365e5dd1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365e5dd5
- (void)setAttributes:(id)attributes;	// 0x365e5d09
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUPoolObject.h"
#import "ATVSlideshow-Structs.h"


@interface MURandom : MUPoolObject {
	long _state[31];	// 8 = 0x8
	long *_frontPtr;	// 132 = 0x84
	long *_rearPtr;	// 136 = 0x88
	long *_endPtr;	// 140 = 0x8c
}
+ (BOOL)clearVars;	// 0x3652c6a9
+ (XXStruct_raCX$B *)poolInfo;	// 0x3652c699
+ (id)randomGeneratorWithSeed:(unsigned long)seed;	// 0x3652c701
- (void)_seed:(unsigned long)seed;	// 0x3652c6f9
- (float)randomFloatInRange:(float)range :(float)arg2;	// 0x3652c769
- (long)randomInt;	// 0x3652c761
@end


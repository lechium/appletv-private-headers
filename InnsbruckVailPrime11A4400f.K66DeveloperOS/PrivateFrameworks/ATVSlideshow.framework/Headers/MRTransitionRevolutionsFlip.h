/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"

@class MRImage, NSMutableArray;

@interface MRTransitionRevolutionsFlip : MRTransition {
	unsigned long _numberOfTilesX;	// 60 = 0x3c
	unsigned long _numberOfTilesY;	// 64 = 0x40
	unsigned char _direction;	// 68 = 0x44
	NSMutableArray *_cubes;	// 72 = 0x48
	NSMutableArray *_cubeColumns;	// 76 = 0x4c
	NSMutableArray *_cubeRows;	// 80 = 0x50
	int _flipDirection;	// 84 = 0x54
	int _horizontalCubeCount;	// 88 = 0x58
	int _verticalCubeCount;	// 92 = 0x5c
	MRImage *_sourceImage;	// 96 = 0x60
	MRImage *_destinationImage;	// 100 = 0x64
	float _viewBaseWidth;	// 104 = 0x68
	float _viewBaseHeight;	// 108 = 0x6c
}
- (id)initWithTransitionID:(id)transitionID;	// 0x2fd6d085
- (void)cleanup;	// 0x2fd6d149
- (void)releaseByTransitioner:(id)transitioner;	// 0x2fd6d221
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd6dadd
- (void)setAttributes:(id)attributes;	// 0x2fd6d989
- (void)setFlipDirection:(int)direction;	// 0x2fd6d361
- (void)setupCubesWithLocalAspectRatio:(float)localAspectRatio;	// 0x2fd6d4b9
@end

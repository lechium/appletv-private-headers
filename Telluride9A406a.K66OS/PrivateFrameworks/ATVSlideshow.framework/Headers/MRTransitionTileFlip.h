/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableArray;

@interface MRTransitionTileFlip : MRTransition {
	NSMutableArray *mSortedTiles;	// 60 = 0x3c
	unsigned long mNumberOfTilesX;	// 64 = 0x40
	unsigned long mNumberOfTilesY;	// 68 = 0x44
	float mFlipOverlap;	// 72 = 0x48
	unsigned char mDirection;	// 76 = 0x4c
	BOOL mUseLighting;	// 77 = 0x4d
}
- (id)initWithTransitionID:(id)transitionID;	// 0x34a40921
- (void)buildTiles;	// 0x34a40a61
- (void)cleanup;	// 0x34a409b5
- (void)releaseByTransitioner:(id)transitioner;	// 0x34a40a09
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34a40fc1
- (void)setAttributes:(id)attributes;	// 0x34a40d99
@end


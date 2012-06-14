/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRTextRenderer, MRCroppingSprite, MRImage;

@interface MREffectSnapshotTitle : MREffect {
	MRTextRenderer *mTextRenderer0;	// 116 = 0x74
	MRImage *mImage0;	// 120 = 0x78
	MRCroppingSprite *mTextSprite0;	// 124 = 0x7c
}
- (id)init;	// 0x364cee59
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364cf381
- (int)_maxLinesForTextElement:(id)textElement;	// 0x364cf711
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x364cf6b9
- (void)_unload;	// 0x364cf715
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x364ceeb5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x364ceef9
- (BOOL)isLoadedForTime:(double)time;	// 0x364cef51
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364cefd9
@end


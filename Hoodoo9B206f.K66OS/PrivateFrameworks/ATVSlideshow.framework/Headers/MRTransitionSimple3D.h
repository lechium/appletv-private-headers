/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"


@interface MRTransitionSimple3D : MRTransition {
	unsigned long mSubtype;	// 60 = 0x3c
	unsigned long mDirection;	// 64 = 0x40
}
+ (void)initialize;	// 0x30ac79dd
- (id)initWithTransitionID:(id)transitionID;	// 0x30ac7a59
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30ac7b65
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30acad0d
- (void)setAttributes:(id)attributes;	// 0x30ac7aa5
@end

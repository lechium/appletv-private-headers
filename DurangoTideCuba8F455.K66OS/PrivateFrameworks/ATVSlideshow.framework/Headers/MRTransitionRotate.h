/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MRTransitionRotate : MRTransition {
	MRImageProvider *mBoxShadowBig;	// 60 = 0x3c
}
- (id)initWithTransitionID:(id)transitionID;	// 0x33d9c13d
- (void)_cleanup;	// 0x33d9c23d
- (BOOL)isLoadedForTime:(double)time;	// 0x33d9c2e1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d9c301
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d9c36d
- (void)setPixelSize:(CGSize)size;	// 0x33d9c279
- (void)unload;	// 0x33d9d1d1
@end


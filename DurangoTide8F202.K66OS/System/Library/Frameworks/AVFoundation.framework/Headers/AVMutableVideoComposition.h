/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoComposition.h"

@class NSArray, AVVideoCompositionCoreAnimationTool, AVMutableVideoCompositionInternal;

@interface AVMutableVideoComposition : AVVideoComposition {
@private
	AVMutableVideoCompositionInternal *_mutableVideoComposition;	// 8 = 0x8
}
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x303ee5fd; S=0x303ee5d1; 
@property(retain) id compositor;	// G=0x303ee77d; S=0x303ee751; converted property
@property(assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x303f0865; S=0x303ee705; 
@property(copy, nonatomic) NSArray *instructions;	// G=0x303ee655; S=0x303ee629; 
@property(assign, nonatomic) float renderScale;	// G=0x303ee6ad; S=0x303ee681; 
@property(assign, nonatomic) CGSize renderSize;	// G=0x303f0835; S=0x303ee6d9; 
+ (id)videoComposition;	// 0x303eeb91
// declared property getter: - (id)animationTool;	// 0x303ee5fd
// converted property getter: - (id)compositor;	// 0x303ee77d
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x303f0865
// declared property getter: - (id)instructions;	// 0x303ee655
// declared property getter: - (float)renderScale;	// 0x303ee6ad
// declared property getter: - (CGSize)renderSize;	// 0x303f0835
// declared property setter: - (void)setAnimationTool:(id)tool;	// 0x303ee5d1
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x303ee751
// declared property setter: - (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x303ee705
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x303ee629
// declared property setter: - (void)setRenderScale:(float)scale;	// 0x303ee681
// declared property setter: - (void)setRenderSize:(CGSize)size;	// 0x303ee6d9
@end


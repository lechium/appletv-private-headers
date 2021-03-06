/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoComposition.h"

@class AVMutableVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition {
	AVMutableVideoCompositionInternal *_mutableVideoComposition;	// 8 = 0x8
}
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x302f23e1; S=0x302f240d; 
@property(retain) id compositor;	// G=0x302f2209; S=0x302f2235; converted property
@property(assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x302f2261; S=0x302f228d; 
@property(copy, nonatomic) NSArray *instructions;	// G=0x302f2389; S=0x302f23b5; 
@property(assign, nonatomic) float renderScale;	// G=0x302f2331; S=0x302f235d; 
@property(assign, nonatomic) CGSize renderSize;	// G=0x302f22d5; S=0x302f2301; 
+ (id)videoComposition;	// 0x302f1451
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset;	// 0x302f1495
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset videoGravity:(id)gravity;	// 0x302f2205
// declared property getter: - (id)animationTool;	// 0x302f23e1
// converted property getter: - (id)compositor;	// 0x302f2209
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x302f2261
// declared property getter: - (id)instructions;	// 0x302f2389
// declared property getter: - (float)renderScale;	// 0x302f2331
// declared property getter: - (CGSize)renderSize;	// 0x302f22d5
// declared property setter: - (void)setAnimationTool:(id)tool;	// 0x302f240d
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x302f2235
// declared property setter: - (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x302f228d
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x302f23b5
// declared property setter: - (void)setRenderScale:(float)scale;	// 0x302f235d
// declared property setter: - (void)setRenderSize:(CGSize)size;	// 0x302f2301
@end


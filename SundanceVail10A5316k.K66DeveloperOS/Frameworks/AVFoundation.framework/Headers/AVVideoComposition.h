/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class AVVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionInternal *_videoComposition;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x367410b5; 
@property(retain) id compositor;	// G=0x36740d91; S=0x36740db1; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x36740e0d; 
@property(readonly, assign, nonatomic) NSArray *instructions;	// G=0x36740f21; 
@property(readonly, assign, nonatomic) float renderScale;	// G=0x36740ee1; 
@property(readonly, assign, nonatomic) CGSize renderSize;	// G=0x36740e91; 
+ (void)initialize;	// 0x36740735
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset;	// 0x367406ad
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset videoGravity:(id)gravity;	// 0x367406f1
- (id)init;	// 0x36740775
- (int)_auxiliaryTrackID;	// 0x36740ffd
- (id)_auxiliaryTrackLayer;	// 0x36740fd1
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x36740f9d
- (BOOL)_hasPostProcessingLayers;	// 0x36741029
- (BOOL)_isValidReturningExceptionReason:(id *)reason;	// 0x367413f1
- (id)_postProcessingRootLayer;	// 0x36741089
- (id)_postProcessingVideoLayer;	// 0x3674105d
- (id)_serializableInstructions;	// 0x3674112d
// declared property getter: - (id)animationTool;	// 0x367410b5
// converted property getter: - (id)compositor;	// 0x36740d91
- (id)copyWithZone:(NSZone *)zone;	// 0x36740959
- (void)dealloc;	// 0x36740cc9
- (void)finalize;	// 0x36740d4d
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x36740e0d
// declared property getter: - (id)instructions;	// 0x36740f21
- (BOOL)isValidForAsset:(id)asset timeRange:(XXStruct_yD8eWC)range validationDelegate:(id)delegate;	// 0x367414e9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36740b35
// declared property getter: - (float)renderScale;	// 0x36740ee1
// declared property getter: - (CGSize)renderSize;	// 0x36740e91
- (void)setAnimationTool:(id)tool;	// 0x367410d5
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x36740db1
- (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x36740e51
- (void)setInstructions:(id)instructions;	// 0x36740f41
- (void)setRenderScale:(float)scale;	// 0x36740f01
- (void)setRenderSize:(CGSize)size;	// 0x36740eb9
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject {
	AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;	// 4 = 0x4
}
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)additionalLayer asTrackID:(int)anId;	// 0x30289539
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)postProcessingAsVideoLayer inLayer:(id)layer;	// 0x3028958d
- (id)initWithMagicTrackID:(int)magicTrackID animationLayer:(id)layer videoLayer:(id)layer3;	// 0x30289439
- (int)_auxiliaryTrackID;	// 0x30289719
- (id)_auxiliaryTrackLayer;	// 0x302896e5
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x302896a9
- (BOOL)_hasPostProcessingLayers;	// 0x3028974d
- (id)_postProcessingRootLayer;	// 0x30289789
- (id)_postProcessingVideoLayer;	// 0x302897bd
- (void)dealloc;	// 0x302895e1
- (void)finalize;	// 0x30289665
@end

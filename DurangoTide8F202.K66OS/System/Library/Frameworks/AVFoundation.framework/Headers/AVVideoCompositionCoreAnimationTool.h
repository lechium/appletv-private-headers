/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject {
@private
	AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;	// 4 = 0x4
}
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)additionalLayer asTrackID:(int)anId;	// 0x303eeb45
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)postProcessingAsVideoLayer inLayer:(id)layer;	// 0x303eeaf9
- (id)initWithMagicTrackID:(int)magicTrackID animationLayer:(id)layer videoLayer:(id)layer3;	// 0x303ef459
- (int)_auxiliaryTrackID;	// 0x303ee511
- (id)_auxiliaryTrackLayer;	// 0x303ee4e5
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x303ee4b1
- (BOOL)_hasPostProcessingLayers;	// 0x303ee53d
- (id)_postProcessingRootLayer;	// 0x303ee571
- (id)_postProcessingVideoLayer;	// 0x303ee5a1
- (void)dealloc;	// 0x303efdc1
- (void)finalize;	// 0x303efd81
@end


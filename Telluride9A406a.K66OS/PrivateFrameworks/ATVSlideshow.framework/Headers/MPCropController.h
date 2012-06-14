/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MPDocument;

@interface MPCropController : NSObject {
	id _delegate;	// 4 = 0x4
	MPDocument *_authoredDocument;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x3493ac95; S=0x3493aca5; converted property
+ (void)releaseSharedController;	// 0x3493ac29
+ (id)sharedController;	// 0x3493abe1
- (id)init;	// 0x3493ac55
- (void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x3493bf0d
- (void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options centeredAt:(CGPoint)at alwaysZoomIn:(BOOL)anIn;	// 0x3493d89d
- (void)applyAnimatedCropWithROIsToSlide:(id)slide withOptions:(id)options;	// 0x3493bf3d
- (void)applyCropToSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x3493ba25
- (void)applyCropToSlide:(id)slide withOptions:(id)options;	// 0x3493bbc5
- (void)applyCropToSlidesInEffectContainers:(id)effectContainers inDocument:(id)document withOptions:(id)options;	// 0x3493b615
- (void)applyMultiFaceAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x3493e0f5
- (void)applyStationaryCropToSlide:(id)slide withOptions:(id)options;	// 0x3493c2a1
- (void)batchCrop:(id)crop;	// 0x3493acb5
- (CGPoint)checkFarApartROIs:(id)rois withImageSize:(CGSize)imageSize visibleAspectRatio:(float)ratio roiCenter:(CGPoint)center;	// 0x3493caa1
- (void)cleanup;	// 0x3493bb99
- (void)cropSlidesForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x3493b05d
- (void)cropSlidesInDocument:(id)document withOptions:(id)options;	// 0x3493b021
// converted property getter: - (id)delegate;	// 0x3493ac95
- (double)durationOfSlide:(id)slide;	// 0x3493ea01
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3493aca5
- (void)setupWithDocument:(id)document andOptions:(id)options;	// 0x3493bb51
@end

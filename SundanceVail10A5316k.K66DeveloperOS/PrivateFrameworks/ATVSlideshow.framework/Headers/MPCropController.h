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
@property(assign) id delegate;	// G=0x3641bf45; S=0x3641bf55; converted property
+ (void)releaseSharedController;	// 0x3641be39
+ (id)sharedController;	// 0x3641bd49
- (id)init;	// 0x3641bf05
- (void)_applyCropToSlidesInEffectContainersWithArguments:(id)arguments;	// 0x3641c891
- (void)applyAnimatedCropToBreakSlide:(id)breakSlide withOptions:(id)options;	// 0x3641ec21
- (void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x3641d245
- (void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options centeredAt:(CGPoint)at alwaysZoomIn:(BOOL)anIn;	// 0x3641f481
- (void)applyAnimatedCropWithROIsToSlide:(id)slide withOptions:(id)options;	// 0x3641d275
- (void)applyCropToSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x3641cd79
- (void)applyCropToSlide:(id)slide withOptions:(id)options;	// 0x3641cef5
- (void)applyCropToSlidesInEffectContainers:(id)effectContainers inDocument:(id)document withOptions:(id)options;	// 0x3641c931
- (void)applyMultiFaceAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x3641fde1
- (void)applyStationaryCropToSlide:(id)slide withOptions:(id)options;	// 0x3641d5f1
- (void)batchCrop:(id)crop;	// 0x3641bf65
- (CGPoint)checkFarApartROIs:(id)rois withImageSize:(CGSize)imageSize visibleAspectRatio:(float)ratio roiCenter:(CGPoint)center;	// 0x3641de21
- (void)cleanup;	// 0x3641cec9
- (void)cropSlidesForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x3641c2e1
- (void)cropSlidesInDocument:(id)document withOptions:(id)options;	// 0x3641c2a1
// converted property getter: - (id)delegate;	// 0x3641bf45
- (double)durationOfSlide:(id)slide;	// 0x364207dd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3641bf55
- (void)setupWithDocument:(id)document andOptions:(id)options;	// 0x3641ce85
@end


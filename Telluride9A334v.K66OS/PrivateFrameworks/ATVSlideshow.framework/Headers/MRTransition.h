/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import <NSObject.h> // Unknown library
#import "MRRenderable.h"
#import "ATVSlideshow-Structs.h"

@class NSDictionary, MRLayer, MRImage, NSString;

@interface MRTransition : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	id mTransitioner;	// 8 = 0x8
	MRLayer *mSourceLayer;	// 12 = 0xc
	MRLayer *mTargetLayer;	// 16 = 0x10
	MRImage *mSourceLayerImage;	// 20 = 0x14
	MRImage *mTargetLayerImage;	// 24 = 0x18
	MRImage *mOutputImage;	// 28 = 0x1c
	NSString *mTransitionID;	// 32 = 0x20
	NSString *mPresetID;	// 36 = 0x24
	NSDictionary *mAttributes;	// 40 = 0x28
	NSDictionary *mFlattenedAttributes;	// 44 = 0x2c
	BOOL mNeedsToUpdateAttributes;	// 48 = 0x30
	CGSize mPixelSize;	// 52 = 0x34
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x32f806f9; S=0x32f7fff9; @synthesize=mAttributes
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x32f80379; 
@property(readonly, assign) BOOL isInfinite;	// G=0x32f803e5; 
@property(readonly, assign) BOOL isNative3D;	// G=0x32f802f9; 
@property(readonly, assign) BOOL isOpaque;	// G=0x32f80339; 
@property(readonly, assign) BOOL needsSourceLayerImageForPrecomputing;	// G=0x32f7ff79; 
@property(readonly, assign) BOOL needsTargetLayerImageForPrecomputing;	// G=0x32f7ffb9; 
@property(readonly, assign) BOOL noContentsMotion;	// G=0x32f7ff39; 
@property(assign) CGSize pixelSize;	// G=0x32f80709; S=0x32f80725; @synthesize=mPixelSize
@property(copy) NSString *presetID;	// G=0x32f806c1; S=0x32f806d5; @synthesize=mPresetID
@property(retain) MRLayer *sourceLayer;	// G=0x32f80621; S=0x32f80635; @synthesize=mSourceLayer
@property(retain, nonatomic) MRImage *sourceLayerImage;	// G=0x32f80691; S=0x32f801f1; @synthesize=mSourceLayerImage
@property(retain) MRLayer *targetLayer;	// G=0x32f80659; S=0x32f8066d; @synthesize=mTargetLayer
@property(retain, nonatomic) MRImage *targetLayerImage;	// G=0x32f806a1; S=0x32f80231; @synthesize=mTargetLayerImage
@property(readonly, assign) NSString *transitionID;	// G=0x32f806b1; @synthesize=mTransitionID
+ (id)retainedTransitionWithTransitionID:(id)transitionID forTransitioner:(id)transitioner;	// 0x32f7fb91
- (id)initWithTransitionID:(id)transitionID;	// 0x32f7fbe1
// declared property getter: - (id)attributes;	// 0x32f806f9
- (void)cancelLoading;	// 0x32f802f5
- (void)cleanup;	// 0x32f7fda1
- (void)dealloc;	// 0x32f7fd21
- (void)finalize;	// 0x32f7fd61
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x32f80379
// declared property getter: - (BOOL)isInfinite;	// 0x32f803e5
- (BOOL)isLoadedForTime:(double)time;	// 0x32f80271
// declared property getter: - (BOOL)isNative3D;	// 0x32f802f9
// declared property getter: - (BOOL)isOpaque;	// 0x32f80339
- (BOOL)isRetainedByTransitioner;	// 0x32f7ff21
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x32f80275
// declared property getter: - (BOOL)needsSourceLayerImageForPrecomputing;	// 0x32f7ff79
// declared property getter: - (BOOL)needsTargetLayerImageForPrecomputing;	// 0x32f7ffb9
// declared property getter: - (BOOL)noContentsMotion;	// 0x32f7ff39
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f804b9
// declared property getter: - (CGSize)pixelSize;	// 0x32f80709
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f803e9
// declared property getter: - (id)presetID;	// 0x32f806c1
- (void)releaseByTransitioner:(id)transitioner;	// 0x32f7fe41
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f8048d
- (void)retainByTransitioner:(id)transitioner;	// 0x32f7fe19
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f804a1
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x32f7fff9
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x32f80725
// declared property setter: - (void)setPresetID:(id)anId;	// 0x32f806d5
// declared property setter: - (void)setSourceLayer:(id)layer;	// 0x32f80635
// declared property setter: - (void)setSourceLayerImage:(id)image;	// 0x32f801f1
// declared property setter: - (void)setTargetLayer:(id)layer;	// 0x32f8066d
// declared property setter: - (void)setTargetLayerImage:(id)image;	// 0x32f80231
// declared property getter: - (id)sourceLayer;	// 0x32f80621
// declared property getter: - (id)sourceLayerImage;	// 0x32f80691
// declared property getter: - (id)targetLayer;	// 0x32f80659
// declared property getter: - (id)targetLayerImage;	// 0x32f806a1
// declared property getter: - (id)transitionID;	// 0x32f806b1
- (void)unload;	// 0x32f80279
@end

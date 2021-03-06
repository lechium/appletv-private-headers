/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import "MRRenderable.h"
#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MCSlide, NSConditionLock, NSDictionary, MRLayer, NSString, MRLayerEffect, NSLock, MRFrame, NSInvocationOperation, MRImage;

@interface MRSlideProvider : NSObject <MRLoadable, MRRenderable> {
	CGSize mDefaultSize;	// 4 = 0x4
	float mStillTime;	// 12 = 0xc
	NSString *mImageSizeScript;	// 16 = 0x10
	NSDictionary *mEffectAttributes;	// 20 = 0x14
	NSString *mShowTimeScript;	// 24 = 0x18
	NSInvocationOperation *mPreloadOperation;	// 28 = 0x1c
	NSLock *mPreloadOperationLock;	// 32 = 0x20
	NSConditionLock *mPreloadSemaphore;	// 36 = 0x24
	MRFrame *mFrame;	// 40 = 0x28
	MRImage *mOriginalImage;	// 44 = 0x2c
	MRImage *mOutputImage;	// 48 = 0x30
	CGSize mRequestedSize;	// 52 = 0x34
	double mShowTime;	// 60 = 0x3c
	double mShowDuration;	// 68 = 0x44
	double mSlideStartTime;	// 76 = 0x4c
	double mSlideDuration;	// 84 = 0x54
	MRLayerEffect *mEffectLayer;	// 92 = 0x5c
	MCSlide *mSlide;	// 96 = 0x60
	int mKenBurnsType;	// 100 = 0x64
	NSString *mAssetPath;	// 104 = 0x68
	float mOriginalImageAspectRatio;	// 108 = 0x6c
	MRLayer *mSlideLayer;	// 112 = 0x70
	CGSize mImageSize;	// 116 = 0x74
	CGSize mLastImageSize;	// 124 = 0x7c
	double mLastTime;	// 132 = 0x84
	CGSize mLastDaSize;	// 140 = 0x8c
	CGSize mSizeFactor;	// 148 = 0x94
	BOOL mIsAnimatedGIF;	// 156 = 0x9c
	MCSlide *mSlideCopy;	// 160 = 0xa0
	unsigned mSlideIndex;	// 164 = 0xa4
	unsigned mFlags;	// 168 = 0xa8
}
@property(assign, nonatomic) CGSize defaultSize;	// G=0x321584c1; S=0x32153ffd; @synthesize=mDefaultSize
@property(retain, nonatomic) NSDictionary *effectAttributes;	// G=0x3215850d; S=0x3215417d; @synthesize=mEffectAttributes
@property(readonly, assign) MRFrame *frame;	// G=0x32158625; @synthesize=mFrame
@property(readonly, assign, nonatomic) float imageAspectRatio;	// G=0x32153fed; 
@property(copy, nonatomic) NSString *imageSizeScript;	// G=0x321584fd; S=0x32154109; @synthesize=mImageSizeScript
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x32156191; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x32156195; 
@property(readonly, assign, nonatomic) BOOL isLoaded;	// G=0x32154285; 
@property(assign, nonatomic) BOOL isMonochromatic;	// G=0x32154051; S=0x32154065; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x32156095; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x32156099; 
@property(assign, nonatomic) BOOL isPlaying;	// G=0x32154271; S=0x32154dc9; 
@property(assign, nonatomic) BOOL isStill;	// G=0x321541d5; S=0x321541e9; 
@property(assign) int kenBurnsType;	// G=0x32158605; S=0x32158615; @synthesize=mKenBurnsType
@property(readonly, assign, nonatomic) CGSize requestedSize;	// G=0x321585a9; @synthesize=mRequestedSize
@property(assign, nonatomic) double showDuration;	// G=0x3215857d; S=0x32158595; @synthesize=mShowDuration
@property(assign, nonatomic) double showTime;	// G=0x32158551; S=0x32158569; @synthesize=mShowTime
@property(copy, nonatomic) NSString *showTimeScript;	// G=0x3215851d; S=0x3215852d; @synthesize=mShowTimeScript
@property(assign, nonatomic) CGSize sizeFactor;	// G=0x321585c5; S=0x321585e1; @synthesize=mSizeFactor
@property(retain, nonatomic) MCSlide *slide;	// G=0x321585f5; S=0x32154a45; @synthesize=mSlide
@property(readonly, assign, nonatomic) double slideDuration;	// G=0x3215864d; @synthesize=mSlideDuration
@property(assign, nonatomic) BOOL slideIsReadonly;	// G=0x32154231; S=0x32154249; 
@property(readonly, assign, nonatomic) double slideStartTime;	// G=0x32158635; @synthesize=mSlideStartTime
@property(assign, nonatomic) float stillTime;	// G=0x321584dd; S=0x321584ed; @synthesize=mStillTime
@property(assign, nonatomic) double time;	// G=0x32154ea9; S=0x32154ebd; 
@property(assign, nonatomic) BOOL useMipmapping;	// G=0x321540ad; S=0x321540c1; 
+ (void)applyKenBurnsForSlide:(id)slide inPlug:(id)plug forSize:(CGSize)size atTime:(double)time withTargetSize:(CGSize)targetSize kenBurnsType:(int)type translation:(CGPoint *)translation scale:(float *)scale rotation:(float *)rotation;	// 0x32158665
- (id)initWithEffectLayer:(id)effectLayer;	// 0x32153b4d
- (void)_computeImageSizeInContext:(id)context withArguments:(id)arguments;	// 0x32156199
- (void)_loadTextureWithArguments:(id)arguments;	// 0x32155af5
- (void)_unloadIfNotUpdatingLive;	// 0x32154ffd
- (BOOL)beginLiveUpdate;	// 0x32154fa1
- (void)cancelLoading;	// 0x32155fe5
- (void)cleanup;	// 0x32153cd1
- (void)dealloc;	// 0x32153c51
// declared property getter: - (CGSize)defaultSize;	// 0x321584c1
// declared property getter: - (id)effectAttributes;	// 0x3215850d
- (BOOL)endLiveUpdate;	// 0x32154fbd
- (void)finalize;	// 0x32153c91
// declared property getter: - (id)frame;	// 0x32158625
- (CGSize)framedImageSizeAtIndex:(unsigned long)index aspectRatio:(float)ratio;	// 0x321542d9
// declared property getter: - (float)imageAspectRatio;	// 0x32153fed
// declared property getter: - (id)imageSizeScript;	// 0x321584fd
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x32156191
// declared property getter: - (BOOL)isInfinite;	// 0x32156195
// declared property getter: - (BOOL)isLoaded;	// 0x32154285
- (BOOL)isLoadedForTime:(double)time;	// 0x32155121
// declared property getter: - (BOOL)isMonochromatic;	// 0x32154051
// declared property getter: - (BOOL)isNative3D;	// 0x32156095
// declared property getter: - (BOOL)isOpaque;	// 0x32156099
// declared property getter: - (BOOL)isPlaying;	// 0x32154271
// declared property getter: - (BOOL)isStill;	// 0x321541d5
// declared property getter: - (int)kenBurnsType;	// 0x32158605
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x32155135
- (void)loadTextureWithArguments:(id)arguments;	// 0x32155ba9
- (void)loadWithArguments:(id)arguments;	// 0x321557e9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32153e51
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32158385
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32156d3d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32157141
// declared property getter: - (CGSize)requestedSize;	// 0x321585a9
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32157155
// declared property setter: - (void)setDefaultSize:(CGSize)size;	// 0x32153ffd
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x3215417d
// declared property setter: - (void)setImageSizeScript:(id)script;	// 0x32154109
// declared property setter: - (void)setIsMonochromatic:(BOOL)monochromatic;	// 0x32154065
// declared property setter: - (void)setIsPlaying:(BOOL)playing;	// 0x32154dc9
// declared property setter: - (void)setIsStill:(BOOL)still;	// 0x321541e9
// declared property setter: - (void)setKenBurnsType:(int)type;	// 0x32158615
// declared property setter: - (void)setShowDuration:(double)duration;	// 0x32158595
// declared property setter: - (void)setShowTime:(double)time;	// 0x32158569
// declared property setter: - (void)setShowTimeScript:(id)script;	// 0x3215852d
// declared property setter: - (void)setSizeFactor:(CGSize)factor;	// 0x321585e1
// declared property setter: - (void)setSlide:(id)slide;	// 0x32154a45
// declared property setter: - (void)setSlideIsReadonly:(BOOL)readonly;	// 0x32154249
// declared property setter: - (void)setStillTime:(float)time;	// 0x321584ed
// declared property setter: - (void)setTime:(double)time;	// 0x32154ebd
// declared property setter: - (void)setUseMipmapping:(BOOL)mipmapping;	// 0x321540c1
// declared property getter: - (double)showDuration;	// 0x3215857d
// declared property getter: - (double)showTime;	// 0x32158551
// declared property getter: - (id)showTimeScript;	// 0x3215851d
// declared property getter: - (CGSize)sizeFactor;	// 0x321585c5
// declared property getter: - (id)slide;	// 0x321585f5
// declared property getter: - (double)slideDuration;	// 0x3215864d
// declared property getter: - (BOOL)slideIsReadonly;	// 0x32154231
// declared property getter: - (double)slideStartTime;	// 0x32158635
// declared property getter: - (float)stillTime;	// 0x321584dd
// declared property getter: - (double)time;	// 0x32154ea9
- (CGSize)unframedImageSizeForAspectRatio:(float)aspectRatio frameID:(id)anId andFrameAttributes:(id)attributes atIndex:(unsigned long)index framedImageSize:(CGSize *)size;	// 0x32154505
- (void)unload;	// 0x32155d95
- (void)updateShowTimeAndDurationWithPlug:(id)plug andAttributes:(id)attributes;	// 0x32154761
- (BOOL)updateStuffWithAssetManager:(id)assetManager;	// 0x321566c9
// declared property getter: - (BOOL)useMipmapping;	// 0x321540ad
@end


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

@class NSDictionary, MRSlideProvider, MRImage, NSString;

@interface MRFrame : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	MRSlideProvider *mSlideProvider;	// 8 = 0x8
	MRImage *mInputImage;	// 12 = 0xc
	MRImage *mOutputImage;	// 16 = 0x10
	NSString *mFrameID;	// 20 = 0x14
	NSDictionary *mAttributes;	// 24 = 0x18
	NSDictionary *mFlattenedAttributes;	// 28 = 0x1c
	CGSize mPixelSize;	// 32 = 0x20
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x349f4e51; S=0x349f49ed; @synthesize=mAttributes
@property(readonly, assign) NSString *frameID;	// G=0x349f4e41; @synthesize=mFrameID
@property(retain, nonatomic) MRImage *inputImage;	// G=0x349f4e31; S=0x349f4985; @synthesize=mInputImage
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x349f4c4d; 
@property(readonly, assign) BOOL isInfinite;	// G=0x349f4cb9; 
@property(readonly, assign) BOOL isNative3D;	// G=0x349f4bcd; 
@property(readonly, assign) BOOL isOpaque;	// G=0x349f4c0d; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x349f4e61; S=0x349f4b1d; @synthesize=mPixelSize
+ (id)retainedFrameWithFrameID:(id)frameID forSlideProvider:(id)slideProvider;	// 0x349f4679
- (id)initWithFrameID:(id)frameID;	// 0x349f46c9
// declared property getter: - (id)attributes;	// 0x349f4e51
- (void)cancelLoading;	// 0x349f4bc9
- (void)cleanup;	// 0x349f4825
- (void)dealloc;	// 0x349f47a5
- (void)finalize;	// 0x349f47e5
// declared property getter: - (id)frameID;	// 0x349f4e41
// declared property getter: - (id)inputImage;	// 0x349f4e31
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x349f4c4d
// declared property getter: - (BOOL)isInfinite;	// 0x349f4cb9
- (BOOL)isLoadedForTime:(double)time;	// 0x349f4b71
// declared property getter: - (BOOL)isNative3D;	// 0x349f4bcd
// declared property getter: - (BOOL)isOpaque;	// 0x349f4c0d
- (BOOL)isRetainedBySlideProvider;	// 0x349f496d
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x349f4b75
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349f4cc9
// declared property getter: - (CGSize)pixelSize;	// 0x349f4e61
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349f4cbd
- (void)releaseBySlideProvider:(id)provider;	// 0x349f48c1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349f4cc1
- (void)retainBySlideProvider:(id)provider;	// 0x349f4899
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349f4cc5
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x349f49ed
// declared property setter: - (void)setInputImage:(id)image;	// 0x349f4985
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x349f4b1d
- (void)unload;	// 0x349f4b79
@end


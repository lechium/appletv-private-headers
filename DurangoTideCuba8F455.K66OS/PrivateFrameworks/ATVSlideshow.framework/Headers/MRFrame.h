/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import "ATVSlideshow-Structs.h"
#import "MRRenderable.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, MRSlideProvider, NSString, MRImage;

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
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x33d5cbed; S=0x33d5c7c5; @synthesize=mAttributes
@property(readonly, assign) NSString *frameID;	// G=0x33d5cbdd; @synthesize=mFrameID
@property(retain, nonatomic) MRImage *inputImage;	// G=0x33d5cbcd; S=0x33d5c751; @synthesize=mInputImage
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x33d5ca11; 
@property(readonly, assign) BOOL isInfinite;	// G=0x33d5ca81; 
@property(readonly, assign) BOOL isNative3D;	// G=0x33d5c9a1; 
@property(readonly, assign) BOOL isOpaque;	// G=0x33d5c9d9; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x33d5cbfd; S=0x33d5c8e9; @synthesize=mPixelSize
+ (id)retainedFrameWithFrameID:(id)frameID forSlideProvider:(id)slideProvider;	// 0x33d5c475
- (id)initWithFrameID:(id)frameID;	// 0x33d5c4bd
// declared property getter: - (id)attributes;	// 0x33d5cbed
- (void)cancelLoading;	// 0x33d5c99d
- (void)cleanup;	// 0x33d5c601
- (void)dealloc;	// 0x33d5c581
- (void)finalize;	// 0x33d5c5c1
// declared property getter: - (id)frameID;	// 0x33d5cbdd
// declared property getter: - (id)inputImage;	// 0x33d5cbcd
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x33d5ca11
// declared property getter: - (BOOL)isInfinite;	// 0x33d5ca81
- (BOOL)isLoadedForTime:(double)time;	// 0x33d5c949
// declared property getter: - (BOOL)isNative3D;	// 0x33d5c9a1
// declared property getter: - (BOOL)isOpaque;	// 0x33d5c9d9
- (BOOL)isRetainedBySlideProvider;	// 0x33d5c739
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x33d5c94d
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d5ca91
// declared property getter: - (CGSize)pixelSize;	// 0x33d5cbfd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d5ca85
- (void)releaseBySlideProvider:(id)provider;	// 0x33d5c691
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d5ca89
- (void)retainBySlideProvider:(id)provider;	// 0x33d5c66d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d5ca8d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x33d5c7c5
// declared property setter: - (void)setInputImage:(id)image;	// 0x33d5c751
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x33d5c8e9
- (void)unload;	// 0x33d5c951
@end

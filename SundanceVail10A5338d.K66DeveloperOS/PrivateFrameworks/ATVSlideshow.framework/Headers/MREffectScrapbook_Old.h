/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, NSMutableDictionary;

@interface MREffectScrapbook_Old : MREffect {
	MRImageProvider *mImageProviders[7];	// 116 = 0x74
	MRImageProvider *mBackgroundImageProvider;	// 144 = 0x90
	NSMutableDictionary *mSprites;	// 148 = 0x94
	unsigned mNumberOfVertices;	// 152 = 0x98
	float *mMeshVertices;	// 156 = 0x9c
	float *mMeshTextureVertices;	// 160 = 0xa0
	float mLocalTranslationX;	// 164 = 0xa4
	float mLocalTranslationY;	// 168 = 0xa8
	float mZoomScale;	// 172 = 0xac
	double mPhaseTime;	// 176 = 0xb0
}
+ (void)initialize;	// 0x3343db01
+ (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation withBorderRect:(CGRect)borderRect;	// 0x33447bfd
+ (void)renderImage:(id)image withFrame:(id)frame andMask:(id)mask usingSprite:(id)sprite inContext:(id)context;	// 0x334478e1
- (id)initWithEffectID:(id)effectID;	// 0x3343dbad
- (void)_cleanup;	// 0x33440735
- (void)_unload;	// 0x33447865
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33440c7d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33440e39
- (BOOL)isAlphaFriendly;	// 0x33440889
- (BOOL)isOpaque;	// 0x33440885
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3344088d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3344092d
- (void)renderBackgroundAtTime:(double)time inContext:(id)context withArguments:(id)arguments subtractingSprites:(id)sprites withTranslation:(CGPoint)translation andScale:(float)scale;	// 0x33440f31
- (void)renderEffect10AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33447201
- (void)renderEffect1AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x334414a9
- (void)renderEffect2AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x33441f15
- (void)renderEffect3AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x33442a39
- (void)renderEffect4AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x33443899
- (void)renderEffect5AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x334446d1
- (void)renderEffect6AtTime:(double)time movieVersion:(BOOL)version inContext:(id)context withArguments:(id)arguments;	// 0x3344529d
- (void)renderEffect7AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33445b91
- (void)renderEffect8AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33446561
- (void)renderEffect9AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33446961
- (void)setPixelSize:(CGSize)size;	// 0x334407d5
@end


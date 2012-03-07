/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface MRTiledSprite : NSObject {
	CGPoint mPosition;	// 4 = 0x4
	CGSize mHalfSize;	// 12 = 0xc
	float mRotation;	// 20 = 0x14
	CGRect mInnerRect;	// 24 = 0x18
	CGRect mOuterRect;	// 40 = 0x28
	BOOL mPreservesImageAspectRatio;	// 56 = 0x38
	BOOL mIsSealed;	// 57 = 0x39
	NSMutableArray *mTriangles;	// 60 = 0x3c
	float *mVertices;	// 64 = 0x40
	float *mTextureCoordinates;	// 68 = 0x44
	float *mInSpriteCoordinates;	// 72 = 0x48
	NSMutableArray *mMiddleTriangles;	// 76 = 0x4c
	float *mMiddleVertices;	// 80 = 0x50
	float *mMiddleTextureCoordinates;	// 84 = 0x54
	float *mMiddleInSpriteCoordinates;	// 88 = 0x58
	NSMutableArray *mOuterTriangles;	// 92 = 0x5c
	float *mOuterVertices;	// 96 = 0x60
	float *mOuterTextureCoordinates;	// 100 = 0x64
	float *mOuterInSpriteCoordinates;	// 104 = 0x68
	CGSize mSpriteCoordinatesFactor;	// 108 = 0x6c
	CGPoint mSpriteCoordinatesOffset;	// 116 = 0x74
	BOOL mNeedsSpriteCoordinates;	// 124 = 0x7c
	BOOL mNeedsToUpdateSpriteCoordinates;	// 125 = 0x7d
	BOOL mHitIsActive;	// 126 = 0x7e
}
@property(readonly, assign) CGSize halfSize;	// G=0x33306ae9; @synthesize=mHalfSize
@property(assign) BOOL hitIsActive;	// G=0x33306b65; S=0x33306b75; @synthesize=mHitIsActive
@property(readonly, assign) CGRect innerRect;	// G=0x33306b1d; @synthesize=mInnerRect
@property(assign) BOOL needsSpriteCoordinates;	// G=0x33306b85; S=0x33306b95; @synthesize=mNeedsSpriteCoordinates
@property(readonly, assign) CGRect outerRect;	// G=0x33306b41; @synthesize=mOuterRect
@property(readonly, assign) CGPoint position;	// G=0x33306ac5; @synthesize=mPosition
@property(assign) BOOL preservesImageAspectRatio;	// G=0x33306ba5; S=0x33306bb5; @synthesize=mPreservesImageAspectRatio
@property(readonly, assign) float rotation;	// G=0x33306b0d; @synthesize=mRotation
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect context:(id)context;	// 0x33302055
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect outerRect:(CGRect)rect5 context:(id)context;	// 0x333020b5
- (void)dealloc;	// 0x33302d81
- (void)getOpaquePosition:(CGPoint *)position andHalfSize:(CGSize *)size;	// 0x3330694d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix;	// 0x33306821
// declared property getter: - (CGSize)halfSize;	// 0x33306ae9
- (BOOL)hitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33306701
// declared property getter: - (BOOL)hitIsActive;	// 0x33306b65
// declared property getter: - (CGRect)innerRect;	// 0x33306b1d
// declared property getter: - (BOOL)needsSpriteCoordinates;	// 0x33306b85
// declared property getter: - (CGRect)outerRect;	// 0x33306b41
// declared property getter: - (CGPoint)position;	// 0x33306ac5
// declared property getter: - (BOOL)preservesImageAspectRatio;	// 0x33306ba5
- (void)renderDumbImage:(id)image inContext:(id)context;	// 0x33305c99
- (void)renderImage:(id)image inContext:(id)context;	// 0x33306379
- (void)renderImageInner:(id)inner inContext:(id)context;	// 0x33305dc5
- (void)renderImageMiddle:(id)middle inContext:(id)context;	// 0x33305fa1
- (void)renderImageOuter:(id)outer inContext:(id)context;	// 0x3330618d
// declared property getter: - (float)rotation;	// 0x33306b0d
- (void)seal;	// 0x33304c69
// declared property setter: - (void)setHitIsActive:(BOOL)active;	// 0x33306b75
// declared property setter: - (void)setNeedsSpriteCoordinates:(BOOL)coordinates;	// 0x33306b95
// declared property setter: - (void)setPreservesImageAspectRatio:(BOOL)ratio;	// 0x33306bb5
- (void)setSpriteCoordinatesFactor:(CGSize)factor andOffset:(CGPoint)offset;	// 0x3330665d
- (void)subtractOpaqueSpriteWithPosition:(CGPoint)position halfSize:(CGSize)size andRotation:(float)rotation;	// 0x33304669
- (void)subtractSprite:(id)sprite;	// 0x3330449d
- (void)subtractSpriteAtPosition:(CGPoint)position withSize:(CGSize)size zRotation:(float)rotation andOpaqueRect:(CGRect)rect inContext:(id)context;	// 0x33304509
- (void)subtractTriangle:(float [6])triangle fromTriangle:(float [6])triangle2 addTrianglesTo:(id)to;	// 0x333034a1
- (void)updateSpriteCoordinates;	// 0x333057c9
@end

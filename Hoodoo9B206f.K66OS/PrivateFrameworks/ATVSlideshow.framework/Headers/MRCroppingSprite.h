/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MRCroppingSprite : NSObject {
	CGPoint mPosition;	// 4 = 0x4
	CGSize mHalfSize;	// 12 = 0xc
	float mRotation;	// 20 = 0x14
	CGRect mInnerRect;	// 24 = 0x18
	CGRect mOuterRect;	// 40 = 0x28
	BOOL mPreservesImageAspectRatio;	// 56 = 0x38
	BOOL mHitIsActive;	// 57 = 0x39
	BOOL mNeedsInSpriteCoordinates;	// 58 = 0x3a
	CGSize mSpriteCoordinatesFactor;	// 60 = 0x3c
	CGPoint mSpriteCoordinatesOffset;	// 68 = 0x44
	unsigned char mMeshType;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) CGSize halfSize;	// G=0x30a1cd0d; @synthesize=mHalfSize
@property(assign, nonatomic) BOOL hitIsActive;	// G=0x30a1cda1; S=0x30a1cdb1; @synthesize=mHitIsActive
@property(assign, nonatomic) CGRect innerRect;	// G=0x30a1cd39; S=0x30a1a871; @synthesize=mInnerRect
@property(assign, nonatomic) unsigned char meshType;	// G=0x30a1ce41; S=0x30a1ce51; @synthesize=mMeshType
@property(assign, nonatomic) BOOL needsInSpriteCoordinates;	// G=0x30a1cdc1; S=0x30a1cdd1; @synthesize=mNeedsInSpriteCoordinates
@property(assign, nonatomic) CGRect outerRect;	// G=0x30a1cd5d; S=0x30a1a935; @synthesize=mOuterRect
@property(readonly, assign, nonatomic) CGPoint position;	// G=0x30a1ccf1; @synthesize=mPosition
@property(assign, nonatomic) BOOL preservesImageAspectRatio;	// G=0x30a1cd81; S=0x30a1cd91; @synthesize=mPreservesImageAspectRatio
@property(readonly, assign, nonatomic) float rotation;	// G=0x30a1cd29; @synthesize=mRotation
@property(assign, nonatomic) CGSize spriteCoordinatesFactor;	// G=0x30a1cde1; S=0x30a1cdfd; @synthesize=mSpriteCoordinatesFactor
@property(assign, nonatomic) CGPoint spriteCoordinatesOffset;	// G=0x30a1ce11; S=0x30a1ce2d; @synthesize=mSpriteCoordinatesOffset
+ (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size;	// 0x30a1c3cd
+ (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1c405
+ (void)renderImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size;	// 0x30a1c5bd
+ (void)renderImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size withReferenceAspectRatio:(float)referenceAspectRatio andJustifications:(CGPoint)justifications;	// 0x30a1c9fd
+ (void)renderImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1c5f5
+ (void)renderImage:(id)image withMask:(id)mask inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1c7b1
- (id)init;	// 0x30a1a551
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation context:(id)context;	// 0x30a1a5e9
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect context:(id)context;	// 0x30a1a639
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect outerRect:(CGRect)rect5 context:(id)context;	// 0x30a1a6b9
- (void)fakeRenderInContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1a7b5
- (void)getOpaquePosition:(CGPoint *)position andHalfSize:(CGSize *)size;	// 0x30a1a9f9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix;	// 0x30a1c29d
// declared property getter: - (CGSize)halfSize;	// 0x30a1cd0d
- (BOOL)hitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x30a1c169
// declared property getter: - (BOOL)hitIsActive;	// 0x30a1cda1
// declared property getter: - (CGRect)innerRect;	// 0x30a1cd39
// declared property getter: - (unsigned char)meshType;	// 0x30a1ce41
// declared property getter: - (BOOL)needsInSpriteCoordinates;	// 0x30a1cdc1
// declared property getter: - (CGRect)outerRect;	// 0x30a1cd5d
// declared property getter: - (CGPoint)position;	// 0x30a1ccf1
// declared property getter: - (BOOL)preservesImageAspectRatio;	// 0x30a1cd81
- (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size;	// 0x30a1ab75
- (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1abad
- (void)renderImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size;	// 0x30a1ac31
- (void)renderImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size withReferenceAspectRatio:(float)referenceAspectRatio andJustifications:(CGPoint)justifications;	// 0x30a1ad6d
- (void)renderImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1ac69
- (void)renderImage:(id)image withMask:(id)mask inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1aced
- (void)renderImageInner:(id)inner inContext:(id)context;	// 0x30a1adf1
- (void)renderImageInner:(id)inner inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1c055
- (void)renderImageMiddle:(id)middle inContext:(id)context;	// 0x30a1b201
- (void)renderImageMiddle:(id)middle inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1c0b1
- (void)renderImageOuter:(id)outer inContext:(id)context;	// 0x30a1b7a9
- (void)renderImageOuter:(id)outer inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x30a1c10d
- (void)reset;	// 0x30a1a759
// declared property getter: - (float)rotation;	// 0x30a1cd29
// declared property setter: - (void)setHitIsActive:(BOOL)active;	// 0x30a1cdb1
// declared property setter: - (void)setInnerRect:(CGRect)rect;	// 0x30a1a871
// declared property setter: - (void)setMeshType:(unsigned char)type;	// 0x30a1ce51
// declared property setter: - (void)setNeedsInSpriteCoordinates:(BOOL)spriteCoordinates;	// 0x30a1cdd1
// declared property setter: - (void)setOuterRect:(CGRect)rect;	// 0x30a1a935
// declared property setter: - (void)setPreservesImageAspectRatio:(BOOL)ratio;	// 0x30a1cd91
// declared property setter: - (void)setSpriteCoordinatesFactor:(CGSize)factor;	// 0x30a1cdfd
// declared property setter: - (void)setSpriteCoordinatesOffset:(CGPoint)offset;	// 0x30a1ce2d
// declared property getter: - (CGSize)spriteCoordinatesFactor;	// 0x30a1cde1
// declared property getter: - (CGPoint)spriteCoordinatesOffset;	// 0x30a1ce11
@end

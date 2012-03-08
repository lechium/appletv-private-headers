/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADEffect.h"


__attribute__((visibility("hidden")))
@interface OADReflectionEffect : OADEffect {
@private
	float mBlurRadius;	// 8 = 0x8
	float mStartOpacity;	// 12 = 0xc
	float mStartPosition;	// 16 = 0x10
	float mEndOpacity;	// 20 = 0x14
	float mEndPosition;	// 24 = 0x18
	float mDistance;	// 28 = 0x1c
	float mDirection;	// 32 = 0x20
	float mFadeDirection;	// 36 = 0x24
	float mXScale;	// 40 = 0x28
	float mYScale;	// 44 = 0x2c
	float mXSkew;	// 48 = 0x30
	float mYSkew;	// 52 = 0x34
	int mAlignment;	// 56 = 0x38
	BOOL mRotateWithShape;	// 60 = 0x3c
}
@property(assign) int alignment;	// G=0x329d9935; S=0x32905821; converted property
@property(assign) float blurRadius;	// G=0x329d9825; S=0x32905411; converted property
@property(assign) float direction;	// G=0x329d9895; S=0x32905451; converted property
@property(assign) float distance;	// G=0x329d9885; S=0x32905441; converted property
@property(assign) float endOpacity;	// G=0x329d9865; S=0x32906e5d; converted property
@property(assign) float endPosition;	// G=0x329d9875; S=0x32905431; converted property
@property(assign) float fadeDirection;	// G=0x329d98a5; S=0x329d98b5; converted property
@property(assign) BOOL rotateWithShape;	// G=0x329d9945; S=0x32905471; converted property
@property(assign) float startOpacity;	// G=0x329d9835; S=0x32905421; converted property
@property(assign) float startPosition;	// G=0x329d9845; S=0x329d9855; converted property
@property(assign) float xScale;	// G=0x329d98c5; S=0x329d98d5; converted property
@property(assign) float xSkew;	// G=0x329d98f5; S=0x329d9905; converted property
@property(assign) float yScale;	// G=0x329d98e5; S=0x32905461; converted property
@property(assign) float ySkew;	// G=0x329d9915; S=0x329d9925; converted property
- (id)init;	// 0x32904ed5
// converted property getter: - (int)alignment;	// 0x329d9935
// converted property getter: - (float)blurRadius;	// 0x329d9825
- (id)copyWithZone:(NSZone *)zone;	// 0x329d9e41
// converted property getter: - (float)direction;	// 0x329d9895
// converted property getter: - (float)distance;	// 0x329d9885
// converted property getter: - (float)endOpacity;	// 0x329d9865
// converted property getter: - (float)endPosition;	// 0x329d9875
// converted property getter: - (float)fadeDirection;	// 0x329d98a5
- (unsigned)hash;	// 0x329d9c91
- (BOOL)isEqual:(id)equal;	// 0x329d9955
// converted property getter: - (BOOL)rotateWithShape;	// 0x329d9945
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x32905821
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x32905411
// converted property setter: - (void)setDirection:(float)direction;	// 0x32905451
// converted property setter: - (void)setDistance:(float)distance;	// 0x32905441
// converted property setter: - (void)setEndOpacity:(float)opacity;	// 0x32906e5d
// converted property setter: - (void)setEndPosition:(float)position;	// 0x32905431
// converted property setter: - (void)setFadeDirection:(float)direction;	// 0x329d98b5
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x32905471
// converted property setter: - (void)setStartOpacity:(float)opacity;	// 0x32905421
// converted property setter: - (void)setStartPosition:(float)position;	// 0x329d9855
- (void)setStyleColor:(id)color;	// 0x329d9821
// converted property setter: - (void)setXScale:(float)scale;	// 0x329d98d5
// converted property setter: - (void)setXSkew:(float)skew;	// 0x329d9905
// converted property setter: - (void)setYScale:(float)scale;	// 0x32905461
// converted property setter: - (void)setYSkew:(float)skew;	// 0x329d9925
// converted property getter: - (float)startOpacity;	// 0x329d9835
// converted property getter: - (float)startPosition;	// 0x329d9845
// converted property getter: - (float)xScale;	// 0x329d98c5
// converted property getter: - (float)xSkew;	// 0x329d98f5
// converted property getter: - (float)yScale;	// 0x329d98e5
// converted property getter: - (float)ySkew;	// 0x329d9915
@end


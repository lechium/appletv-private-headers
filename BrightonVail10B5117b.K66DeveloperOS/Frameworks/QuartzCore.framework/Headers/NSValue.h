/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSValue.h> // Unknown library


@interface NSValue (CAColorMatrixAdditions)
+ (id)valueWithCAColorMatrix:(CAColorMatrix)cacolorMatrix;	// 0x32af8b71
- (CAColorMatrix)CAColorMatrixValue;	// 0x32af8c05
@end

@interface NSValue (CATransform3DAdditions)
+ (id)valueWithCATransform3D:(CATransform3D)catransform3D;	// 0x32ae37e9
- (CATransform3D)CATransform3DValue;	// 0x32ae386d
@end

@interface NSValue (CAPoint3DAdditions)
+ (id)valueWithCAPoint3D:(CAPoint3D)capoint3D;	// 0x32af8c21
- (CAPoint3D)CAPoint3DValue;	// 0x32af8c59
@end

@interface NSValue (CARenderValue)
- (Object *)CA_copyRenderValue;	// 0x32adcc39
@end

@interface NSValue (CAAnimatableValue)
- (id)CA_addValue:(id)value multipliedBy:(int)by;	// 0x32b79a85
- (float)CA_distanceToValue:(id)value;	// 0x32b79f01
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x32ae31a1
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x32b79cc5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAPropertyAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, NSArray;

@interface CAKeyframeAnimation : CAPropertyAnimation {
}
@property(copy) NSArray *biasValues;	// G=0x32af4bf5; S=0x32af4c0d; 
@property(copy) NSString *calculationMode;	// G=0x32a58aa5; S=0x32a58935; 
@property(copy) NSArray *continuityValues;	// G=0x32af4bc5; S=0x32af4bdd; 
@property(copy) NSArray *keyTimes;	// G=0x32a58b35; S=0x32a74f3d; 
@property(assign) CGPathRef path;	// G=0x32a58b1d; S=0x32a74f6d; 
@property(copy) NSString *rotationMode;	// G=0x32a58b65; S=0x32af4c25; 
@property(copy) NSArray *tensionValues;	// G=0x32af4b95; S=0x32af4bad; 
@property(copy) NSArray *timingFunctions;	// G=0x32a58b4d; S=0x32a74f55; 
@property(copy) NSArray *values;	// G=0x32a589fd; S=0x32a5891d; 
- (void)CA_prepareRenderValue;	// 0x32a5898d
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x32a58a15
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x32af3a11
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x32af3d91
// declared property getter: - (id)biasValues;	// 0x32af4bf5
// declared property getter: - (id)calculationMode;	// 0x32a58aa5
// declared property getter: - (id)continuityValues;	// 0x32af4bc5
// declared property getter: - (id)keyTimes;	// 0x32a58b35
// declared property getter: - (CGPathRef)path;	// 0x32a58b1d
// declared property getter: - (id)rotationMode;	// 0x32a58b65
// declared property setter: - (void)setBiasValues:(id)values;	// 0x32af4c0d
// declared property setter: - (void)setCalculationMode:(id)mode;	// 0x32a58935
// declared property setter: - (void)setContinuityValues:(id)values;	// 0x32af4bdd
// declared property setter: - (void)setKeyTimes:(id)times;	// 0x32a74f3d
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x32a74f6d
// declared property setter: - (void)setRotationMode:(id)mode;	// 0x32af4c25
// declared property setter: - (void)setTensionValues:(id)values;	// 0x32af4bad
// declared property setter: - (void)setTimingFunctions:(id)functions;	// 0x32a74f55
// declared property setter: - (void)setValues:(id)values;	// 0x32a5891d
// declared property getter: - (id)tensionValues;	// 0x32af4b95
// declared property getter: - (id)timingFunctions;	// 0x32a58b4d
// declared property getter: - (id)values;	// 0x32a589fd
@end


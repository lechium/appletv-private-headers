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
@property(copy) NSArray *biasValues;	// G=0x3134b8b9; S=0x3134b8a1; 
@property(copy) NSString *calculationMode;	// G=0x312c7d71; S=0x312c7739; 
@property(copy) NSArray *continuityValues;	// G=0x3134b8e9; S=0x3134b8d1; 
@property(copy) NSArray *keyTimes;	// G=0x312c7e1d; S=0x312e77c5; 
@property(assign) CGPathRef path;	// G=0x312c7ddd; S=0x312e77f5; 
@property(copy) NSString *rotationMode;	// G=0x312c7e4d; S=0x3134b889; 
@property(copy) NSArray *tensionValues;	// G=0x3134b919; S=0x3134b901; 
@property(copy) NSArray *timingFunctions;	// G=0x312c7e35; S=0x312e77dd; 
@property(copy) NSArray *values;	// G=0x312c77ed; S=0x312c7721; 
- (void)CA_prepareRenderValue;	// 0x312c7785
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x312c7805
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x3134b931
// declared property getter: - (id)biasValues;	// 0x3134b8b9
// declared property getter: - (id)calculationMode;	// 0x312c7d71
// declared property getter: - (id)continuityValues;	// 0x3134b8e9
// declared property getter: - (id)keyTimes;	// 0x312c7e1d
// declared property getter: - (CGPathRef)path;	// 0x312c7ddd
// declared property getter: - (id)rotationMode;	// 0x312c7e4d
// declared property setter: - (void)setBiasValues:(id)values;	// 0x3134b8a1
// declared property setter: - (void)setCalculationMode:(id)mode;	// 0x312c7739
// declared property setter: - (void)setContinuityValues:(id)values;	// 0x3134b8d1
// declared property setter: - (void)setKeyTimes:(id)times;	// 0x312e77c5
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x312e77f5
// declared property setter: - (void)setRotationMode:(id)mode;	// 0x3134b889
// declared property setter: - (void)setTensionValues:(id)values;	// 0x3134b901
// declared property setter: - (void)setTimingFunctions:(id)functions;	// 0x312e77dd
// declared property setter: - (void)setValues:(id)values;	// 0x312c7721
// declared property getter: - (id)tensionValues;	// 0x3134b919
// declared property getter: - (id)timingFunctions;	// 0x312c7e35
// declared property getter: - (id)values;	// 0x312c77ed
@end

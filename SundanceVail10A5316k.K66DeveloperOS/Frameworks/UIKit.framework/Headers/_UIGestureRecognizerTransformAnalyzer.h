/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerTransformAnalyzer : NSObject {
@private
	float _lowPassTranslationMagnitudeDelta;	// 4 = 0x4
	float _lowPassScaleDelta;	// 8 = 0x8
	float _lowPassRotationDelta;	// 12 = 0xc
	float _translationWeight;	// 16 = 0x10
	float _pinchingWeight;	// 20 = 0x14
	float _rotationWeight;	// 24 = 0x18
	int _dominantComponent;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) int dominantComponent;	// G=0x301f22c1; @synthesize=_dominantComponent
@property(assign, nonatomic) float pinchingWeight;	// G=0x3032c229; S=0x3012c3b9; @synthesize=_pinchingWeight
@property(assign, nonatomic) float rotationWeight;	// G=0x3032c239; S=0x3012c3c9; @synthesize=_rotationWeight
@property(assign, nonatomic) float translationWeight;	// G=0x3032c219; S=0x3012c3d9; @synthesize=_translationWeight
- (id)init;	// 0x3012c359
- (void)analyzeTouches:(id)touches;	// 0x301f1cc9
// declared property getter: - (int)dominantComponent;	// 0x301f22c1
// declared property getter: - (float)pinchingWeight;	// 0x3032c229
- (void)reset;	// 0x301cdcd5
// declared property getter: - (float)rotationWeight;	// 0x3032c239
// declared property setter: - (void)setPinchingWeight:(float)weight;	// 0x3012c3b9
// declared property setter: - (void)setRotationWeight:(float)weight;	// 0x3012c3c9
// declared property setter: - (void)setTranslationWeight:(float)weight;	// 0x3012c3d9
// declared property getter: - (float)translationWeight;	// 0x3032c219
@end


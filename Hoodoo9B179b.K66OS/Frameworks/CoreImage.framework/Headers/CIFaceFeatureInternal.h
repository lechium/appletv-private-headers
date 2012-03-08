/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFaceFeature.h"


__attribute__((visibility("hidden")))
@interface CIFaceFeatureInternal : CIFaceFeature {
@private
	CGRect bounds;	// 4 = 0x4
	BOOL hasLeftEyePosition;	// 20 = 0x14
	CGPoint leftEyePosition;	// 24 = 0x18
	BOOL hasRightEyePosition;	// 32 = 0x20
	CGPoint rightEyePosition;	// 36 = 0x24
	BOOL hasMouthPosition;	// 44 = 0x2c
	CGPoint mouthPosition;	// 48 = 0x30
}
@property(assign) CGRect bounds;	// G=0x36d9c8a9; S=0x36d9c8cd; @synthesize
@property(assign) BOOL hasLeftEyePosition;	// G=0x36d9c8e9; S=0x36d9c8f9; @synthesize
@property(assign) BOOL hasMouthPosition;	// G=0x36d9c989; S=0x36d9c999; @synthesize
@property(assign) BOOL hasRightEyePosition;	// G=0x36d9c939; S=0x36d9c949; @synthesize
@property(assign) CGPoint leftEyePosition;	// G=0x36d9c909; S=0x36d9c925; @synthesize
@property(assign) CGPoint mouthPosition;	// G=0x36d9c9a9; S=0x36d9c9c5; @synthesize
@property(assign) CGPoint rightEyePosition;	// G=0x36d9c959; S=0x36d9c975; @synthesize
+ (id)faceFeatureWithBounds:(CGRect)bounds;	// 0x36d9c54d
+ (id)faceFeaturesWithBoundsArray:(const CGRect *)boundsArray count:(unsigned)count;	// 0x36d9c5a5
- (id)initWithBounds:(CGRect)bounds;	// 0x36d9c6f1
- (id)initWithBounds:(CGRect)bounds hasLeftEyePosition:(BOOL)position leftEyePosition:(CGPoint)position3 hasRightEyePosition:(BOOL)position4 rightEyePosition:(CGPoint)position5 hasMouthPosition:(BOOL)position6 mouthPosition:(CGPoint)position7;	// 0x36d9c7c9
- (id).cxx_construct;	// 0x36d9c9d9
// declared property getter: - (CGRect)bounds;	// 0x36d9c8a9
// declared property getter: - (BOOL)hasLeftEyePosition;	// 0x36d9c8e9
// declared property getter: - (BOOL)hasMouthPosition;	// 0x36d9c989
// declared property getter: - (BOOL)hasRightEyePosition;	// 0x36d9c939
// declared property getter: - (CGPoint)leftEyePosition;	// 0x36d9c909
// declared property getter: - (CGPoint)mouthPosition;	// 0x36d9c9a9
// declared property getter: - (CGPoint)rightEyePosition;	// 0x36d9c959
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x36d9c8cd
// declared property setter: - (void)setHasLeftEyePosition:(BOOL)position;	// 0x36d9c8f9
// declared property setter: - (void)setHasMouthPosition:(BOOL)position;	// 0x36d9c999
// declared property setter: - (void)setHasRightEyePosition:(BOOL)position;	// 0x36d9c949
// declared property setter: - (void)setLeftEyePosition:(CGPoint)position;	// 0x36d9c925
// declared property setter: - (void)setMouthPosition:(CGPoint)position;	// 0x36d9c9c5
// declared property setter: - (void)setRightEyePosition:(CGPoint)position;	// 0x36d9c975
@end


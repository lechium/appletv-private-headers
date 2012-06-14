/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDAnimateScaleBehavior.h"
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
@private
	NSString *mPath;	// 36 = 0x24
	BOOL mHasAngle;	// 40 = 0x28
	double mAngle;	// 44 = 0x2c
	BOOL mHasPointType;	// 52 = 0x34
	int mPointType;	// 56 = 0x38
	BOOL mHasOriginType;	// 60 = 0x3c
	int mOriginType;	// 64 = 0x40
	BOOL mHasRotationCenter;	// 68 = 0x44
	CGPoint mRotationCenter;	// 72 = 0x48
}
@property(assign) double angle;	// G=0x3128613d; S=0x31286155; converted property
@property(assign) int originType;	// G=0x312861cd; S=0x312861dd; converted property
@property(retain) id path;	// G=0x3128611d; S=0x31145acd; converted property
@property(assign) int pointType;	// G=0x3128618d; S=0x3128619d; converted property
@property(assign) CGPoint rotationCenter;	// G=0x3128620d; S=0x31145db5; converted property
- (id).cxx_construct;	// 0x311452cd
// converted property getter: - (double)angle;	// 0x3128613d
- (void)dealloc;	// 0x311467bd
- (BOOL)hasAngle;	// 0x3128612d
- (BOOL)hasOriginType;	// 0x312861bd
- (BOOL)hasPath;	// 0x31286105
- (BOOL)hasPointType;	// 0x3128617d
- (BOOL)hasRotationCenter;	// 0x312861fd
// converted property getter: - (int)originType;	// 0x312861cd
// converted property getter: - (id)path;	// 0x3128611d
// converted property getter: - (int)pointType;	// 0x3128618d
// converted property getter: - (CGPoint)rotationCenter;	// 0x3128620d
// converted property setter: - (void)setAngle:(double)angle;	// 0x31286155
// converted property setter: - (void)setOriginType:(int)type;	// 0x312861dd
// converted property setter: - (void)setPath:(id)path;	// 0x31145acd
// converted property setter: - (void)setPointType:(int)type;	// 0x3128619d
// converted property setter: - (void)setRotationCenter:(CGPoint)center;	// 0x31145db5
@end


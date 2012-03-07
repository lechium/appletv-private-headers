/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDBar2DType.h"


__attribute__((visibility("hidden")))
@interface CHDBar3DType : CHDBar2DType {
@private
	int mGapDepth;	// 40 = 0x28
	int mShapeType;	// 44 = 0x2c
}
@property(assign) int gapDepth;	// G=0x30e46735; S=0x30db4445; converted property
@property(assign) int shapeType;	// G=0x30dc98e9; S=0x30db4499; converted property
+ (bool)is3DType;	// 0x30dc9b09
- (id)initWithChart:(id)chart;	// 0x30db43f5
// converted property getter: - (int)gapDepth;	// 0x30e46735
// converted property setter: - (void)setGapDepth:(int)depth;	// 0x30db4445
// converted property setter: - (void)setShapeType:(int)type;	// 0x30db4499
// converted property getter: - (int)shapeType;	// 0x30dc98e9
@end

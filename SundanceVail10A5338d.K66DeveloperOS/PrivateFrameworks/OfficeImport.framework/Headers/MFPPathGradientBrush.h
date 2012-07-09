/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPGradientBrush.h"

@class TSUColor, NSArray;

@interface MFPPathGradientBrush : MFPGradientBrush {
	TSUColor *mCenterColor;	// 52 = 0x34
	CGPoint mCenterPoint;	// 56 = 0x38
	NSArray *mSurroundColors;	// 64 = 0x40
	CGPathRef mPath;	// 68 = 0x44
}
- (id).cxx_construct;	// 0x33c515ad
- (void)createShading;	// 0x33c514bd
- (void)dealloc;	// 0x33c51399
- (id)endColor;	// 0x33c5158d
- (void)setCenterColor:(id)color;	// 0x33c5140d
- (void)setCenterPoint:(CGPoint)point;	// 0x33c51449
- (void)setPath:(CGPathRef)path;	// 0x33c51499
- (void)setSurroundColors:(id)colors;	// 0x33c5145d
- (id)startColor;	// 0x33c5157d
@end

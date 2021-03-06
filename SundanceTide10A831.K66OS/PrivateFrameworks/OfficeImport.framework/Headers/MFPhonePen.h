/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPen.h"


@interface MFPhonePen : MFPen {
	float m_PixelSize;	// 20 = 0x14
}
+ (id)penWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double *)array LPToDPTransform:(CGAffineTransform)dptransform;	// 0x36a931bd
- (id)initWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double *)array;	// 0x36a93279
- (void)applyDashedLines;	// 0x36b1b891
- (void)applyLineCapStyle;	// 0x36b21081
- (void)applyLineJoinStyle:(id)style;	// 0x36b210c1
- (void)strokePath:(id)path :(CGPathRef)arg2;	// 0x36b1b439
@end


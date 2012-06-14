/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADAdjustedColor : OADColor {
@private
	OADColor *mBaseColor;	// 8 = 0x8
	int mAdjustmentType;	// 12 = 0xc
	unsigned char mAdjustmentParam;	// 16 = 0x10
	BOOL mInvert;	// 17 = 0x11
	BOOL mInvert128;	// 18 = 0x12
	BOOL mGray;	// 19 = 0x13
}
- (id)initWithBaseColor:(id)baseColor adjustmentType:(int)type adjustmentParam:(unsigned char)param invert:(BOOL)invert invert128:(BOOL)a128 gray:(BOOL)gray;	// 0x31087271
- (unsigned char)adjustmentParam;	// 0x31088c31
- (int)adjustmentType;	// 0x31088c41
- (id)baseColor;	// 0x31088b61
- (id)copyWithZone:(NSZone *)zone;	// 0x3124d029
- (void)dealloc;	// 0x3108c73d
- (BOOL)gray;	// 0x31088c21
- (unsigned)hash;	// 0x3124d141
- (BOOL)invert;	// 0x31088c51
- (BOOL)invert128;	// 0x31088c61
- (BOOL)isEqual:(id)equal;	// 0x3124d1dd
@end


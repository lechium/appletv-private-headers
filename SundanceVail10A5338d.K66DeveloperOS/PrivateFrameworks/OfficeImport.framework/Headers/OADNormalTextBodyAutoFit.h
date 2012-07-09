/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextBodyAutoFit.h"


@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit {
	float mFontScalePercent;	// 8 = 0x8
	float mLineSpacingReductionPercent;	// 12 = 0xc
}
- (id)initWithFontScalePercent:(float)fontScalePercent lineSpacingReductionPercent:(float)percent;	// 0x33a8d2ad
- (float)fontScalePercent;	// 0x33ba7ed9
- (unsigned)hash;	// 0x33ba7ef9
- (BOOL)isEqual:(id)equal;	// 0x33ba7f61
- (float)lineSpacingReductionPercent;	// 0x33ba7ee9
@end

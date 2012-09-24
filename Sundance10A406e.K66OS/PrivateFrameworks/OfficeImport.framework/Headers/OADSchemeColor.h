/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


@interface OADSchemeColor : OADColor {
	int mIndex;	// 8 = 0x8
}
+ (id)schemeColorWithIndex:(int)index;	// 0x34ff401d
- (id)initWithSchemeColorIndex:(int)schemeColorIndex;	// 0x34e5d3cd
- (id)copyWithZone:(NSZone *)zone;	// 0x34f96865
- (unsigned)hash;	// 0x34ec8549
- (BOOL)isEqual:(id)equal;	// 0x34ec84a5
- (int)schemeColorIndex;	// 0x34ed0dd9
@end

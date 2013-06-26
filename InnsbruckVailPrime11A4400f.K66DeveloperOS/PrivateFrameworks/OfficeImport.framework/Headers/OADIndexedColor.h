/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


@interface OADIndexedColor : OADColor {
	unsigned mIndex;	// 8 = 0x8
}
+ (id)indexedColorWithIndex:(unsigned)index;	// 0x317f252d
- (id)initWithIndex:(unsigned)index;	// 0x317ec0e1
- (id)colorFromPalette:(id)palette;	// 0x318ed6f1
- (id)copyWithZone:(NSZone *)zone;	// 0x317f46c9
- (unsigned)hash;	// 0x318ed715
- (unsigned)index;	// 0x31800391
- (BOOL)isEqual:(id)equal;	// 0x318ed751
@end

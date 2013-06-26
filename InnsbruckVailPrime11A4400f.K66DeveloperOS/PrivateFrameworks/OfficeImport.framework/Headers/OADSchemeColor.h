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
+ (id)schemeColorWithIndex:(int)index;	// 0x3186a201
- (id)initWithSchemeColorIndex:(int)schemeColorIndex;	// 0x316b128d
- (id)copyWithZone:(NSZone *)zone;	// 0x3180e349
- (unsigned)hash;	// 0x316daad1
- (BOOL)isEqual:(id)equal;	// 0x316da845
- (int)schemeColorIndex;	// 0x31716119
@end

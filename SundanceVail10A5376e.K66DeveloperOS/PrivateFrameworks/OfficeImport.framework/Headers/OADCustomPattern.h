/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPattern.h"
#import "OfficeImport-Structs.h"

@class OADBlipRef;

@interface OADCustomPattern : OADPattern {
	OADBlipRef *mBlipRef;	// 12 = 0xc
	BOOL mIsBlipRefOverridden;	// 16 = 0x10
}
@property(retain) id blipRef;	// G=0x37148729; S=0x370a7f65; converted property
+ (id)defaultProperties;	// 0x370a7ed5
- (id)initWithDefaults;	// 0x370a7f1d
// converted property getter: - (id)blipRef;	// 0x37148729
- (id)copyWithZone:(NSZone *)zone;	// 0x3714868d
- (void)dealloc;	// 0x370aa401
- (unsigned)hash;	// 0x3714878d
- (BOOL)isBlipRefOverridden;	// 0x37148759
- (BOOL)isEqual:(id)equal;	// 0x371487f1
// converted property setter: - (void)setBlipRef:(id)ref;	// 0x370a7f65
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"


@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
	int _externalType;	// 12 = 0xc
	unsigned _externalPrecision;	// 16 = 0x10
	int _externalScale;	// 20 = 0x14
}
@property(assign) unsigned externalPrecision;	// G=0x33d50a81; S=0x33d50a91; converted property
@property(assign) int externalScale;	// G=0x33d50aa1; S=0x33d50ab1; converted property
@property(assign) int externalType;	// G=0x33d50a61; S=0x33d50a71; converted property
- (id)initWithProperty:(id)property;	// 0x33d50931
- (id)attribute;	// 0x33d50a51
- (id)columnDefinition;	// 0x33d50bf9
// converted property getter: - (unsigned)externalPrecision;	// 0x33d50a81
// converted property getter: - (int)externalScale;	// 0x33d50aa1
// converted property getter: - (int)externalType;	// 0x33d50a61
- (BOOL)isEqual:(id)equal;	// 0x33d509a1
// converted property setter: - (void)setExternalPrecision:(unsigned)precision;	// 0x33d50a91
// converted property setter: - (void)setExternalScale:(int)scale;	// 0x33d50ab1
// converted property setter: - (void)setExternalType:(int)type;	// 0x33d50a71
- (id)sqlType;	// 0x33d50ac1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"


__attribute__((visibility("hidden")))
@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
@private
	int _externalType;	// 12 = 0xc
	unsigned _externalPrecision;	// 16 = 0x10
	int _externalScale;	// 20 = 0x14
}
@property(assign) unsigned externalPrecision;	// G=0x32b29ea9; S=0x32b29eb9; converted property
@property(assign) int externalScale;	// G=0x32b29ec9; S=0x32b29ed9; converted property
@property(assign) int externalType;	// G=0x32b29e89; S=0x32b29e99; converted property
- (id)initWithProperty:(id)property;	// 0x32b29ee9
- (id)attribute;	// 0x32b2a101
- (id)columnDefinition;	// 0x32b29f5d
// converted property getter: - (unsigned)externalPrecision;	// 0x32b29ea9
// converted property getter: - (int)externalScale;	// 0x32b29ec9
// converted property getter: - (int)externalType;	// 0x32b29e89
- (BOOL)isEqual:(id)equal;	// 0x32b2a111
// converted property setter: - (void)setExternalPrecision:(unsigned)precision;	// 0x32b29eb9
// converted property setter: - (void)setExternalScale:(int)scale;	// 0x32b29ed9
// converted property setter: - (void)setExternalType:(int)type;	// 0x32b29e99
- (id)sqlType;	// 0x32b29fc5
@end


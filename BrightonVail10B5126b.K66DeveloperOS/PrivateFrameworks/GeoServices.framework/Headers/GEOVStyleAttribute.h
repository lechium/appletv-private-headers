/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"


__attribute__((visibility("hidden")))
@interface GEOVStyleAttribute : PBCodable {
	int _intValue;	// 4 = 0x4
	unsigned _key;	// 8 = 0x8
	XXStruct_ec15KC _has;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL hasIntValue;	// G=0x33f5c1f9; S=0x33fefc51; 
@property(assign, nonatomic) int intValue;	// G=0x33f5c20d; S=0x33fefc29; @synthesize=_intValue
@property(assign, nonatomic) unsigned key;	// G=0x33f5c1e9; S=0x33feff71; @synthesize=_key
- (void)copyTo:(id)to;	// 0x33fefe19
- (void)dealloc;	// 0x33f5cc61
- (id)description;	// 0x33fefc6d
- (id)dictionaryRepresentation;	// 0x33fefcdd
// declared property getter: - (BOOL)hasIntValue;	// 0x33f5c1f9
- (unsigned)hash;	// 0x33feff19
// declared property getter: - (int)intValue;	// 0x33f5c20d
- (BOOL)isEqual:(id)equal;	// 0x33fefe8d
// declared property getter: - (unsigned)key;	// 0x33f5c1e9
- (BOOL)readFrom:(id)from;	// 0x33fefda5
// declared property setter: - (void)setHasIntValue:(BOOL)value;	// 0x33fefc51
// declared property setter: - (void)setIntValue:(int)value;	// 0x33fefc29
// declared property setter: - (void)setKey:(unsigned)key;	// 0x33feff71
- (void)writeTo:(id)to;	// 0x33fefdb1
@end

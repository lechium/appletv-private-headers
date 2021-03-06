/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

@interface GEOIndexQueryNode : PBCodable {
	NSString *_field;	// 4 = 0x4
	NSMutableArray *_operands;	// 8 = 0x8
	int _type;	// 12 = 0xc
	NSString *_value;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *field;	// G=0x33fcc1f5; S=0x33fcc205; @synthesize=_field
@property(readonly, assign, nonatomic) BOOL hasField;	// G=0x33fcb735; 
@property(readonly, assign, nonatomic) BOOL hasValue;	// G=0x33fcb74d; 
@property(retain, nonatomic) NSMutableArray *operands;	// G=0x33fcc235; S=0x33fcc245; @synthesize=_operands
@property(assign, nonatomic) int type;	// G=0x33fcc1d5; S=0x33fcc1e5; @synthesize=_type
@property(retain, nonatomic) NSString *value;	// G=0x33fcc215; S=0x33fcc225; @synthesize=_value
- (void)addOperands:(id)operands;	// 0x33fcb785
- (void)clearOperands;	// 0x33fcb765
- (void)copyTo:(id)to;	// 0x33fcbf41
- (void)dealloc;	// 0x33fcb6c9
- (id)description;	// 0x33fcb831
- (id)dictionaryRepresentation;	// 0x33fcb8a1
// declared property getter: - (id)field;	// 0x33fcc1f5
// declared property getter: - (BOOL)hasField;	// 0x33fcb735
// declared property getter: - (BOOL)hasValue;	// 0x33fcb74d
- (unsigned)hash;	// 0x33fcc149
- (BOOL)isEqual:(id)equal;	// 0x33fcc061
// declared property getter: - (id)operands;	// 0x33fcc235
- (id)operandsAtIndex:(unsigned)index;	// 0x33fcb811
- (unsigned)operandsCount;	// 0x33fcb7f1
- (BOOL)readFrom:(id)from;	// 0x33fcbd85
// declared property setter: - (void)setField:(id)field;	// 0x33fcc205
// declared property setter: - (void)setOperands:(id)operands;	// 0x33fcc245
// declared property setter: - (void)setType:(int)type;	// 0x33fcc1e5
// declared property setter: - (void)setValue:(id)value;	// 0x33fcc225
// declared property getter: - (int)type;	// 0x33fcc1d5
// declared property getter: - (id)value;	// 0x33fcc215
- (void)writeTo:(id)to;	// 0x33fcbd91
@end


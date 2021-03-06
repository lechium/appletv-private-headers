/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOStructuredAddress, NSMutableArray;

@interface GEOAddress : PBCodable {
	NSMutableArray *_formattedAddressLines;	// 4 = 0x4
	int _formattedAddressType;	// 8 = 0x8
	GEOStructuredAddress *_structuredAddress;	// 12 = 0xc
	XXStruct_ec15KC _has;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;	// G=0x33f6a871; S=0x33f6ea71; @synthesize=_formattedAddressLines
@property(assign, nonatomic) int formattedAddressType;	// G=0x33f874f9; S=0x33f87521; @synthesize=_formattedAddressType
@property(assign, nonatomic) BOOL hasFormattedAddressType;	// G=0x33f87565; S=0x33f87549; 
@property(readonly, assign, nonatomic) BOOL hasStructuredAddress;	// G=0x33f874e1; 
@property(retain, nonatomic) GEOStructuredAddress *structuredAddress;	// G=0x33f711cd; S=0x33f6ea81; @synthesize=_structuredAddress
- (id)initWithAddressString:(id)addressString;	// 0x33f7a1c1
- (void)addFormattedAddressLine:(id)line;	// 0x33f6a0c1
- (id)addressDictionary;	// 0x33f7a251
- (void)clearFormattedAddressLines;	// 0x33f87481
- (void)copyTo:(id)to;	// 0x33f876e5
- (void)dealloc;	// 0x33f6ea19
- (id)description;	// 0x33f87579
- (id)dictionaryRepresentation;	// 0x33f875e9
- (id)formattedAddressLineAtIndex:(unsigned)index;	// 0x33f874c1
// declared property getter: - (id)formattedAddressLines;	// 0x33f6a871
- (unsigned)formattedAddressLinesCount;	// 0x33f874a1
// declared property getter: - (int)formattedAddressType;	// 0x33f874f9
// declared property getter: - (BOOL)hasFormattedAddressType;	// 0x33f87565
// declared property getter: - (BOOL)hasStructuredAddress;	// 0x33f874e1
- (unsigned)hash;	// 0x33f878c1
- (BOOL)isEqual:(id)equal;	// 0x33f877e9
- (BOOL)readFrom:(id)from;	// 0x33f876d9
// declared property setter: - (void)setFormattedAddressLines:(id)lines;	// 0x33f6ea71
// declared property setter: - (void)setFormattedAddressType:(int)type;	// 0x33f87521
// declared property setter: - (void)setHasFormattedAddressType:(BOOL)type;	// 0x33f87549
// declared property setter: - (void)setStructuredAddress:(id)address;	// 0x33f6ea81
// declared property getter: - (id)structuredAddress;	// 0x33f711cd
- (void)writeTo:(id)to;	// 0x33f6fda5
@end


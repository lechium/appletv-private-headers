/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class GEOStructuredAddress, NSMutableArray;

@interface GEOAddress : PBCodable {
	NSMutableArray *_formattedAddressLines;	// 4 = 0x4
	int _formattedAddressType;	// 8 = 0x8
	GEOStructuredAddress *_structuredAddress;	// 12 = 0xc
	XXStruct_ec15KC _has;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;	// G=0x30ea6259; S=0x30eaa8b1; @synthesize=_formattedAddressLines
@property(assign, nonatomic) int formattedAddressType;	// G=0x30edd2b9; S=0x30edd2e1; @synthesize=_formattedAddressType
@property(assign, nonatomic) BOOL hasFormattedAddressType;	// G=0x30edd325; S=0x30edd309; 
@property(readonly, assign, nonatomic) BOOL hasStructuredAddress;	// G=0x30edd2a1; 
@property(retain, nonatomic) GEOStructuredAddress *structuredAddress;	// G=0x30ead411; S=0x30eaa8c1; @synthesize=_structuredAddress
- (id)initWithAddressDictionary:(id)addressDictionary;	// 0x30ec5961
- (id)initWithAddressString:(id)addressString;	// 0x30ec58d1
- (void)addFormattedAddressLine:(id)line;	// 0x30ea5a55
- (id)addressDictionary;	// 0x30ec5a21
- (void)clearFormattedAddressLines;	// 0x30edd241
- (void)copyTo:(id)to;	// 0x30edd4a5
- (void)dealloc;	// 0x30eaa859
- (id)description;	// 0x30edd339
- (id)dictionaryRepresentation;	// 0x30edd3a9
- (id)formattedAddressLineAtIndex:(unsigned)index;	// 0x30edd281
// declared property getter: - (id)formattedAddressLines;	// 0x30ea6259
- (unsigned)formattedAddressLinesCount;	// 0x30edd261
// declared property getter: - (int)formattedAddressType;	// 0x30edd2b9
// declared property getter: - (BOOL)hasFormattedAddressType;	// 0x30edd325
// declared property getter: - (BOOL)hasStructuredAddress;	// 0x30edd2a1
- (unsigned)hash;	// 0x30edd681
- (BOOL)isEqual:(id)equal;	// 0x30edd5a9
- (BOOL)readFrom:(id)from;	// 0x30edd499
// declared property setter: - (void)setFormattedAddressLines:(id)lines;	// 0x30eaa8b1
// declared property setter: - (void)setFormattedAddressType:(int)type;	// 0x30edd2e1
// declared property setter: - (void)setHasFormattedAddressType:(BOOL)type;	// 0x30edd309
// declared property setter: - (void)setStructuredAddress:(id)address;	// 0x30eaa8c1
// declared property getter: - (id)structuredAddress;	// 0x30ead411
- (void)writeTo:(id)to;	// 0x30eabee5
@end


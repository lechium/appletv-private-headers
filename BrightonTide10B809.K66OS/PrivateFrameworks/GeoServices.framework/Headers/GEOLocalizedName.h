/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSString;

@interface GEOLocalizedName : PBCodable {
	NSString *_languageCode;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	unsigned _nameRank;	// 12 = 0xc
	NSString *_nameType;	// 16 = 0x10
	NSString *_phoneticName;	// 20 = 0x14
	BOOL _isDefault;	// 24 = 0x18
	XXStruct_$8RKkA _has;	// 25 = 0x19
}
@property(assign, nonatomic) BOOL hasIsDefault;	// G=0x3400f88d; S=0x3400f86d; 
@property(readonly, assign, nonatomic) BOOL hasLanguageCode;	// G=0x3400f8a1; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x3400f8d1; 
@property(assign, nonatomic) BOOL hasNameRank;	// G=0x3400f92d; S=0x3400f911; 
@property(readonly, assign, nonatomic) BOOL hasNameType;	// G=0x3400f8b9; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x3400f941; 
@property(assign, nonatomic) BOOL isDefault;	// G=0x34010331; S=0x3400f845; @synthesize=_isDefault
@property(retain, nonatomic) NSString *languageCode;	// G=0x34010341; S=0x34010351; @synthesize=_languageCode
@property(retain, nonatomic) NSString *name;	// G=0x34010381; S=0x34010391; @synthesize=_name
@property(assign, nonatomic) unsigned nameRank;	// G=0x340103a1; S=0x3400f8e9; @synthesize=_nameRank
@property(retain, nonatomic) NSString *nameType;	// G=0x34010361; S=0x34010371; @synthesize=_nameType
@property(retain, nonatomic) NSString *phoneticName;	// G=0x340103b1; S=0x340103c1; @synthesize=_phoneticName
- (void)copyTo:(id)to;	// 0x3400ff3d
- (void)dealloc;	// 0x3400f7c5
- (id)description;	// 0x3400f959
- (id)dictionaryRepresentation;	// 0x3400f9c9
// declared property getter: - (BOOL)hasIsDefault;	// 0x3400f88d
// declared property getter: - (BOOL)hasLanguageCode;	// 0x3400f8a1
// declared property getter: - (BOOL)hasName;	// 0x3400f8d1
// declared property getter: - (BOOL)hasNameRank;	// 0x3400f92d
// declared property getter: - (BOOL)hasNameType;	// 0x3400f8b9
// declared property getter: - (BOOL)hasPhoneticName;	// 0x3400f941
- (unsigned)hash;	// 0x34010239
// declared property getter: - (BOOL)isDefault;	// 0x34010331
- (BOOL)isEqual:(id)equal;	// 0x340100c1
// declared property getter: - (id)languageCode;	// 0x34010341
// declared property getter: - (id)name;	// 0x34010381
// declared property getter: - (unsigned)nameRank;	// 0x340103a1
// declared property getter: - (id)nameType;	// 0x34010361
// declared property getter: - (id)phoneticName;	// 0x340103b1
- (BOOL)readFrom:(id)from;	// 0x3400fe31
// declared property setter: - (void)setHasIsDefault:(BOOL)aDefault;	// 0x3400f86d
// declared property setter: - (void)setHasNameRank:(BOOL)rank;	// 0x3400f911
// declared property setter: - (void)setIsDefault:(BOOL)aDefault;	// 0x3400f845
// declared property setter: - (void)setLanguageCode:(id)code;	// 0x34010351
// declared property setter: - (void)setName:(id)name;	// 0x34010391
// declared property setter: - (void)setNameRank:(unsigned)rank;	// 0x3400f8e9
// declared property setter: - (void)setNameType:(id)type;	// 0x34010371
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x340103c1
- (void)writeTo:(id)to;	// 0x3400fe3d
@end

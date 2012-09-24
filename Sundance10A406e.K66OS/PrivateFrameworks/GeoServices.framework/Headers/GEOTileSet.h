/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface GEOTileSet : PBCodable {
	NSString *_baseURL;	// 4 = 0x4
	NSString *_localizationURL;	// 8 = 0x8
	NSString *_multiTileURL;	// 12 = 0xc
	int _scale;	// 16 = 0x10
	int _size;	// 20 = 0x14
	int _style;	// 24 = 0x18
	NSMutableArray *_supportedLanguages;	// 28 = 0x1c
	NSMutableArray *_validVersions;	// 32 = 0x20
	BOOL _multiTileURLUsesStatusCodes;	// 36 = 0x24
	XXStruct_ec15KC _has;	// 37 = 0x25
}
@property(retain, nonatomic) NSString *baseURL;	// G=0x37981735; S=0x37981745; @synthesize=_baseURL
@property(readonly, assign, nonatomic) BOOL hasBaseURL;	// G=0x3798024d; 
@property(readonly, assign, nonatomic) BOOL hasLocalizationURL;	// G=0x37980349; 
@property(readonly, assign, nonatomic) BOOL hasMultiTileURL;	// G=0x37980265; 
@property(assign, nonatomic) BOOL hasMultiTileURLUsesStatusCodes;	// G=0x37980471; S=0x37980455; 
@property(retain, nonatomic) NSString *localizationURL;	// G=0x379817f5; S=0x37981805; @synthesize=_localizationURL
@property(retain, nonatomic) NSString *multiTileURL;	// G=0x37981755; S=0x37981765; @synthesize=_multiTileURL
@property(assign, nonatomic) BOOL multiTileURLUsesStatusCodes;	// G=0x37981835; S=0x3798042d; @synthesize=_multiTileURLUsesStatusCodes
@property(assign, nonatomic) int scale;	// G=0x379817b5; S=0x379817c5; @synthesize=_scale
@property(assign, nonatomic) int size;	// G=0x379817d5; S=0x379817e5; @synthesize=_size
@property(assign, nonatomic) int style;	// G=0x37981775; S=0x37981785; @synthesize=_style
@property(retain, nonatomic) NSMutableArray *supportedLanguages;	// G=0x37981815; S=0x37981825; @synthesize=_supportedLanguages
@property(retain, nonatomic) NSMutableArray *validVersions;	// G=0x37981795; S=0x379817a5; @synthesize=_validVersions
- (void)addSupportedLanguage:(id)language;	// 0x37980381
- (void)addValidVersion:(id)version;	// 0x3798029d
// declared property getter: - (id)baseURL;	// 0x37981735
- (void)clearSupportedLanguages;	// 0x37980361
- (void)clearValidVersions;	// 0x3798027d
- (void)copyTo:(id)to;	// 0x379811f5
- (void)dealloc;	// 0x379801b9
- (id)description;	// 0x37980485
- (id)dictionaryRepresentation;	// 0x379804f5
// declared property getter: - (BOOL)hasBaseURL;	// 0x3798024d
// declared property getter: - (BOOL)hasLocalizationURL;	// 0x37980349
// declared property getter: - (BOOL)hasMultiTileURL;	// 0x37980265
// declared property getter: - (BOOL)hasMultiTileURLUsesStatusCodes;	// 0x37980471
- (unsigned)hash;	// 0x37981601
- (BOOL)isEqual:(id)equal;	// 0x37981451
// declared property getter: - (id)localizationURL;	// 0x379817f5
// declared property getter: - (id)multiTileURL;	// 0x37981755
// declared property getter: - (BOOL)multiTileURLUsesStatusCodes;	// 0x37981835
- (BOOL)readFrom:(id)from;	// 0x37980e89
// declared property getter: - (int)scale;	// 0x379817b5
// declared property setter: - (void)setBaseURL:(id)url;	// 0x37981745
// declared property setter: - (void)setHasMultiTileURLUsesStatusCodes:(BOOL)codes;	// 0x37980455
// declared property setter: - (void)setLocalizationURL:(id)url;	// 0x37981805
// declared property setter: - (void)setMultiTileURL:(id)url;	// 0x37981765
// declared property setter: - (void)setMultiTileURLUsesStatusCodes:(BOOL)codes;	// 0x3798042d
// declared property setter: - (void)setScale:(int)scale;	// 0x379817c5
// declared property setter: - (void)setSize:(int)size;	// 0x379817e5
// declared property setter: - (void)setStyle:(int)style;	// 0x37981785
// declared property setter: - (void)setSupportedLanguages:(id)languages;	// 0x37981825
// declared property setter: - (void)setValidVersions:(id)versions;	// 0x379817a5
// declared property getter: - (int)size;	// 0x379817d5
// declared property getter: - (int)style;	// 0x37981775
- (id)supportedLanguageAtIndex:(unsigned)index;	// 0x3798040d
// declared property getter: - (id)supportedLanguages;	// 0x37981815
- (unsigned)supportedLanguagesCount;	// 0x379803ed
- (id)validVersionAtIndex:(unsigned)index;	// 0x37980329
// declared property getter: - (id)validVersions;	// 0x37981795
- (unsigned)validVersionsCount;	// 0x37980309
- (void)writeTo:(id)to;	// 0x37980e95
@end

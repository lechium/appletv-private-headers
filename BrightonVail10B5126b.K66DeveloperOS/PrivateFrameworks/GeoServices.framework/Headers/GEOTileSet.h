/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, NSString;

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
@property(retain, nonatomic) NSString *baseURL;	// G=0x33fa0439; S=0x33fa0449; @synthesize=_baseURL
@property(readonly, assign, nonatomic) BOOL hasBaseURL;	// G=0x33f9ef51; 
@property(readonly, assign, nonatomic) BOOL hasLocalizationURL;	// G=0x33f9f04d; 
@property(readonly, assign, nonatomic) BOOL hasMultiTileURL;	// G=0x33f9ef69; 
@property(assign, nonatomic) BOOL hasMultiTileURLUsesStatusCodes;	// G=0x33f9f175; S=0x33f9f159; 
@property(retain, nonatomic) NSString *localizationURL;	// G=0x33fa04f9; S=0x33fa0509; @synthesize=_localizationURL
@property(retain, nonatomic) NSString *multiTileURL;	// G=0x33fa0459; S=0x33fa0469; @synthesize=_multiTileURL
@property(assign, nonatomic) BOOL multiTileURLUsesStatusCodes;	// G=0x33fa0539; S=0x33f9f131; @synthesize=_multiTileURLUsesStatusCodes
@property(assign, nonatomic) int scale;	// G=0x33fa04b9; S=0x33fa04c9; @synthesize=_scale
@property(assign, nonatomic) int size;	// G=0x33fa04d9; S=0x33fa04e9; @synthesize=_size
@property(assign, nonatomic) int style;	// G=0x33fa0479; S=0x33fa0489; @synthesize=_style
@property(retain, nonatomic) NSMutableArray *supportedLanguages;	// G=0x33fa0519; S=0x33fa0529; @synthesize=_supportedLanguages
@property(retain, nonatomic) NSMutableArray *validVersions;	// G=0x33fa0499; S=0x33fa04a9; @synthesize=_validVersions
- (void)addSupportedLanguage:(id)language;	// 0x33f9f085
- (void)addValidVersion:(id)version;	// 0x33f9efa1
// declared property getter: - (id)baseURL;	// 0x33fa0439
- (void)clearSupportedLanguages;	// 0x33f9f065
- (void)clearValidVersions;	// 0x33f9ef81
- (void)copyTo:(id)to;	// 0x33f9fef9
- (void)dealloc;	// 0x33f9eebd
- (id)description;	// 0x33f9f189
- (id)dictionaryRepresentation;	// 0x33f9f1f9
// declared property getter: - (BOOL)hasBaseURL;	// 0x33f9ef51
// declared property getter: - (BOOL)hasLocalizationURL;	// 0x33f9f04d
// declared property getter: - (BOOL)hasMultiTileURL;	// 0x33f9ef69
// declared property getter: - (BOOL)hasMultiTileURLUsesStatusCodes;	// 0x33f9f175
- (unsigned)hash;	// 0x33fa0305
- (BOOL)isEqual:(id)equal;	// 0x33fa0155
// declared property getter: - (id)localizationURL;	// 0x33fa04f9
// declared property getter: - (id)multiTileURL;	// 0x33fa0459
// declared property getter: - (BOOL)multiTileURLUsesStatusCodes;	// 0x33fa0539
- (BOOL)readFrom:(id)from;	// 0x33f9fb8d
// declared property getter: - (int)scale;	// 0x33fa04b9
// declared property setter: - (void)setBaseURL:(id)url;	// 0x33fa0449
// declared property setter: - (void)setHasMultiTileURLUsesStatusCodes:(BOOL)codes;	// 0x33f9f159
// declared property setter: - (void)setLocalizationURL:(id)url;	// 0x33fa0509
// declared property setter: - (void)setMultiTileURL:(id)url;	// 0x33fa0469
// declared property setter: - (void)setMultiTileURLUsesStatusCodes:(BOOL)codes;	// 0x33f9f131
// declared property setter: - (void)setScale:(int)scale;	// 0x33fa04c9
// declared property setter: - (void)setSize:(int)size;	// 0x33fa04e9
// declared property setter: - (void)setStyle:(int)style;	// 0x33fa0489
// declared property setter: - (void)setSupportedLanguages:(id)languages;	// 0x33fa0529
// declared property setter: - (void)setValidVersions:(id)versions;	// 0x33fa04a9
// declared property getter: - (int)size;	// 0x33fa04d9
// declared property getter: - (int)style;	// 0x33fa0479
- (id)supportedLanguageAtIndex:(unsigned)index;	// 0x33f9f111
// declared property getter: - (id)supportedLanguages;	// 0x33fa0519
- (unsigned)supportedLanguagesCount;	// 0x33f9f0f1
- (id)validVersionAtIndex:(unsigned)index;	// 0x33f9f02d
// declared property getter: - (id)validVersions;	// 0x33fa0499
- (unsigned)validVersionsCount;	// 0x33f9f00d
- (void)writeTo:(id)to;	// 0x33f9fb99
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, GEOTileSetVersion, NSMutableArray;

@interface GEOTileSet : PBCodable {
	NSString *_baseURL;	// 4 = 0x4
	NSString *_multiTileURL;	// 8 = 0x8
	int _style;	// 12 = 0xc
	GEOTileSetVersion *_preferredVersion;	// 16 = 0x10
	NSMutableArray *_validVersions;	// 20 = 0x14
	int _scale;	// 24 = 0x18
	int _size;	// 28 = 0x1c
	NSMutableArray *_providers;	// 32 = 0x20
}
@property(retain, nonatomic) NSString *baseURL;	// G=0x32cfa809; S=0x32cfa819; @synthesize=_baseURL
@property(retain, nonatomic) NSString *multiTileURL;	// G=0x32cfa83d; S=0x32cfa84d; @synthesize=_multiTileURL
@property(retain, nonatomic) GEOTileSetVersion *preferredVersion;	// G=0x32cfa891; S=0x32cfa8a1; @synthesize=_preferredVersion
@property(retain, nonatomic) NSMutableArray *providers;	// G=0x32cfa939; S=0x32cfa949; @synthesize=_providers
@property(assign, nonatomic) int scale;	// G=0x32cfa8f9; S=0x32cfa909; @synthesize=_scale
@property(assign, nonatomic) int size;	// G=0x32cfa919; S=0x32cfa929; @synthesize=_size
@property(assign, nonatomic) int style;	// G=0x32cfa871; S=0x32cfa881; @synthesize=_style
@property(retain, nonatomic) NSMutableArray *validVersions;	// G=0x32cfa8c5; S=0x32cfa8d5; @synthesize=_validVersions
- (void)addProvider:(id)provider;	// 0x32cf9c71
- (void)addValidVersion:(id)version;	// 0x32cf9bcd
// declared property getter: - (id)baseURL;	// 0x32cfa809
- (void)dealloc;	// 0x32cf9b39
- (id)description;	// 0x32cf9d15
- (id)dictionaryRepresentation;	// 0x32cf9d85
// declared property getter: - (id)multiTileURL;	// 0x32cfa83d
// declared property getter: - (id)preferredVersion;	// 0x32cfa891
- (id)providerAtIndex:(unsigned)index;	// 0x32cf9cf5
// declared property getter: - (id)providers;	// 0x32cfa939
- (unsigned)providersCount;	// 0x32cf9cd5
- (BOOL)readFrom:(id)from;	// 0x32cfa18d
// declared property getter: - (int)scale;	// 0x32cfa8f9
// declared property setter: - (void)setBaseURL:(id)url;	// 0x32cfa819
// declared property setter: - (void)setMultiTileURL:(id)url;	// 0x32cfa84d
// declared property setter: - (void)setPreferredVersion:(id)version;	// 0x32cfa8a1
// declared property setter: - (void)setProviders:(id)providers;	// 0x32cfa949
// declared property setter: - (void)setScale:(int)scale;	// 0x32cfa909
// declared property setter: - (void)setSize:(int)size;	// 0x32cfa929
// declared property setter: - (void)setStyle:(int)style;	// 0x32cfa881
// declared property setter: - (void)setValidVersions:(id)versions;	// 0x32cfa8d5
// declared property getter: - (int)size;	// 0x32cfa919
// declared property getter: - (int)style;	// 0x32cfa871
- (id)validVersionAtIndex:(unsigned)index;	// 0x32cf9c51
// declared property getter: - (id)validVersions;	// 0x32cfa8c5
- (unsigned)validVersionsCount;	// 0x32cf9c31
- (void)writeTo:(id)to;	// 0x32cfa4d5
@end


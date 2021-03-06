/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOSearchAttributionManifest : PBCodable {
	NSMutableArray *_searchAttributionSources;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *searchAttributionSources;	// G=0x340115c5; S=0x340115d5; @synthesize=_searchAttributionSources
- (void)addSearchAttributionSources:(id)sources;	// 0x34010f01
- (void)clearSearchAttributionSources;	// 0x34010ee1
- (void)copyTo:(id)to;	// 0x340114b5
- (void)dealloc;	// 0x34010e9d
- (id)description;	// 0x34010fad
- (id)dictionaryRepresentation;	// 0x3401101d
- (unsigned)hash;	// 0x340115a5
- (BOOL)isEqual:(id)equal;	// 0x34011535
- (BOOL)readFrom:(id)from;	// 0x34011365
// declared property getter: - (id)searchAttributionSources;	// 0x340115c5
- (id)searchAttributionSourcesAtIndex:(unsigned)index;	// 0x34010f8d
- (unsigned)searchAttributionSourcesCount;	// 0x34010f6d
// declared property setter: - (void)setSearchAttributionSources:(id)sources;	// 0x340115d5
- (void)writeTo:(id)to;	// 0x34011371
@end


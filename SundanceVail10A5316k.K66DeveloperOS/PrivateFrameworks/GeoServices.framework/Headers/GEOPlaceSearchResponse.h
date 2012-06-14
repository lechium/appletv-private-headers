/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray, GEOMapRegion;

@interface GEOPlaceSearchResponse : PBCodable {
@private
	int _localSearchProviderID;	// 4 = 0x4
	GEOMapRegion *_mapRegion;	// 8 = 0x8
	NSMutableArray *_placeResults;	// 12 = 0xc
	NSMutableArray *_searchs;	// 16 = 0x10
	int _status;	// 20 = 0x14
	int _statusCodeInfo;	// 24 = 0x18
	XXStruct_UvnNeB _has;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL hasLocalSearchProviderID;	// G=0x34b0d069; S=0x34b0d04d; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x34b0cf41; 
@property(assign, nonatomic) BOOL hasStatusCodeInfo;	// G=0x34b0d0c5; S=0x34b0d0a5; 
@property(assign, nonatomic) int localSearchProviderID;	// G=0x34b0e00d; S=0x34b0d025; @synthesize=_localSearchProviderID
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x34b0dfcd; S=0x34b0dfdd; @synthesize=_mapRegion
@property(retain, nonatomic) NSMutableArray *placeResults;	// G=0x34b0dfad; S=0x34b0dfbd; @synthesize=_placeResults
@property(retain, nonatomic) NSMutableArray *searchs;	// G=0x34b0dfed; S=0x34b0dffd; @synthesize=_searchs
@property(assign, nonatomic) int status;	// G=0x34b0df8d; S=0x34b0df9d; @synthesize=_status
@property(assign, nonatomic) int statusCodeInfo;	// G=0x34b0e01d; S=0x34b0d07d; @synthesize=_statusCodeInfo
- (void)addPlaceResult:(id)result;	// 0x34b0ce95
- (void)addSearch:(id)search;	// 0x34b0cf79
- (void)clearPlaceResults;	// 0x34b0ce75
- (void)clearSearchs;	// 0x34b0cf59
- (void)copyTo:(id)to;	// 0x34b0db89
- (void)dealloc;	// 0x34b0ce09
- (id)description;	// 0x34b0d0d9
- (id)dictionaryRepresentation;	// 0x34b0d149
// declared property getter: - (BOOL)hasLocalSearchProviderID;	// 0x34b0d069
// declared property getter: - (BOOL)hasMapRegion;	// 0x34b0cf41
// declared property getter: - (BOOL)hasStatusCodeInfo;	// 0x34b0d0c5
- (unsigned)hash;	// 0x34b0dea9
- (BOOL)isEqual:(id)equal;	// 0x34b0dd5d
// declared property getter: - (int)localSearchProviderID;	// 0x34b0e00d
// declared property getter: - (id)mapRegion;	// 0x34b0dfcd
- (id)placeResultAtIndex:(unsigned)index;	// 0x34b0cf21
// declared property getter: - (id)placeResults;	// 0x34b0dfad
- (unsigned)placeResultsCount;	// 0x34b0cf01
- (BOOL)readFrom:(id)from;	// 0x34b0d895
- (id)searchAtIndex:(unsigned)index;	// 0x34b0d005
// declared property getter: - (id)searchs;	// 0x34b0dfed
- (unsigned)searchsCount;	// 0x34b0cfe5
// declared property setter: - (void)setHasLocalSearchProviderID:(BOOL)anId;	// 0x34b0d04d
// declared property setter: - (void)setHasStatusCodeInfo:(BOOL)info;	// 0x34b0d0a5
// declared property setter: - (void)setLocalSearchProviderID:(int)anId;	// 0x34b0d025
// declared property setter: - (void)setMapRegion:(id)region;	// 0x34b0dfdd
// declared property setter: - (void)setPlaceResults:(id)results;	// 0x34b0dfbd
// declared property setter: - (void)setSearchs:(id)searchs;	// 0x34b0dffd
// declared property setter: - (void)setStatus:(int)status;	// 0x34b0df9d
// declared property setter: - (void)setStatusCodeInfo:(int)info;	// 0x34b0d07d
// declared property getter: - (int)status;	// 0x34b0df8d
// declared property getter: - (int)statusCodeInfo;	// 0x34b0e01d
- (void)writeTo:(id)to;	// 0x34b0d8a1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBRequest.h> // Unknown library

@class NSMutableArray, GEOAddress, GEOSearchSubstring, GEOSessionID, GEOMapRegion, GEOLocation, NSString;

@interface GEOPlaceSearchRequest : PBRequest {
	XXStruct_19EQxD _placeIDs;	// 4 = 0x4
	XXStruct_19EQxD _businessIDs;	// 16 = 0x10
	GEOAddress *_address;	// 28 = 0x1c
	GEOLocation *_location;	// 32 = 0x20
	NSString *_search;	// 36 = 0x24
	GEOMapRegion *_mapRegion;	// 40 = 0x28
	struct {
		int *list;
		unsigned count;
		unsigned size;
	} _includeAdditionalPlaceTypes;	// 44 = 0x2c
	BOOL _hasIncludePhonetics;	// 56 = 0x38
	BOOL _includePhonetics;	// 57 = 0x39
	BOOL _hasMaxResults;	// 58 = 0x3a
	int _maxResults;	// 60 = 0x3c
	BOOL _hasResultOffset;	// 64 = 0x40
	int _resultOffset;	// 68 = 0x44
	BOOL _hasSessionID;	// 72 = 0x48
	int _sessionID;	// 76 = 0x4c
	GEOSessionID *_sessionGUID;	// 80 = 0x50
	BOOL _hasBusinessSortOrder;	// 84 = 0x54
	int _businessSortOrder;	// 88 = 0x58
	BOOL _hasIncludeBusinessRating;	// 92 = 0x5c
	BOOL _includeBusinessRating;	// 93 = 0x5d
	BOOL _hasIncludeBusinessCategories;	// 94 = 0x5e
	BOOL _includeBusinessCategories;	// 95 = 0x5f
	BOOL _hasMaxBusinessReviews;	// 96 = 0x60
	int _maxBusinessReviews;	// 100 = 0x64
	NSMutableArray *_filterByBusinessCategorys;	// 104 = 0x68
	BOOL _hasIsStrictMapRegion;	// 108 = 0x6c
	BOOL _isStrictMapRegion;	// 109 = 0x6d
	BOOL _hasGeoId;	// 110 = 0x6e
	long long _geoId;	// 112 = 0x70
	BOOL _hasIncludeQuads;	// 120 = 0x78
	BOOL _includeQuads;	// 121 = 0x79
	BOOL _hasExcludeAddressInResults;	// 122 = 0x7a
	BOOL _excludeAddressInResults;	// 123 = 0x7b
	NSMutableArray *_searchSubstrings;	// 124 = 0x7c
	BOOL _hasIncludeGeoId;	// 128 = 0x80
	BOOL _includeGeoId;	// 129 = 0x81
	NSString *_searchContext;	// 132 = 0x84
	GEOSearchSubstring *_searchContextSubstring;	// 136 = 0x88
}
@property(retain, nonatomic) GEOAddress *address;	// G=0x32cf3975; S=0x32cf3985; @synthesize=_address
@property(readonly, assign, nonatomic) long long *businessIDs;	// G=0x32cf1a69; 
@property(readonly, assign, nonatomic) unsigned businessIDsCount;	// G=0x32cf1a55; 
@property(assign, nonatomic) int businessSortOrder;	// G=0x32cf3b49; S=0x32cf1d99; @synthesize=_businessSortOrder
@property(assign, nonatomic) BOOL excludeAddressInResults;	// G=0x32cf3cd5; S=0x32cf1f41; @synthesize=_excludeAddressInResults
@property(retain, nonatomic) NSMutableArray *filterByBusinessCategorys;	// G=0x32cf3be9; S=0x32cf3bf9; @synthesize=_filterByBusinessCategorys
@property(assign, nonatomic) long long geoId;	// G=0x32cf3c6d; S=0x32cf1ef1; @synthesize=_geoId
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x32cf1b65; 
@property(assign, nonatomic) BOOL hasBusinessSortOrder;	// G=0x32cf3b29; S=0x32cf3b39; @synthesize=_hasBusinessSortOrder
@property(assign, nonatomic) BOOL hasExcludeAddressInResults;	// G=0x32cf3cb5; S=0x32cf3cc5; @synthesize=_hasExcludeAddressInResults
@property(assign, nonatomic) BOOL hasGeoId;	// G=0x32cf3c4d; S=0x32cf3c5d; @synthesize=_hasGeoId
@property(assign, nonatomic) BOOL hasIncludeBusinessCategories;	// G=0x32cf3b89; S=0x32cf3b99; @synthesize=_hasIncludeBusinessCategories
@property(assign, nonatomic) BOOL hasIncludeBusinessRating;	// G=0x32cf3b59; S=0x32cf3b69; @synthesize=_hasIncludeBusinessRating
@property(assign, nonatomic) BOOL hasIncludeGeoId;	// G=0x32cf3d19; S=0x32cf3d29; @synthesize=_hasIncludeGeoId
@property(assign, nonatomic) BOOL hasIncludePhonetics;	// G=0x32cf3a45; S=0x32cf3a55; @synthesize=_hasIncludePhonetics
@property(assign, nonatomic) BOOL hasIncludeQuads;	// G=0x32cf3c85; S=0x32cf3c95; @synthesize=_hasIncludeQuads
@property(assign, nonatomic) BOOL hasIsStrictMapRegion;	// G=0x32cf3c1d; S=0x32cf3c2d; @synthesize=_hasIsStrictMapRegion
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x32cf1b7d; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x32cf1bad; 
@property(assign, nonatomic) BOOL hasMaxBusinessReviews;	// G=0x32cf3bb9; S=0x32cf3bc9; @synthesize=_hasMaxBusinessReviews
@property(assign, nonatomic) BOOL hasMaxResults;	// G=0x32cf3a75; S=0x32cf3a85; @synthesize=_hasMaxResults
@property(assign, nonatomic) BOOL hasResultOffset;	// G=0x32cf3a95; S=0x32cf3aa5; @synthesize=_hasResultOffset
@property(readonly, assign, nonatomic) BOOL hasSearch;	// G=0x32cf1b95; 
@property(readonly, assign, nonatomic) BOOL hasSearchContext;	// G=0x32cf202d; 
@property(readonly, assign, nonatomic) BOOL hasSearchContextSubstring;	// G=0x32cf2045; 
@property(readonly, assign, nonatomic) BOOL hasSessionGUID;	// G=0x32cf1d81; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x32cf3ac5; S=0x32cf3ad5; @synthesize=_hasSessionID
@property(readonly, assign, nonatomic) int *includeAdditionalPlaceTypes;	// G=0x32cf1bd9; 
@property(readonly, assign, nonatomic) unsigned includeAdditionalPlaceTypesCount;	// G=0x32cf1bc5; 
@property(assign, nonatomic) BOOL includeBusinessCategories;	// G=0x32cf3ba9; S=0x32cf1de1; @synthesize=_includeBusinessCategories
@property(assign, nonatomic) BOOL includeBusinessRating;	// G=0x32cf3b79; S=0x32cf1dbd; @synthesize=_includeBusinessRating
@property(assign, nonatomic) BOOL includeGeoId;	// G=0x32cf3d39; S=0x32cf2009; @synthesize=_includeGeoId
@property(assign, nonatomic) BOOL includePhonetics;	// G=0x32cf3a65; S=0x32cf1ccd; @synthesize=_includePhonetics
@property(assign, nonatomic) BOOL includeQuads;	// G=0x32cf3ca5; S=0x32cf1f1d; @synthesize=_includeQuads
@property(assign, nonatomic) BOOL isStrictMapRegion;	// G=0x32cf3c3d; S=0x32cf1ecd; @synthesize=_isStrictMapRegion
@property(retain, nonatomic) GEOLocation *location;	// G=0x32cf39a9; S=0x32cf39b9; @synthesize=_location
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x32cf3a11; S=0x32cf3a21; @synthesize=_mapRegion
@property(assign, nonatomic) int maxBusinessReviews;	// G=0x32cf3bd9; S=0x32cf1e05; @synthesize=_maxBusinessReviews
@property(assign, nonatomic) int maxResults;	// G=0x32cf1cf1; S=0x32cf1d15; @synthesize=_maxResults
@property(readonly, assign, nonatomic) long long *placeIDs;	// G=0x32cf1959; 
@property(readonly, assign, nonatomic) unsigned placeIDsCount;	// G=0x32cf1945; 
@property(assign, nonatomic) int resultOffset;	// G=0x32cf3ab5; S=0x32cf1d39; @synthesize=_resultOffset
@property(retain, nonatomic) NSString *search;	// G=0x32cf39dd; S=0x32cf39ed; @synthesize=_search
@property(retain, nonatomic) NSString *searchContext;	// G=0x32cf3d49; S=0x32cf3d59; @synthesize=_searchContext
@property(retain, nonatomic) GEOSearchSubstring *searchContextSubstring;	// G=0x32cf3d7d; S=0x32cf3d8d; @synthesize=_searchContextSubstring
@property(retain, nonatomic) NSMutableArray *searchSubstrings;	// G=0x32cf3ce5; S=0x32cf3cf5; @synthesize=_searchSubstrings
@property(retain, nonatomic) GEOSessionID *sessionGUID;	// G=0x32cf3af5; S=0x32cf3b05; @synthesize=_sessionGUID
@property(assign, nonatomic) int sessionID;	// G=0x32cf3ae5; S=0x32cf1d5d; @synthesize=_sessionID
- (void)addBusinessID:(long long)anId;	// 0x32cf1a8d
- (void)addFilterByBusinessCategory:(id)category;	// 0x32cf1e29
- (void)addIncludeAdditionalPlaceType:(int)type;	// 0x32cf1bfd
- (void)addPlaceID:(long long)anId;	// 0x32cf197d
- (void)addSearchSubstring:(id)substring;	// 0x32cf1f65
// declared property getter: - (id)address;	// 0x32cf3975
- (long long)businessIDAtIndex:(unsigned)index;	// 0x32cf1aa5
// declared property getter: - (long long *)businessIDs;	// 0x32cf1a69
// declared property getter: - (unsigned)businessIDsCount;	// 0x32cf1a55
// declared property getter: - (int)businessSortOrder;	// 0x32cf3b49
- (void)clearBusinessIDs;	// 0x32cf1a79
- (void)clearIncludeAdditionalPlaceTypes;	// 0x32cf1be9
- (void)clearPlaceIDs;	// 0x32cf1969
- (void)dealloc;	// 0x32cf182d
- (id)description;	// 0x32cf205d
- (id)dictionaryRepresentation;	// 0x32cf20cd
// declared property getter: - (BOOL)excludeAddressInResults;	// 0x32cf3cd5
- (id)filterByBusinessCategoryAtIndex:(unsigned)index;	// 0x32cf1ead
// declared property getter: - (id)filterByBusinessCategorys;	// 0x32cf3be9
- (unsigned)filterByBusinessCategorysCount;	// 0x32cf1e8d
// declared property getter: - (long long)geoId;	// 0x32cf3c6d
// declared property getter: - (BOOL)hasAddress;	// 0x32cf1b65
// declared property getter: - (BOOL)hasBusinessSortOrder;	// 0x32cf3b29
// declared property getter: - (BOOL)hasExcludeAddressInResults;	// 0x32cf3cb5
// declared property getter: - (BOOL)hasGeoId;	// 0x32cf3c4d
// declared property getter: - (BOOL)hasIncludeBusinessCategories;	// 0x32cf3b89
// declared property getter: - (BOOL)hasIncludeBusinessRating;	// 0x32cf3b59
// declared property getter: - (BOOL)hasIncludeGeoId;	// 0x32cf3d19
// declared property getter: - (BOOL)hasIncludePhonetics;	// 0x32cf3a45
// declared property getter: - (BOOL)hasIncludeQuads;	// 0x32cf3c85
// declared property getter: - (BOOL)hasIsStrictMapRegion;	// 0x32cf3c1d
// declared property getter: - (BOOL)hasLocation;	// 0x32cf1b7d
// declared property getter: - (BOOL)hasMapRegion;	// 0x32cf1bad
// declared property getter: - (BOOL)hasMaxBusinessReviews;	// 0x32cf3bb9
// declared property getter: - (BOOL)hasMaxResults;	// 0x32cf3a75
// declared property getter: - (BOOL)hasResultOffset;	// 0x32cf3a95
// declared property getter: - (BOOL)hasSearch;	// 0x32cf1b95
// declared property getter: - (BOOL)hasSearchContext;	// 0x32cf202d
// declared property getter: - (BOOL)hasSearchContextSubstring;	// 0x32cf2045
// declared property getter: - (BOOL)hasSessionGUID;	// 0x32cf1d81
// declared property getter: - (BOOL)hasSessionID;	// 0x32cf3ac5
- (int)includeAdditionalPlaceTypeAtIndex:(unsigned)index;	// 0x32cf1c11
// declared property getter: - (int *)includeAdditionalPlaceTypes;	// 0x32cf1bd9
// declared property getter: - (unsigned)includeAdditionalPlaceTypesCount;	// 0x32cf1bc5
// declared property getter: - (BOOL)includeBusinessCategories;	// 0x32cf3ba9
// declared property getter: - (BOOL)includeBusinessRating;	// 0x32cf3b79
// declared property getter: - (BOOL)includeGeoId;	// 0x32cf3d39
// declared property getter: - (BOOL)includePhonetics;	// 0x32cf3a65
// declared property getter: - (BOOL)includeQuads;	// 0x32cf3ca5
// declared property getter: - (BOOL)isStrictMapRegion;	// 0x32cf3c3d
// declared property getter: - (id)location;	// 0x32cf39a9
// declared property getter: - (id)mapRegion;	// 0x32cf3a11
// declared property getter: - (int)maxBusinessReviews;	// 0x32cf3bd9
// declared property getter: - (int)maxResults;	// 0x32cf1cf1
- (long long)placeIDAtIndex:(unsigned)index;	// 0x32cf1995
// declared property getter: - (long long *)placeIDs;	// 0x32cf1959
// declared property getter: - (unsigned)placeIDsCount;	// 0x32cf1945
- (BOOL)readFrom:(id)from;	// 0x32cf2851
- (unsigned)requestTypeCode;	// 0x32cf3955
- (Class)responseClass;	// 0x32cf3959
// declared property getter: - (int)resultOffset;	// 0x32cf3ab5
// declared property getter: - (id)search;	// 0x32cf39dd
// declared property getter: - (id)searchContext;	// 0x32cf3d49
// declared property getter: - (id)searchContextSubstring;	// 0x32cf3d7d
- (id)searchSubstringAtIndex:(unsigned)index;	// 0x32cf1fe9
// declared property getter: - (id)searchSubstrings;	// 0x32cf3ce5
- (unsigned)searchSubstringsCount;	// 0x32cf1fc9
// declared property getter: - (id)sessionGUID;	// 0x32cf3af5
// declared property getter: - (int)sessionID;	// 0x32cf3ae5
// declared property setter: - (void)setAddress:(id)address;	// 0x32cf3985
- (void)setBusinessIDs:(long long *)ids count:(unsigned)count;	// 0x32cf1b4d
// declared property setter: - (void)setBusinessSortOrder:(int)order;	// 0x32cf1d99
// declared property setter: - (void)setExcludeAddressInResults:(BOOL)results;	// 0x32cf1f41
// declared property setter: - (void)setFilterByBusinessCategorys:(id)categorys;	// 0x32cf3bf9
// declared property setter: - (void)setGeoId:(long long)anId;	// 0x32cf1ef1
// declared property setter: - (void)setHasBusinessSortOrder:(BOOL)order;	// 0x32cf3b39
// declared property setter: - (void)setHasExcludeAddressInResults:(BOOL)results;	// 0x32cf3cc5
// declared property setter: - (void)setHasGeoId:(BOOL)anId;	// 0x32cf3c5d
// declared property setter: - (void)setHasIncludeBusinessCategories:(BOOL)categories;	// 0x32cf3b99
// declared property setter: - (void)setHasIncludeBusinessRating:(BOOL)rating;	// 0x32cf3b69
// declared property setter: - (void)setHasIncludeGeoId:(BOOL)anId;	// 0x32cf3d29
// declared property setter: - (void)setHasIncludePhonetics:(BOOL)phonetics;	// 0x32cf3a55
// declared property setter: - (void)setHasIncludeQuads:(BOOL)quads;	// 0x32cf3c95
// declared property setter: - (void)setHasIsStrictMapRegion:(BOOL)region;	// 0x32cf3c2d
// declared property setter: - (void)setHasMaxBusinessReviews:(BOOL)reviews;	// 0x32cf3bc9
// declared property setter: - (void)setHasMaxResults:(BOOL)results;	// 0x32cf3a85
// declared property setter: - (void)setHasResultOffset:(BOOL)offset;	// 0x32cf3aa5
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x32cf3ad5
- (void)setIncludeAdditionalPlaceTypes:(int *)types count:(unsigned)count;	// 0x32cf1cb5
// declared property setter: - (void)setIncludeBusinessCategories:(BOOL)categories;	// 0x32cf1de1
// declared property setter: - (void)setIncludeBusinessRating:(BOOL)rating;	// 0x32cf1dbd
// declared property setter: - (void)setIncludeGeoId:(BOOL)anId;	// 0x32cf2009
// declared property setter: - (void)setIncludePhonetics:(BOOL)phonetics;	// 0x32cf1ccd
// declared property setter: - (void)setIncludeQuads:(BOOL)quads;	// 0x32cf1f1d
// declared property setter: - (void)setIsStrictMapRegion:(BOOL)region;	// 0x32cf1ecd
// declared property setter: - (void)setLocation:(id)location;	// 0x32cf39b9
// declared property setter: - (void)setMapRegion:(id)region;	// 0x32cf3a21
// declared property setter: - (void)setMaxBusinessReviews:(int)reviews;	// 0x32cf1e05
// declared property setter: - (void)setMaxResults:(int)results;	// 0x32cf1d15
- (void)setPlaceIDs:(long long *)ids count:(unsigned)count;	// 0x32cf1a3d
// declared property setter: - (void)setResultOffset:(int)offset;	// 0x32cf1d39
// declared property setter: - (void)setSearch:(id)search;	// 0x32cf39ed
// declared property setter: - (void)setSearchContext:(id)context;	// 0x32cf3d59
// declared property setter: - (void)setSearchContextSubstring:(id)substring;	// 0x32cf3d8d
// declared property setter: - (void)setSearchSubstrings:(id)substrings;	// 0x32cf3cf5
// declared property setter: - (void)setSessionGUID:(id)guid;	// 0x32cf3b05
// declared property setter: - (void)setSessionID:(int)anId;	// 0x32cf1d5d
- (void)writeTo:(id)to;	// 0x32cf3135
@end


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
@property(retain, nonatomic) GEOAddress *address;	// G=0x35f2e975; S=0x35f2e985; @synthesize=_address
@property(readonly, assign, nonatomic) long long *businessIDs;	// G=0x35f2ca69; 
@property(readonly, assign, nonatomic) unsigned businessIDsCount;	// G=0x35f2ca55; 
@property(assign, nonatomic) int businessSortOrder;	// G=0x35f2eb49; S=0x35f2cd99; @synthesize=_businessSortOrder
@property(assign, nonatomic) BOOL excludeAddressInResults;	// G=0x35f2ecd5; S=0x35f2cf41; @synthesize=_excludeAddressInResults
@property(retain, nonatomic) NSMutableArray *filterByBusinessCategorys;	// G=0x35f2ebe9; S=0x35f2ebf9; @synthesize=_filterByBusinessCategorys
@property(assign, nonatomic) long long geoId;	// G=0x35f2ec6d; S=0x35f2cef1; @synthesize=_geoId
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x35f2cb65; 
@property(assign, nonatomic) BOOL hasBusinessSortOrder;	// G=0x35f2eb29; S=0x35f2eb39; @synthesize=_hasBusinessSortOrder
@property(assign, nonatomic) BOOL hasExcludeAddressInResults;	// G=0x35f2ecb5; S=0x35f2ecc5; @synthesize=_hasExcludeAddressInResults
@property(assign, nonatomic) BOOL hasGeoId;	// G=0x35f2ec4d; S=0x35f2ec5d; @synthesize=_hasGeoId
@property(assign, nonatomic) BOOL hasIncludeBusinessCategories;	// G=0x35f2eb89; S=0x35f2eb99; @synthesize=_hasIncludeBusinessCategories
@property(assign, nonatomic) BOOL hasIncludeBusinessRating;	// G=0x35f2eb59; S=0x35f2eb69; @synthesize=_hasIncludeBusinessRating
@property(assign, nonatomic) BOOL hasIncludeGeoId;	// G=0x35f2ed19; S=0x35f2ed29; @synthesize=_hasIncludeGeoId
@property(assign, nonatomic) BOOL hasIncludePhonetics;	// G=0x35f2ea45; S=0x35f2ea55; @synthesize=_hasIncludePhonetics
@property(assign, nonatomic) BOOL hasIncludeQuads;	// G=0x35f2ec85; S=0x35f2ec95; @synthesize=_hasIncludeQuads
@property(assign, nonatomic) BOOL hasIsStrictMapRegion;	// G=0x35f2ec1d; S=0x35f2ec2d; @synthesize=_hasIsStrictMapRegion
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x35f2cb7d; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x35f2cbad; 
@property(assign, nonatomic) BOOL hasMaxBusinessReviews;	// G=0x35f2ebb9; S=0x35f2ebc9; @synthesize=_hasMaxBusinessReviews
@property(assign, nonatomic) BOOL hasMaxResults;	// G=0x35f2ea75; S=0x35f2ea85; @synthesize=_hasMaxResults
@property(assign, nonatomic) BOOL hasResultOffset;	// G=0x35f2ea95; S=0x35f2eaa5; @synthesize=_hasResultOffset
@property(readonly, assign, nonatomic) BOOL hasSearch;	// G=0x35f2cb95; 
@property(readonly, assign, nonatomic) BOOL hasSearchContext;	// G=0x35f2d02d; 
@property(readonly, assign, nonatomic) BOOL hasSearchContextSubstring;	// G=0x35f2d045; 
@property(readonly, assign, nonatomic) BOOL hasSessionGUID;	// G=0x35f2cd81; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x35f2eac5; S=0x35f2ead5; @synthesize=_hasSessionID
@property(readonly, assign, nonatomic) int *includeAdditionalPlaceTypes;	// G=0x35f2cbd9; 
@property(readonly, assign, nonatomic) unsigned includeAdditionalPlaceTypesCount;	// G=0x35f2cbc5; 
@property(assign, nonatomic) BOOL includeBusinessCategories;	// G=0x35f2eba9; S=0x35f2cde1; @synthesize=_includeBusinessCategories
@property(assign, nonatomic) BOOL includeBusinessRating;	// G=0x35f2eb79; S=0x35f2cdbd; @synthesize=_includeBusinessRating
@property(assign, nonatomic) BOOL includeGeoId;	// G=0x35f2ed39; S=0x35f2d009; @synthesize=_includeGeoId
@property(assign, nonatomic) BOOL includePhonetics;	// G=0x35f2ea65; S=0x35f2cccd; @synthesize=_includePhonetics
@property(assign, nonatomic) BOOL includeQuads;	// G=0x35f2eca5; S=0x35f2cf1d; @synthesize=_includeQuads
@property(assign, nonatomic) BOOL isStrictMapRegion;	// G=0x35f2ec3d; S=0x35f2cecd; @synthesize=_isStrictMapRegion
@property(retain, nonatomic) GEOLocation *location;	// G=0x35f2e9a9; S=0x35f2e9b9; @synthesize=_location
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x35f2ea11; S=0x35f2ea21; @synthesize=_mapRegion
@property(assign, nonatomic) int maxBusinessReviews;	// G=0x35f2ebd9; S=0x35f2ce05; @synthesize=_maxBusinessReviews
@property(assign, nonatomic) int maxResults;	// G=0x35f2ccf1; S=0x35f2cd15; @synthesize=_maxResults
@property(readonly, assign, nonatomic) long long *placeIDs;	// G=0x35f2c959; 
@property(readonly, assign, nonatomic) unsigned placeIDsCount;	// G=0x35f2c945; 
@property(assign, nonatomic) int resultOffset;	// G=0x35f2eab5; S=0x35f2cd39; @synthesize=_resultOffset
@property(retain, nonatomic) NSString *search;	// G=0x35f2e9dd; S=0x35f2e9ed; @synthesize=_search
@property(retain, nonatomic) NSString *searchContext;	// G=0x35f2ed49; S=0x35f2ed59; @synthesize=_searchContext
@property(retain, nonatomic) GEOSearchSubstring *searchContextSubstring;	// G=0x35f2ed7d; S=0x35f2ed8d; @synthesize=_searchContextSubstring
@property(retain, nonatomic) NSMutableArray *searchSubstrings;	// G=0x35f2ece5; S=0x35f2ecf5; @synthesize=_searchSubstrings
@property(retain, nonatomic) GEOSessionID *sessionGUID;	// G=0x35f2eaf5; S=0x35f2eb05; @synthesize=_sessionGUID
@property(assign, nonatomic) int sessionID;	// G=0x35f2eae5; S=0x35f2cd5d; @synthesize=_sessionID
- (void)addBusinessID:(long long)anId;	// 0x35f2ca8d
- (void)addFilterByBusinessCategory:(id)category;	// 0x35f2ce29
- (void)addIncludeAdditionalPlaceType:(int)type;	// 0x35f2cbfd
- (void)addPlaceID:(long long)anId;	// 0x35f2c97d
- (void)addSearchSubstring:(id)substring;	// 0x35f2cf65
// declared property getter: - (id)address;	// 0x35f2e975
- (long long)businessIDAtIndex:(unsigned)index;	// 0x35f2caa5
// declared property getter: - (long long *)businessIDs;	// 0x35f2ca69
// declared property getter: - (unsigned)businessIDsCount;	// 0x35f2ca55
// declared property getter: - (int)businessSortOrder;	// 0x35f2eb49
- (void)clearBusinessIDs;	// 0x35f2ca79
- (void)clearIncludeAdditionalPlaceTypes;	// 0x35f2cbe9
- (void)clearPlaceIDs;	// 0x35f2c969
- (void)dealloc;	// 0x35f2c82d
- (id)description;	// 0x35f2d05d
- (id)dictionaryRepresentation;	// 0x35f2d0cd
// declared property getter: - (BOOL)excludeAddressInResults;	// 0x35f2ecd5
- (id)filterByBusinessCategoryAtIndex:(unsigned)index;	// 0x35f2cead
// declared property getter: - (id)filterByBusinessCategorys;	// 0x35f2ebe9
- (unsigned)filterByBusinessCategorysCount;	// 0x35f2ce8d
// declared property getter: - (long long)geoId;	// 0x35f2ec6d
// declared property getter: - (BOOL)hasAddress;	// 0x35f2cb65
// declared property getter: - (BOOL)hasBusinessSortOrder;	// 0x35f2eb29
// declared property getter: - (BOOL)hasExcludeAddressInResults;	// 0x35f2ecb5
// declared property getter: - (BOOL)hasGeoId;	// 0x35f2ec4d
// declared property getter: - (BOOL)hasIncludeBusinessCategories;	// 0x35f2eb89
// declared property getter: - (BOOL)hasIncludeBusinessRating;	// 0x35f2eb59
// declared property getter: - (BOOL)hasIncludeGeoId;	// 0x35f2ed19
// declared property getter: - (BOOL)hasIncludePhonetics;	// 0x35f2ea45
// declared property getter: - (BOOL)hasIncludeQuads;	// 0x35f2ec85
// declared property getter: - (BOOL)hasIsStrictMapRegion;	// 0x35f2ec1d
// declared property getter: - (BOOL)hasLocation;	// 0x35f2cb7d
// declared property getter: - (BOOL)hasMapRegion;	// 0x35f2cbad
// declared property getter: - (BOOL)hasMaxBusinessReviews;	// 0x35f2ebb9
// declared property getter: - (BOOL)hasMaxResults;	// 0x35f2ea75
// declared property getter: - (BOOL)hasResultOffset;	// 0x35f2ea95
// declared property getter: - (BOOL)hasSearch;	// 0x35f2cb95
// declared property getter: - (BOOL)hasSearchContext;	// 0x35f2d02d
// declared property getter: - (BOOL)hasSearchContextSubstring;	// 0x35f2d045
// declared property getter: - (BOOL)hasSessionGUID;	// 0x35f2cd81
// declared property getter: - (BOOL)hasSessionID;	// 0x35f2eac5
- (int)includeAdditionalPlaceTypeAtIndex:(unsigned)index;	// 0x35f2cc11
// declared property getter: - (int *)includeAdditionalPlaceTypes;	// 0x35f2cbd9
// declared property getter: - (unsigned)includeAdditionalPlaceTypesCount;	// 0x35f2cbc5
// declared property getter: - (BOOL)includeBusinessCategories;	// 0x35f2eba9
// declared property getter: - (BOOL)includeBusinessRating;	// 0x35f2eb79
// declared property getter: - (BOOL)includeGeoId;	// 0x35f2ed39
// declared property getter: - (BOOL)includePhonetics;	// 0x35f2ea65
// declared property getter: - (BOOL)includeQuads;	// 0x35f2eca5
// declared property getter: - (BOOL)isStrictMapRegion;	// 0x35f2ec3d
// declared property getter: - (id)location;	// 0x35f2e9a9
// declared property getter: - (id)mapRegion;	// 0x35f2ea11
// declared property getter: - (int)maxBusinessReviews;	// 0x35f2ebd9
// declared property getter: - (int)maxResults;	// 0x35f2ccf1
- (long long)placeIDAtIndex:(unsigned)index;	// 0x35f2c995
// declared property getter: - (long long *)placeIDs;	// 0x35f2c959
// declared property getter: - (unsigned)placeIDsCount;	// 0x35f2c945
- (BOOL)readFrom:(id)from;	// 0x35f2d851
- (unsigned)requestTypeCode;	// 0x35f2e955
- (Class)responseClass;	// 0x35f2e959
// declared property getter: - (int)resultOffset;	// 0x35f2eab5
// declared property getter: - (id)search;	// 0x35f2e9dd
// declared property getter: - (id)searchContext;	// 0x35f2ed49
// declared property getter: - (id)searchContextSubstring;	// 0x35f2ed7d
- (id)searchSubstringAtIndex:(unsigned)index;	// 0x35f2cfe9
// declared property getter: - (id)searchSubstrings;	// 0x35f2ece5
- (unsigned)searchSubstringsCount;	// 0x35f2cfc9
// declared property getter: - (id)sessionGUID;	// 0x35f2eaf5
// declared property getter: - (int)sessionID;	// 0x35f2eae5
// declared property setter: - (void)setAddress:(id)address;	// 0x35f2e985
- (void)setBusinessIDs:(long long *)ids count:(unsigned)count;	// 0x35f2cb4d
// declared property setter: - (void)setBusinessSortOrder:(int)order;	// 0x35f2cd99
// declared property setter: - (void)setExcludeAddressInResults:(BOOL)results;	// 0x35f2cf41
// declared property setter: - (void)setFilterByBusinessCategorys:(id)categorys;	// 0x35f2ebf9
// declared property setter: - (void)setGeoId:(long long)anId;	// 0x35f2cef1
// declared property setter: - (void)setHasBusinessSortOrder:(BOOL)order;	// 0x35f2eb39
// declared property setter: - (void)setHasExcludeAddressInResults:(BOOL)results;	// 0x35f2ecc5
// declared property setter: - (void)setHasGeoId:(BOOL)anId;	// 0x35f2ec5d
// declared property setter: - (void)setHasIncludeBusinessCategories:(BOOL)categories;	// 0x35f2eb99
// declared property setter: - (void)setHasIncludeBusinessRating:(BOOL)rating;	// 0x35f2eb69
// declared property setter: - (void)setHasIncludeGeoId:(BOOL)anId;	// 0x35f2ed29
// declared property setter: - (void)setHasIncludePhonetics:(BOOL)phonetics;	// 0x35f2ea55
// declared property setter: - (void)setHasIncludeQuads:(BOOL)quads;	// 0x35f2ec95
// declared property setter: - (void)setHasIsStrictMapRegion:(BOOL)region;	// 0x35f2ec2d
// declared property setter: - (void)setHasMaxBusinessReviews:(BOOL)reviews;	// 0x35f2ebc9
// declared property setter: - (void)setHasMaxResults:(BOOL)results;	// 0x35f2ea85
// declared property setter: - (void)setHasResultOffset:(BOOL)offset;	// 0x35f2eaa5
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x35f2ead5
- (void)setIncludeAdditionalPlaceTypes:(int *)types count:(unsigned)count;	// 0x35f2ccb5
// declared property setter: - (void)setIncludeBusinessCategories:(BOOL)categories;	// 0x35f2cde1
// declared property setter: - (void)setIncludeBusinessRating:(BOOL)rating;	// 0x35f2cdbd
// declared property setter: - (void)setIncludeGeoId:(BOOL)anId;	// 0x35f2d009
// declared property setter: - (void)setIncludePhonetics:(BOOL)phonetics;	// 0x35f2cccd
// declared property setter: - (void)setIncludeQuads:(BOOL)quads;	// 0x35f2cf1d
// declared property setter: - (void)setIsStrictMapRegion:(BOOL)region;	// 0x35f2cecd
// declared property setter: - (void)setLocation:(id)location;	// 0x35f2e9b9
// declared property setter: - (void)setMapRegion:(id)region;	// 0x35f2ea21
// declared property setter: - (void)setMaxBusinessReviews:(int)reviews;	// 0x35f2ce05
// declared property setter: - (void)setMaxResults:(int)results;	// 0x35f2cd15
- (void)setPlaceIDs:(long long *)ids count:(unsigned)count;	// 0x35f2ca3d
// declared property setter: - (void)setResultOffset:(int)offset;	// 0x35f2cd39
// declared property setter: - (void)setSearch:(id)search;	// 0x35f2e9ed
// declared property setter: - (void)setSearchContext:(id)context;	// 0x35f2ed59
// declared property setter: - (void)setSearchContextSubstring:(id)substring;	// 0x35f2ed8d
// declared property setter: - (void)setSearchSubstrings:(id)substrings;	// 0x35f2ecf5
// declared property setter: - (void)setSessionGUID:(id)guid;	// 0x35f2eb05
// declared property setter: - (void)setSessionID:(int)anId;	// 0x35f2cd5d
- (void)writeTo:(id)to;	// 0x35f2e135
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

@interface GEOStructuredAddress : PBCodable {
	XXStruct_19EQxD _geoIds;	// 4 = 0x4
	NSString *_administrativeArea;	// 16 = 0x10
	NSString *_administrativeAreaCode;	// 20 = 0x14
	NSMutableArray *_areaOfInterests;	// 24 = 0x18
	NSString *_country;	// 28 = 0x1c
	NSString *_countryCode;	// 32 = 0x20
	NSMutableArray *_dependentLocalitys;	// 36 = 0x24
	NSString *_fullThoroughfare;	// 40 = 0x28
	NSString *_inlandWater;	// 44 = 0x2c
	NSString *_locality;	// 48 = 0x30
	NSString *_ocean;	// 52 = 0x34
	NSString *_postCode;	// 56 = 0x38
	NSString *_postCodeExtension;	// 60 = 0x3c
	NSString *_premise;	// 64 = 0x40
	NSString *_premises;	// 68 = 0x44
	NSString *_subAdministrativeArea;	// 72 = 0x48
	NSString *_subLocality;	// 76 = 0x4c
	NSMutableArray *_subPremises;	// 80 = 0x50
	NSString *_subThoroughfare;	// 84 = 0x54
	NSString *_thoroughfare;	// 88 = 0x58
}
@property(retain, nonatomic) NSString *administrativeArea;	// G=0x339213f1; S=0x33921fb1; @synthesize=_administrativeArea
@property(retain, nonatomic) NSString *administrativeAreaCode;	// G=0x3395d8d1; S=0x33921fc1; @synthesize=_administrativeAreaCode
@property(retain, nonatomic) NSMutableArray *areaOfInterests;	// G=0x3395d8f1; S=0x33922061; @synthesize=_areaOfInterests
@property(retain, nonatomic) NSString *country;	// G=0x33921471; S=0x33921f91; @synthesize=_country
@property(retain, nonatomic) NSString *countryCode;	// G=0x339213b1; S=0x33921fa1; @synthesize=_countryCode
@property(retain, nonatomic) NSMutableArray *dependentLocalitys;	// G=0x3395d901; S=0x33922091; @synthesize=_dependentLocalitys
@property(retain, nonatomic) NSString *fullThoroughfare;	// G=0x339213c1; S=0x33922041; @synthesize=_fullThoroughfare
@property(readonly, assign, nonatomic) long long *geoIds;	// G=0x3395c6b5; 
@property(readonly, assign, nonatomic) unsigned geoIdsCount;	// G=0x3395c6a1; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeArea;	// G=0x3395c359; 
@property(readonly, assign, nonatomic) BOOL hasAdministrativeAreaCode;	// G=0x3395c371; 
@property(readonly, assign, nonatomic) BOOL hasCountry;	// G=0x3395c329; 
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x3395c341; 
@property(readonly, assign, nonatomic) BOOL hasFullThoroughfare;	// G=0x3395c431; 
@property(readonly, assign, nonatomic) BOOL hasInlandWater;	// G=0x3395c52d; 
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x3395c3a1; 
@property(readonly, assign, nonatomic) BOOL hasOcean;	// G=0x3395c545; 
@property(readonly, assign, nonatomic) BOOL hasPostCode;	// G=0x3395c3b9; 
@property(readonly, assign, nonatomic) BOOL hasPostCodeExtension;	// G=0x3395c449; 
@property(readonly, assign, nonatomic) BOOL hasPremise;	// G=0x3395c5bd; 
@property(readonly, assign, nonatomic) BOOL hasPremises;	// G=0x3395c3e9; 
@property(readonly, assign, nonatomic) BOOL hasSubAdministrativeArea;	// G=0x3395c389; 
@property(readonly, assign, nonatomic) BOOL hasSubLocality;	// G=0x3395c3d1; 
@property(readonly, assign, nonatomic) BOOL hasSubThoroughfare;	// G=0x3395c419; 
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x3395c401; 
@property(retain, nonatomic) NSString *inlandWater;	// G=0x33921451; S=0x33922071; @synthesize=_inlandWater
@property(retain, nonatomic) NSString *locality;	// G=0x339213e1; S=0x33921fe1; @synthesize=_locality
@property(retain, nonatomic) NSString *ocean;	// G=0x33921461; S=0x33922081; @synthesize=_ocean
@property(retain, nonatomic) NSString *postCode;	// G=0x33921401; S=0x33921ff1; @synthesize=_postCode
@property(retain, nonatomic) NSString *postCodeExtension;	// G=0x3395d8e1; S=0x33922051; @synthesize=_postCodeExtension
@property(retain, nonatomic) NSString *premise;	// G=0x3395d911; S=0x339220a1; @synthesize=_premise
@property(retain, nonatomic) NSString *premises;	// G=0x33921431; S=0x33922011; @synthesize=_premises
@property(retain, nonatomic) NSString *subAdministrativeArea;	// G=0x33921411; S=0x33921fd1; @synthesize=_subAdministrativeArea
@property(retain, nonatomic) NSString *subLocality;	// G=0x33921421; S=0x33922001; @synthesize=_subLocality
@property(retain, nonatomic) NSMutableArray *subPremises;	// G=0x3395d921; S=0x339220b1; @synthesize=_subPremises
@property(retain, nonatomic) NSString *subThoroughfare;	// G=0x33921441; S=0x33922031; @synthesize=_subThoroughfare
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x339213d1; S=0x33922021; @synthesize=_thoroughfare
- (void)addAreaOfInterest:(id)interest;	// 0x3395c481
- (void)addDependentLocality:(id)locality;	// 0x33923ab1
- (void)addGeoId:(long long)anId;	// 0x3395c6d9
- (void)addSubPremise:(id)premise;	// 0x3395c5f5
// declared property getter: - (id)administrativeArea;	// 0x339213f1
// declared property getter: - (id)administrativeAreaCode;	// 0x3395d8d1
- (id)areaOfInterestAtIndex:(unsigned)index;	// 0x3395c50d
// declared property getter: - (id)areaOfInterests;	// 0x3395d8f1
- (unsigned)areaOfInterestsCount;	// 0x3395c4ed
- (void)clearAreaOfInterests;	// 0x3395c461
- (void)clearDependentLocalitys;	// 0x3395c55d
- (void)clearGeoIds;	// 0x3395c6c5
- (void)clearSubPremises;	// 0x3395c5d5
- (void)copyTo:(id)to;	// 0x3395cd09
// declared property getter: - (id)country;	// 0x33921471
// declared property getter: - (id)countryCode;	// 0x339213b1
- (void)dealloc;	// 0x33921dd5
- (id)dependentLocalityAtIndex:(unsigned)index;	// 0x3395c59d
// declared property getter: - (id)dependentLocalitys;	// 0x3395d901
- (unsigned)dependentLocalitysCount;	// 0x3395c57d
- (id)description;	// 0x3395c7b1
- (id)dictionaryRepresentation;	// 0x3395c821
// declared property getter: - (id)fullThoroughfare;	// 0x339213c1
- (long long)geoIdAtIndex:(unsigned)index;	// 0x3395c6f1
// declared property getter: - (long long *)geoIds;	// 0x3395c6b5
// declared property getter: - (unsigned)geoIdsCount;	// 0x3395c6a1
// declared property getter: - (BOOL)hasAdministrativeArea;	// 0x3395c359
// declared property getter: - (BOOL)hasAdministrativeAreaCode;	// 0x3395c371
// declared property getter: - (BOOL)hasCountry;	// 0x3395c329
// declared property getter: - (BOOL)hasCountryCode;	// 0x3395c341
// declared property getter: - (BOOL)hasFullThoroughfare;	// 0x3395c431
// declared property getter: - (BOOL)hasInlandWater;	// 0x3395c52d
// declared property getter: - (BOOL)hasLocality;	// 0x3395c3a1
// declared property getter: - (BOOL)hasOcean;	// 0x3395c545
// declared property getter: - (BOOL)hasPostCode;	// 0x3395c3b9
// declared property getter: - (BOOL)hasPostCodeExtension;	// 0x3395c449
// declared property getter: - (BOOL)hasPremise;	// 0x3395c5bd
// declared property getter: - (BOOL)hasPremises;	// 0x3395c3e9
// declared property getter: - (BOOL)hasSubAdministrativeArea;	// 0x3395c389
// declared property getter: - (BOOL)hasSubLocality;	// 0x3395c3d1
// declared property getter: - (BOOL)hasSubThoroughfare;	// 0x3395c419
// declared property getter: - (BOOL)hasThoroughfare;	// 0x3395c401
- (unsigned)hash;	// 0x3395d6b5
// declared property getter: - (id)inlandWater;	// 0x33921451
- (BOOL)isEqual:(id)equal;	// 0x3395d2ad
// declared property getter: - (id)locality;	// 0x339213e1
// declared property getter: - (id)ocean;	// 0x33921461
// declared property getter: - (id)postCode;	// 0x33921401
// declared property getter: - (id)postCodeExtension;	// 0x3395d8e1
// declared property getter: - (id)premise;	// 0x3395d911
// declared property getter: - (id)premises;	// 0x33921431
- (BOOL)readFrom:(id)from;	// 0x3395ccfd
// declared property setter: - (void)setAdministrativeArea:(id)area;	// 0x33921fb1
// declared property setter: - (void)setAdministrativeAreaCode:(id)code;	// 0x33921fc1
// declared property setter: - (void)setAreaOfInterests:(id)interests;	// 0x33922061
// declared property setter: - (void)setCountry:(id)country;	// 0x33921f91
// declared property setter: - (void)setCountryCode:(id)code;	// 0x33921fa1
// declared property setter: - (void)setDependentLocalitys:(id)localitys;	// 0x33922091
// declared property setter: - (void)setFullThoroughfare:(id)thoroughfare;	// 0x33922041
- (void)setGeoIds:(long long *)ids count:(unsigned)count;	// 0x3395c799
// declared property setter: - (void)setInlandWater:(id)water;	// 0x33922071
// declared property setter: - (void)setLocality:(id)locality;	// 0x33921fe1
// declared property setter: - (void)setOcean:(id)ocean;	// 0x33922081
// declared property setter: - (void)setPostCode:(id)code;	// 0x33921ff1
// declared property setter: - (void)setPostCodeExtension:(id)extension;	// 0x33922051
// declared property setter: - (void)setPremise:(id)premise;	// 0x339220a1
// declared property setter: - (void)setPremises:(id)premises;	// 0x33922011
// declared property setter: - (void)setSubAdministrativeArea:(id)area;	// 0x33921fd1
// declared property setter: - (void)setSubLocality:(id)locality;	// 0x33922001
// declared property setter: - (void)setSubPremises:(id)premises;	// 0x339220b1
// declared property setter: - (void)setSubThoroughfare:(id)thoroughfare;	// 0x33922031
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x33922021
// declared property getter: - (id)subAdministrativeArea;	// 0x33921411
// declared property getter: - (id)subLocality;	// 0x33921421
- (id)subPremiseAtIndex:(unsigned)index;	// 0x3395c681
// declared property getter: - (id)subPremises;	// 0x3395d921
- (unsigned)subPremisesCount;	// 0x3395c661
// declared property getter: - (id)subThoroughfare;	// 0x33921441
// declared property getter: - (id)thoroughfare;	// 0x339213d1
- (void)writeTo:(id)to;	// 0x33920059
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface ALCity : NSObject {
	int _identifier;	// 4 = 0x4
	NSString *_localeCode;	// 8 = 0x8
	NSString *_timeZone;	// 12 = 0xc
	float _longitude;	// 16 = 0x10
	float _latitude;	// 20 = 0x14
	NSString *_yahooCode;	// 24 = 0x18
	NSString *_name;	// 28 = 0x1c
	NSString *_unlocalizedName;	// 32 = 0x20
	NSString *_countryName;	// 36 = 0x24
	NSString *_unlocalizedCountryName;	// 40 = 0x28
	NSString *_countryOverride;	// 44 = 0x2c
	NSString *_unlocalizedCountryOverride;	// 48 = 0x30
	NSString *_identifierForCPCity;	// 52 = 0x34
	BOOL _localizationAttempted;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) NSString *classicIdentifier;	// G=0x3339efa5; 
@property(retain, nonatomic) NSString *countryName;	// G=0x3339ec91; S=0x3339ec39; 
@property(retain, nonatomic) NSString *countryOverride;	// G=0x3339ebf9; S=0x3339eba1; 
@property(assign, nonatomic) int identifier;	// G=0x3339e869; S=0x3339e879; @synthesize=_identifier
@property(assign, nonatomic) float latitude;	// G=0x3339e809; S=0x3339e819; @synthesize=_latitude
@property(retain, nonatomic) NSString *localeCode;	// G=0x3339e859; S=0x3339e90d; @synthesize=_localeCode
@property(assign, nonatomic) float longitude;	// G=0x3339e829; S=0x3339e839; @synthesize=_longitude
@property(retain, nonatomic) NSString *name;	// G=0x3339ed29; S=0x3339ecd1; 
@property(readonly, assign, nonatomic) NSDictionary *properties;	// G=0x3339ed69; 
@property(retain, nonatomic) NSString *timeZone;	// G=0x3339e849; S=0x3339e935; @synthesize=_timeZone
@property(retain, nonatomic) NSString *unlocalizedCountryName;	// G=0x3339e7d9; S=0x3339eac9; 
@property(retain, nonatomic) NSString *unlocalizedCountryOverride;	// G=0x3339e7e9; S=0x3339e985; @synthesize=_unlocalizedCountryOverride
@property(retain, nonatomic) NSString *unlocalizedName;	// G=0x3339e7c9; S=0x3339eb35; 
@property(retain, nonatomic) NSString *yahooCode;	// G=0x3339e7f9; S=0x3339e95d; @synthesize=_yahooCode
- (id)init;	// 0x3339e889
- (id)initWithProperties:(id)properties;	// 0x3339f461
- (id)initWithSQLRow:(char **)sqlrow;	// 0x3339f295
// declared property getter: - (id)classicIdentifier;	// 0x3339efa5
// declared property getter: - (id)countryName;	// 0x3339ec91
// declared property getter: - (id)countryOverride;	// 0x3339ebf9
- (void)dealloc;	// 0x3339f195
- (id)description;	// 0x3339e9ad
- (id)displayNameIncludingCountry:(BOOL)country;	// 0x3339f039
- (void)ensureLocalized;	// 0x3339f119
- (unsigned)hash;	// 0x3339e7b9
// declared property getter: - (int)identifier;	// 0x3339e869
- (BOOL)isEqual:(id)equal;	// 0x3339e89d
// declared property getter: - (float)latitude;	// 0x3339e809
// declared property getter: - (id)localeCode;	// 0x3339e859
// declared property getter: - (float)longitude;	// 0x3339e829
// declared property getter: - (id)name;	// 0x3339ed29
// declared property getter: - (id)properties;	// 0x3339ed69
// declared property setter: - (void)setCountryName:(id)name;	// 0x3339ec39
// declared property setter: - (void)setCountryOverride:(id)override;	// 0x3339eba1
// declared property setter: - (void)setIdentifier:(int)identifier;	// 0x3339e879
// declared property setter: - (void)setLatitude:(float)latitude;	// 0x3339e819
// declared property setter: - (void)setLocaleCode:(id)code;	// 0x3339e90d
// declared property setter: - (void)setLongitude:(float)longitude;	// 0x3339e839
// declared property setter: - (void)setName:(id)name;	// 0x3339ecd1
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3339e935
// declared property setter: - (void)setUnlocalizedCountryName:(id)name;	// 0x3339eac9
// declared property setter: - (void)setUnlocalizedCountryOverride:(id)override;	// 0x3339e985
// declared property setter: - (void)setUnlocalizedName:(id)name;	// 0x3339eb35
// declared property setter: - (void)setYahooCode:(id)code;	// 0x3339e95d
// declared property getter: - (id)timeZone;	// 0x3339e849
// declared property getter: - (id)unlocalizedCountryName;	// 0x3339e7d9
// declared property getter: - (id)unlocalizedCountryOverride;	// 0x3339e7e9
// declared property getter: - (id)unlocalizedName;	// 0x3339e7c9
// declared property getter: - (id)yahooCode;	// 0x3339e7f9
@end


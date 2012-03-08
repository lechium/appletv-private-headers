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
@property(readonly, assign, nonatomic) NSString *classicIdentifier;	// G=0x347334ed; 
@property(retain, nonatomic) NSString *countryName;	// G=0x347331d9; S=0x34733181; 
@property(retain, nonatomic) NSString *countryOverride;	// G=0x34733141; S=0x347330e9; 
@property(assign, nonatomic) int identifier;	// G=0x34732db1; S=0x34732dc1; @synthesize=_identifier
@property(assign, nonatomic) float latitude;	// G=0x34732d51; S=0x34732d61; @synthesize=_latitude
@property(retain, nonatomic) NSString *localeCode;	// G=0x34732da1; S=0x34732e55; @synthesize=_localeCode
@property(assign, nonatomic) float longitude;	// G=0x34732d71; S=0x34732d81; @synthesize=_longitude
@property(retain, nonatomic) NSString *name;	// G=0x34733271; S=0x34733219; 
@property(readonly, assign, nonatomic) NSDictionary *properties;	// G=0x347332b1; 
@property(retain, nonatomic) NSString *timeZone;	// G=0x34732d91; S=0x34732e7d; @synthesize=_timeZone
@property(retain, nonatomic) NSString *unlocalizedCountryName;	// G=0x34732d21; S=0x34733011; 
@property(retain, nonatomic) NSString *unlocalizedCountryOverride;	// G=0x34732d31; S=0x34732ecd; @synthesize=_unlocalizedCountryOverride
@property(retain, nonatomic) NSString *unlocalizedName;	// G=0x34732d11; S=0x3473307d; 
@property(retain, nonatomic) NSString *yahooCode;	// G=0x34732d41; S=0x34732ea5; @synthesize=_yahooCode
- (id)init;	// 0x34732dd1
- (id)initWithProperties:(id)properties;	// 0x347339a9
- (id)initWithSQLRow:(char **)sqlrow;	// 0x347337dd
// declared property getter: - (id)classicIdentifier;	// 0x347334ed
// declared property getter: - (id)countryName;	// 0x347331d9
// declared property getter: - (id)countryOverride;	// 0x34733141
- (void)dealloc;	// 0x347336dd
- (id)description;	// 0x34732ef5
- (id)displayNameIncludingCountry:(BOOL)country;	// 0x34733581
- (void)ensureLocalized;	// 0x34733661
- (unsigned)hash;	// 0x34732d01
// declared property getter: - (int)identifier;	// 0x34732db1
- (BOOL)isEqual:(id)equal;	// 0x34732de5
// declared property getter: - (float)latitude;	// 0x34732d51
// declared property getter: - (id)localeCode;	// 0x34732da1
// declared property getter: - (float)longitude;	// 0x34732d71
// declared property getter: - (id)name;	// 0x34733271
// declared property getter: - (id)properties;	// 0x347332b1
// declared property setter: - (void)setCountryName:(id)name;	// 0x34733181
// declared property setter: - (void)setCountryOverride:(id)override;	// 0x347330e9
// declared property setter: - (void)setIdentifier:(int)identifier;	// 0x34732dc1
// declared property setter: - (void)setLatitude:(float)latitude;	// 0x34732d61
// declared property setter: - (void)setLocaleCode:(id)code;	// 0x34732e55
// declared property setter: - (void)setLongitude:(float)longitude;	// 0x34732d81
// declared property setter: - (void)setName:(id)name;	// 0x34733219
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x34732e7d
// declared property setter: - (void)setUnlocalizedCountryName:(id)name;	// 0x34733011
// declared property setter: - (void)setUnlocalizedCountryOverride:(id)override;	// 0x34732ecd
// declared property setter: - (void)setUnlocalizedName:(id)name;	// 0x3473307d
// declared property setter: - (void)setYahooCode:(id)code;	// 0x34732ea5
// declared property getter: - (id)timeZone;	// 0x34732d91
// declared property getter: - (id)unlocalizedCountryName;	// 0x34732d21
// declared property getter: - (id)unlocalizedCountryOverride;	// 0x34732d31
// declared property getter: - (id)unlocalizedName;	// 0x34732d11
// declared property getter: - (id)yahooCode;	// 0x34732d41
@end


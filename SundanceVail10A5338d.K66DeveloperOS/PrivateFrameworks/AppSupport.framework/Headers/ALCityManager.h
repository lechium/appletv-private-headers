/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class CPSearchMatcher;

@interface ALCityManager : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	sqlite3 *_localizedDb;	// 8 = 0x8
	CPSearchMatcher *_citySearchMatcher;	// 12 = 0xc
}
@property(readonly, assign) CPSearchMatcher *citySearchMatcher;	// G=0x34579d1d; @synthesize=_citySearchMatcher
+ (CFArrayRef)legacyCityForCity:(id)city;	// 0x34578ec9
+ (id)newCitiesByIdentifierMap:(id)map;	// 0x34578715
+ (id)sharedManager;	// 0x34577ad1
- (id)init;	// 0x34577891
- (id)allCities;	// 0x34577b19
- (id)bestCityForLegacyCity:(CFArrayRef)legacyCity;	// 0x34578d01
- (id)citiesMatchingName:(id)name;	// 0x34577b65
- (id)citiesMatchingName:(id)name localized:(BOOL)localized;	// 0x34577b79
- (id)citiesMatchingQualifier:(id)qualifier;	// 0x345790c9
- (id)citiesWithIdentifiers:(id)identifiers;	// 0x34578879
- (id)citiesWithTimeZone:(id)timeZone;	// 0x34579c49
- (id)cityForClassicIdentifier:(id)classicIdentifier;	// 0x34578b59
// declared property getter: - (id)citySearchMatcher;	// 0x34579d1d
- (void)dealloc;	// 0x34579ca5
- (id)defaultCitiesForLocaleCode:(id)localeCode;	// 0x34579821
- (id)defaultCitiesForLocaleCode:(id)localeCode options:(int)options;	// 0x345794fd
- (id)defaultCityForTimeZone:(id)timeZone;	// 0x34579835
- (id)localeWithCode:(id)code;	// 0x34579245
- (void)localizeCities:(id)cities;	// 0x34577f85
@end


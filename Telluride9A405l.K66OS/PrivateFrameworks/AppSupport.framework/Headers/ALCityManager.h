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
@property(readonly, assign) CPSearchMatcher *citySearchMatcher;	// G=0x36f4a4d9; @synthesize=_citySearchMatcher
+ (CFArrayRef)legacyCityForCity:(id)city;	// 0x36f4a731
+ (id)newCitiesByIdentifierMap:(id)map;	// 0x36f4a971
+ (id)sharedManager;	// 0x36f4a6e9
- (id)init;	// 0x36f4c519
- (id)bestCityForLegacyCity:(CFArrayRef)legacyCity;	// 0x36f4b53d
- (id)citiesMatchingName:(id)name;	// 0x36f4a4e9
- (id)citiesMatchingName:(id)name localized:(BOOL)localized;	// 0x36f4c095
- (id)citiesMatchingQualifier:(id)qualifier;	// 0x36f4b3d1
- (id)citiesWithIdentifiers:(id)identifiers;	// 0x36f4a4fd
- (id)citiesWithTimeZone:(id)timeZone;	// 0x36f4a67d
- (id)cityForClassicIdentifier:(id)classicIdentifier;	// 0x36f4b6e1
// declared property getter: - (id)citySearchMatcher;	// 0x36f4a4d9
- (void)dealloc;	// 0x36f4aab1
- (id)defaultCitiesForLocaleCode:(id)localeCode;	// 0x36f4a669
- (id)defaultCitiesForLocaleCode:(id)localeCode options:(int)options;	// 0x36f4add5
- (id)defaultCityForTimeZone:(id)timeZone;	// 0x36f4ab29
- (id)localeWithCode:(id)code;	// 0x36f4b105
- (void)localizeCities:(id)cities;	// 0x36f4b895
@end


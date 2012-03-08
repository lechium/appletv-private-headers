/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSLocale : NSObject <NSCopying, NSCoding> {
}
+ (id)ISOCountryCodes;	// 0x30daa3e9
+ (id)ISOCurrencyCodes;	// 0x30daa415
+ (id)ISOLanguageCodes;	// 0x30daa3bd
+ (id)allocWithZone:(NSZone *)zone;	// 0x30d13189
+ (id)availableLocaleIdentifiers;	// 0x30daa391
+ (id)canonicalLanguageIdentifierFromString:(id)string;	// 0x30d1ed9d
+ (id)canonicalLocaleIdentifierFromString:(id)string;	// 0x30daa46d
+ (unsigned)characterDirectionForLanguage:(id)language;	// 0x30d3c8c9
+ (id)commonISOCurrencyCodes;	// 0x30daa441
+ (id)componentsFromLocaleIdentifier:(id)localeIdentifier;	// 0x30d1ed25
+ (id)currentLocale;	// 0x30d12451
+ (unsigned)lineDirectionForLanguage:(id)language;	// 0x30daa4ed
+ (id)localeIdentifierFromComponents:(id)components;	// 0x30d1ed61
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned)windowsLocaleCode;	// 0x30daa4a9
+ (id)localeWithLocaleIdentifier:(id)localeIdentifier;	// 0x30daa355
+ (id)preferredLanguages;	// 0x30d1eb75
+ (id)systemLocale;	// 0x30daa32d
+ (unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)localeIdentifier;	// 0x30daa4e5
- (id)init;	// 0x30daa251
- (id)initWithCoder:(id)coder;	// 0x30daa315
- (id)initWithLocaleIdentifier:(id)localeIdentifier;	// 0x30daa331
- (unsigned long)_cfTypeID;	// 0x30daa265
- (id)_copyDisplayNameForKey:(id)key value:(id)value;	// 0x30daa4f5
- (id)_prefs;	// 0x30daa51d
- (id)copyWithZone:(NSZone *)zone;	// 0x30d2e38d
- (id)displayNameForKey:(id)key value:(id)value;	// 0x30daa22d
- (void)encodeWithCoder:(id)coder;	// 0x30daa319
- (unsigned)hash;	// 0x30daa269
- (id)identifier;	// 0x30daa31d
- (BOOL)isEqual:(id)equal;	// 0x30daa291
- (id)localeIdentifier;	// 0x30d1eb59
- (id)objectForKey:(id)key;	// 0x30daa209
@end


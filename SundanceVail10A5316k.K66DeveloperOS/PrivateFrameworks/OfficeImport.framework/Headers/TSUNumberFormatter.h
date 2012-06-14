/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSUNumberFormatter : NSObject {
@private
	CFLocaleRef mLocale;	// 4 = 0x4
	CFArrayRef mDecimalFormatters;	// 8 = 0x8
	CFArrayRef mCurrencyFormatters;	// 12 = 0xc
	CFArrayRef mPercentageFormatters;	// 16 = 0x10
	CFArrayRef mScientificFormatters;	// 20 = 0x14
	CFNumberFormatterRef mFractionFormatter;	// 24 = 0x18
	NSMutableDictionary *mCurrencyCodeToSymbolMap;	// 28 = 0x1c
	NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;	// 32 = 0x20
	NSString *mCurrencyString;	// 36 = 0x24
	NSString *mPercentageString;	// 40 = 0x28
	NSString *mScientificString;	// 44 = 0x2c
	NSString *mDecimalString;	// 48 = 0x30
	NSString *mPercentSymbol;	// 52 = 0x34
	NSMutableArray *mTransformedDecimalStrings;	// 56 = 0x38
	NSMutableArray *mTransformedCurrencyStrings;	// 60 = 0x3c
	NSMutableArray *mTransformedPercentageStrings;	// 64 = 0x40
	NSMutableArray *mTransformedScientificStrings;	// 68 = 0x44
	CFStringRef mAdditionalCurrencyCode;	// 72 = 0x48
	CFArrayRef mAdditionalCurrencyCodeFormatters;	// 76 = 0x4c
}
+ (id)availableCurrencyCodes;	// 0x312dfa6d
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x312dfab9
+ (id)currentLocaleCurrencyCode;	// 0x312dfb8d
+ (id)currentLocaleDecimalSeparator;	// 0x312dfc21
+ (id)currentLocaleListSeparator;	// 0x312dfc5d
+ (id)currentNonCachedLocaleCurrencyCode;	// 0x312dfbb9
+ (id)currentNonCachedLocaleDecimalSeparator;	// 0x312dfc25
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;	// 0x312dfae9
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x312dfcf1
+ (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x312dfcbd
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x312dfa89
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x312df865
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x312df5a5
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x312dff61
+ (void)initialize;	// 0x312df421
+ (id)localizedPercentSymbol;	// 0x312dfd21
+ (id)numberFormatStringSpecialSymbols;	// 0x312dfc61
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x312df511
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x312df55d
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x312df4b5
+ (id)userVisibleCurrencyCodes;	// 0x312dfd4d
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x312e0221
- (BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code5;	// 0x312e093d
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x312e1125
- (id)currentLocaleCurrencyCode;	// 0x312e14dd
- (void)dealloc;	// 0x312e0579
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x312e08f5
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x312e1591
- (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x312e1535
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x312e10ed
- (BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code succesTSUlString:(const CFStringRef *)string3;	// 0x312e0f41
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x312e0b11
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;	// 0x312e1389
- (id)localizedPercentSymbol;	// 0x312e15d5
- (void)numberPreferencesChanged:(id)changed;	// 0x312e0769
- (CFArrayRef)p_currencyFormatters;	// 0x312e16d5
- (CFArrayRef)p_decimalFormatters;	// 0x312e15e5
- (CFArrayRef)p_percentageFormatters;	// 0x312e17d9
- (CFArrayRef)p_scientificFormatters;	// 0x312e18c9
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x312e0a7d
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x312e0ac5
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x312e0ea9
@end


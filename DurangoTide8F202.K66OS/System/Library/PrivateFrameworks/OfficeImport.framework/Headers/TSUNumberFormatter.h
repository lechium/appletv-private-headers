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
+ (id)availableCurrencyCodes;	// 0x31b75879
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x31b751c1
+ (id)currentLocaleCurrencyCode;	// 0x31b7519d
+ (id)currentLocaleDecimalSeparator;	// 0x31b763c9
+ (id)currentLocaleListSeparator;	// 0x31b76375
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;	// 0x31b75891
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x31b750f5
+ (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x31b7511d
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x31b751e9
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x31b784b9
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x31b75211
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x31b76461
+ (void)initialize;	// 0x31b757f1
+ (id)localizedPercentSymbol;	// 0x31b750d1
+ (id)numberFormatStringSpecialSymbols;	// 0x31b75149
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x31b754c1
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x31b75481
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x31b756c5
+ (id)userVisibleCurrencyCodes;	// 0x31b75929
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x31b75cfd
- (BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code5;	// 0x31b77311
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x31b76181
- (id)currentLocaleCurrencyCode;	// 0x31b76141
- (void)dealloc;	// 0x31b75b35
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x31b75085
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x31b74f25
- (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x31b74f71
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x31b76111
- (BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code succesTSUlString:(const CFStringRef *)string3;	// 0x31b779d1
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x31b77649
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;	// 0x31b763d5
- (id)localizedPercentSymbol;	// 0x31b74f61
- (void)numberPreferencesChanged:(id)changed;	// 0x31b76065
- (CFArrayRef)p_currencyFormatters;	// 0x31b77231
- (CFArrayRef)p_decimalFormatters;	// 0x31b77575
- (CFArrayRef)p_percentageFormatters;	// 0x31b76875
- (CFArrayRef)p_scientificFormatters;	// 0x31b766e1
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x31b75039
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x31b74fed
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x31b7661d
@end


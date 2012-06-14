/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SFUNumberFormatter : NSObject {
@private
	CFLocaleRef mLocale;	// 4 = 0x4
	CFArrayRef mDecimalFormatters;	// 8 = 0x8
	CFArrayRef mCurrencyFormatters;	// 12 = 0xc
	CFArrayRef mPercentageFormatters;	// 16 = 0x10
	CFArrayRef mScientificFormatters;	// 20 = 0x14
	CFNumberFormatterRef mFractionFormatter;	// 24 = 0x18
	NSMutableDictionary *mCurrencyCodeToSymbolMap;	// 28 = 0x1c
	NSString *mCurrencyString;	// 32 = 0x20
	NSString *mPercentageString;	// 36 = 0x24
	NSString *mScientificString;	// 40 = 0x28
	NSString *mDecimalString;	// 44 = 0x2c
	NSString *mPercentSymbol;	// 48 = 0x30
}
+ (id)availableCurrencyCodes;	// 0x32b06091
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x32b06031
+ (id)currentLocaleCurrencyCode;	// 0x32b06005
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x32b05f79
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x32b06061
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x32b060ad
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x32b05c85
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x32b064c1
+ (id)localizedPercentSymbol;	// 0x32b05f4d
+ (id)numberFormatStringSpecialSymbols;	// 0x32b05fa9
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x32b05bed
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x32b05c39
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x32b062bd
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x32b08991
- (BOOL)currencyFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3 currencyCode:(const CFStringRef *)code;	// 0x32b063ed
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x32b06fad
- (id)currentLocaleCurrencyCode;	// 0x32b070a9
- (void)dealloc;	// 0x32b06e59
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x32b063b1
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x32b05a29
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x32b06f75
- (BOOL)findCurrencySymbolInString:(CFStringRef)string;	// 0x32b07161
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x32b072a1
- (id)localizedPercentSymbol;	// 0x32b05a6d
- (void)numberPreferencesChanged:(id)changed;	// 0x32b06311
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x32b06449
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x32b06485
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x32b07595
@end

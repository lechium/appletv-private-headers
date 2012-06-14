/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "TSUNumberFormatting.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSIndexSet, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSUNumberFormat : NSObject <TSUNumberFormatting> {
@private
	int mValueType;	// 4 = 0x4
	NSString *mFormatString;	// 8 = 0x8
	unsigned short mDecimalPlaces;	// 12 = 0xc
	NSString *mCurrencyCode;	// 16 = 0x10
	BOOL mUseAccountingStyle;	// 20 = 0x14
	int mNegativeStyle;	// 24 = 0x18
	BOOL mShowThousandsSeparator;	// 28 = 0x1c
	int mFractionAccuracy;	// 32 = 0x20
	BOOL mFormatStringRequiresSuppressionOfMinusSign;	// 36 = 0x24
	BOOL mUseScientificFormattingAutomatically;	// 37 = 0x25
	BOOL mIgnoreDecimalPlacesForZeroValue;	// 38 = 0x26
	NSString *mPrefixString;	// 40 = 0x28
	NSString *mSuffixString;	// 44 = 0x2c
	unsigned char mBase;	// 48 = 0x30
	unsigned short mBasePlaces;	// 50 = 0x32
	BOOL mBaseUseMinusSign;	// 52 = 0x34
	BOOL mIsCustom;	// 53 = 0x35
	double mScaleFactor;	// 56 = 0x38
	BOOL mFormatStringContainsTabCharacter;	// 64 = 0x40
	BOOL mFormatContainsSpecialTokens;	// 65 = 0x41
	BOOL mFormatContainsIntegerToken;	// 66 = 0x42
	unsigned char mNumberOfHashDecimalPlaceholders;	// 67 = 0x43
	unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;	// 68 = 0x44
	BOOL mRequiresFractionReplacement;	// 69 = 0x45
	NSArray *mInterstitialStrings;	// 72 = 0x48
	NSIndexSet *mInterstitialStringInsertionIndexes;	// 76 = 0x4c
	unsigned short mIndexFromRightOfLastDigitPlaceholder;	// 80 = 0x50
	BOOL mIsTextFormat;	// 82 = 0x52
	unsigned char mMinimumIntegerWidth;	// 83 = 0x53
	unsigned char mDecimalWidth;	// 84 = 0x54
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;	// 85 = 0x55
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;	// 86 = 0x56
	NSString *mFormatName;	// 88 = 0x58
}
@property(retain) id formatName;	// G=0x31305be1; S=0x31305ba5; converted property
@property(assign) BOOL ignoreDecimalPlacesForZeroValue;	// G=0x31305e31; S=0x31305e41; converted property
@property(assign) BOOL useScientificFormattingAutomatically;	// G=0x31305e11; S=0x31305e21; converted property
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x31303e09
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x31303ed9
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom formatName:(id)name;	// 0x31303fe1
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor isCustom:(BOOL)custom formatName:(id)name;	// 0x31303f51
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x31303e6d
- (id)init;	// 0x31304081
- (id)initCustomFormatWithFormatString:(id)formatString currencyCode:(id)code showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x313040bd
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x3130413d
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x31304181
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x3130425d
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x313041f1
- (unsigned short)base;	// 0x31305cfd
- (unsigned short)basePlaces;	// 0x31305d0d
- (id)baseStringFromDouble:(double)aDouble;	// 0x313081b5
- (BOOL)baseUseMinusSign;	// 0x31305d1d
- (BOOL)canFormatText;	// 0x31305cdd
- (id)chartLabelStringFromDouble:(double)aDouble;	// 0x31305f31
- (id)chartLabelStringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x31306041
- (id)chartLabelStringNofixFromDouble:(double)aDouble;	// 0x31305ec5
- (id)copyWithZone:(NSZone *)zone;	// 0x31307975
- (id)currencyCode;	// 0x31305c65
- (BOOL)customFormatShouldAutoInsertPercentSymbol;	// 0x31305d51
- (id)customNumberFormatTokens;	// 0x31307205
- (void)dealloc;	// 0x31305ab5
- (unsigned short)decimalPlaces;	// 0x31305c11
- (id)description;	// 0x313077a5
// converted property getter: - (id)formatName;	// 0x31305be1
- (id)formatString;	// 0x31305c55
- (int)fractionAccuracy;	// 0x31305c95
- (id)fractionStringFromDouble:(double)aDouble;	// 0x31308199
- (BOOL)hasValidDecimalPlaces;	// 0x31305d2d
- (unsigned)hash;	// 0x3130721d
// converted property getter: - (BOOL)ignoreDecimalPlacesForZeroValue;	// 0x31305e31
- (BOOL)isCustom;	// 0x31305bf1
- (BOOL)isEqual:(id)equal;	// 0x3130741d
- (BOOL)isEquivalent:(id)equivalent;	// 0x31307099
- (BOOL)isTextFormat;	// 0x31305ccd
- (int)negativeStyle;	// 0x31305c75
- (id)numberFormatByIncrementingDecimalPlaces:(short)places;	// 0x31304c7d
- (id)numberFormatBySettingBase:(unsigned short)base;	// 0x31305659
- (id)numberFormatBySettingBasePlaces:(unsigned short)places;	// 0x313057cd
- (id)numberFormatBySettingBaseRepresentNegativeWithMinus:(BOOL)minus;	// 0x31305941
- (id)numberFormatBySettingCurrencyCode:(id)code;	// 0x31304dcd
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places;	// 0x31304825
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places andNegativeStyle:(int)style;	// 0x313050ad
- (id)numberFormatBySettingFractionAccuracy:(int)accuracy;	// 0x31305379
- (id)numberFormatBySettingNegativeStyle:(int)style;	// 0x31304f3d
- (id)numberFormatBySettingPrefixString:(id)string;	// 0x31304995
- (id)numberFormatBySettingShowThousandsSeparator:(BOOL)separator;	// 0x31305209
- (id)numberFormatBySettingSuffixString:(id)string;	// 0x31304b09
- (id)numberFormatBySettingUseAccountingStyle:(BOOL)style;	// 0x313054e9
- (id)numberFormatBySettingValueType:(int)type;	// 0x3130465d
- (id)prefixString;	// 0x31305c35
- (BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)aDouble;	// 0x31305e91
- (double)scaleFactor;	// 0x31305cb5
// converted property setter: - (void)setFormatName:(id)name;	// 0x31305ba5
// converted property setter: - (void)setIgnoreDecimalPlacesForZeroValue:(BOOL)zeroValue;	// 0x31305e41
// converted property setter: - (void)setUseScientificFormattingAutomatically:(BOOL)automatically;	// 0x31305e21
- (BOOL)showThousandsSeparator;	// 0x31305c85
- (id)stringFromDouble:(double)aDouble;	// 0x31306195
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3;	// 0x31306255
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3 forceSuppressMinusSign:(BOOL)sign;	// 0x31306281
- (id)stringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x31306155
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places;	// 0x31306215
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places forceSuppressMinusSign:(BOOL)sign;	// 0x313061d5
- (id)stringFromString:(id)string;	// 0x31306f71
- (id)suffixString;	// 0x31305c45
// converted property getter: - (BOOL)useScientificFormattingAutomatically;	// 0x31305e11
- (BOOL)usesAccountingStyle;	// 0x31305ca5
- (BOOL)usesTabs;	// 0x31305e51
- (BOOL)usesTextFormatForValue:(double)value;	// 0x31305ced
- (int)valueType;	// 0x31305c01
@end


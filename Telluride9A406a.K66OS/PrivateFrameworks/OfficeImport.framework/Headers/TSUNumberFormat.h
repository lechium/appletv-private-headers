/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "TSUNumberFormatting.h"
#import <NSObject.h> // Unknown library

@class NSIndexSet, NSString, NSArray;

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
@property(retain) id formatName;	// G=0x32b08bc9; S=0x32b0a4fd; converted property
@property(assign) BOOL ignoreDecimalPlacesForZeroValue;	// G=0x32b08d59; S=0x32b08d69; converted property
@property(assign) BOOL useScientificFormattingAutomatically;	// G=0x32b08d39; S=0x32b08d49; converted property
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x32b0aea1
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x32b0adc9
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom formatName:(id)name;	// 0x32b0ac81
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor isCustom:(BOOL)custom formatName:(id)name;	// 0x32b0ad35
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x32b0ae3d
- (id)init;	// 0x32b08de9
- (id)initCustomFormatWithFormatString:(id)formatString currencyCode:(id)code showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x32b08e21
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x32b08ea1
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x32b08f01
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x32b0bbf5
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x32b08fa9
- (unsigned short)base;	// 0x32b08ce5
- (unsigned short)basePlaces;	// 0x32b08cf5
- (id)baseStringFromDouble:(double)aDouble;	// 0x32b0c461
- (BOOL)baseUseMinusSign;	// 0x32b08d05
- (BOOL)canFormatText;	// 0x32b08cc5
- (id)chartLabelStringFromDouble:(double)aDouble;	// 0x32b0a675
- (id)chartLabelStringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x32b0a785
- (id)chartLabelStringNofixFromDouble:(double)aDouble;	// 0x32b0a605
- (id)copyWithZone:(NSZone *)zone;	// 0x32b0af05
- (id)currencyCode;	// 0x32b08c4d
- (BOOL)customFormatShouldAutoInsertPercentSymbol;	// 0x32b0a53d
- (id)customNumberFormatTokens;	// 0x32b0b86d
- (void)dealloc;	// 0x32b0baf9
- (unsigned short)decimalPlaces;	// 0x32b08bf9
- (id)description;	// 0x32b0b121
// converted property getter: - (id)formatName;	// 0x32b08bc9
- (id)formatString;	// 0x32b08c3d
- (int)fractionAccuracy;	// 0x32b08c7d
- (id)fractionStringFromDouble:(double)aDouble;	// 0x32b0c681
- (BOOL)hasValidDecimalPlaces;	// 0x32b08d15
- (unsigned)hash;	// 0x32b0b66d
// converted property getter: - (BOOL)ignoreDecimalPlacesForZeroValue;	// 0x32b08d59
- (BOOL)isCustom;	// 0x32b08bd9
- (BOOL)isEqual:(id)equal;	// 0x32b0b2f9
- (BOOL)isEquivalent:(id)equivalent;	// 0x32b0ab0d
- (BOOL)isTextFormat;	// 0x32b08cb5
- (int)negativeStyle;	// 0x32b08c5d
- (id)numberFormatByIncrementingDecimalPlaces:(short)places;	// 0x32b09675
- (id)numberFormatBySettingBase:(unsigned short)base;	// 0x32b0a085
- (id)numberFormatBySettingBasePlaces:(unsigned short)places;	// 0x32b0a205
- (id)numberFormatBySettingBaseRepresentNegativeWithMinus:(BOOL)minus;	// 0x32b0a37d
- (id)numberFormatBySettingCurrencyCode:(id)code;	// 0x32b097bd
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places;	// 0x32b09215
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places andNegativeStyle:(int)style;	// 0x32b09ab1
- (id)numberFormatBySettingFractionAccuracy:(int)accuracy;	// 0x32b09d95
- (id)numberFormatBySettingNegativeStyle:(int)style;	// 0x32b09939
- (id)numberFormatBySettingPrefixString:(id)string;	// 0x32b0938d
- (id)numberFormatBySettingShowThousandsSeparator:(BOOL)separator;	// 0x32b09c1d
- (id)numberFormatBySettingSuffixString:(id)string;	// 0x32b09501
- (id)numberFormatBySettingUseAccountingStyle:(BOOL)style;	// 0x32b09f09
- (id)numberFormatBySettingValueType:(int)type;	// 0x32b09051
- (id)prefixString;	// 0x32b08c1d
- (BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)aDouble;	// 0x32b08dbd
- (double)scaleFactor;	// 0x32b08c9d
// converted property setter: - (void)setFormatName:(id)name;	// 0x32b0a4fd
// converted property setter: - (void)setIgnoreDecimalPlacesForZeroValue:(BOOL)zeroValue;	// 0x32b08d69
// converted property setter: - (void)setUseScientificFormattingAutomatically:(BOOL)automatically;	// 0x32b08d49
- (BOOL)showThousandsSeparator;	// 0x32b08c6d
- (id)stringFromDouble:(double)aDouble;	// 0x32b0a8d9
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3;	// 0x32b0a9b1
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3 forceSuppressMinusSign:(BOOL)sign;	// 0x32b0b885
- (id)stringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x32b0a899
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places;	// 0x32b0a965
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places forceSuppressMinusSign:(BOOL)sign;	// 0x32b0a919
- (id)stringFromString:(id)string;	// 0x32b0a9dd
- (id)suffixString;	// 0x32b08c2d
// converted property getter: - (BOOL)useScientificFormattingAutomatically;	// 0x32b08d39
- (BOOL)usesAccountingStyle;	// 0x32b08c8d
- (BOOL)usesTabs;	// 0x32b08d79
- (BOOL)usesTextFormatForValue:(double)value;	// 0x32b08cd5
- (int)valueType;	// 0x32b08be9
@end


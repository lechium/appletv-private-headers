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

@interface TSUNumberFormat : NSObject <TSUNumberFormatting> {
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
@property(retain) id formatName;	// G=0x34b01bd1; S=0x34b01b95; converted property
@property(assign) BOOL ignoreDecimalPlacesForZeroValue;	// G=0x34b01e21; S=0x34b01e31; converted property
@property(assign) BOOL useScientificFormattingAutomatically;	// G=0x34b01e01; S=0x34b01e11; converted property
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x34affdf9
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x34affec9
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom formatName:(id)name;	// 0x34afffd1
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor isCustom:(BOOL)custom formatName:(id)name;	// 0x34afff41
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x34affe5d
- (id)init;	// 0x34b00071
- (id)initCustomFormatWithFormatString:(id)formatString currencyCode:(id)code showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x34b000ad
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x34b0012d
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x34b00171
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x34b0024d
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x34b001e1
- (unsigned short)base;	// 0x34b01ced
- (unsigned short)basePlaces;	// 0x34b01cfd
- (id)baseStringFromDouble:(double)aDouble;	// 0x34b041a5
- (BOOL)baseUseMinusSign;	// 0x34b01d0d
- (BOOL)canFormatText;	// 0x34b01ccd
- (id)chartLabelStringFromDouble:(double)aDouble;	// 0x34b01f21
- (id)chartLabelStringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x34b02031
- (id)chartLabelStringNofixFromDouble:(double)aDouble;	// 0x34b01eb5
- (id)copyWithZone:(NSZone *)zone;	// 0x34b03965
- (id)currencyCode;	// 0x34b01c55
- (BOOL)customFormatShouldAutoInsertPercentSymbol;	// 0x34b01d41
- (id)customNumberFormatTokens;	// 0x34b031f5
- (void)dealloc;	// 0x34b01aa5
- (unsigned short)decimalPlaces;	// 0x34b01c01
- (id)description;	// 0x34b03795
// converted property getter: - (id)formatName;	// 0x34b01bd1
- (id)formatString;	// 0x34b01c45
- (int)fractionAccuracy;	// 0x34b01c85
- (id)fractionStringFromDouble:(double)aDouble;	// 0x34b04189
- (BOOL)hasValidDecimalPlaces;	// 0x34b01d1d
- (unsigned)hash;	// 0x34b0320d
// converted property getter: - (BOOL)ignoreDecimalPlacesForZeroValue;	// 0x34b01e21
- (BOOL)isCustom;	// 0x34b01be1
- (BOOL)isEqual:(id)equal;	// 0x34b0340d
- (BOOL)isEquivalent:(id)equivalent;	// 0x34b03089
- (BOOL)isTextFormat;	// 0x34b01cbd
- (int)negativeStyle;	// 0x34b01c65
- (id)numberFormatByIncrementingDecimalPlaces:(short)places;	// 0x34b00c6d
- (id)numberFormatBySettingBase:(unsigned short)base;	// 0x34b01649
- (id)numberFormatBySettingBasePlaces:(unsigned short)places;	// 0x34b017bd
- (id)numberFormatBySettingBaseRepresentNegativeWithMinus:(BOOL)minus;	// 0x34b01931
- (id)numberFormatBySettingCurrencyCode:(id)code;	// 0x34b00dbd
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places;	// 0x34b00815
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places andNegativeStyle:(int)style;	// 0x34b0109d
- (id)numberFormatBySettingFractionAccuracy:(int)accuracy;	// 0x34b01369
- (id)numberFormatBySettingNegativeStyle:(int)style;	// 0x34b00f2d
- (id)numberFormatBySettingPrefixString:(id)string;	// 0x34b00985
- (id)numberFormatBySettingShowThousandsSeparator:(BOOL)separator;	// 0x34b011f9
- (id)numberFormatBySettingSuffixString:(id)string;	// 0x34b00af9
- (id)numberFormatBySettingUseAccountingStyle:(BOOL)style;	// 0x34b014d9
- (id)numberFormatBySettingValueType:(int)type;	// 0x34b0064d
- (id)prefixString;	// 0x34b01c25
- (BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)aDouble;	// 0x34b01e81
- (double)scaleFactor;	// 0x34b01ca5
// converted property setter: - (void)setFormatName:(id)name;	// 0x34b01b95
// converted property setter: - (void)setIgnoreDecimalPlacesForZeroValue:(BOOL)zeroValue;	// 0x34b01e31
// converted property setter: - (void)setUseScientificFormattingAutomatically:(BOOL)automatically;	// 0x34b01e11
- (BOOL)showThousandsSeparator;	// 0x34b01c75
- (id)stringFromDouble:(double)aDouble;	// 0x34b02185
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3;	// 0x34b02245
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3 forceSuppressMinusSign:(BOOL)sign;	// 0x34b02271
- (id)stringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x34b02145
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places;	// 0x34b02205
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places forceSuppressMinusSign:(BOOL)sign;	// 0x34b021c5
- (id)stringFromString:(id)string;	// 0x34b02f61
- (id)suffixString;	// 0x34b01c35
// converted property getter: - (BOOL)useScientificFormattingAutomatically;	// 0x34b01e01
- (BOOL)usesAccountingStyle;	// 0x34b01c95
- (BOOL)usesTabs;	// 0x34b01e41
- (BOOL)usesTextFormatForValue:(double)value;	// 0x34b01cdd
- (int)valueType;	// 0x34b01bf1
@end


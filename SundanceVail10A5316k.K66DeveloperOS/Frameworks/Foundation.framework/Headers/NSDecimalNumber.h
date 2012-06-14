/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSNumber.h"


@interface NSDecimalNumber : NSNumber {
@private
	unsigned _exponent : 8;	// 4 = 0x4
	unsigned _length : 4;	// 5 = 0x5
	unsigned _isNegative : 1;	// 5 = 0x5
	unsigned _isCompact : 1;	// 5 = 0x5
	unsigned _reserved : 1;	// 5 = 0x5
	unsigned _hasExternalRefCount : 1;	// 5 = 0x5
	unsigned _refs : 16;	// 6 = 0x6
	unsigned short _mantissa[0];	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a97735
+ (id)decimalNumberWithDecimal:(XXStruct_9isexA)decimal;	// 0x31a978ad
+ (id)decimalNumberWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;	// 0x31a9783d
+ (id)decimalNumberWithString:(id)string;	// 0x31a97929
+ (id)decimalNumberWithString:(id)string locale:(id)locale;	// 0x31a9797d
+ (id)defaultBehavior;	// 0x31a9865d
+ (id)maximumDecimalNumber;	// 0x31a97bb5
+ (id)minimumDecimalNumber;	// 0x31a97b49
+ (id)notANumber;	// 0x31a97cd1
+ (id)numberWithBool:(BOOL)aBool;	// 0x31a99cf9
+ (id)numberWithChar:(BOOL)aChar;	// 0x31a998c5
+ (id)numberWithDouble:(double)aDouble;	// 0x31a99ca9
+ (id)numberWithFloat:(float)aFloat;	// 0x31a99c5d
+ (id)numberWithInt:(int)int;	// 0x31a999f5
+ (id)numberWithInteger:(int)integer;	// 0x31a99a41
+ (id)numberWithLong:(long)aLong;	// 0x31a99b25
+ (id)numberWithLongLong:(long long)longLong;	// 0x31a99bbd
+ (id)numberWithShort:(short)aShort;	// 0x31a9995d
+ (id)numberWithUnsignedChar:(unsigned char)unsignedChar;	// 0x31a99911
+ (id)numberWithUnsignedInt:(unsigned)unsignedInt;	// 0x31a99a8d
+ (id)numberWithUnsignedInteger:(unsigned)unsignedInteger;	// 0x31a99ad9
+ (id)numberWithUnsignedLong:(unsigned long)unsignedLong;	// 0x31a99b71
+ (id)numberWithUnsignedLongLong:(unsigned long long)unsignedLongLong;	// 0x31a99c0d
+ (id)numberWithUnsignedShort:(unsigned short)unsignedShort;	// 0x31a999a9
+ (id)one;	// 0x31a97c61
+ (void)setDefaultBehavior:(id)behavior;	// 0x31a98609
+ (id)zero;	// 0x31a97c21
- (id)initWithCoder:(id)coder;	// 0x31a97ac5
- (id)initWithDecimal:(XXStruct_9isexA)decimal;	// 0x31a97a11
- (id)initWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;	// 0x31a979d5
- (id)initWithString:(id)string;	// 0x31a97a4d
- (id)initWithString:(id)string locale:(id)locale;	// 0x31a97a89
- (bool)_getCString:(char *)string length:(int)length multiplier:(double)multiplier;	// 0x31a98a81
- (BOOL)boolValue;	// 0x31a98a5d
- (BOOL)charValue;	// 0x31a988e1
- (Class)classForCoder;	// 0x31a986cd
- (int)compare:(id)compare;	// 0x31a97d41
- (id)copy;	// 0x31a97795
- (id)copyWithZone:(NSZone *)zone;	// 0x31a977a5
- (id)decimalNumberByAdding:(id)adding;	// 0x31a97f0d
- (id)decimalNumberByAdding:(id)adding withBehavior:(id)behavior;	// 0x31a97f5d
- (id)decimalNumberByDividingBy:(id)by;	// 0x31a982c1
- (id)decimalNumberByDividingBy:(id)by withBehavior:(id)behavior;	// 0x31a98311
- (id)decimalNumberByMultiplyingBy:(id)by;	// 0x31a981e9
- (id)decimalNumberByMultiplyingBy:(id)by withBehavior:(id)behavior;	// 0x31a98239
- (id)decimalNumberByMultiplyingByPowerOf10:(short)a10;	// 0x31a98471
- (id)decimalNumberByMultiplyingByPowerOf10:(short)a10 withBehavior:(id)behavior;	// 0x31a984c1
- (id)decimalNumberByRaisingToPower:(unsigned)power;	// 0x31a98399
- (id)decimalNumberByRaisingToPower:(unsigned)power withBehavior:(id)behavior;	// 0x31a983e9
- (id)decimalNumberByRoundingAccordingToBehavior:(id)behavior;	// 0x31a98549
- (id)decimalNumberBySubstracting:(id)substracting;	// 0x31a980c1
- (id)decimalNumberBySubstracting:(id)substracting withBehavior:(id)behavior;	// 0x31a98101
- (id)decimalNumberBySubtracting:(id)subtracting;	// 0x31a98111
- (id)decimalNumberBySubtracting:(id)subtracting withBehavior:(id)behavior;	// 0x31a98161
- (XXStruct_9isexA)decimalValue;	// 0x31a97b1d
- (id)description;	// 0x31a97b01
- (id)descriptionWithLocale:(id)locale;	// 0x31a97b15
- (double)doubleValue;	// 0x31a97e19
- (void)encodeWithCoder:(id)coder;	// 0x31a986e9
- (float)floatValue;	// 0x31a98a39
- (void)getValue:(void *)value;	// 0x31a97ef1
- (int)intValue;	// 0x31a98971
- (BOOL)isEqual:(id)equal;	// 0x31a97dc1
- (long long)longLongValue;	// 0x31a98a01
- (long)longValue;	// 0x31a989b9
- (const char *)objCType;	// 0x31a97e09
- (short)shortValue;	// 0x31a98929
- (unsigned char)unsignedCharValue;	// 0x31a98905
- (unsigned)unsignedIntValue;	// 0x31a98995
- (unsigned long long)unsignedLongLongValue;	// 0x31a98a1d
- (unsigned long)unsignedLongValue;	// 0x31a989dd
- (unsigned short)unsignedShortValue;	// 0x31a9894d
@end


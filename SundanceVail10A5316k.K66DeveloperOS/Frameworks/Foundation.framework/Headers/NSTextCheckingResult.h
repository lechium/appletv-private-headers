/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding> {
}
@property(readonly, assign) NSRange range;	// G=0x31ad0f35; 
@property(readonly, assign) unsigned long long resultType;	// G=0x31ad0f0d; 
+ (id)addressCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x31ad1221
+ (id)correctionCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x31ad13c5
+ (id)dashCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x31ad131d
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date;	// 0x31ad116d
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration;	// 0x31ad11c1
+ (id)grammarCheckingResultWithRange:(NSRange)range details:(id)details;	// 0x31ad1119
+ (void)initialize;	// 0x31ad0c09
+ (id)linkCheckingResultWithRange:(NSRange)range URL:(id)url;	// 0x31ad1275
+ (id)orthographyCheckingResultWithRange:(NSRange)range orthography:(id)orthography;	// 0x31ad1079
+ (id)phoneNumberCheckingResultWithRange:(NSRange)range phoneNumber:(id)number;	// 0x31ad1499
+ (id)quoteCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x31ad12c9
+ (id)regularExpressionCheckingResultWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x31ad1419
+ (id)replacementCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x31ad1371
+ (id)spellCheckingResultWithRange:(NSRange)range;	// 0x31ad10cd
+ (id)transitInformationCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x31ad14ed
- (id)initWithCoder:(id)coder;	// 0x31ad0d01
- (id)URL;	// 0x31ad1065
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x31ad0f85
- (id)addressComponents;	// 0x31ad1051
- (id)components;	// 0x31ad1061
- (id)copyWithZone:(NSZone *)zone;	// 0x31ad0c49
- (id)date;	// 0x31ad102d
- (NSRange)decodeRangeWithCoder:(id)coder;	// 0x31ad0dd5
- (id)description;	// 0x31ad0c59
- (double)duration;	// 0x31ad1039
- (void)encodeRangeWithCoder:(id)coder;	// 0x31ad0d25
- (void)encodeWithCoder:(id)coder;	// 0x31ad0cdd
- (id)grammarDetails;	// 0x31ad1029
- (unsigned)numberOfRanges;	// 0x31ad0f89
- (id)orthography;	// 0x31ad1025
- (id)phoneNumber;	// 0x31ad1071
// declared property getter: - (NSRange)range;	// 0x31ad0f35
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x31ad0f8d
- (id)regularExpression;	// 0x31ad106d
- (id)replacementString;	// 0x31ad1069
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x31ad0f61
// declared property getter: - (unsigned long long)resultType;	// 0x31ad0f0d
- (id)timeZone;	// 0x31ad1031
- (void *)underlyingResult;	// 0x31ad1075
@end


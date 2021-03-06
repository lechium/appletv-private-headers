/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding> {
}
@property(readonly, assign) NSRange range;	// G=0x306e1dcd; 
@property(readonly, assign) unsigned long long resultType;	// G=0x306e1da5; 
+ (id)addressCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x306e20b1
+ (id)correctionCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x306e2255
+ (id)dashCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x306e21ad
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date;	// 0x306e1ffd
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration;	// 0x306e2051
+ (id)grammarCheckingResultWithRange:(NSRange)range details:(id)details;	// 0x306e1fa9
+ (void)initialize;	// 0x306e1a95
+ (id)linkCheckingResultWithRange:(NSRange)range URL:(id)url;	// 0x306e2105
+ (id)orthographyCheckingResultWithRange:(NSRange)range orthography:(id)orthography;	// 0x306e1f09
+ (id)phoneNumberCheckingResultWithRange:(NSRange)range phoneNumber:(id)number;	// 0x306e2385
+ (id)quoteCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x306e2159
+ (id)regularExpressionCheckingResultWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x306e22a9
+ (id)replacementCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x306e2201
+ (id)spellCheckingResultWithRange:(NSRange)range;	// 0x306e1f5d
+ (id)transitInformationCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x306e23d9
- (id)initWithCoder:(id)coder;	// 0x306e1b99
- (id)URL;	// 0x306e1ef5
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x306e1e1d
- (id)addressComponents;	// 0x306e1ee1
- (id)components;	// 0x306e1ef1
- (id)copyWithZone:(NSZone *)zone;	// 0x306e1ad5
- (id)date;	// 0x306e1ec5
- (NSRange)decodeRangeWithCoder:(id)coder;	// 0x306e1c6d
- (id)description;	// 0x306e1ae5
- (double)duration;	// 0x306e1ecd
- (void)encodeRangeWithCoder:(id)coder;	// 0x306e1bbd
- (void)encodeWithCoder:(id)coder;	// 0x306e1b75
- (id)grammarDetails;	// 0x306e1ec1
- (unsigned)numberOfRanges;	// 0x306e1e21
- (id)orthography;	// 0x306e1ebd
- (id)phoneNumber;	// 0x306e1f01
// declared property getter: - (NSRange)range;	// 0x306e1dcd
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x306e1e25
- (id)regularExpression;	// 0x306e1efd
- (id)replacementString;	// 0x306e1ef9
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x306e1df9
// declared property getter: - (unsigned long long)resultType;	// 0x306e1da5
- (id)timeZone;	// 0x306e1ec9
- (void *)underlyingResult;	// 0x306e1f05
@end


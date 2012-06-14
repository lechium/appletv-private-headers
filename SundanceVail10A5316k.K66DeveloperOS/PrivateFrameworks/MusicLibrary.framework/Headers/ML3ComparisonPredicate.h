/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3PropertyPredicate.h"

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate {
@private
	id _value;	// 8 = 0x8
	NSString *_transformFunction;	// 12 = 0xc
	int _comparison;	// 16 = 0x10
	BOOL _caseInsensitive;	// 20 = 0x14
	BOOL _treatNullAsBlank;	// 21 = 0x15
}
@property(assign, nonatomic) BOOL caseInsensitive;	// G=0x34618091; S=0x345e1bad; @synthesize=_caseInsensitive
@property(assign, nonatomic) int comparison;	// G=0x34618081; S=0x345e1b9d; @synthesize=_comparison
@property(readonly, assign, nonatomic) NSString *operator;	// G=0x345e3941; 
@property(copy, nonatomic) NSString *transformFunction;	// G=0x346180b1; S=0x345e1bcd; @synthesize=_transformFunction
@property(assign, nonatomic) BOOL treatNullAsBlank;	// G=0x346180a1; S=0x345e1bbd; @synthesize=_treatNullAsBlank
@property(retain, nonatomic) id value;	// G=0x34618071; S=0x345e1b89; @synthesize=_value
+ (id)predicateWithProperty:(id)property equalToInt64:(long long)int64;	// 0x34617c95
+ (id)predicateWithProperty:(id)property equalToInteger:(int)integer;	// 0x345e181d
+ (id)predicateWithProperty:(id)property equalToValue:(id)value;	// 0x345e1895
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison;	// 0x345e9e99
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive;	// 0x345eb74d
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive treatNullAsBlank:(BOOL)blank;	// 0x34617b7d
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison transformFunction:(id)function;	// 0x34617c01
- (id)initWithCoder:(id)coder;	// 0x3461751d
- (id)initWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive transformFunction:(id)function treatNullAsBlank:(BOOL)blank;	// 0x345e1915
- (void).cxx_destruct;	// 0x346180c5
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x345e362d
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x34617d11
// declared property getter: - (BOOL)caseInsensitive;	// 0x34618091
// declared property getter: - (int)comparison;	// 0x34618081
- (id)description;	// 0x34617a2d
- (void)encodeWithCoder:(id)coder;	// 0x34617675
- (unsigned)hash;	// 0x346179b9
- (BOOL)isEqual:(id)equal;	// 0x346177bd
// declared property getter: - (id)operator;	// 0x345e3941
// declared property setter: - (void)setCaseInsensitive:(BOOL)insensitive;	// 0x345e1bad
// declared property setter: - (void)setComparison:(int)comparison;	// 0x345e1b9d
// declared property setter: - (void)setTransformFunction:(id)function;	// 0x345e1bcd
// declared property setter: - (void)setTreatNullAsBlank:(BOOL)blank;	// 0x345e1bbd
// declared property setter: - (void)setValue:(id)value;	// 0x345e1b89
// declared property getter: - (id)transformFunction;	// 0x346180b1
// declared property getter: - (BOOL)treatNullAsBlank;	// 0x346180a1
// declared property getter: - (id)value;	// 0x34618071
@end


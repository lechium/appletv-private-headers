/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"

@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate {
@private
	NSArray *_properties;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
}
@property(copy, nonatomic) NSArray *properties;	// G=0x34619a25; S=0x34619a39; @synthesize=_properties
@property(copy, nonatomic) NSString *searchString;	// G=0x34619a49; S=0x34619a5d; @synthesize=_searchString
+ (id)predicateWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;	// 0x346194d5
- (id)initWithCoder:(id)coder;	// 0x346190ad
- (id)initWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;	// 0x34619029
- (void).cxx_destruct;	// 0x34619a6d
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x34619545
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x34619725
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x34619909
- (id)description;	// 0x3461940d
- (void)encodeWithCoder:(id)coder;	// 0x34619179
- (unsigned)hash;	// 0x346193b1
- (BOOL)isDynamicForEntityClass:(Class)entityClass;	// 0x34619941
- (BOOL)isEqual:(id)equal;	// 0x34619239
// declared property getter: - (id)properties;	// 0x34619a25
// declared property getter: - (id)searchString;	// 0x34619a49
// declared property setter: - (void)setProperties:(id)properties;	// 0x34619a39
// declared property setter: - (void)setSearchString:(id)string;	// 0x34619a5d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3Predicate.h"

@class NSString, NSArray;

@interface ML3SearchStringPredicate : ML3Predicate {
@private
	NSArray *_properties;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
}
@property(copy, nonatomic) NSArray *properties;	// G=0x3003520d; S=0x3003521d; @synthesize=_properties
@property(copy, nonatomic) NSString *searchString;	// G=0x30035241; S=0x30035251; @synthesize=_searchString
+ (id)predicateWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;	// 0x30034f05
- (id)initWithCoder:(id)coder;	// 0x30034c21
- (id)initWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;	// 0x30034b69
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x30034f55
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x30035041
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x300351c5
- (void)dealloc;	// 0x30034bc9
- (id)description;	// 0x30034e65
- (void)encodeWithCoder:(id)coder;	// 0x30034cad
- (unsigned)hash;	// 0x30034e19
- (BOOL)isEqual:(id)equal;	// 0x30034d35
// declared property getter: - (id)properties;	// 0x3003520d
// declared property getter: - (id)searchString;	// 0x30035241
// declared property setter: - (void)setProperties:(id)properties;	// 0x3003521d
// declared property setter: - (void)setSearchString:(id)string;	// 0x30035251
@end


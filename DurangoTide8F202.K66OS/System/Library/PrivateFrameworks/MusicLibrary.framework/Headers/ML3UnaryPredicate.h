/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"
#import "MusicLibrary-Structs.h"


__attribute__((visibility("hidden")))
@interface ML3UnaryPredicate : ML3Predicate {
@private
	ML3Predicate *_predicate;	// 4 = 0x4
}
@property(retain, nonatomic) ML3Predicate *predicate;	// G=0x31819b71; S=0x3181b44d; @synthesize=_predicate
+ (id)predicateWithPredicate:(id)predicate;	// 0x3181b121
- (id)initWithCoder:(id)coder;	// 0x3181b2a5
- (id)initWithPredicate:(id)predicate;	// 0x3181b33d
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x3181b155
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x3181b101
- (void)dealloc;	// 0x3181b301
- (void)encodeWithCoder:(id)coder;	// 0x3181b249
- (unsigned)hash;	// 0x3181b175
- (BOOL)isEqual:(id)equal;	// 0x3181b1bd
// declared property getter: - (id)predicate;	// 0x31819b71
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x3181b44d
@end


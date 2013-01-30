/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Query.h"

@class NSArray, ML3Container, ML3Predicate;

@interface ML3ContainerQuery : ML3Query {
	ML3Predicate *_containerPredicate;	// 32 = 0x20
	ML3Container *_container;	// 36 = 0x24
}
@property(readonly, assign) ML3Container *container;	// G=0x346e4c55; @synthesize=_container
@property(readonly, assign) NSArray *limitedPersistentIDs;	// G=0x346e3ced; 
@property(readonly, assign) BOOL requiresSmartLimiting;	// G=0x346e3b85; 
- (id)initWithCoder:(id)coder;	// 0x346e391d
- (id)initWithEntityClass:(Class)entityClass container:(id)container predicate:(id)predicate orderingTerms:(id)terms;	// 0x346e350d
- (void).cxx_destruct;	// 0x346e4c69
// declared property getter: - (id)container;	// 0x346e4c55
- (unsigned)countOfDistinctRowsForColumn:(id)column;	// 0x346e4301
- (unsigned)countOfEntities;	// 0x346e45a5
- (void)encodeWithCoder:(id)coder;	// 0x346e3a59
- (BOOL)hasEntities;	// 0x346e4091
// declared property getter: - (id)limitedPersistentIDs;	// 0x346e3ced
// declared property getter: - (BOOL)requiresSmartLimiting;	// 0x346e3b85
- (id)selectLimitingSQL;	// 0x346e3c25
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x346e45c5
@end

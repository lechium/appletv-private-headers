/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLGenerator : NSObject {
@private
	NSSQLCore *_persistentStore;	// 4 = 0x4
}
+ (void)initialize;	// 0x3478d931
- (id)initWithPersistentStore:(id)persistentStore;	// 0x3476ee91
- (id)_predicateForSpecificEntity:(id)specificEntity;	// 0x34825f15
- (id)_predicateRestrictingSuperentitiesForEntity:(id)entity;	// 0x34826195
- (id)_predicateRestrictingToSubentitiesForEntity:(id)entity;	// 0x34826055
- (void)generateGroupByIntermediatesForProperties:(id)properties inContext:(id)context;	// 0x34825e15
- (void)generateHavingIntermediateForPredicate:(id)predicate inContext:(id)context;	// 0x34825d8d
- (void)generateIntermediateForLimit:(unsigned)limit inContext:(id)context;	// 0x34772775
- (void)generateIntermediateForOffset:(unsigned)offset inContext:(id)context;	// 0x34825e95
- (id)generateIntermediatesForFetchInContext:(id)context countOnly:(BOOL)only;	// 0x3477102d
- (void)generateOrderIntermediateInContext:(id)context;	// 0x34772605
- (void)generateSelectIntermediateInContext:(id)context;	// 0x34771d5d
- (void)generateWhereIntermediatesInContext:(id)context;	// 0x34771899
- (id)initializeContextForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance nestingLevel:(unsigned)level;	// 0x3476f325
- (id)newSQLStatementForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance countOnly:(BOOL)only nestingLevel:(unsigned)level;	// 0x3476eed1
- (id)predicateForFetchRequestInContext:(id)context;	// 0x3476f91d
@end


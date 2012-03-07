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
+ (void)initialize;	// 0x3232c931
- (id)initWithPersistentStore:(id)persistentStore;	// 0x3230de91
- (id)_predicateForSpecificEntity:(id)specificEntity;	// 0x323c4f15
- (id)_predicateRestrictingSuperentitiesForEntity:(id)entity;	// 0x323c5195
- (id)_predicateRestrictingToSubentitiesForEntity:(id)entity;	// 0x323c5055
- (void)generateGroupByIntermediatesForProperties:(id)properties inContext:(id)context;	// 0x323c4e15
- (void)generateHavingIntermediateForPredicate:(id)predicate inContext:(id)context;	// 0x323c4d8d
- (void)generateIntermediateForLimit:(unsigned)limit inContext:(id)context;	// 0x32311775
- (void)generateIntermediateForOffset:(unsigned)offset inContext:(id)context;	// 0x323c4e95
- (id)generateIntermediatesForFetchInContext:(id)context countOnly:(BOOL)only;	// 0x3231002d
- (void)generateOrderIntermediateInContext:(id)context;	// 0x32311605
- (void)generateSelectIntermediateInContext:(id)context;	// 0x32310d5d
- (void)generateWhereIntermediatesInContext:(id)context;	// 0x32310899
- (id)initializeContextForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance nestingLevel:(unsigned)level;	// 0x3230e325
- (id)newSQLStatementForFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance countOnly:(BOOL)only nestingLevel:(unsigned)level;	// 0x3230ded1
- (id)predicateForFetchRequestInContext:(id)context;	// 0x3230e91d
@end

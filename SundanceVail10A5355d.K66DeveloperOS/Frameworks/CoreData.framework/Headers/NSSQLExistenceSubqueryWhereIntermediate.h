/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSString, NSSQLProperty, NSSQLEntity, NSExpression;

@interface NSSQLExistenceSubqueryWhereIntermediate : NSSQLWhereIntermediate {
	NSExpression *_subqueryExpression;	// 12 = 0xc
	NSExpression *_variableExpression;	// 16 = 0x10
	NSString *_variableAlias;	// 20 = 0x14
	NSSQLProperty *_collectionProperty;	// 24 = 0x18
	NSSQLEntity *_governingEntityForVariable;	// 28 = 0x1c
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope;	// 0x33572bd5
- (id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;	// 0x33572e61
- (BOOL)_isKeypathScopedToSubquery:(id)subquery;	// 0x33572c8d
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x33572d4d
- (id)generateSQLStringInContext:(id)context;	// 0x33572f65
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x33572e05
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x33572da9
- (BOOL)isExistenceScoped;	// 0x33572c89
@end

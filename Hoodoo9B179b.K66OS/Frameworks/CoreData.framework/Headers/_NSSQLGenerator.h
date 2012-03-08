/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableString, NSMutableDictionary, NSSQLAdapter, NSSQLStatement, NSSQLStoreMappingGenerator, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSSQLGenerator : NSObject {
@private
	NSSQLStatement *_statement;	// 4 = 0x4
	NSSQLAdapter *_adapter;	// 8 = 0x8
	NSMutableString *_sqlString;	// 12 = 0xc
	NSMutableDictionary *_aliasMap;	// 16 = 0x10
	NSSQLStoreMappingGenerator *_aliasNamer;	// 20 = 0x14
	NSMutableString *_joinClause;	// 24 = 0x18
	NSMutableString *_whereClause;	// 28 = 0x1c
	NSMutableString *_selectList;	// 32 = 0x20
	NSMutableString *_orderByClause;	// 36 = 0x24
	BOOL _allowToManyKeyPath;	// 40 = 0x28
	BOOL _useDistinct;	// 41 = 0x29
	BOOL _autoDistinct;	// 42 = 0x2a
	unsigned _scopedByORPredicate;	// 44 = 0x2c
	NSMutableArray *_comparisonPredicateScopedItem;	// 48 = 0x30
}
@property(assign) BOOL autoDistinct;	// G=0x32b113e9; S=0x32b113f9; converted property
@property(readonly, retain) NSMutableString *sqlString;	// G=0x32b113c9; converted property
@property(readonly, retain) NSMutableString *whereClause;	// G=0x32b113d9; converted property
+ (void)initialize;	// 0x32b15231
- (id)initWithStatement:(id)statement forAdapter:(id)adapter;	// 0x32b187a5
- (void)_addBindVarForConstVal1:(id)constVal1;	// 0x32b11da1
- (void)_addBindVarForConstVal2:(id)constVal2;	// 0x32b11b89
- (void)_appendWhereClauseForConstVal:(id)constVal;	// 0x32b12071
- (void)_appendWhereClauseForConstantCollection:(id)constantCollection;	// 0x32b17195
- (void)_appendWhereClauseForExpressionCollection:(id)expressionCollection;	// 0x32b1729d
- (BOOL)_isForeignObjectExpression:(id)expression;	// 0x32b15031
- (BOOL)_isNullExpression:(id)expression;	// 0x32b14fd5
- (id)_newPredicateWithInheritanceForFetchRequest:(id)fetchRequest;	// 0x32b14275
- (id)_newWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x32b14c05
- (void)_prepareConst:(id)aConst inAttribute:(id)attribute sensitiveOptions:(unsigned)options;	// 0x32b14b25
- (void)_prepareConst:(id)aConst inManyToMany:(id)many;	// 0x32b14901
- (void)_prepareConst:(id)aConst inToMany:(id)many;	// 0x32b1499d
- (BOOL)_prepareFunctionExpression:(id)expression;	// 0x32b14f1d
- (void)_preparePredicate:(id)predicate;	// 0x32b15289
- (void)_preparePredicateExpression:(id)expression;	// 0x32b16fb9
- (void)_preparePredicateOperator:(id)anOperator;	// 0x32b186e1
- (void)_prepareString:(id)string expressionPath:(id)path sensitiveOptions:(unsigned)options wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many;	// 0x32b14d45
- (void)_prepareSubstringWith:(id)with wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x32b160e1
- (id)_reducedSubpredicates:(id)subpredicates;	// 0x32b15a55
- (id)_retainedPrimaryKeyNumberForObject:(id)object;	// 0x32b119c5
- (id)_retainedPrimaryKeyNumberForObjectID:(NSScalarObjectID *)objectID;	// 0x32b11969
- (void)_startSQL:(id)sql;	// 0x32b1156d
- (id)addJoinForDirectToManyToMany:(id)many;	// 0x32b13be9
- (void)addJoinForManyToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x32b13895
- (void)addJoinForToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x32b1369d
- (void)addJoinForToOneRelationship:(id)oneRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x32b134c1
- (void)appendClause:(id)clause forKeyPath:(id)keyPath allowToMany:(BOOL)many;	// 0x32b17ed1
- (void)appendClause:(id)clause forKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many;	// 0x32b13ded
- (void)appendClause:(id)clause forProperty:(id)property keypath:(id)keypath;	// 0x32b13415
- (void)appendCountClause:(id)clause forToManyKeyPath:(id)manyKeyPath;	// 0x32b18379
- (void)appendJoinClauseToSQL;	// 0x32b11869
- (void)appendLimitClauseToSQL:(unsigned)sql;	// 0x32b118f9
- (void)appendOrderByClauseToSQL;	// 0x32b118d9
- (void)appendSQL:(id)sql;	// 0x32b11591
- (void)appendSelectListToSQLForRequest:(id)request;	// 0x32b115b5
- (void)appendWhereClause:(id)clause;	// 0x32b11549
- (void)appendWhereClauseToSQL;	// 0x32b11889
// converted property getter: - (BOOL)autoDistinct;	// 0x32b113e9
- (void)buildOrderByClauseWithSortDescriptors:(id)sortDescriptors;	// 0x32b17cd9
- (void)buildWhereClauseForRow:(id)row optLock:(long long)lock;	// 0x32b13f25
- (void)buildWhereClauseWithSelectPredicate:(id)selectPredicate;	// 0x32b132a5
- (void)buildWhereClauseWithSimplePredicate:(id)simplePredicate;	// 0x32b13e91
- (void)dealloc;	// 0x32b18935
- (BOOL)foldComparisonPredicate:(id)predicate;	// 0x32b15149
- (BOOL)isToManyCountKeyPath:(id)manyCountKeyPath;	// 0x32b13d71
- (void)prepareBeginsWith:(id)with;	// 0x32b14f95
- (void)prepareBetween:(id)between;	// 0x32b16491
- (void)prepareComparisonPredicate:(id)predicate;	// 0x32b15da9
- (void)prepareCountStatementWithFetchRequest:(id)fetchRequest;	// 0x32b14791
- (void)prepareDeleteStatementWithCorrelation:(id)correlation;	// 0x32b130d5
- (void)prepareDeleteStatementWithRow:(id)row;	// 0x32b1404d
- (void)prepareEndsWith:(id)with;	// 0x32b14fb5
- (void)prepareIn:(id)anIn swap:(BOOL)swap;	// 0x32b169f9
- (void)prepareInsertStatementWithCorrelation:(id)correlation;	// 0x32b12a21
- (void)prepareInsertStatementWithRow:(id)row;	// 0x32b120a9
- (void)prepareLike:(id)like;	// 0x32b16249
- (void)prepareMatches:(id)matches;	// 0x32b16991
- (void)prepareSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;	// 0x32b14671
- (void)prepareUpdateStatementWithCorrelation:(id)correlation;	// 0x32b12d29
- (void)prepareUpdateStatementWithRow:(id)row originalRow:(id)row2;	// 0x32b173a5
// converted property setter: - (void)setAutoDistinct:(BOOL)distinct;	// 0x32b113f9
// converted property getter: - (id)sqlString;	// 0x32b113c9
- (unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;	// 0x32b11409
- (unsigned)sqlTypeForPropertyAtEndOfKeyPath:(id)keyPath;	// 0x32b11a35
// converted property getter: - (id)whereClause;	// 0x32b113d9
@end


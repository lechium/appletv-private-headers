/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSMutableArray, NSMutableString, NSSQLAdapter, NSMutableDictionary, NSSQLStatement, NSSQLStoreMappingGenerator;

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
@property(assign) BOOL autoDistinct;	// G=0x347951d9; S=0x347951e9; converted property
@property(readonly, retain) NSMutableString *sqlString;	// G=0x347951b9; converted property
@property(readonly, retain) NSMutableString *whereClause;	// G=0x347951c9; converted property
+ (void)initialize;	// 0x34799021
- (id)initWithStatement:(id)statement forAdapter:(id)adapter;	// 0x3479c595
- (void)_addBindVarForConstVal1:(id)constVal1;	// 0x34795b91
- (void)_addBindVarForConstVal2:(id)constVal2;	// 0x34795979
- (void)_appendWhereClauseForConstVal:(id)constVal;	// 0x34795e61
- (void)_appendWhereClauseForConstantCollection:(id)constantCollection;	// 0x3479af85
- (void)_appendWhereClauseForExpressionCollection:(id)expressionCollection;	// 0x3479b08d
- (BOOL)_isForeignObjectExpression:(id)expression;	// 0x34798e21
- (BOOL)_isNullExpression:(id)expression;	// 0x34798dc5
- (id)_newPredicateWithInheritanceForFetchRequest:(id)fetchRequest;	// 0x34798065
- (id)_newWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x347989f5
- (void)_prepareConst:(id)aConst inAttribute:(id)attribute sensitiveOptions:(unsigned)options;	// 0x34798915
- (void)_prepareConst:(id)aConst inManyToMany:(id)many;	// 0x347986f1
- (void)_prepareConst:(id)aConst inToMany:(id)many;	// 0x3479878d
- (BOOL)_prepareFunctionExpression:(id)expression;	// 0x34798d0d
- (void)_preparePredicate:(id)predicate;	// 0x34799079
- (void)_preparePredicateExpression:(id)expression;	// 0x3479ada9
- (void)_preparePredicateOperator:(id)anOperator;	// 0x3479c4d1
- (void)_prepareString:(id)string expressionPath:(id)path sensitiveOptions:(unsigned)options wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many;	// 0x34798b35
- (void)_prepareSubstringWith:(id)with wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x34799ed1
- (id)_reducedSubpredicates:(id)subpredicates;	// 0x34799845
- (id)_retainedPrimaryKeyNumberForObject:(id)object;	// 0x347957b5
- (id)_retainedPrimaryKeyNumberForObjectID:(NSScalarObjectID *)objectID;	// 0x34795759
- (void)_startSQL:(id)sql;	// 0x3479535d
- (id)addJoinForDirectToManyToMany:(id)many;	// 0x347979d9
- (void)addJoinForManyToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x34797685
- (void)addJoinForToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x3479748d
- (void)addJoinForToOneRelationship:(id)oneRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x347972b1
- (void)appendClause:(id)clause forKeyPath:(id)keyPath allowToMany:(BOOL)many;	// 0x3479bcc1
- (void)appendClause:(id)clause forKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many;	// 0x34797bdd
- (void)appendClause:(id)clause forProperty:(id)property keypath:(id)keypath;	// 0x34797205
- (void)appendCountClause:(id)clause forToManyKeyPath:(id)manyKeyPath;	// 0x3479c169
- (void)appendJoinClauseToSQL;	// 0x34795659
- (void)appendLimitClauseToSQL:(unsigned)sql;	// 0x347956e9
- (void)appendOrderByClauseToSQL;	// 0x347956c9
- (void)appendSQL:(id)sql;	// 0x34795381
- (void)appendSelectListToSQLForRequest:(id)request;	// 0x347953a5
- (void)appendWhereClause:(id)clause;	// 0x34795339
- (void)appendWhereClauseToSQL;	// 0x34795679
// converted property getter: - (BOOL)autoDistinct;	// 0x347951d9
- (void)buildOrderByClauseWithSortDescriptors:(id)sortDescriptors;	// 0x3479bac9
- (void)buildWhereClauseForRow:(id)row optLock:(long long)lock;	// 0x34797d15
- (void)buildWhereClauseWithSelectPredicate:(id)selectPredicate;	// 0x34797095
- (void)buildWhereClauseWithSimplePredicate:(id)simplePredicate;	// 0x34797c81
- (void)dealloc;	// 0x3479c725
- (BOOL)foldComparisonPredicate:(id)predicate;	// 0x34798f39
- (BOOL)isToManyCountKeyPath:(id)manyCountKeyPath;	// 0x34797b61
- (void)prepareBeginsWith:(id)with;	// 0x34798d85
- (void)prepareBetween:(id)between;	// 0x3479a281
- (void)prepareComparisonPredicate:(id)predicate;	// 0x34799b99
- (void)prepareCountStatementWithFetchRequest:(id)fetchRequest;	// 0x34798581
- (void)prepareDeleteStatementWithCorrelation:(id)correlation;	// 0x34796ec5
- (void)prepareDeleteStatementWithRow:(id)row;	// 0x34797e3d
- (void)prepareEndsWith:(id)with;	// 0x34798da5
- (void)prepareIn:(id)anIn swap:(BOOL)swap;	// 0x3479a7e9
- (void)prepareInsertStatementWithCorrelation:(id)correlation;	// 0x34796811
- (void)prepareInsertStatementWithRow:(id)row;	// 0x34795e99
- (void)prepareLike:(id)like;	// 0x3479a039
- (void)prepareMatches:(id)matches;	// 0x3479a781
- (void)prepareSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;	// 0x34798461
- (void)prepareUpdateStatementWithCorrelation:(id)correlation;	// 0x34796b19
- (void)prepareUpdateStatementWithRow:(id)row originalRow:(id)row2;	// 0x3479b195
// converted property setter: - (void)setAutoDistinct:(BOOL)distinct;	// 0x347951e9
// converted property getter: - (id)sqlString;	// 0x347951b9
- (unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;	// 0x347951f9
- (unsigned)sqlTypeForPropertyAtEndOfKeyPath:(id)keyPath;	// 0x34795825
// converted property getter: - (id)whereClause;	// 0x347951c9
@end


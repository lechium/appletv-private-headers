/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MLSQLCode : NSObject {
@private
	NSString *_text;	// 4 = 0x4
	NSMutableArray *_bindings;	// 8 = 0x8
	MLSQLCode *_orderBy;	// 12 = 0xc
	MLSQLCode *_groupBy;	// 16 = 0x10
	MLSQLCode *_limitBy;	// 20 = 0x14
	NSMutableArray *_joins;	// 24 = 0x18
	NSMutableArray *_subexpressions;	// 28 = 0x1c
	NSMutableArray *_subexpressionOperators;	// 32 = 0x20
	NSMutableArray *_predicates;	// 36 = 0x24
	NSMutableArray *_predicateOperators;	// 40 = 0x28
	unsigned _isTextTerminated : 1;	// 44 = 0x2c
	unsigned _isToken : 1;	// 44 = 0x2c
}
@property(retain) id groupByCode;	// G=0x31bbffc5; S=0x31bd70cd; converted property
@property(readonly, retain) NSMutableArray *joins;	// G=0x31bd6db5; converted property
@property(retain) id limitByCode;	// G=0x31bbffe5; S=0x31bd7091; converted property
@property(retain) id orderByCode;	// G=0x31bbffd5; S=0x31bd7109; converted property
@property(readonly, retain) NSMutableArray *predicates;	// G=0x31bd6dc5; converted property
+ (id)_shallowDescriptionOfCodeArray:(id)codeArray;	// 0x31bd8759
+ (id)andOperatorCode;	// 0x31bd95bd
+ (id)closeParenCode;	// 0x31bd8d51
+ (id)codeWithSQLFormat:(id)sqlformat;	// 0x31bc1081
+ (id)expressionToken;	// 0x31bd6d99
+ (id)expressionTokenWhenJoinedToCodeClass:(Class)codeClass joinOp:(id)op;	// 0x31bd7971
+ (unsigned long long)lastInsertionROWID:(CPSqliteConnection *)rowid;	// 0x31bd8f4d
+ (id)openParenCode;	// 0x31bd9575
+ (id)orOperatorCode;	// 0x31bd9599
+ (BOOL)ownsToken:(id)token;	// 0x31bd9519
+ (BOOL)performReadFromStore:(CPRecordStoreRef)store code:(id)code;	// 0x31bd7ee5
+ (BOOL)performWithConnection:(CPSqliteConnection *)connection sqlFormat:(id)format;	// 0x31bc07cd
+ (BOOL)performWrite:(BOOL)write store:(CPRecordStoreRef)store transactionType:(unsigned)type arrayOfCode:(id)code;	// 0x31bd8e51
+ (BOOL)performWriteToStore:(CPRecordStoreRef)store transactionType:(unsigned)type code:(id)code;	// 0x31bd7f8d
- (id)init;	// 0x31bd79f5
- (id)initToken:(id)token;	// 0x31bd79cd
- (id)initWithSQLBindingCount:(long)sqlbindingCount sqlFormat:(id)format;	// 0x31bd8029
- (id)initWithSQLFormat:(id)sqlformat;	// 0x31bbecfd
- (void)__gatherCodeInto:(id)into predicateOperators:(id)operators bindings:(id)bindings codeBaseClass:(Class)aClass deep:(BOOL)deep;	// 0x31bc0205
- (void)__gatherCodeInto:(id)into predicateOperators:(id)operators bindings:(id)bindings codeBaseClass:(Class)aClass deep:(BOOL)deep filterUsing:(/*function-pointer*/ void *)aUsing filterContext:(void *)context;	// 0x31bbfafd
- (id)__initWithSQLBindingCount:(long)sqlbindingCount sqlString:(id)string;	// 0x31bbed71
- (unsigned)_bindParametersToSQLStatement:(CPSqliteStatement *)sqlstatement initialBindingIndex:(unsigned)index;	// 0x31bc0249
- (void)_checkValidFlattenedCodeText:(id)text splitIntoMultipleIfNecessary:(BOOL)necessary;	// 0x31bc0245
- (BOOL)_compiledSqliteStatementForConnection:(CPSqliteConnection *)connection preparedStatement:(CPSqliteStatement **)statement performStatement:(BOOL)statement3 splitIntoMultipleIfNecessary:(BOOL)necessary;	// 0x31bbf159
- (id)_copyFlattenedCodeText;	// 0x31bbf411
- (id)_copyFlattenedCodeTextByRequiringSemiColon:(BOOL)colon;	// 0x31bbf429
- (id)_copyFlattenedCodeTextByResolvingBindings;	// 0x31bd7681
- (id)_copyOfVisitableCodeArray;	// 0x31bbfee1
- (id)_copyShallowCodeTextByResolvingBindings;	// 0x31bd76ed
- (id)_descriptionWithOptions:(unsigned)options;	// 0x31bd78e1
- (id)_descriptionWithOptions:(unsigned)options level:(int)level;	// 0x31bd89f9
- (id)_expressionTextByJoiningExpression:(id)expression joiningOps:(id)ops lastJoinedCodeClass:(Class)aClass;	// 0x31bd7639
- (void)_expressionTextByJoiningInto:(id *)into expression:(id)expression joiningOps:(id)ops lastJoinedCodeClass:(Class)aClass;	// 0x31bd84d5
- (BOOL)_gatherBindings:(id *)bindings deep:(BOOL)deep;	// 0x31bd774d
- (BOOL)_gatherCode:(id *)code withBaseClass:(Class)baseClass deep:(BOOL)deep filterUsing:(/*function-pointer*/ void *)aUsing filterContext:(void *)context;	// 0x31bbf9ad
- (BOOL)_gatherJoins:(id *)joins deep:(BOOL)deep;	// 0x31bbf951
- (BOOL)_gatherPredicates:(id *)predicates predicateOperators:(id *)operators deep:(BOOL)deep;	// 0x31bbfff5
- (void)_initBindings:(unsigned)bindings;	// 0x31bbf02d
- (void)_insertSubexpression:(id)subexpression atIndex:(unsigned)index withBinaryOp:(id)binaryOp;	// 0x31bd7385
- (id)_text;	// 0x31bd6da5
- (BOOL)allowsJoins;	// 0x31bc089d
- (void)appendJoin:(id)join;	// 0x31bd7249
- (void)appendJoins:(id)joins;	// 0x31bd83d9
- (void)appendPredicate:(id)predicate withBinaryOp:(id)binaryOp;	// 0x31bd7145
- (void)appendSubexpression:(id)subexpression;	// 0x31bd7369
- (void)appendSubexpression:(id)subexpression withBinaryOp:(id)binaryOp;	// 0x31bd72a1
- (CPSqliteStatement *)copyCompiledSqliteStatementForConnection:(CPSqliteConnection *)connection;	// 0x31bbf129
- (long)countOfBindings;	// 0x31bc0405
- (long)countOfSubexpressions;	// 0x31bd73f9
- (void)dealloc;	// 0x31bc04a9
- (id)description;	// 0x31bd78c9
// converted property getter: - (id)groupByCode;	// 0x31bbffc5
- (BOOL)isNoOp;	// 0x31bbf8d9
- (BOOL)isToken;	// 0x31bd6d85
- (id)joinSQLString;	// 0x31bd71cd
// converted property getter: - (id)joins;	// 0x31bd6db5
// converted property getter: - (id)limitByCode;	// 0x31bbffe5
// converted property getter: - (id)orderByCode;	// 0x31bbffd5
- (BOOL)performAsMultipleStatementsWithConnection:(CPSqliteConnection *)connection;	// 0x31bd706d
- (BOOL)performWithConnection:(CPSqliteConnection *)connection;	// 0x31bc0879
// converted property getter: - (id)predicates;	// 0x31bd6dc5
- (void)setBindingAtIndex:(long)index toBooleanValue:(unsigned char)booleanValue;	// 0x31bd7621
- (void)setBindingAtIndex:(long)index toCFDataRef:(CFDataRef)cfdataRef;	// 0x31bd74cd
- (void)setBindingAtIndex:(long)index toCFStringRef:(CFStringRef)cfstringRef;	// 0x31bd7529
- (void)setBindingAtIndex:(long)index toCPRecord:(void *)cprecord;	// 0x31bd8ce5
- (void)setBindingAtIndex:(long)index toCPRecordID:(int)cprecordID store:(CPRecordStoreRef)store;	// 0x31bd7485
- (void)setBindingAtIndex:(long)index toCodeBinding:(id)codeBinding;	// 0x31bd7465
- (void)setBindingAtIndex:(long)index toDataValue:(id)dataValue;	// 0x31bd74e1
- (void)setBindingAtIndex:(long)index toSInt64Value:(long long)sint64Value;	// 0x31bd7581
- (void)setBindingAtIndex:(long)index toStringValue:(id)stringValue;	// 0x31bd753d
- (void)setBindingAtIndex:(long)index toUInt32Value:(unsigned)uint32Value;	// 0x31bc13b9
- (void)setBindingAtIndex:(long)index toUInt64Value:(unsigned long long)uint64Value;	// 0x31bd75d1
- (void)setBindingsInRange:(XXStruct_K5nmsA)range toCodeBindings:(id)codeBindings;	// 0x31bd7419
// converted property setter: - (void)setGroupByCode:(id)code;	// 0x31bd70cd
// converted property setter: - (void)setLimitByCode:(id)code;	// 0x31bd7091
// converted property setter: - (void)setOrderByCode:(id)code;	// 0x31bd7109
- (id)subexpressionAtIndex:(long)index;	// 0x31bd73d9
@end


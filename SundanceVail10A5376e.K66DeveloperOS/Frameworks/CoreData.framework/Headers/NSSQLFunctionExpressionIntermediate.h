/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLExpressionIntermediate.h"


@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate {
}
+ (BOOL)functionIsAcceptableAsAggregate:(id)aggregate;	// 0x35c8f14d
- (id)_generateArgumentStringForCollection:(id)collection inContext:(id)context;	// 0x35c8f2e9
- (id)_generateCorrelatedSubqueryStringWithSymbol:(id)symbol forExpression:(id)expression inContext:(id)context;	// 0x35c8fcad
- (id)_generateDistinctStringInContext:(id)context;	// 0x35c926f1
- (id)_generateMathStringWithSymbol:(id)symbol inContext:(id)context;	// 0x35c8f501
- (id)_generateSQLForCountInContext:(id)context;	// 0x35c91331
- (id)_generateSelectForAggregateStringWithSymbol:(id)symbol argument:(id)argument inContext:(id)context;	// 0x35c90379
- (id)_generateType4SQLForSymbol:(id)symbol inContext:(id)context;	// 0x35c91cc9
- (id)_generateUncorrelatedSubqueryStringWithSymbol:(id)symbol forAttribute:(id)attribute inContext:(id)context;	// 0x35c8f7ad
- (id)generateSQLStringInContext:(id)context;	// 0x35c92921
- (id)generateType1SQLString:(id)string inContext:(id)context;	// 0x35c90ab5
- (id)generateType2SQLString:(id)string inContext:(id)context;	// 0x35c90db9
- (id)generateType3SQLString:(id)string keypathOnly:(BOOL)only inContext:(id)context;	// 0x35c91079
- (BOOL)isFunctionScoped;	// 0x35c8f2e5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLExpressionIntermediate.h"


__attribute__((visibility("hidden")))
@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {
}
- (id)_generateCountClauseForToManyKeyPathExpression:(id)manyKeyPathExpression inContext:(id)context;	// 0x33188f35
- (id)_generateSQLForKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x330d3551
- (id)_generateSQLForProperty:(id)property startEntity:(id)entity startAlias:(id)alias keypath:(id)keypath inContext:(id)context;	// 0x330d3cbd
- (id)generateSQLStringInContext:(id)context;	// 0x330d32b9
@end


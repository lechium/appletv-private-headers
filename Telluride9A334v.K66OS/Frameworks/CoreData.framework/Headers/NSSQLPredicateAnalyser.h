/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPredicateVisitor.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {
@private
	BOOL _compoundPredicate;	// 4 = 0x4
	NSMutableArray *_keys;	// 8 = 0x8
	NSMutableArray *_allModifierPredicates;	// 12 = 0xc
	NSMutableArray *_setExpressions;	// 16 = 0x10
	NSMutableArray *_subqueries;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *allModifierPredicates;	// G=0x31e53709; converted property
@property(readonly, retain) NSMutableArray *setExpressions;	// G=0x31f1a00d; converted property
@property(readonly, retain) NSMutableArray *subqueries;	// G=0x31f19ffd; converted property
- (id)init;	// 0x31e52d41
// converted property getter: - (id)allModifierPredicates;	// 0x31e53709
- (void)dealloc;	// 0x31e5842d
- (id)keypaths;	// 0x31f19fed
// converted property getter: - (id)setExpressions;	// 0x31f1a00d
// converted property getter: - (id)subqueries;	// 0x31f19ffd
- (void)visitPredicate:(id)predicate;	// 0x31e52f09
- (void)visitPredicateExpression:(id)expression;	// 0x31e52e29
- (void)visitPredicateOperator:(id)anOperator;	// 0x31f19fe9
@end


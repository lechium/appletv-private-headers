/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSMutableArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
	NSMutableArray *_subclauses;	// 12 = 0xc
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope inContext:(id)context;	// 0x30eb2a01
- (id)_generateMulticlauseStringInContext:(id)context;	// 0x30eb305d
- (void)dealloc;	// 0x30eb32ed
- (id)generateSQLStringInContext:(id)context;	// 0x30eb2db5
- (BOOL)isOrScoped;	// 0x30eb31ed
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLSelectIntermediate.h"


@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
	BOOL _onlyFetchesAggregates;	// 33 = 0x21
}
@property(readonly, assign) BOOL onlyFetchesAggregates;	// G=0x36646241; converted property
- (id)generateSQLStringInContext:(id)context;	// 0x3659c4f9
// converted property getter: - (BOOL)onlyFetchesAggregates;	// 0x36646241
@end

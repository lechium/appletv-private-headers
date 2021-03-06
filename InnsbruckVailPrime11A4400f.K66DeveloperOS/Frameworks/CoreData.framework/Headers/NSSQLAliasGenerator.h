/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSString;

@interface NSSQLAliasGenerator : NSObject {
	unsigned _nextTableAlias;	// 4 = 0x4
	unsigned _nextVariableAlias;	// 8 = 0x8
	unsigned _nextTempTableAlias;	// 12 = 0xc
	NSString *_tableBase;	// 16 = 0x10
	NSString *_variableBase;	// 20 = 0x14
}
- (id)init;	// 0x2d0f1519
- (id)initWithNestingLevel:(unsigned)nestingLevel;	// 0x2d0639c9
- (void)dealloc;	// 0x2d06952d
- (id)generateSubqueryVariableAlias;	// 0x2d0f152d
- (id)generateTableAlias;	// 0x2d065585
- (id)generateTempTableName;	// 0x2d0f157d
@end


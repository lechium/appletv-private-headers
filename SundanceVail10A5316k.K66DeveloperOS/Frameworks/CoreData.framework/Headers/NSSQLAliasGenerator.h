/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLAliasGenerator : NSObject {
@private
	unsigned _nextTableAlias;	// 4 = 0x4
	unsigned _nextVariableAlias;	// 8 = 0x8
	NSString *_tableBase;	// 12 = 0xc
	NSString *_variableBase;	// 16 = 0x10
}
- (id)init;	// 0x32da9631
- (id)initWithNestingLevel:(unsigned)nestingLevel;	// 0x32d18ab9
- (void)dealloc;	// 0x32d1ee0d
- (id)generateSubqueryVariableAlias;	// 0x32da9645
- (id)generateTableAlias;	// 0x32d1a641
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLFetchIntermediate;

@interface NSSQLFetchDictionaryCountIntermediate : NSSQLIntermediate {
	NSSQLFetchIntermediate *_realFetch;	// 8 = 0x8
}
- (id)initWithFetchIntermediate:(id)fetchIntermediate inScope:(id)scope;	// 0x33e0f151
- (void)dealloc;	// 0x33e0f1a9
- (id)generateSQLStringInContext:(id)context;	// 0x33e0f1f9
@end

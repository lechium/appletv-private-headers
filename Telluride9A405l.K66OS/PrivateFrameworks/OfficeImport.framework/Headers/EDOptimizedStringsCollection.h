/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EDOptimizedStringsCollection : EDCollection {
@private
	NSMutableDictionary *mStringDictionary;	// 8 = 0x8
}
- (id)init;	// 0x30e2ec51
- (unsigned)addObject:(id)object;	// 0x30e2ecd1
- (unsigned)addOrEquivalentObject:(id)object;	// 0x30e2ecc1
- (void)dealloc;	// 0x30e2edb9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x30e2ec4d
@end


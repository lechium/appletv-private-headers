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
- (id)init;	// 0x32a69c51
- (unsigned)addObject:(id)object;	// 0x32a69cd1
- (unsigned)addOrEquivalentObject:(id)object;	// 0x32a69cc1
- (void)dealloc;	// 0x32a69db9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32a69c4d
@end


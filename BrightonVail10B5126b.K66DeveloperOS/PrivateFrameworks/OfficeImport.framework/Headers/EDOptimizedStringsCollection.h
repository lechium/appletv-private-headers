/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"

@class NSMutableDictionary;

@interface EDOptimizedStringsCollection : EDCollection {
	NSMutableDictionary *mStringDictionary;	// 8 = 0x8
}
- (id)init;	// 0x349cbe9d
- (unsigned)addObject:(id)object;	// 0x34a29e99
- (unsigned)addOrEquivalentObject:(id)object;	// 0x34a29f6d
- (void)dealloc;	// 0x349cbfd5
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x34a29f7d
@end

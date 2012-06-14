/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

@interface ISUniqueOperationContext : NSObject {
	NSMutableSet *_operations;	// 4 = 0x4
	NSMutableDictionary *_uniqueOperations;	// 8 = 0x8
}
- (id)init;	// 0x36960979
- (void)addOperation:(id)operation;	// 0x36960a79
- (BOOL)containsOperation:(id)operation;	// 0x36960a99
- (unsigned)countOfOperations;	// 0x36960abd
- (void)dealloc;	// 0x36960a01
- (void)removeOperation:(id)operation;	// 0x36960add
- (void)setUniqueOperation:(id)operation forKey:(id)key;	// 0x36960afd
- (id)uniqueOperationForKey:(id)key;	// 0x36960b39
@end

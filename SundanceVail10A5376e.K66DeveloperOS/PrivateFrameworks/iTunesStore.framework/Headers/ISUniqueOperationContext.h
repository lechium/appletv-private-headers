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
- (id)init;	// 0x307822f5
- (void)addOperation:(id)operation;	// 0x307823f9
- (BOOL)containsOperation:(id)operation;	// 0x30782419
- (unsigned)countOfOperations;	// 0x3078243d
- (void)dealloc;	// 0x30782381
- (void)removeOperation:(id)operation;	// 0x3078245d
- (void)setUniqueOperation:(id)operation forKey:(id)key;	// 0x3078247d
- (id)uniqueOperationForKey:(id)key;	// 0x307824b1
@end

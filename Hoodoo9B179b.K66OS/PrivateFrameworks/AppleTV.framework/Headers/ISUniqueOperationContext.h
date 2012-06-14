/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ISUniqueOperationContext : NSObject {
@private
	NSMutableSet *_operations;	// 4 = 0x4
	NSMutableDictionary *_uniqueOperations;	// 8 = 0x8
}
- (id)init;	// 0x30427d6d
- (void)addOperation:(id)operation;	// 0x30427e6d
- (BOOL)containsOperation:(id)operation;	// 0x30427e8d
- (unsigned)countOfOperations;	// 0x30427eb1
- (void)dealloc;	// 0x30427df5
- (void)removeOperation:(id)operation;	// 0x30427ed1
- (void)setUniqueOperation:(id)operation forKey:(id)key;	// 0x30427ef1
- (id)uniqueOperationForKey:(id)key;	// 0x30427f2d
@end

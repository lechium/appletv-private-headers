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
- (id)init;	// 0x33bc2f79
- (void)addOperation:(id)operation;	// 0x33bc3079
- (BOOL)containsOperation:(id)operation;	// 0x33bc3099
- (unsigned)countOfOperations;	// 0x33bc30bd
- (void)dealloc;	// 0x33bc3001
- (void)removeOperation:(id)operation;	// 0x33bc30dd
- (void)setUniqueOperation:(id)operation forKey:(id)key;	// 0x33bc30fd
- (id)uniqueOperationForKey:(id)key;	// 0x33bc3139
@end


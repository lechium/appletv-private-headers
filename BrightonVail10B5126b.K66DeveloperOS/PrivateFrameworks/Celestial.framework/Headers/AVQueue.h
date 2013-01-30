/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSMutableArray;

@interface AVQueue : NSObject {
	NSRecursiveLock *_mutex;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	void *_reserved;	// 12 = 0xc
	int _isBeingModifiedCount;	// 16 = 0x10
}
+ (id)avQueue;	// 0x335c611d
+ (id)queueWithArray:(id)array error:(id *)error;	// 0x335d5e6d
- (id)init;	// 0x335d5ead
- (id)initWithArray:(id)array error:(id *)error;	// 0x335c6159
- (id)initWithError:(id *)error;	// 0x335c61d5
- (int)_instantiateItem;	// 0x335d5ec1
- (BOOL)appendItem:(id)item error:(id *)error;	// 0x335c6d4d
- (BOOL)appendItemsFromArray:(id)array error:(id *)error;	// 0x335d14a9
- (void)dealloc;	// 0x335cd431
- (unsigned)indexOfItem:(id)item;	// 0x335d5ec5
- (BOOL)insertItem:(id)item afterItem:(id)item2 error:(id *)error;	// 0x335d5fd1
- (BOOL)insertItem:(id)item atIndex:(unsigned)index error:(id *)error;	// 0x335c6d89
- (BOOL)isBeingModified;	// 0x335d6269
- (id)itemAfterItem:(id)item;	// 0x335d5f25
- (id)itemAtIndex:(unsigned)index;	// 0x335c7fbd
- (unsigned)itemCount;	// 0x335c6245
- (void)itemWasAdded:(id)added atIndex:(int)index;	// 0x335c6f05
- (void)itemWillBeRemoved:(id)item atIndex:(int)index;	// 0x335ccae5
- (void)removeAllItems;	// 0x335d6209
- (BOOL)removeItem:(id)item;	// 0x335d6169
- (BOOL)removeItemAtIndex:(unsigned)index;	// 0x335cca19
- (void)removeItemsInRange:(NSRange)range;	// 0x335d61d9
@end

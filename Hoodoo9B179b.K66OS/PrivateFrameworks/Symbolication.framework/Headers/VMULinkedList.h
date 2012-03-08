/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class VMULinkedListEntry;

@interface VMULinkedList : NSObject {
	VMULinkedListEntry *_head;	// 4 = 0x4
	VMULinkedListEntry *_tail;	// 8 = 0x8
}
@property(readonly, retain) VMULinkedListEntry *head;	// G=0x34d32109; converted property
@property(readonly, retain) VMULinkedListEntry *tail;	// G=0x34d32119; converted property
+ (id)linkedList;	// 0x34d32235
- (id)init;	// 0x34d32129
// converted property getter: - (id)head;	// 0x34d32109
- (id)popTail;	// 0x34d322fd
- (void)pushHead:(id)head;	// 0x34d323b9
- (void)remove:(id)remove;	// 0x34d3226d
- (void)removeAllObjects;	// 0x34d32449
// converted property getter: - (id)tail;	// 0x34d32119
@end


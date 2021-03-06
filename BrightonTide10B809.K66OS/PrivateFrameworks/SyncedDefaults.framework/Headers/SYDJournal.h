/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SYDJournal : NSObject {
	NSMutableDictionary *store;	// 4 = 0x4
	NSMutableDictionary *journal;	// 8 = 0x8
	BOOL readonly;	// 12 = 0xc
}
- (id)init;	// 0x355d067d
- (id)initWithMutableStore:(id)mutableStore;	// 0x355d07a5
- (id)initWithStore:(id)store;	// 0x355d070d
- (void)addChange:(int)change forKey:(id)key changeCount:(long long)count;	// 0x355d0ce5
- (int)changeSinceChangeCount:(long long)count forKey:(id)key;	// 0x355d0859
- (id)changesSinceChangeCount:(long long)count;	// 0x355d08fd
- (void)dealloc;	// 0x355d06a9
- (id)description;	// 0x355d1195
- (long long)maximumChangeCount;	// 0x355d0b49
- (BOOL)removeChangesUntilChangeCount:(long long)count;	// 0x355d0ea9
@end


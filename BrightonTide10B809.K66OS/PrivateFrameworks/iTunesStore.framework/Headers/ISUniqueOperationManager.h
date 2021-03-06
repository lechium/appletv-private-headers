/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "ISSingleton.h"

@class ISUniqueOperationContext, NSLock, NSMutableDictionary, NSMutableArray;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
	ISUniqueOperationContext *_activeContext;	// 4 = 0x4
	NSMutableArray *_contexts;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	NSMutableDictionary *_lockPool;	// 16 = 0x10
}
+ (void)setSharedInstance:(id)instance;	// 0x36895a3d
+ (id)sharedInstance;	// 0x36895a91
- (id)init;	// 0x36895925
- (id)_activeContext;	// 0x36895f19
- (id)_contextForOperation:(id)operation;	// 0x36895f89
- (void)checkInOperation:(id)operation;	// 0x36895b05
- (void)checkOutOperation:(id)operation;	// 0x36895b65
- (void)dealloc;	// 0x368959b1
- (id)lockWithIdentifier:(id)identifier;	// 0x36895c39
- (id)predecessorForKey:(id)key operation:(id)operation;	// 0x36895d65
- (void)setPredecessorIfNeeded:(id)needed forKey:(id)key;	// 0x36895df9
- (void)uniqueOperationFinished:(id)finished forKey:(id)key;	// 0x36895e89
@end


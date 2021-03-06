/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISSingleton.h"
#import <NSObject.h> // Unknown library

@class NSLock, ISUniqueOperationContext, NSMutableDictionary, NSMutableArray;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
	ISUniqueOperationContext *_activeContext;	// 4 = 0x4
	NSMutableArray *_contexts;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	NSMutableDictionary *_lockPool;	// 16 = 0x10
}
+ (void)setSharedInstance:(id)instance;	// 0x35ed36f9
+ (id)sharedInstance;	// 0x35ed374d
- (id)init;	// 0x35ed35e9
- (id)_activeContext;	// 0x35ed3be1
- (id)_contextForOperation:(id)operation;	// 0x35ed3c55
- (void)checkInOperation:(id)operation;	// 0x35ed37c1
- (void)checkOutOperation:(id)operation;	// 0x35ed3825
- (void)dealloc;	// 0x35ed3671
- (id)lockWithIdentifier:(id)identifier;	// 0x35ed38f9
- (id)predecessorForKey:(id)key operation:(id)operation;	// 0x35ed3a2d
- (void)setPredecessorIfNeeded:(id)needed forKey:(id)key;	// 0x35ed3ac1
- (void)uniqueOperationFinished:(id)finished forKey:(id)key;	// 0x35ed3b51
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "MZKeyValueStoreTransactionProcessing.h"
#import "MZKeyValueStoreTransactionGroup.h"

@class NSArray, NSMutableDictionary, MZKeyValueStoreTransaction;

@interface MZKeyValueStoreRemoveKeysTransactionGroup : MZKeyValueStoreTransactionGroup <MZKeyValueStoreTransactionProcessing> {
	NSArray *_keys;	// 4 = 0x4
	NSMutableDictionary *_itemsToRemove;	// 8 = 0x8
	MZKeyValueStoreTransaction *_currenTransaction;	// 12 = 0xc
}
- (id)initWithKeys:(id)keys;	// 0x336e5381
- (id)_transactionItemForKey:(id)key;	// 0x336e5481
- (id)dataForSetTransaction:(id)setTransaction key:(id)key version:(id *)version;	// 0x336e5711
- (void)dealloc;	// 0x336e5409
- (BOOL)scheduleNextTransactionInController:(id)controller;	// 0x336e5559
- (void)transaction:(id)transaction didProcessResponseWithDomainVersion:(id)domainVersion;	// 0x336e5745
- (void)transaction:(id)transaction mergeData:(id)data forKey:(id)key domainVersion:(id)version version:(id)version5 mismatch:(BOOL)mismatch finishedBlock:(id)block;	// 0x336e5749
- (void)transaction:(id)transaction willProcessResponseWithDomainVersion:(id)domainVersion;	// 0x336e5741
- (id)versionForGetTransaction:(id)getTransaction key:(id)key;	// 0x336e570d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSRecursiveLock, PFUbiquityLocation, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionHistoryCache : NSObject {
@private
	NSString *_localPeerID;	// 4 = 0x4
	PFUbiquityLocation *_rootLocation;	// 8 = 0x8
	NSMutableDictionary *_peerIDToHistoryArray;	// 12 = 0xc
	NSMutableDictionary *_globalIDToHistoryArray;	// 16 = 0x10
	NSRecursiveLock *_peerIDToHistoryArrayLock;	// 20 = 0x14
	NSMutableArray *_entriesToWrite;	// 24 = 0x18
}
- (id)init;	// 0x32e59b15
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x32e59be9
- (BOOL)addTransactionEntries:(id)entries error:(id *)error;	// 0x32e5a795
- (BOOL)addTransactionEntry:(id)entry error:(id *)error;	// 0x32e5a32d
- (BOOL)addTransactionEntryLight:(id)light needsWrite:(BOOL)write error:(id *)error;	// 0x32e5a39d
- (BOOL)cacheTransactionHistory:(id *)history;	// 0x32e59db9
- (id)cachedTransactionHistoryForGlobalID:(id)globalID;	// 0x32e5b855
- (void)dealloc;	// 0x32e59c4d
- (id)description;	// 0x32e59d25
- (BOOL)purgeCache:(id *)cache;	// 0x32e5b5e5
- (BOOL)writePendingEntries:(id *)entries;	// 0x32e5a9dd
@end


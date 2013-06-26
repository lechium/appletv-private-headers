/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSMutableDictionary, PFUbiquityGlobalObjectIDCache, NSString, NSRecursiveLock;

@interface PFUbiquityTransactionLogCache : NSObject {
	NSString *_localPeerID;	// 4 = 0x4
	NSMutableDictionary *_transactionLogCache;	// 8 = 0x8
	NSRecursiveLock *_transactionLogCacheLock;	// 12 = 0xc
	PFUbiquityGlobalObjectIDCache *_gidCache;	// 16 = 0x10
}
- (id)init;	// 0x2d1cc7f5
- (id)initWithLocalPeerID:(id)localPeerID andGlobalIDCache:(id)cache;	// 0x2d1cc8ad
- (void)cacheExportedLog:(id)log;	// 0x2d1cce6d
- (void)dealloc;	// 0x2d1cc911
- (void)removeLogsCachedForStoreNamed:(id)storeNamed withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x2d1cd051
- (id)retainedCachedLogForLocation:(id)location loadWithRetry:(BOOL)retry error:(id *)error;	// 0x2d1cc9b9
@end

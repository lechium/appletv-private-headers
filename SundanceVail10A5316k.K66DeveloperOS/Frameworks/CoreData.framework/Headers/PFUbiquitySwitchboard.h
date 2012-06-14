/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboard : NSObject {
@private
	NSMutableDictionary *_rootLocationToLocalPeerIDToEntry;	// 4 = 0x4
	NSMutableDictionary *_rootLocationToLocalPeerIDToFilePresenter;	// 8 = 0x8
	NSRecursiveLock *_registrationLock;	// 12 = 0xc
}
+ (void)initialize;	// 0x32e23f45
+ (id)sharedSwitchboard;	// 0x32e23f9d
+ (id)ubiquitousExternalReferenceLocationForUUID:(id)uuid inStore:(id)store;	// 0x32e25d2d
+ (id)urlForUbiquitousExternalReferenceLocation:(id)ubiquitousExternalReferenceLocation;	// 0x32e25d61
- (id)init;	// 0x32e23fad
- (void)_removeFilePresenter:(id)presenter;	// 0x32e24965
- (void)addEntryForRootLocation:(id)rootLocation andPeerID:(id)anId;	// 0x32e25d8d
- (BOOL)cacheFilePresenterForUbiquityRootLocation:(id)ubiquityRootLocation andLocalPeerID:(id)anId;	// 0x32e244f1
- (void)coordinatorWillRemoveStore:(id)coordinator;	// 0x32e25ca5
- (id)createSetOfCoordinatorsForPersistentStoreName:(id)persistentStoreName andLocalPeerID:(id)anId atUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32e255a1
- (void)dealloc;	// 0x32e24065
- (id)description;	// 0x32e24121
- (id)entryForUbiquityRootLocation:(id)ubiquityRootLocation andLocalPeerID:(id)anId;	// 0x32e24199
- (id)filePresenterForUbiquityRootLocation:(id)ubiquityRootLocation andLocalPeerID:(id)anId;	// 0x32e242f1
- (void)registerUbiquitizedPersistentStore:(id)store forLocalPeerID:(id)localPeerID;	// 0x32e24c09
- (void)releaseAllEntriesForRootLocation:(id)rootLocation andPeer:(id)peer;	// 0x32e25fc1
- (void)removeFilePresenterCachedForUbiquityRootLocation:(id)ubiquityRootLocation andLocalPeerID:(id)anId;	// 0x32e247ad
- (void)unregisterCoordinator:(id)coordinator;	// 0x32e24fc1
- (void)unregisterPersistentStore:(id)store;	// 0x32e256f5
@end


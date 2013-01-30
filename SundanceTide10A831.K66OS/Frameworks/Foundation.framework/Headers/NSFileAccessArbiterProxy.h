/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessArbiter.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {
	NSObject<OS_xpc_object> *_server;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	NSMutableDictionary *_presentersByID;	// 12 = 0xc
	NSMutableDictionary *_providersByID;	// 16 = 0x10
}
+ (id)_operationQueueForPresenter:(id)presenter;	// 0x326186d9
- (id)initWithServer:(id)server;	// 0x326169d1
- (id)_idForReactor:(id)reactor;	// 0x32616b15
- (void)_makePresenter:(id)presenter accommodateDeletionWithSubitemURL:(id)subitemURL completionHandler:(id)handler;	// 0x326189b5
- (void)_makePresenter:(id)presenter accommodateDisconnectionWithCompletionHandler:(id)completionHandler;	// 0x32618e4d
- (void)_makePresenter:(id)presenter observeChangeWithSubitemURL:(id)subitemURL;	// 0x32619095
- (void)_makePresenter:(id)presenter observeMoveToURL:(id)url withSubitemURL:(id)subitemURL;	// 0x32619245
- (void)_makePresenter:(id)presenter observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemURL:(id)url;	// 0x32619679
- (void)_makePresenter:(id)presenter reacquireFromReadingClaimForID:(id)anId;	// 0x3261a445
- (void)_makePresenter:(id)presenter reacquireFromWritingClaimForID:(id)anId;	// 0x3261abc5
- (void)_makePresenter:(id)presenter relinquishToAccessClaimWithID:(id)anId ifNecessaryUsingSelector:(SEL)selector recordingRelinquishment:(id)relinquishment continuer:(id)continuer;	// 0x32619efd
- (void)_makePresenter:(id)presenter relinquishToReadingClaimWithID:(id)anId options:(unsigned)options completionHandler:(id)handler;	// 0x3261a305
- (void)_makePresenter:(id)presenter relinquishToWritingClaimWithID:(id)anId options:(unsigned)options subitemURL:(id)url completionHandler:(id)handler;	// 0x3261a471
- (void)_makePresenter:(id)presenter saveChangesWithCompletionHandler:(id)completionHandler;	// 0x3261876d
- (void)_makePresenter:(id)presenter setLastPresentedItemEventIdentifier:(unsigned long long)identifier;	// 0x32619e15
- (void)_makePresenterObserveDisconnection:(id)disconnection;	// 0x326194f1
- (void)_makePresenterObserveReconnection:(id)reconnection;	// 0x326195b5
- (void)_makeProvider:(id)provider cancelProvidingItemAtURL:(id)url forAccessClaimWithID:(id)anId;	// 0x3261af85
- (void)_makeProvider:(id)provider provideItemAtURL:(id)url forAccessClaimWithID:(id)anId completionHandler:(id)handler;	// 0x3261abf1
- (id)_readRelinquishmentForPresenter:(id)presenter;	// 0x32616bcd
- (id)_writeRelinquishmentForPresenter:(id)presenter;	// 0x32616c65
- (void)addFilePresenter:(id)presenter;	// 0x32617a29
- (void)addFileProvider:(id)provider completionHandler:(id)handler;	// 0x32617fc1
- (void)cancelAccessClaimForID:(id)anId;	// 0x32617255
- (void)dealloc;	// 0x32616a39
- (id)filePresenters;	// 0x32617ddd
- (id)fileProviders;	// 0x32618329
- (void)finalize;	// 0x32616ac1
- (id)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;	// 0x32616cfd
- (void)grantSubarbitrationClaim:(id)claim withServer:(id)server;	// 0x32616f9d
- (void)handleCanceledServer;	// 0x3261bcc1
- (void)handleMessage:(id)message;	// 0x3261b08d
- (id)idForFileReactor:(id)fileReactor;	// 0x3261850d
- (void)removeFilePresenter:(id)presenter;	// 0x32617c5d
- (void)removeFileProvider:(id)provider;	// 0x326181d9
- (void)revokeAccessClaimForID:(id)anId;	// 0x32616e99
- (void)revokeSubarbitrationClaimForID:(id)anId;	// 0x32617151
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x326178f1
- (void)writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;	// 0x326174c1
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x32617359
- (void)writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;	// 0x326175f9
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x32617731
@end

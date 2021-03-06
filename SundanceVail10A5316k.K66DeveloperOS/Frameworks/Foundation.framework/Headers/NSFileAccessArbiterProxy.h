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
@private
	NSObject<OS_xpc_object> *_server;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	NSMutableDictionary *_presentersByID;	// 12 = 0xc
	NSMutableDictionary *_providersByID;	// 16 = 0x10
}
+ (id)_operationQueueForPresenter:(id)presenter;	// 0x31af5089
- (id)initWithServer:(id)server;	// 0x31af35f1
- (id)_idForReactor:(id)reactor;	// 0x31af3735
- (void)_makePresenter:(id)presenter accommodateDeletionWithSubitemURL:(id)subitemURL completionHandler:(id)handler;	// 0x31af5365
- (void)_makePresenter:(id)presenter observeChangeWithSubitemURL:(id)subitemURL;	// 0x31af57fd
- (void)_makePresenter:(id)presenter observeMoveToURL:(id)url withSubitemURL:(id)subitemURL;	// 0x31af59ad
- (void)_makePresenter:(id)presenter observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemURL:(id)url;	// 0x31af5c59
- (void)_makePresenter:(id)presenter reacquireFromReadingClaimForID:(id)anId;	// 0x31af6a25
- (void)_makePresenter:(id)presenter reacquireFromWritingClaimForID:(id)anId;	// 0x31af70fd
- (void)_makePresenter:(id)presenter relinquishToAccessClaimWithID:(id)anId ifNecessaryUsingSelector:(SEL)selector recordingRelinquishment:(id)relinquishment continuer:(id)continuer;	// 0x31af64dd
- (void)_makePresenter:(id)presenter relinquishToReadingClaimWithID:(id)anId options:(unsigned)options completionHandler:(id)handler;	// 0x31af68e5
- (void)_makePresenter:(id)presenter relinquishToWritingClaimWithID:(id)anId options:(unsigned)options subitemURL:(id)url completionHandler:(id)handler;	// 0x31af6a51
- (void)_makePresenter:(id)presenter saveChangesWithCompletionHandler:(id)completionHandler;	// 0x31af511d
- (void)_makePresenter:(id)presenter setLastPresentedItemEventIdentifier:(unsigned long long)identifier;	// 0x31af63f5
- (void)_makeProvider:(id)provider cancelProvidingItemAtURL:(id)url forAccessClaimWithID:(id)anId;	// 0x31af74bd
- (void)_makeProvider:(id)provider provideItemAtURL:(id)url forAccessClaimWithID:(id)anId completionHandler:(id)handler;	// 0x31af7129
- (id)_readRelinquishmentForPresenter:(id)presenter;	// 0x31af37ed
- (id)_writeRelinquishmentForPresenter:(id)presenter;	// 0x31af3885
- (void)addFilePresenter:(id)presenter;	// 0x31af43d9
- (void)addFileProvider:(id)provider completionHandler:(id)handler;	// 0x31af4971
- (void)cancelAccessClaimForID:(id)anId;	// 0x31af3e75
- (void)dealloc;	// 0x31af3659
- (id)filePresenters;	// 0x31af478d
- (id)fileProviders;	// 0x31af4cd9
- (void)finalize;	// 0x31af36e1
- (id)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;	// 0x31af391d
- (void)grantSubarbitrationClaim:(id)claim withServer:(id)server;	// 0x31af3bbd
- (void)handleCanceledServer;	// 0x31af8061
- (void)handleMessage:(id)message;	// 0x31af75c5
- (id)idForFileReactor:(id)fileReactor;	// 0x31af4ebd
- (void)removeFilePresenter:(id)presenter;	// 0x31af460d
- (void)removeFileProvider:(id)provider;	// 0x31af4b89
- (void)revokeAccessClaimForID:(id)anId;	// 0x31af3ab9
- (void)revokeSubarbitrationClaimForID:(id)anId;	// 0x31af3d71
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x31af42a1
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x31af3f79
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x31af40e1
@end


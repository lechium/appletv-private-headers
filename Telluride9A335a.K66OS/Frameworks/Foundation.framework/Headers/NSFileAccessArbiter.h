/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSObject.h"
#import "Foundation-Structs.h"
#import "NSFileAccessArbiter.h"

@class NSMutableDictionary, NSFileAccessNode;

@protocol NSFileAccessArbiter <NSObject>
- (void)cancelAccessClaimForID:(id)anId;
- (dispatch_semaphore_s *)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;
- (void)grantSubarbitrationClaim:(id)claim withServer:(xpc_connection_s *)server;
- (void)revokeAccessClaimForID:(id)anId;
- (void)revokeSubarbitrationClaimForID:(id)anId;
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;
@end

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter> {
@private
	dispatch_queue_s *_queue;	// 4 = 0x4
	BOOL _isSubarbiter;	// 8 = 0x8
	NSMutableDictionary *_accessClaimsByID;	// 12 = 0xc
	NSMutableDictionary *_subarbitrationClaimsByID;	// 16 = 0x10
	NSMutableDictionary *_reactorsByID;	// 20 = 0x14
	NSMutableDictionary *_watchersByPresenterID;	// 24 = 0x18
	NSFileAccessNode *_rootNode;	// 28 = 0x1c
	xpc_connection_s *_superarbitrationServer;	// 32 = 0x20
}
- (id)initWithQueue:(dispatch_queue_s *)queue isSubarbiter:(BOOL)subarbiter listener:(xpc_connection_s *)listener;	// 0x321090fd
- (void)_addPresenter:(id)presenter ofItemAtURL:(id)url;	// 0x3210a939
- (void)_addProvider:(id)provider ofItemsAtURL:(id)url;	// 0x3210b091
- (void)_cancelAccessClaimForID:(id)anId;	// 0x32109e99
- (void)_grantAccessClaim:(id)claim;	// 0x3210974d
- (void)_grantSubarbitrationClaim:(id)claim withServer:(xpc_connection_s *)server;	// 0x32109bbd
- (void)_handleCanceledClient:(xpc_connection_s *)client;	// 0x3210c3e1
- (void)_handleMessage:(void *)message forSubarbitrationClaim:(id)subarbitrationClaim server:(xpc_connection_s *)server;	// 0x3210c049
- (void)_handleMessage:(void *)message fromClient:(xpc_connection_s *)client;	// 0x3210bb25
- (BOOL)_handleMessage:(void *)message ofKind:(id)kind withParameters:(id)parameters embeddedServer:(xpc_connection_s *)server fromClient:(xpc_connection_s *)client;	// 0x3210b445
- (void)_removeReactorForID:(id)anId;	// 0x3210b111
- (void)_revokeAccessClaim:(id)claim;	// 0x321099dd
- (void)_revokeAccessClaimForID:(id)anId fromLocal:(BOOL)local;	// 0x32109aa5
- (void)_sendSubarbitersMessageWithKind:(id)kind parameters:(id)parameters;	// 0x3210b361
- (void)_startArbitratingItemsAtURLs:(id)urls withSuperarbitrationServer:(xpc_connection_s *)superarbitrationServer;	// 0x3210b1bd
- (void)_tiePresenter:(id)presenter toItemAtURL:(id)url;	// 0x321096c1
- (void)_tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x3210a8f5
- (void)_writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x32109f59
- (void)_writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x3210a7c9
- (void)cancelAccessClaimForID:(id)anId;	// 0x3210cae5
- (void)dealloc;	// 0x321095bd
- (void)finalize;	// 0x32109681
- (dispatch_semaphore_s *)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;	// 0x3210c84d
- (void)grantSubarbitrationClaim:(id)claim withServer:(xpc_connection_s *)server;	// 0x3210caa5
- (void)revokeAccessClaimForID:(id)anId;	// 0x3210c9f1
- (void)revokeSubarbitrationClaimForID:(id)anId;	// 0x3210cae1
- (void)stopArbitrating;	// 0x3210b2c9
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x3210cf49
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x3210cbfd
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x3210cd75
@end

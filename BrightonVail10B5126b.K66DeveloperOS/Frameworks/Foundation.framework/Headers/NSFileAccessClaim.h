/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableArray, NSMutableOrderedSet, NSMutableDictionary, NSString, NSError;
@protocol OS_xpc_object, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject {
	NSObject<OS_xpc_object> *_client;	// 4 = 0x4
	NSString *_claimID;	// 8 = 0x8
	NSString *_purposeIDOrNil;	// 12 = 0xc
	BOOL _cameFromSuperarbiter;	// 16 = 0x10
	unsigned _blockageCount;	// 20 = 0x14
	BOOL _didWait;	// 24 = 0x18
	BOOL _isRevoked;	// 25 = 0x19
	unsigned _claimerBlockageCount;	// 28 = 0x1c
	NSError *_claimerError;	// 32 = 0x20
	NSMutableOrderedSet *_pendingClaims;	// 36 = 0x24
	NSMutableSet *_blockingClaims;	// 40 = 0x28
	NSMutableSet *_blockingReactorIDs;	// 44 = 0x2c
	id _providerCancellationProcedure;	// 48 = 0x30
	NSMutableDictionary *_reacquisitionProceduresByPresenterID;	// 52 = 0x34
	NSMutableArray *_revocationProcedures;	// 56 = 0x38
	id _claimerOrNil;	// 60 = 0x3c
	NSObject<OS_dispatch_semaphore> *_claimerWaiterOrNull;	// 64 = 0x40
	id _sandboxToken;	// 68 = 0x44
	BOOL _didMakePresentersRelinquishToWriter;	// 72 = 0x48
	BOOL _revokingIsInexorable;	// 73 = 0x49
}
@property(readonly, assign) BOOL cameFromSuperarbiter;	// G=0x319c8035; converted property
@property(readonly, retain) NSString *claimID;	// G=0x319c7fad; converted property
@property(retain) NSError *claimerError;	// G=0x319c8185; S=0x319c8141; converted property
@property(readonly, assign) BOOL didWait;	// G=0x319c80d5; converted property
@property(readonly, assign) BOOL isRevoked;	// G=0x319c9301; converted property
@property(readonly, retain) NSMutableOrderedSet *pendingClaims;	// G=0x319c8695; converted property
+ (BOOL)canReadingItemAtLocation:(id)location options:(unsigned)options safelyOverlapWritingItemAtLocation:(id)location3 options:(unsigned)options4;	// 0x319c7c41
+ (BOOL)canWritingItemAtLocation:(id)location options:(unsigned)options safelyOverlapWritingItemAtLocation:(id)location3 options:(unsigned)options4;	// 0x319c7c9d
- (id)initWithClient:(id)client claimID:(id)anId purposeID:(id)anId3;	// 0x319c7d25
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x319c7e11
- (void)addPendingClaim:(id)claim;	// 0x319c859d
- (void)block;	// 0x319c8045
- (void)blockClaimer;	// 0x319c80e5
// converted property getter: - (BOOL)cameFromSuperarbiter;	// 0x319c8035
- (void)cancelled;	// 0x319c9205
// converted property getter: - (id)claimID;	// 0x319c7fad
// converted property getter: - (id)claimerError;	// 0x319c8185
- (BOOL)claimerInvokingIsBlockedByReactorWithID:(id)anId;	// 0x319c8245
- (id)client;	// 0x319c7f9d
- (void)dealloc;	// 0x319c7e15
- (id)description;	// 0x319c96f5
- (id)descriptionWithIndenting:(id)indenting;	// 0x319c9315
- (void)devalueOldClaim:(id)claim;	// 0x319c92cd
- (void)devalueSelf;	// 0x319c9031
// converted property getter: - (BOOL)didWait;	// 0x319c80d5
- (void)evaluateNewClaim:(id)claim;	// 0x319c8425
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x319c81bd
- (void)finalize;	// 0x319c7f59
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x319c801d
- (void)granted;	// 0x319c87d5
- (void)ifSymbolicLinkAtURL:(id)url withResolutionCount:(int *)resolutionCount thenReevaluateSelf:(id)aSelf elseInvokeClaimer:(id)claimer;	// 0x319c9711
- (void)invokeClaimer;	// 0x319c8f79
- (BOOL)isBlockedByClaimWithPurposeID:(id)purposeID;	// 0x319c8341
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x319c87cd
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x319c87d1
- (BOOL)isGranted;	// 0x319c92d1
// converted property getter: - (BOOL)isRevoked;	// 0x319c9301
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x319c9311
- (void)makePresentersOfItemAtLocation:(id)location orContainedItem:(BOOL)item relinquishUsingProcedureGetter:(id)getter;	// 0x319c8a81
- (void)makeProviderOfItemAtLocation:(id)location provideThenContinue:(id)aContinue;	// 0x319c87d9
- (id)newClaimerWaiter;	// 0x319c8f7d
// converted property getter: - (id)pendingClaims;	// 0x319c8695
- (id)purposeID;	// 0x319c7fe5
- (id)purposeIDOfClaimOnItemAtLocation:(id)location forMessagingPresenter:(id)messagingPresenter;	// 0x319c9929
- (void)removePendingClaims:(id)claims;	// 0x319c86cd
- (void)revoked;	// 0x319c8ff1
- (void)setCameFromSuperarbiter;	// 0x319c8021
// converted property setter: - (void)setClaimerError:(id)error;	// 0x319c8141
- (void)unblock;	// 0x319c8075
- (void)unblockClaimer;	// 0x319c8115
- (void)whenRevokedPerformProcedure:(id)procedure;	// 0x319c81c1
- (BOOL)willBeRevoked;	// 0x319c8fd1
@end


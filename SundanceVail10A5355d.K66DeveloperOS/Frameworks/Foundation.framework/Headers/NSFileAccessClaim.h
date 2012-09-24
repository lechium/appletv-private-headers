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
@property(readonly, assign) BOOL cameFromSuperarbiter;	// G=0x3475059d; converted property
@property(readonly, retain) NSString *claimID;	// G=0x34750515; converted property
@property(retain) NSError *claimerError;	// G=0x347506ed; S=0x347506a9; converted property
@property(readonly, assign) BOOL didWait;	// G=0x3475063d; converted property
@property(readonly, assign) BOOL isRevoked;	// G=0x34751869; converted property
@property(readonly, retain) NSMutableOrderedSet *pendingClaims;	// G=0x34750bfd; converted property
+ (BOOL)canReadingItemAtLocation:(id)location options:(unsigned)options safelyOverlapWritingItemAtLocation:(id)location3 options:(unsigned)options4;	// 0x347501a9
+ (BOOL)canWritingItemAtLocation:(id)location options:(unsigned)options safelyOverlapWritingItemAtLocation:(id)location3 options:(unsigned)options4;	// 0x34750205
- (id)initWithClient:(id)client claimID:(id)anId purposeID:(id)anId3;	// 0x3475028d
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x34750379
- (void)addPendingClaim:(id)claim;	// 0x34750b05
- (void)block;	// 0x347505ad
- (void)blockClaimer;	// 0x3475064d
// converted property getter: - (BOOL)cameFromSuperarbiter;	// 0x3475059d
- (void)cancelled;	// 0x3475176d
// converted property getter: - (id)claimID;	// 0x34750515
// converted property getter: - (id)claimerError;	// 0x347506ed
- (BOOL)claimerInvokingIsBlockedByReactorWithID:(id)anId;	// 0x347507ad
- (id)client;	// 0x34750505
- (void)dealloc;	// 0x3475037d
- (id)description;	// 0x34751c5d
- (id)descriptionWithIndenting:(id)indenting;	// 0x3475187d
- (void)devalueOldClaim:(id)claim;	// 0x34751835
- (void)devalueSelf;	// 0x34751599
// converted property getter: - (BOOL)didWait;	// 0x3475063d
- (void)evaluateNewClaim:(id)claim;	// 0x3475098d
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x34750725
- (void)finalize;	// 0x347504c1
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x34750585
- (void)granted;	// 0x34750d3d
- (void)ifSymbolicLinkAtURL:(id)url withResolutionCount:(int *)resolutionCount thenReevaluateSelf:(id)aSelf elseInvokeClaimer:(id)claimer;	// 0x34751c79
- (void)invokeClaimer;	// 0x347514e1
- (BOOL)isBlockedByClaimWithPurposeID:(id)purposeID;	// 0x347508a9
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x34750d35
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x34750d39
- (BOOL)isGranted;	// 0x34751839
// converted property getter: - (BOOL)isRevoked;	// 0x34751869
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x34751879
- (void)makePresentersOfItemAtLocation:(id)location orContainedItem:(BOOL)item relinquishUsingProcedureGetter:(id)getter;	// 0x34750fe9
- (void)makeProviderOfItemAtLocation:(id)location provideThenContinue:(id)aContinue;	// 0x34750d41
- (id)newClaimerWaiter;	// 0x347514e5
// converted property getter: - (id)pendingClaims;	// 0x34750bfd
- (id)purposeID;	// 0x3475054d
- (id)purposeIDOfClaimOnItemAtLocation:(id)location forMessagingPresenter:(id)messagingPresenter;	// 0x34751e91
- (void)removePendingClaims:(id)claims;	// 0x34750c35
- (void)revoked;	// 0x34751559
- (void)setCameFromSuperarbiter;	// 0x34750589
// converted property setter: - (void)setClaimerError:(id)error;	// 0x347506a9
- (void)unblock;	// 0x347505dd
- (void)unblockClaimer;	// 0x3475067d
- (void)whenRevokedPerformProcedure:(id)procedure;	// 0x34750729
- (BOOL)willBeRevoked;	// 0x34751539
@end

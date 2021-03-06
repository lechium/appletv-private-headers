/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "MZKeyValueStoreOperationDelegate.h"
#import "MZKeyValueStoreDeserializeOperationDelegate.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray, MZKeyValueStoreAuthenticationController, NSOperationQueue, MZKeyValueStoreTransaction, MZTaskAssertion, MZKeyValueStoreDeserializer, NSURL;
@protocol MZKeyValueStoreControllerDelegate, OS_dispatch_queue;

@interface MZKeyValueStoreController : NSObject <MZKeyValueStoreOperationDelegate, MZKeyValueStoreDeserializeOperationDelegate> {
	id<MZKeyValueStoreControllerDelegate> _delegate;	// 4 = 0x4
	NSURL *_defaultGetURL;	// 8 = 0x8
	NSURL *_defaultSetURL;	// 12 = 0xc
	NSString *_defaultDomain;	// 16 = 0x10
	BOOL _enabled;	// 20 = 0x14
	MZKeyValueStoreAuthenticationController *_authenticationController;	// 24 = 0x18
	NSMutableArray *_pendingTransactions;	// 28 = 0x1c
	MZKeyValueStoreTransaction *_currentTransaction;	// 32 = 0x20
	NSOperationQueue *_operationQueue;	// 36 = 0x24
	BOOL _resolvingError;	// 40 = 0x28
	MZKeyValueStoreDeserializer *_currentDeserializer;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
	MZTaskAssertion *_backgroundTaskAssertion;	// 52 = 0x34
	id _networkTypeObserver;	// 56 = 0x38
}
@property(retain) MZKeyValueStoreAuthenticationController *authenticationController;	// G=0x37511ed5; S=0x37511ee9; @synthesize=_authenticationController
@property(retain, nonatomic) MZTaskAssertion *backgroundTaskAssertion;	// G=0x37511fe9; S=0x37511ff9; @synthesize=_backgroundTaskAssertion
@property(retain, nonatomic) MZKeyValueStoreDeserializer *currentDeserializer;	// G=0x37511fa9; S=0x37511fb9; @synthesize=_currentDeserializer
@property(retain, nonatomic) MZKeyValueStoreTransaction *currentTransaction;	// G=0x37511f49; S=0x37511f59; @synthesize=_currentTransaction
@property(copy) NSString *defaultDomain;	// G=0x37511eb1; S=0x37511ec5; @synthesize=_defaultDomain
@property(retain) NSURL *defaultGetURL;	// G=0x37511e69; S=0x37511e7d; @synthesize=_defaultGetURL
@property(retain) NSURL *defaultSetURL;	// G=0x37511e8d; S=0x37511ea1; @synthesize=_defaultSetURL
@property(assign) id<MZKeyValueStoreControllerDelegate> delegate;	// G=0x37511e3d; S=0x37511e51; @synthesize=_delegate
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;	// G=0x37511fc9; S=0x37511fd9; @synthesize=_dispatchQueue
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x37511ef9; S=0x37511f11; @synthesize=_enabled
@property(assign, nonatomic) id networkTypeObserver;	// G=0x37512009; S=0x37512019; @synthesize=_networkTypeObserver
@property(retain, nonatomic) NSOperationQueue *operationQueue;	// G=0x37511f69; S=0x37511f79; @synthesize=_operationQueue
@property(retain, nonatomic) NSMutableArray *pendingTransactions;	// G=0x37511f29; S=0x37511f39; @synthesize=_pendingTransactions
@property(assign, nonatomic, getter=isResolvingError) BOOL resolvingError;	// G=0x37511f89; S=0x37511f99; @synthesize=_resolvingError
- (id)initWithDomain:(id)domain baseURLForGETAll:(id)getall baseURLForPUTAll:(id)putall;	// 0x3750e2dd
- (void)_addPendingTransaction:(id)transaction;	// 0x37510119
- (BOOL)_authenticationCanProcessTransaction:(id)transaction error:(id *)error;	// 0x375102d1
- (void)_beginBackgroundTask;	// 0x37511501
- (BOOL)_canScheduleTransaction:(id)transaction error:(id *)error;	// 0x37510181
- (void)_cancelAllTransactions:(id)transactions;	// 0x3750f975
- (void)_cancelTransaction:(id)transaction error:(id)error;	// 0x3750fab9
- (BOOL)_clampsCanScheduleTransaction:(id)transaction error:(id *)error;	// 0x375102a1
- (void)_currentTransactionDidFinish;	// 0x3751044d
- (BOOL)_delegateShouldScheduleTransaction:(id)_delegate error:(id *)error;	// 0x37511175
- (void)_delegateTransactionDidCancel:(id)_delegateTransaction withError:(id)error;	// 0x3751130d
- (BOOL)_delegateTransactionDidFail:(id)_delegateTransaction withError:(id)error;	// 0x3751120d
- (void)_delegateTransactionDidFinish:(id)_delegateTransaction;	// 0x37511409
- (void)_endBackgroundTask;	// 0x37511785
- (void)_errorResolutionCancel:(id)cancel;	// 0x37511091
- (void)_errorResolutionDefault:(id)aDefault;	// 0x375110f5
- (void)_errorResolutionRetry:(id)retry;	// 0x37510f85
- (BOOL)_isEnabledForTransaction:(id)transaction error:(id *)error;	// 0x375101e5
- (BOOL)_isTransactionValid:(id)valid error:(id *)error;	// 0x37510231
- (void)_processCurrentTransaction;	// 0x3750fe15
- (void)_processOperationOutput:(id)output operationAuthenticated:(BOOL)authenticated;	// 0x375108ad
- (void)_processPendingTransactions;	// 0x3750fc71
- (id)_requestForTransaction:(id)transaction;	// 0x3750ff65
- (void)_resolveError:(id)error resolution:(int)resolution;	// 0x37510ea5
- (void)_scheduleTransaction:(id)transaction;	// 0x3751003d
- (id)_scheduleTransactionWithType:(int)type sinceDomainVersion:(id)version URL:(id)url keys:(id)keys processor:(id)processor;	// 0x37510395
- (void)_transactionDidCancel:(id)_transaction withError:(id)error;	// 0x37510725
- (void)_transactionDidFail:(id)_transaction withError:(id)error;	// 0x37510579
// declared property getter: - (id)authenticationController;	// 0x37511ed5
// declared property getter: - (id)backgroundTaskAssertion;	// 0x37511fe9
- (void)cancelAllTransactions;	// 0x3750f065
- (void)cancelAllTransactionsCancelCode:(int)code;	// 0x3750f355
- (void)cancelScheduledTransaction:(id)transaction;	// 0x3750ef8d
- (id)clampsController;	// 0x3750edcd
- (void)clearWeakReferencesInOperation:(id)operation;	// 0x3750ed09
// declared property getter: - (id)currentDeserializer;	// 0x37511fa9
// declared property getter: - (id)currentTransaction;	// 0x37511f49
- (void)dealloc;	// 0x3750e699
// declared property getter: - (id)defaultDomain;	// 0x37511eb1
// declared property getter: - (id)defaultGetURL;	// 0x37511e69
// declared property getter: - (id)defaultSetURL;	// 0x37511e8d
// declared property getter: - (id)delegate;	// 0x37511e3d
- (void)deserializeOperationDidFinish:(id)deserializeOperation shouldReschedule:(BOOL)reschedule;	// 0x37511db5
// declared property getter: - (id)dispatchQueue;	// 0x37511fc9
// declared property getter: - (BOOL)isEnabled;	// 0x37511ef9
- (BOOL)isIdle;	// 0x3750f795
// declared property getter: - (BOOL)isResolvingError;	// 0x37511f89
- (void)keyValueStoreOperation:(id)operation scheduleURLOperation:(id)operation2;	// 0x37511d49
- (void)keyValueStoreOperationOperationDidFinish:(id)keyValueStoreOperationOperation;	// 0x37511da5
// declared property getter: - (id)networkTypeObserver;	// 0x37512009
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3750e951
- (void)operation:(id)operation didReceiveResponse:(id)response;	// 0x37511935
- (void)operation:(id)operation failedWithError:(id)error;	// 0x37511a65
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x37511855
// declared property getter: - (id)operationQueue;	// 0x37511f69
- (void)operationQueue:(id)queue willAddOperation:(id)operation;	// 0x3750ed61
- (void)operationQueue:(id)queue willRemoveOperation:(id)operation;	// 0x3750edb9
// declared property getter: - (id)pendingTransactions;	// 0x37511f29
- (void)performBlock:(id)block;	// 0x3750f935
- (void)performBlockAndWait:(id)wait;	// 0x3750f955
- (void)reset;	// 0x3750f701
- (void)resolveError:(id)error resolution:(int)resolution;	// 0x3750f64d
- (id)scheduleGetAllTransactionWithSinceDomainVersion:(id)sinceDomainVersion processor:(id)processor;	// 0x3750ede9
- (id)scheduleGetTransactionWithKeys:(id)keys processor:(id)processor;	// 0x3750ee29
- (id)scheduleSetTransactionWithKeys:(id)keys processor:(id)processor;	// 0x3750ee69
- (void)scheduleTransaction:(id)transaction;	// 0x3750eea9
// declared property setter: - (void)setAuthenticationController:(id)controller;	// 0x37511ee9
// declared property setter: - (void)setBackgroundTaskAssertion:(id)assertion;	// 0x37511ff9
// declared property setter: - (void)setCurrentDeserializer:(id)deserializer;	// 0x37511fb9
// declared property setter: - (void)setCurrentTransaction:(id)transaction;	// 0x37511f59
// declared property setter: - (void)setDefaultDomain:(id)domain;	// 0x37511ec5
// declared property setter: - (void)setDefaultGetURL:(id)url;	// 0x37511e7d
// declared property setter: - (void)setDefaultSetURL:(id)url;	// 0x37511ea1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37511e51
// declared property setter: - (void)setDispatchQueue:(id)queue;	// 0x37511fd9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x37511f11
// declared property setter: - (void)setNetworkTypeObserver:(id)observer;	// 0x37512019
// declared property setter: - (void)setOperationQueue:(id)queue;	// 0x37511f79
// declared property setter: - (void)setPendingTransactions:(id)transactions;	// 0x37511f39
// declared property setter: - (void)setResolvingError:(BOOL)error;	// 0x37511f99
@end


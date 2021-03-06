/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectContextFaultingDelegate.h"
#import "_PFUbiquityRecordImportOperationDelegate.h"
#import "PFUbiquityImportScanOperationDelegate.h"
#import "PFUbiquityBaselineRollOperationDelegate.h"
#import "PFUbiquityBaselineRecoveryOperationDelegate.h"
#import "PFUbiquityBaselineRollResponseOperationDelegate.h"
#import <NSObject.h> // Unknown library

@class PFUbiquityLocation, NSOperationQueue, NSString, NSLock, NSRecursiveLock, NSMutableSet, NSSet, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityImportScanOperationDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate> {
@private
	NSOperationQueue *_importQueue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_privateQueue;	// 8 = 0x8
	BOOL _isMonitoring;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	PFUbiquityLocation *_ubiquityRootLocation;	// 20 = 0x14
	NSMutableSet *_pendingTransactionLogLocations;	// 24 = 0x18
	NSObject<OS_dispatch_source> *_logRestartTimer;	// 28 = 0x1c
	NSRecursiveLock *_schedulingLock;	// 32 = 0x20
	NSLock *_pendingLocationsLock;	// 36 = 0x24
	BOOL _importOnlyActiveStores;	// 40 = 0x28
	BOOL _throttleNotifications;	// 41 = 0x29
	unsigned _numPendingNotifications;	// 44 = 0x2c
	NSMutableDictionary *_pendingNotificationUserInfo;	// 48 = 0x30
	BOOL _allowBaselineRoll;	// 52 = 0x34
	unsigned _pendingImportOperationsCount;	// 56 = 0x38
}
@property(assign) BOOL allowBaselineRoll;	// G=0x32e1a0c9; S=0x32e1a0e1; @synthesize=_allowBaselineRoll
@property(assign) BOOL importOnlyActiveStores;	// G=0x32e1a099; S=0x32e1a0b1; @synthesize=_importOnlyActiveStores
@property(readonly, assign) NSOperationQueue *importQueue;	// G=0x32e19fd9; @synthesize=_importQueue
@property(readonly, assign) BOOL isMonitoring;	// G=0x32e1a001; @synthesize=_isMonitoring
@property(readonly, assign) NSString *localPeerID;	// G=0x32e19fed; @synthesize=_localPeerID
@property(assign) NSObject<OS_dispatch_source> *logRestartTimer;	// G=0x32e1a02d; S=0x32e1a041; @synthesize=_logRestartTimer
@property(readonly, assign) NSSet *pendingTransactionLogLocations;	// G=0x32e1a0f9; @synthesize=_pendingTransactionLogLocations
@property(readonly, assign, nonatomic) NSRecursiveLock *schedulingLock;	// G=0x32e1a059; @synthesize=_schedulingLock
@property(assign) BOOL throttleNotifications;	// G=0x32e1a069; S=0x32e1a081; @synthesize=_throttleNotifications
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x32e1a019; @synthesize=_ubiquityRootLocation
+ (void)afterDelay:(double)delay executeBlockOnRootQueue:(id)queue;	// 0x32e19f91
+ (BOOL)canProcessContentsOfUbiquityRootPath:(id)ubiquityRootPath;	// 0x32e18ff9
+ (void)executeBlockOnRootQueue:(id)queue;	// 0x32e19f7d
+ (void)initialize;	// 0x32e13719
- (id)init;	// 0x32e1378d
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x32e13791
- (void)_applicationResumed:(id)resumed;	// 0x32e17819
// declared property getter: - (BOOL)allowBaselineRoll;	// 0x32e1a0c9
- (void)awakeFromLaunch:(BOOL)launch;	// 0x32e13b41
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)state;	// 0x32e19de5
- (BOOL)canProcessTransactionLogWithScore:(id)score afterLogWithScore:(id)score2;	// 0x32e15041
- (int)compareScoreDictionary:(id)dictionary withScoreDictionary:(id)scoreDictionary;	// 0x32e18fdd
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x32e18ff5
- (id)createDictionaryOfStoreNameToLocations:(id)locations;	// 0x32e15519
- (id)createPeerStatesDictionaryFromTransactionLog:(id)transactionLog andAddLocalPeerStatesToDictionary:(id)dictionary withStack:(id)stack;	// 0x32e15691
- (id)createScoresForPeerStates:(id)peerStates andLocalPeerStates:(id)states;	// 0x32e13b55
- (id)createSortedOperationsArrayForLogLocations:(id)logLocations;	// 0x32e13cdd
- (void)dealloc;	// 0x32e1395d
- (id)description;	// 0x32e13ab1
- (void)executeBlockOnPrivateQueue:(id)queue;	// 0x32e19f69
- (void)filePresenter:(id)presenter wasNotifiedOfTransactionLogLocation:(id)transactionLogLocation;	// 0x32e15b3d
// declared property getter: - (BOOL)importOnlyActiveStores;	// 0x32e1a099
// declared property getter: - (id)importQueue;	// 0x32e19fd9
// declared property getter: - (BOOL)isMonitoring;	// 0x32e1a001
// declared property getter: - (id)localPeerID;	// 0x32e19fed
// declared property getter: - (id)logRestartTimer;	// 0x32e1a02d
- (void)operation:(id)operation failedWithError:(id)error;	// 0x32e18245
- (void)operationDidFinish:(id)operation;	// 0x32e17e31
- (void)operationWasInterruptedDuringImport:(id)import;	// 0x32e18419
// declared property getter: - (id)pendingTransactionLogLocations;	// 0x32e1a0f9
- (void)postImportNotificationForStoreName:(id)storeName andLocalPeerID:(id)anId withUserInfo:(id)userInfo;	// 0x32e17c45
- (void)recoveryOperation:(id)operation didReplaceLocalStoreFileWithBaseline:(id)baseline;	// 0x32e19df5
- (void)recoveryOperation:(id)operation encounteredAnError:(id)error duringRecoveryOfBaseline:(id)baseline;	// 0x32e19f59
- (void)requestBaselineRollForStore:(id)store;	// 0x32e1915d
- (void)rollResponseOperation:(id)operation encounteredAnError:(id)error whileTryingToAdoptBaseline:(id)adoptBaseline;	// 0x32e19ee9
- (void)rollResponseOperation:(id)operation successfullyAdoptedBaseline:(id)baseline;	// 0x32e19e95
- (void)scanOperation:(id)operation discoveredPeerStoreVersionLocations:(id)locations;	// 0x32e18f71
- (void)scanOperation:(id)operation failedWithError:(id)error;	// 0x32e18f75
- (void)scanOperationFinished:(id)finished withDiscoveredLogLocation:(id)discoveredLogLocation;	// 0x32e18a29
- (void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)activeBaselineOperation;	// 0x32e19c05
- (void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)location;	// 0x32e1952d
- (void)schedulePendingLogs;	// 0x32e15d11
- (void)scheduleRecoveryTimer;	// 0x32e18479
- (void)scheduleTransactionLogOperations:(id)operations synchronous:(BOOL)synchronous;	// 0x32e15225
- (void)scheduleUbiquityRootScan:(BOOL)scan withLocalPeerLogs:(BOOL)localPeerLogs;	// 0x32e186a9
// declared property getter: - (id)schedulingLock;	// 0x32e1a059
// declared property setter: - (void)setAllowBaselineRoll:(BOOL)roll;	// 0x32e1a0e1
// declared property setter: - (void)setImportOnlyActiveStores:(BOOL)stores;	// 0x32e1a0b1
// declared property setter: - (void)setLogRestartTimer:(id)timer;	// 0x32e1a041
// declared property setter: - (void)setThrottleNotifications:(BOOL)notifications;	// 0x32e1a081
- (BOOL)shouldProcessTransactionLogAtLocation:(id)location error:(id *)error;	// 0x32e16de5
- (BOOL)shouldThrottleNotificationsWithOperation:(id)operation;	// 0x32e17c41
- (BOOL)startMonitor:(id *)monitor;	// 0x32e159f9
- (void)stopMonitor;	// 0x32e15acd
// declared property getter: - (BOOL)throttleNotifications;	// 0x32e1a069
// declared property getter: - (id)ubiquityRootLocation;	// 0x32e1a019
@end


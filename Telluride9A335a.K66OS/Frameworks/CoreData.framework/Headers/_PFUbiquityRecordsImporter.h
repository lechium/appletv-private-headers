/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSManagedObjectContextFaultingDelegate.h"
#import "PFUbiquityBaselineRecoveryOperationDelegate.h"
#import "PFUbiquityBaselineRollOperationDelegate.h"
#import "PFUbiquityImportScanOperationDelegate.h"
#import "_PFUbiquityRecordImportOperationDelegate.h"

@class PFUbiquityLocation, PFUbiquityMetadataQueryMonitor, NSString, NSDictionary, NSRecursiveLock, NSMutableDictionary, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityImportScanOperationDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate> {
@private
	NSOperationQueue *_importQueue;	// 4 = 0x4
	NSMutableDictionary *_ubiquityLocationToMonitoringDictionary;	// 8 = 0x8
	BOOL _isMonitoring;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	PFUbiquityLocation *_ubiquityRootLocation;	// 20 = 0x14
	dispatch_source_s *_logRestartTimer;	// 24 = 0x18
	NSRecursiveLock *_schedulingLock;	// 28 = 0x1c
	PFUbiquityMetadataQueryMonitor *_queryMonitor;	// 32 = 0x20
	BOOL _importOnlyActiveStores;	// 36 = 0x24
	BOOL _throttleNotifications;	// 37 = 0x25
	unsigned _numPendingNotifications;	// 40 = 0x28
	NSMutableDictionary *_pendingNotificationUserInfo;	// 44 = 0x2c
	BOOL _allowBaselineRoll;	// 48 = 0x30
}
@property(assign) BOOL allowBaselineRoll;	// G=0x331d52cd; S=0x331d52dd; @synthesize=_allowBaselineRoll
@property(assign) BOOL importOnlyActiveStores;	// G=0x331d52ed; S=0x331d52fd; @synthesize=_importOnlyActiveStores
@property(readonly, assign) NSOperationQueue *importQueue;	// G=0x331d53ad; @synthesize=_importQueue
@property(readonly, assign) BOOL isMonitoring;	// G=0x331d538d; @synthesize=_isMonitoring
@property(readonly, assign) NSString *localPeerID;	// G=0x331d539d; @synthesize=_localPeerID
@property(assign) dispatch_source_s *logRestartTimer;	// G=0x331d535d; S=0x331d536d; @synthesize=_logRestartTimer
@property(readonly, assign) PFUbiquityMetadataQueryMonitor *queryMonitor;	// G=0x331d530d; @synthesize=_queryMonitor
@property(readonly, assign, nonatomic) NSRecursiveLock *schedulingLock;	// G=0x331d534d; @synthesize=_schedulingLock
@property(assign) BOOL throttleNotifications;	// G=0x331d532d; S=0x331d533d; @synthesize=_throttleNotifications
@property(readonly, assign) NSDictionary *ubiquityLocationToMonitoringDictionary;	// G=0x331d531d; @synthesize=_ubiquityLocationToMonitoringDictionary
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x331d537d; @synthesize=_ubiquityRootLocation
+ (BOOL)canProcessContentsOfUbiquityRootPath:(id)ubiquityRootPath;	// 0x331d64e5
+ (void)initialize;	// 0x331d6629
- (id)init;	// 0x331d506d
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x331d6345
- (void)_applicationResumed:(id)resumed;	// 0x331d738d
// declared property getter: - (BOOL)allowBaselineRoll;	// 0x331d52cd
- (void)awakeFromLaunch:(BOOL)launch;	// 0x331d53bd
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)state;	// 0x331d61b1
- (BOOL)canProcessTransactionLogWithScore:(id)score afterLogWithScore:(id)score2;	// 0x331d8571
- (int)compareScoreDictionary:(id)dictionary withScoreDictionary:(id)scoreDictionary;	// 0x331d5075
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x331d52c9
- (id)createDictionaryOfStoreNameToLocations:(id)locations;	// 0x331d55d9
- (dispatch_source_s *)createDispatchSourceForFileDescriptor:(int)fileDescriptor forLocation:(id)location;	// 0x331d800d
- (id)createMonitoringDictionaryForUbiquityLocation:(id)ubiquityLocation;	// 0x331d7e61
- (id)createPeerStatesDictionaryFromTransactionLog:(id)transactionLog andAddLocalPeerStatesToDictionary:(id)dictionary withStack:(id)stack;	// 0x331d80cd
- (id)createScoresForPeerStates:(id)peerStates andLocalPeerStates:(id)states;	// 0x331d5479
- (id)createSortedOperationsArrayForLogLocations:(id)logLocations;	// 0x331d8741
- (void)dealloc;	// 0x331d9471
- (id)description;	// 0x331d93e1
// declared property getter: - (BOOL)importOnlyActiveStores;	// 0x331d52ed
// declared property getter: - (id)importQueue;	// 0x331d53ad
// declared property getter: - (BOOL)isMonitoring;	// 0x331d538d
// declared property getter: - (id)localPeerID;	// 0x331d539d
// declared property getter: - (dispatch_source_s *)logRestartTimer;	// 0x331d535d
- (void)operation:(id)operation failedWithError:(id)error;	// 0x331d6e59
- (void)operationDidFinish:(id)operation;	// 0x331d702d
- (void)operationWasInterruptedDuringImport:(id)import;	// 0x331d6df9
- (void)postImportNotificationForStoreName:(id)storeName andLocalPeerID:(id)anId withUserInfo:(id)userInfo;	// 0x331d71b5
// declared property getter: - (id)queryMonitor;	// 0x331d530d
- (void)recoveryOperation:(id)operation didReplaceLocalStoreFileWithBaseline:(id)baseline;	// 0x331d53d1
- (void)requestBaselineRollForStore:(id)store;	// 0x331d5eb1
- (void)scanOperation:(id)operation discoveredPeerStoreVersionLocations:(id)locations;	// 0x331d6705
- (void)scanOperation:(id)operation failedWithError:(id)error;	// 0x331d669d
- (void)scanOperationFinished:(id)finished withDiscoveredLogLocation:(id)discoveredLogLocation;	// 0x331d5971
- (void)scheduleRecoveryTimer;	// 0x331d6ccd
- (void)scheduleTransactionLogOperations:(id)operations synchronous:(BOOL)synchronous;	// 0x331d8421
- (void)scheduleUbiquityRootScan:(BOOL)scan withLocalPeerLogs:(BOOL)localPeerLogs;	// 0x331d6925
// declared property getter: - (id)schedulingLock;	// 0x331d534d
// declared property setter: - (void)setAllowBaselineRoll:(BOOL)roll;	// 0x331d52dd
// declared property setter: - (void)setImportOnlyActiveStores:(BOOL)stores;	// 0x331d52fd
// declared property setter: - (void)setLogRestartTimer:(dispatch_source_s *)timer;	// 0x331d536d
// declared property setter: - (void)setThrottleNotifications:(BOOL)notifications;	// 0x331d533d
- (BOOL)shouldThrottleNotificationsWithOperation:(id)operation;	// 0x331d5071
- (BOOL)startMonitor:(id *)monitor;	// 0x331d7639
- (void)stopMonitor;	// 0x331d5741
- (void)stopMonitoringDictionary:(id)dictionary;	// 0x331d7579
- (void)stopMonitoringURLsForStoreName:(id)storeName;	// 0x331d73f1
// declared property getter: - (BOOL)throttleNotifications;	// 0x331d532d
// declared property getter: - (id)ubiquityLocationToMonitoringDictionary;	// 0x331d531d
// declared property getter: - (id)ubiquityRootLocation;	// 0x331d537d
- (void)updateMonitoredPeerURLs;	// 0x331d771d
@end


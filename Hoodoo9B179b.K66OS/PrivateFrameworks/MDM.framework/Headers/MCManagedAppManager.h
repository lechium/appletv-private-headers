/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "MDM-Structs.h"
#import "MCJobQueueObserver.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MCJobQueue, MCUserNotificationManager, NSString, MCMDMServer;

@interface MCManagedAppManager : NSObject <MCJobQueueObserver> {
	MCMDMServer *_server;	// 4 = 0x4
	NSString *_manifestPath;	// 8 = 0x8
	NSMutableDictionary *_manifest;	// 12 = 0xc
	dispatch_queue_s *_manifestQueue;	// 16 = 0x10
	MCJobQueue *_jobQueue;	// 20 = 0x14
	MCUserNotificationManager *_userNotificationManager;	// 24 = 0x18
	dispatch_queue_s *_busyCountQueue;	// 28 = 0x1c
	int _busyCount;	// 32 = 0x20
}
@property(assign, nonatomic) MCMDMServer *server;	// G=0x34e1c611; S=0x34e1c621; @synthesize=_server
+ (id)sharedManager;	// 0x34e1e1e5
+ (id)stringForAppState:(int)appState;	// 0x34e1c51d
- (id)initWithManifestPath:(id)manifestPath;	// 0x34e1df85
- (int)__appStateForBundleID:(id)bundleID;	// 0x34e1c89d
- (void)__commitManifest;	// 0x34e1c631
- (BOOL)__hasMetadataForBundleID:(id)bundleID;	// 0x34e1c671
- (id)__managedAppMetadataByBundleID;	// 0x34e1c6dd
- (id)__metadataForBundleID:(id)bundleID;	// 0x34e1c83d
- (void)__removeBundleID:(id)anId;	// 0x34e1c9d1
- (void)__setAppState:(int)state forBundleID:(id)bundleID;	// 0x34e1c911
- (void)__setManagedAppMetadataByBundleID:(id)anId;	// 0x34e1c735
- (void)__setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x34e1c7b1
- (BOOL)_advanceTransientStateForBundleID:(id)bundleID params:(id)params outNewParams:(id *)params3 outSetChanged:(BOOL *)changed;	// 0x34e1d671
- (id)_appAlreadyQueuedError:(id)error;	// 0x34e202ad
- (BOOL)_appBundleID:(id)anId wasInstalledOutIsManaged:(BOOL *)managed;	// 0x34e203cd
- (id)_bundleIDAlreadyInstalledError:(id)error;	// 0x34e2030d
- (void)_displayAppInstallationAlertMessage:(id)message isUpdate:(BOOL)update completionBlock:(id)block;	// 0x34e1ffa5
- (void)_displayAppInstallationFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x34e1ff31
- (void)_displayAppUpdateFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x34e1febd
- (void)_displayPromptForAppInstallationTitle:(id)appInstallationTitle isAppStore:(BOOL)store isUpdate:(BOOL)update completionBlock:(id)block;	// 0x34e2001d
- (id)_downloadingAppIDs;	// 0x34e1e31d
- (void)_installEnterpriseAppManifestURL:(id)url completionBlock:(id)block;	// 0x34e1da01
- (id)_invalidManifestErrorWithURL:(id)url underlyingError:(id)error;	// 0x34e20249
- (BOOL)_isBundleIDInstalled:(id)installed;	// 0x34e204b1
- (id)_notAnAppError;	// 0x34e2036d
- (void)_promptUserForEnterpriseAppInstallationManifestURL:(id)enterpriseAppInstallationManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x34e1f8d5
- (void)_promptUserForEnterpriseAppUpdateManifestURL:(id)enterpriseAppUpdateManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x34e1f761
- (void)_promptUserForStoreAppInstallationItem:(id)storeAppInstallationItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x34e1fbe9
- (void)_promptUserForStoreAppUpdateItem:(id)storeAppUpdateItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x34e1fa51
- (void)_promptUserForiTunesAccount:(id)account accountNameEditable:(BOOL)editable canCreateNewAccount:(BOOL)account3 completionBlock:(id)block;	// 0x34e1f615
- (void)_purchaseItem:(id)item account:(id)account offer:(id)offer completionBlock:(id)block;	// 0x34e1fd59
- (void)_userAccount:(id)account hasPurchasedBundleID:(id)anId completionBlock:(id)block;	// 0x34e1dcfd
- (BOOL)_willQueueAppBundleID:(id)anId forDownloadManagementFlags:(int)downloadManagementFlags outRejectionReason:(id *)reason outIsUpdate:(BOOL *)update outError:(id *)error;	// 0x34e1db81
- (void)advanceTransientStates;	// 0x34e1e26d
- (void)advanceTransientStatesForBundleID:(id)bundleID;	// 0x34e1e211
- (int)appStateForBundleID:(id)bundleID;	// 0x34e206c9
- (BOOL)applyRedemptionCode:(id)code forBundleID:(id)bundleID outError:(id *)error;	// 0x34e1e51d
- (id)bundleIDsWithFlags:(int)flags;	// 0x34e20555
- (void)cleanUp;	// 0x34e201c1
- (void)dealloc;	// 0x34e20a29
- (id)doNotBackupAppIDs;	// 0x34e1d65d
- (BOOL)hasMetadataForBundleID:(id)bundleID;	// 0x34e208f9
- (BOOL)hasPendingInstallations;	// 0x34e1e499
- (BOOL)installITunesStoreID:(unsigned long long)anId managementFlags:(int)flags outBundleID:(id *)anId3 outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x34e1ef85
- (BOOL)installManifestURL:(id)url managementFlags:(int)flags outBundleID:(id *)anId outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x34e1e7a5
- (void)jobQueueDidReleaseBusy:(id)jobQueue;	// 0x34e20979
- (void)jobQueueDidRetainBusy:(id)jobQueue;	// 0x34e209d1
- (id)managedAppMetadataByBundleID;	// 0x34e20855
- (id)metadataForBundleID:(id)bundleID;	// 0x34e20745
- (void)removeBundleID:(id)anId;	// 0x34e20611
// declared property getter: - (id)server;	// 0x34e1c611
- (void)setAppState:(int)state forBundleID:(id)bundleID;	// 0x34e2066d
- (void)setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x34e207f9
// declared property setter: - (void)setServer:(id)server;	// 0x34e1c621
- (void)uninstallManagedAppsAccordingToFlags;	// 0x34e1e74d
- (void)updateApplicationInstallationStates;	// 0x34e1e2c5
@end


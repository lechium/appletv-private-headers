/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsNetworkSpeedTestViewController.h"
#import "BRSecureResource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, SettingsNetworkSpeedTestView;

__attribute__((visibility("hidden")))
@interface SettingsNetworkSpeedTestViewController : XXUnknownSuperclass <BRSecureResource> {
	SettingsNetworkSpeedTestView *_networkSpeedTestView;	// 68 = 0x44
	int _speedTestDialogLevel;	// 72 = 0x48
	int _currentDownloadTestNumber;	// 76 = 0x4c
	NSMutableDictionary *_userInput;	// 80 = 0x50
}
- (id)init;	// 0xb5b15
- (void).cxx_destruct;	// 0xb62dd
- (void)dealloc;	// 0xb5ef5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb6141
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb6025
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb6119
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0xb5f61
- (void)wasPopped;	// 0xb5fa5
@end

@interface SettingsNetworkSpeedTestViewController (Private)
- (int)_bandwidthIntValueForRow:(long)row;	// 0xb6b41
- (id)_controlNameForCurrentlyExperiencingSlowDownloadScreenAtRow:(long)row;	// 0xb6a45
- (id)_controlNameForInternetConnectionExpectedSpeedScreenAtRow:(long)row;	// 0xb6a9d
- (id)_controlNameForLegalDisclosureScreenAtRow:(long)row;	// 0xb6a25
- (id)_controlNameForResultsScreenAtRow:(long)row;	// 0xb6b25
- (void)_postBandwidthVerificationInProgressErrorMessage;	// 0xb6405
- (void)_postStoreConnectionErrorMessage;	// 0xb6311
- (void)_startDownloads;	// 0xb6981
- (void)_updateCurrentScreen;	// 0xb64f9
@end

@interface SettingsNetworkSpeedTestViewController (CallbackHandlers)
- (void)_downloadsComplete:(id)complete;	// 0xb70e1
- (void)_networkLogErrorNotification:(id)notification;	// 0xb71b9
- (void)_networkLogUpdateProgressUpdate:(id)update;	// 0xb6b69
- (void)_testCanceled:(id)canceled;	// 0xb7181
- (void)_uploadsComplete:(id)complete;	// 0xb7161
@end


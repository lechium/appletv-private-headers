/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVDottedQuadEntryDelegate.h"
#import "ATVTCPIPConfigDelegate.h"
#import "BRViewController.h"

@class NSString, NSTimer, BRIPConfiguration, ATVDottedQuadEntryController;

__attribute__((visibility("hidden")))
@interface SettingsNetworkAdvancedViewController : BRViewController <ATVDottedQuadEntryDelegate, ATVTCPIPConfigDelegate> {
	ATVDottedQuadEntryController *_ipController;	// 100 = 0x64
	ATVDottedQuadEntryController *_maskController;	// 104 = 0x68
	ATVDottedQuadEntryController *_routerController;	// 108 = 0x6c
	ATVDottedQuadEntryController *_dnsController;	// 112 = 0x70
	NSString *_address;	// 116 = 0x74
	NSString *_subnetMask;	// 120 = 0x78
	NSString *_router;	// 124 = 0x7c
	NSString *_dns;	// 128 = 0x80
	BRIPConfiguration *_ipConfig;	// 132 = 0x84
	BOOL _forWireless;	// 136 = 0x88
	BOOL _usesDHCP;	// 137 = 0x89
	BOOL _usesManualDNS;	// 138 = 0x8a
	BOOL _showForgetNetwork;	// 139 = 0x8b
	BOOL _isForgettingNetwork;	// 140 = 0x8c
	BOOL _userHasSetManualDNS;	// 141 = 0x8d
	BOOL _contentDirty;	// 142 = 0x8e
	NSTimer *_updateTimer;	// 144 = 0x90
}
- (id)initForWireless:(BOOL)wireless;	// 0x3962d9
- (void).cxx_destruct;	// 0x3976a9
- (void)_commissionNetworkUpdateTimer;	// 0x396821
- (void)_configureAutoDNS;	// 0x397269
- (void)_configureDNS;	// 0x39810d
- (void)_configureIP;	// 0x397bed
- (void)_configureRouter;	// 0x397f49
- (void)_configureSubnet;	// 0x397d95
- (void)_decommissionNetworkUpdateTimer;	// 0x3968a5
- (void)_exitErrorDialogWithAnyPress;	// 0x3967e1
- (void)_forgetNetwork;	// 0x397b21
- (void)_networkChanged:(id)changed;	// 0x396b85
- (void)_networkStateWillChange:(id)_networkState;	// 0x3968d9
- (void)_readCurrentConfiguration;	// 0x39777d
- (void)_reloadMenuItems;	// 0x397ac9
- (void)_saveCurrentConfigurationShowingProgress:(BOOL)progress;	// 0x3978f1
- (void)configurationComplete:(BOOL)complete forInterface:(int)interface;	// 0x3966b5
- (void)configureDHCP;	// 0x3971e1
- (void)dealloc;	// 0x396635
- (void)entryComplete:(id)complete;	// 0x397541
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x397315
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x39745d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x396d35
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3971ad
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x397175
- (long)numberOfSectionsInList:(id)list;	// 0x39715d
@end


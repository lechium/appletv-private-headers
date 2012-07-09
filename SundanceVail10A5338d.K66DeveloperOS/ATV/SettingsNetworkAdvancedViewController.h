/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVDottedQuadEntryDelegate.h"
#import "BRViewController.h"
#import "ATVTCPIPConfigDelegate.h"

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
- (id)initForWireless:(BOOL)wireless;	// 0x39c0f5
- (void).cxx_destruct;	// 0x39d525
- (void)_commissionNetworkUpdateTimer;	// 0x39c63d
- (void)_configureAutoDNS;	// 0x39d09d
- (void)_configureDNS;	// 0x39df8d
- (void)_configureIP;	// 0x39da6d
- (void)_configureRouter;	// 0x39ddc9
- (void)_configureSubnet;	// 0x39dc15
- (void)_decommissionNetworkUpdateTimer;	// 0x39c6c1
- (void)_exitErrorDialogWithAnyPress;	// 0x39c5fd
- (void)_forgetNetwork;	// 0x39d9a1
- (void)_networkChanged:(id)changed;	// 0x39c9a1
- (void)_networkStateWillChange:(id)_networkState;	// 0x39c6f5
- (void)_readCurrentConfiguration;	// 0x39d5f9
- (void)_reloadMenuItems;	// 0x39d949
- (void)_saveCurrentConfigurationShowingProgress:(BOOL)progress;	// 0x39d76d
- (void)configurationComplete:(BOOL)complete forInterface:(int)interface;	// 0x39c4d1
- (void)configureDHCP;	// 0x39d015
- (void)dealloc;	// 0x39c451
- (void)entryComplete:(id)complete;	// 0x39d3bd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x39d149
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x39d291
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x39cb51
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x39cfe1
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x39cfa9
- (long)numberOfSectionsInList:(id)list;	// 0x39cf91
@end

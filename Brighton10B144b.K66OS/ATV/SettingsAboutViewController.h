/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class BRIPConfiguration, NSTimer, SettingsMetadataView;

__attribute__((visibility("hidden")))
@interface SettingsAboutViewController : BRViewController {
	SettingsMetadataView *_infoView;	// 104 = 0x68
	BRIPConfiguration *_ipConfig;	// 108 = 0x6c
	int _versionType;	// 112 = 0x70
	int _wifiDetailsType;	// 116 = 0x74
	NSTimer *_updateTimer;	// 120 = 0x78
}
- (id)init;	// 0xa0ded
- (void).cxx_destruct;	// 0xa139d
- (void)_commissionNetworkUpdateTimer;	// 0xa1fa1
- (void)_configureAboutControl;	// 0xa15a1
- (void)_decommissionNetworkUpdateTimer;	// 0xa2029
- (void)_displayConfigurationChanged:(id)changed;	// 0xa1f91
- (void)_networkChanged:(id)changed;	// 0xa1ecd
- (void)_toggleVersion;	// 0xa13e5
- (void)_toggleWiFiDetails;	// 0xa14bd
- (void)_updateNetworkInfo:(id)info;	// 0xa1e79
- (id)_versionLabelString;	// 0xa205d
- (id)_versionValueString;	// 0xa20b9
- (id)_wifiDetailsLabelString;	// 0xa22ad
- (id)_wifiDetailsValueString;	// 0xa232d
- (BOOL)brEventAction:(id)action;	// 0xa129d
- (void)dealloc;	// 0xa10c1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xa138d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xa1375
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xa1389
- (void)wasBuried;	// 0xa11e5
- (void)wasExhumed;	// 0xa1225
- (void)wasPopped;	// 0xa11a5
- (void)wasPushed;	// 0xa112d
@end


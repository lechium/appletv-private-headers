/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface SettingsGeneralViewController : BRViewController {
	BOOL _showingCancelDialog;	// 100 = 0x64
	BOOL _canceledSWUpdate;	// 101 = 0x65
	BOOL _showFeatureEnablerByDefault;	// 102 = 0x66
	BOOL _showInverseDeviceID;	// 103 = 0x67
	float _updateDownloadPercentage;	// 104 = 0x68
}
- (id)init;	// 0x884e5
- (void)_aboutSettingSelected;	// 0x89c45
- (void)_accessibilitySettingSelected;	// 0x89fb9
- (unsigned)_adjustIndexBasedOnHiddenItemsForIndex:(unsigned)index;	// 0x899e5
- (void)_bluetoothSettingSelected;	// 0x89e6d
- (void)_deviceNamedChanged:(id)changed;	// 0x8aa15
- (void)_enableRetailMode:(BOOL)mode;	// 0x8b8a5
- (void)_featureEnablerSelected;	// 0x8a4e1
- (BOOL)_hasInstalledProfiles;	// 0x8a75d
- (void)_incrementSleepTimeout;	// 0x8a021
- (void)_languageSelected:(id)selected;	// 0x8a8a1
- (void)_languageSettingSelected;	// 0x89ee9
- (void)_legalSettingSelected;	// 0x8a2f1
- (id)_mediaMenuView;	// 0x89ac5
- (void)_nameSettingSelected;	// 0x89cad
- (void)_networkSettingSelected;	// 0x89d35
- (void)_parentalControlsSettingSelected;	// 0x89d9d
- (void)_remoteControlSettingSelected;	// 0x89e05
- (void)_resetSettingSelected;	// 0x8a381
- (void)_restartSettingSelected;	// 0x8a409
- (void)_retailSoftwareUpdateSettingSelected;	// 0x8b5bd
- (void)_showHideProgressUI;	// 0x8b3c9
- (void)_showInstalledProfiles;	// 0x8a7a9
- (id)_sleepTimeoutString;	// 0x89ad5
- (void)_softwareUpdate:(BOOL)update;	// 0x8aac5
- (void)_softwareUpdateSettingSelected;	// 0x89ed5
- (void)_timeZoneChanged:(id)changed;	// 0x8aa6d
- (void)_timeZoneSelected;	// 0x89f51
- (void)_toggleRetailChannelMode;	// 0x8b71d
- (void)_toggleRetailMode;	// 0x8b5d1
- (void)_toggleShowInverseDeviceID;	// 0x8a831
- (void)_toggleUsageOptInSelected;	// 0x8a16d
- (void)_troubleshootingSettingSelected;	// 0x8a261
- (void)_updateCheckFinished:(id)finished;	// 0x8ae41
- (void)_updateCheckStarted:(id)started;	// 0x8ad5d
- (void)_updateDownloadFinished:(id)finished;	// 0x8b035
- (void)_updateDownloadStarted:(id)started;	// 0x8af7d
- (void)_updateProgress:(id)progress;	// 0x8b109
- (id)accessibilityLabel;	// 0x88919
- (BOOL)brEventAction:(id)action;	// 0x889e1
- (void)dealloc;	// 0x88809
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x89489
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x898c5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x88b19
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x89399
- (void)textDidChange:(id)text;	// 0x8a6a1
- (void)textDidEndEditing:(id)text;	// 0x8a6a5
- (void)wasExhumed;	// 0x88961
@end


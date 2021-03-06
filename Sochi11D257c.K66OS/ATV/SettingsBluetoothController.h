/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TVPeripheralManagerCBDelegate.h"
#import "BRViewController.h"

@class BluetoothDevice, ATVPINController, BRMediaMenuView, NSArray, NSMutableSet, NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface SettingsBluetoothController : BRViewController <TVPeripheralManagerCBDelegate> {
	BOOL _pairingRequested;	// 104 = 0x68
	BOOL _isSSP;	// 105 = 0x69
	BRMediaMenuView *_mediaMenuView;	// 108 = 0x6c
	NSMutableArray *_availableDevices;	// 112 = 0x70
	NSTimer *_scanForDevicesTimer;	// 116 = 0x74
	BluetoothDevice *_deviceWithPINChallengeActive;	// 120 = 0x78
	ATVPINController *_pairingController;	// 124 = 0x7c
	NSArray *_devicesInDisplayOrder;	// 128 = 0x80
	int _previousPlaybackState;	// 132 = 0x84
	NSMutableSet *_pairingRequestedByDeviceSet;	// 136 = 0x88
}
@property(retain, nonatomic) NSMutableArray *_availableDevices;	// G=0x2ff101; S=0x2ff111; @synthesize
@property(retain, nonatomic) BluetoothDevice *_deviceWithPINChallengeActive;	// G=0x2ff16d; S=0x2ff17d; @synthesize
@property(readonly, assign, nonatomic) NSArray *_devicesInDisplayOrder;	// G=0x2fec39; @synthesize
@property(assign, nonatomic) BOOL _isSSP;	// G=0x2ff21d; S=0x2ff22d; @synthesize
@property(retain, nonatomic) BRMediaMenuView *_mediaMenuView;	// G=0x2ff0c9; S=0x2ff0d9; @synthesize
@property(retain, nonatomic) ATVPINController *_pairingController;	// G=0x2ff1a5; S=0x2ff1b5; @synthesize
@property(assign, nonatomic) BOOL _pairingRequested;	// G=0x2ff1fd; S=0x2ff20d; @synthesize
@property(retain, nonatomic) NSMutableSet *_pairingRequestedByDeviceSet;	// G=0x2ff23d; S=0x2ff24d; @synthesize
@property(assign, nonatomic) int _previousPlaybackState;	// G=0x2ff1dd; S=0x2ff1ed; @synthesize
@property(assign, nonatomic) __weak NSTimer *_scanForDevicesTimer;	// G=0x2ff139; S=0x2ff159; @synthesize
- (id)init;	// 0x2fd1b9
- (void).cxx_destruct;	// 0x2ff275
- (void)_addToAvailableDevicesIfNecessary:(id)availableDevicesIfNecessary forceReload:(BOOL)reload;	// 0x2ff661
// declared property getter: - (id)_availableDevices;	// 0x2ff101
- (void)_bluetoothAvailabilityChanged:(id)changed;	// 0x2ff809
- (void)_bluetoothConnectionFailed:(id)failed;	// 0x2ffc5d
- (void)_bluetoothConnectionStatusChanged:(id)changed;	// 0x2ffdc1
- (void)_bluetoothConnectionSuccess:(id)success;	// 0x2ffc49
- (void)_bluetoothDeviceChanged:(id)changed;	// 0x2ffbe9
- (void)_bluetoothDeviceDiscovered:(id)discovered;	// 0x2ffac9
- (void)_bluetoothDeviceRemoved:(id)removed;	// 0x2ffb49
- (void)_bluetoothDeviceUpdated:(id)updated;	// 0x2ffb09
- (void)_bluetoothDisconnectFailed:(id)failed;	// 0x2ffdd9
- (void)_bluetoothDisconnectSuccess:(id)success;	// 0x2ffdc5
- (void)_bluetoothDiscoveryStateChanged:(id)changed;	// 0x2ffc29
- (void)_bluetoothDiscoveryStopped:(id)stopped;	// 0x2ffc39
- (void)_bluetoothIsAvailable:(BOOL)available;	// 0x2ff8b9
- (void)_bluetoothPairingPINRequest:(id)request;	// 0x2ffddd
- (void)_bluetoothPairingPINResultFailed:(id)failed;	// 0x300185
- (void)_bluetoothPairingPINResultSuccess:(id)success;	// 0x3000cd
- (void)_bluetoothPairingUserNumericComparisonRequest:(id)request;	// 0x30039d
- (void)_bluetoothPowerStateChanged:(id)changed;	// 0x3008a5
- (void)_bluetoothdeviceUnpaired:(id)unpaired;	// 0x300869
- (id)_confirmDisconnectPrimaryInfoTextForDevice:(id)device;	// 0x2ff529
- (id)_confirmUnpairingPrimaryInfoTextForDevice:(id)device;	// 0x2ff4e1
- (id)_devicePairingAction:(id)action;	// 0x2ff5b9
- (id)_deviceProductName:(id)name;	// 0x2ff571
// declared property getter: - (id)_deviceWithPINChallengeActive;	// 0x2ff16d
// declared property getter: - (id)_devicesInDisplayOrder;	// 0x2fec39
- (void)_generatedPinPairWithDevice:(id)device;	// 0x2ffe71
// declared property getter: - (BOOL)_isSSP;	// 0x2ff21d
// declared property getter: - (id)_mediaMenuView;	// 0x2ff0c9
// declared property getter: - (id)_pairingController;	// 0x2ff1a5
- (void)_pairingFailedOptionSelected:(id)selected;	// 0x2ffd11
// declared property getter: - (BOOL)_pairingRequested;	// 0x2ff1fd
// declared property getter: - (id)_pairingRequestedByDeviceSet;	// 0x2ff23d
- (void)_pauseAudioIfNeeded;	// 0x2ff309
// declared property getter: - (int)_previousPlaybackState;	// 0x2ff1dd
- (void)_reloadListIfAppropriate;	// 0x2ff429
- (void)_removeDeviceOptionSelected:(id)selected;	// 0x2ff705
// declared property getter: - (id)_scanForDevicesTimer;	// 0x2ff139
- (void)_scanForDevicesTimerFired:(id)devicesTimerFired;	// 0x2ff5f5
- (void)dealloc;	// 0x2fd885
- (void)discoveredPeripheralsChanged;	// 0x2fefa1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2fe5c5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2fe58d
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x2fe53d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2fdefd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2fdca9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2fdd71
- (long)numberOfSectionsInList:(id)list;	// 0x2fdc4d
- (void)resetPairingStateIfNecessary:(id)necessary;	// 0x2fdc15
// declared property setter: - (void)set_availableDevices:(id)devices;	// 0x2ff111
// declared property setter: - (void)set_deviceWithPINChallengeActive:(id)pinchallengeActive;	// 0x2ff17d
// declared property setter: - (void)set_isSSP:(BOOL)ssp;	// 0x2ff22d
// declared property setter: - (void)set_mediaMenuView:(id)view;	// 0x2ff0d9
// declared property setter: - (void)set_pairingController:(id)controller;	// 0x2ff1b5
// declared property setter: - (void)set_pairingRequested:(BOOL)requested;	// 0x2ff20d
// declared property setter: - (void)set_pairingRequestedByDeviceSet:(id)set;	// 0x2ff24d
// declared property setter: - (void)set_previousPlaybackState:(int)state;	// 0x2ff1ed
// declared property setter: - (void)set_scanForDevicesTimer:(id)devicesTimer;	// 0x2ff159
- (void)stateChangeForPeripheral:(id)peripheral;	// 0x2fefb1
- (void)wasExhumed;	// 0x2fdb5d
- (void)wasPopped;	// 0x2fda09
- (void)wasPushed;	// 0x2fd9a1
@end


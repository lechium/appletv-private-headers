/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <NSObject.h> // Unknown library

@class PSSpecifierStub, UIAlertView, UITableView, NSMutableArray, NSPredicate, NSString;
@protocol BTDevicePickerDelegate;

@interface BTDevicePicker : NSObject {
	UIAlertView *_alertView;	// 4 = 0x4
	UITableView *_tableView;	// 8 = 0x8
	NSMutableArray *_deviceList;	// 12 = 0xc
	id<BTDevicePickerDelegate> _delegate;	// 16 = 0x10
	NSString *_title;	// 20 = 0x14
	unsigned _service;	// 24 = 0x18
	NSPredicate *_predicate;	// 28 = 0x1c
	BOOL _showingAlert;	// 32 = 0x20
	BOOL _checkingPaired;	// 33 = 0x21
	PSSpecifierStub *_connectingSpec;	// 36 = 0x24
	Class _btSSPRequestClass;	// 40 = 0x28
	Class _btAlertClass;	// 44 = 0x2c
	id _btSSPAlert;	// 48 = 0x30
	id _btAlert;	// 52 = 0x34
}
@property(assign, nonatomic) id<BTDevicePickerDelegate> delegate;	// G=0x34abdc41; S=0x34abdc51; @synthesize=_delegate
- (id)initWithTitle:(id)title service:(unsigned)service discoveryNameFilter:(id)filter;	// 0x34abba5d
- (void)_btSSPConfirmationHandler:(id)handler;	// 0x34abcee9
- (void)_btSSPNumericComparisonHandler:(id)handler;	// 0x34abcf8d
- (void)_btSSPPasskeyDisplayHandler:(id)handler;	// 0x34abd06d
- (void)alertSheetDismissed:(id)dismissed;	// 0x34abd94d
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x34abc71d
- (void)applicationWillResignActive:(id)application;	// 0x34abc69d
- (void)authenticationRequestHandler:(id)handler;	// 0x34abd14d
- (void)checkAttachTimeout;	// 0x34abc491
- (void)cleanupPairing;	// 0x34abc455
- (void)dealloc;	// 0x34abbe9d
// declared property getter: - (id)delegate;	// 0x34abdc41
- (void)deviceConnectionCompleteHandler:(id)handler;	// 0x34abd78d
- (void)deviceDiscoveryStoppedHandler:(id)handler;	// 0x34abc9dd
- (void)deviceFoundHandler:(id)handler;	// 0x34abca39
- (void)deviceLostHandler:(id)handler;	// 0x34abce29
- (void)deviceNameChangedHandler:(id)handler;	// 0x34abcbfd
- (void)devicePairedHandler:(id)handler;	// 0x34abd539
- (void)dismissAnimated:(BOOL)animated;	// 0x34abc391
- (void)powerChanged:(id)changed;	// 0x34abc875
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34abdc51
- (void)show;	// 0x34abc085
- (void)showInternal;	// 0x34abc161
- (void)startScanning;	// 0x34abc535
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34abdb55
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34abd9c9
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34abdb35
@end


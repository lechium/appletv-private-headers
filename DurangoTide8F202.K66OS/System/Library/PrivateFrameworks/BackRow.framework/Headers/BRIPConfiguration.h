/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSNumber;

@interface BRIPConfiguration : NSObject {
@private
	NSString *_wirelessNetwork;	// 4 = 0x4
	NSString *_wirelessMACAddress;	// 8 = 0x8
	NSString *_wirelessIPAddress;	// 12 = 0xc
	NSString *_wirelessSubnetMask;	// 16 = 0x10
	NSString *_wirelessRouter;	// 20 = 0x14
	NSArray *_wirelessDNSAddresses;	// 24 = 0x18
	NSString *_wiredMACAddress;	// 28 = 0x1c
	NSString *_wiredIPAddress;	// 32 = 0x20
	NSString *_wiredSubnetMask;	// 36 = 0x24
	NSString *_wiredRouter;	// 40 = 0x28
	NSArray *_wiredDNSAddresses;	// 44 = 0x2c
	long _wirelessSignalQuality;	// 48 = 0x30
	NSNumber *_wirelessSignalRSSI;	// 52 = 0x34
	NSNumber *_wirelessSignalRate;	// 56 = 0x38
	NSNumber *_wirelessSignalChannel;	// 60 = 0x3c
	unsigned _wirelessUseDHCP : 1;	// 64 = 0x40
	unsigned _wirelessActive : 1;	// 64 = 0x40
	unsigned _wiredUseDHCP : 1;	// 64 = 0x40
	unsigned _wiredActive : 1;	// 64 = 0x40
}
@property(readonly, retain) NSString *wirelessNetwork;	// G=0x3295f821; converted property
@property(readonly, assign) long wirelessSignalQuality;	// G=0x3295f831; converted property
+ (SCDynamicStoreRef)_dynamicStoreSingleton;	// 0x3289ff05
+ (void)_pushWirelessUsageValues;	// 0x3295f841
+ (id)currentConfiguration;	// 0x3295fb99
+ (BOOL)internetAvailable;	// 0x3295fd49
+ (BOOL)internetServerReachable:(id)reachable;	// 0x3295fdd9
+ (id)ipAddressesForHostName:(id)hostName;	// 0x3295ffd1
+ (BOOL)networkAvailable;	// 0x3295fc3d
+ (BOOL)networkTimeIsApproximatelyCorrect;	// 0x3295fbd9
+ (BOOL)receivedNTPClockSetNotification;	// 0x3295f721
+ (void)setReceivedNTPClockSetNotification:(BOOL)notification;	// 0x3295f731
+ (void)setShowedNetworkTimeDialog:(BOOL)dialog;	// 0x3295f74d
+ (void)setUserDismissedNetworkTimeDialog:(BOOL)dialog;	// 0x3295f769
+ (BOOL)showedNetworkTimeDialog;	// 0x3295f73d
+ (void)startMonitoringNetworkChanges:(BOOL)changes;	// 0x328a0bbd
+ (BOOL)userDismissedNetworkTimeDialog;	// 0x3295f759
- (id)initFromCurrentConfiguration;	// 0x3289fe25
- (id)IPaddressForInterface:(int)interface;	// 0x328a0949
- (id)MACaddressForInterface:(int)interface;	// 0x3295f7cd
- (id)_dnsAddressesForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x328a06c1
- (void)_examineService:(SCNetworkServiceRef)service usingStore:(SCDynamicStoreRef)store;	// 0x328a0085
- (void)_getStateForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store ipAddress:(id *)address mask:(id *)mask router:(id *)router;	// 0x328a03b5
- (void)_getWirelessNetworkStateUsingStore:(SCDynamicStoreRef)store;	// 0x328a07a9
- (BOOL)_isActiveForInterface:(id)interface usingStore:(SCDynamicStoreRef)store;	// 0x328a064d
- (BOOL)_setDHCPForService:(SCNetworkServiceRef)service;	// 0x32960259
- (BOOL)_setDNSAddress:(id)address forService:(SCNetworkServiceRef)service;	// 0x329600d5
- (BOOL)_setIPAddress:(id)address subnetMask:(id)mask router:(id)router forService:(SCNetworkServiceRef)service;	// 0x3296014d
- (void)dealloc;	// 0x328a0981
- (id)description;	// 0x3295fa3d
- (id)dnsAddressesForInterface:(int)interface;	// 0x3295f805
- (BOOL)isActiveForInterface:(int)interface;	// 0x328a091d
- (id)routerForInterface:(int)interface;	// 0x3295f7e9
- (void)setAddress:(id)address subnetMask:(id)mask router:(id)router forInterface:(int)interface;	// 0x3295f931
- (void)setDNSAddresses:(id)addresses forInterface:(int)interface;	// 0x3295f8d1
- (void)setUseDHCPForInterface:(int)interface;	// 0x3295f775
- (id)subnetMaskForInterface:(int)interface;	// 0x328a0965
- (BOOL)useDHCPForInterface:(int)interface;	// 0x3295f79d
// converted property getter: - (id)wirelessNetwork;	// 0x3295f821
// converted property getter: - (long)wirelessSignalQuality;	// 0x3295f831
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;

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
	unsigned _wirelessUseDHCP : 1;	// 52 = 0x34
	unsigned _wirelessActive : 1;	// 52 = 0x34
	unsigned _wiredUseDHCP : 1;	// 52 = 0x34
	unsigned _wiredActive : 1;	// 52 = 0x34
}
@property(readonly, retain) NSString *wirelessNetwork;	// G=0x33b5972d; converted property
@property(readonly, assign) long wirelessSignalQuality;	// G=0x33b5973d; converted property
+ (SCDynamicStoreRef)_dynamicStoreSingleton;	// 0x33b5974d
+ (void)_pushWirelessUsageValues;	// 0x33b59b05
+ (id)currentConfiguration;	// 0x33b5916d
+ (BOOL)internetAvailable;	// 0x33b58d65
+ (BOOL)internetServerReachable:(id)reachable;	// 0x33b58df1
+ (id)ipAddressesForHostName:(id)hostName;	// 0x33b58e45
+ (BOOL)networkAvailable;	// 0x33b58c39
+ (BOOL)networkTimeIsApproximatelyCorrect;	// 0x33b58fa9
+ (BOOL)receivedNTPClockSetNotification;	// 0x33b58f49
+ (void)setReceivedNTPClockSetNotification:(BOOL)notification;	// 0x33b58f59
+ (void)setShowedNetworkTimeDialog:(BOOL)dialog;	// 0x33b58f79
+ (void)setUserDismissedNetworkTimeDialog:(BOOL)dialog;	// 0x33b58f99
+ (BOOL)showedNetworkTimeDialog;	// 0x33b58f69
+ (void)startMonitoringNetworkChanges:(BOOL)changes;	// 0x33b5901d
+ (BOOL)userDismissedNetworkTimeDialog;	// 0x33b58f89
- (id)initFromCurrentConfiguration;	// 0x33b59071
- (id)IPaddressForInterface:(int)interface;	// 0x33b596ad
- (id)MACaddressForInterface:(int)interface;	// 0x33b5968d
- (id)_dnsAddressesForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x33b5a1e5
- (void)_examineService:(SCNetworkServiceRef)service usingStore:(SCDynamicStoreRef)store;	// 0x33b59ba5
- (void)_getStateForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store ipAddress:(id *)address mask:(id *)mask router:(id *)router;	// 0x33b59f1d
- (void)_getWirelessNetworkStateUsingStore:(SCDynamicStoreRef)store;	// 0x33b5a34d
- (BOOL)_isActiveForInterface:(id)interface usingStore:(SCDynamicStoreRef)store;	// 0x33b5a2d9
- (BOOL)_setDHCPForService:(SCNetworkServiceRef)service;	// 0x33b5a4c5
- (BOOL)_setDNSAddress:(id)address forService:(SCNetworkServiceRef)service;	// 0x33b5a659
- (BOOL)_setIPAddress:(id)address subnetMask:(id)mask router:(id)router forService:(SCNetworkServiceRef)service;	// 0x33b5a531
- (void)dealloc;	// 0x33b591b5
- (id)description;	// 0x33b592c9
- (id)dnsAddressesForInterface:(int)interface;	// 0x33b5970d
- (BOOL)isActiveForInterface:(int)interface;	// 0x33b5962d
- (id)routerForInterface:(int)interface;	// 0x33b596ed
- (void)setAddress:(id)address subnetMask:(id)mask router:(id)router forInterface:(int)interface;	// 0x33b59489
- (void)setDNSAddresses:(id)addresses forInterface:(int)interface;	// 0x33b595c1
- (void)setUseDHCPForInterface:(int)interface;	// 0x33b5945d
- (id)subnetMaskForInterface:(int)interface;	// 0x33b596cd
- (BOOL)useDHCPForInterface:(int)interface;	// 0x33b5965d
// converted property getter: - (id)wirelessNetwork;	// 0x33b5972d
// converted property getter: - (long)wirelessSignalQuality;	// 0x33b5973d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library
#import "DAVKit-Structs.h"
#import "NSCopying.h"


@interface AYAddress : NSObject <NSCopying> {
}
+ (id)IPV4AddressesFromDataAddresses:(id)dataAddresses;	// 0x32db3455
+ (id)_createAddressFromSockaddrBuffer:(sockaddr *)sockaddrBuffer;	// 0x32db3719
+ (id)addressOfLocalFromSocket:(int)socket;	// 0x32db3649
+ (id)addressOfPeerFromSocket:(int)socket;	// 0x32db367d
+ (id)addressWithData:(id)data;	// 0x32db36e5
+ (id)addressWithString:(id)string;	// 0x32db36b1
+ (id)addressesFromDataAddresses:(id)dataAddresses;	// 0x32db356d
+ (id)allocWithZone:(NSZone *)zone;	// 0x32db3e11
+ (void)initialize;	// 0x32db3e4d
+ (unsigned)netMaskForIPV4Address:(id)ipv4Address;	// 0x32db39a9
+ (void)startListeningToNetworkConfiguration;	// 0x32db32bd
+ (void)stopListeningToNetworkConfiguration;	// 0x32db3ad5
+ (void)updateNetmasksFromStoreWithChangedKeys:(id)changedKeys;	// 0x32db32c1
- (id)initAddressWithData:(id)data;	// 0x32db3c31
- (id)initAddressWithLocalFromSocket:(int)socket;	// 0x32db3dbd
- (id)initAddressWithPeerFromSocket:(int)socket;	// 0x32db3d69
- (id)initAddressWithString:(id)string;	// 0x32db3c9d
- (id)URLToAddressWithScheme:(id)scheme;	// 0x32db3345
- (id)URLToAddressWithScheme:(id)scheme andPort:(int)port;	// 0x32db3321
- (id)URLToAddressWithScheme:(id)scheme andPort:(int)port URI:(id)uri;	// 0x32db32e1
- (id)addressAsData;	// 0x32db32d5
- (id)addressAsString;	// 0x32db32c9
- (id)copyWithZone:(NSZone *)zone;	// 0x32db330d
- (id)description;	// 0x32db337d
- (void)dumpInternal;	// 0x32db32e5
- (void)getAddressAsSockAddr:(sockaddr *)addr length:(int *)length;	// 0x32db32d9
- (BOOL)isLocalAddressConnectingTo:(id)to;	// 0x32db32d1
- (int)port;	// 0x32db32cd
- (id)type;	// 0x32db32c5
@end


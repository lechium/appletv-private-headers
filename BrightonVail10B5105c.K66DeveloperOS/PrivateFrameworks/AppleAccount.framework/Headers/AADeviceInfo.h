/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class APSConnection, NSData;
@protocol OS_dispatch_semaphore;

@interface AADeviceInfo : NSObject {
	APSConnection *_apsConnection;	// 4 = 0x4
	BOOL _tokenDone;	// 8 = 0x8
	NSData *_token;	// 12 = 0xc
	NSObject<OS_dispatch_semaphore> *_tokenSema;	// 16 = 0x10
}
+ (id)apnsToken;	// 0x34e88ad9
+ (id)appleIDClientIdentifier;	// 0x34e88b29
+ (id)clientInfoHeader;	// 0x34e88b79
+ (id)infoDictionary;	// 0x34e88995
+ (id)osVersion;	// 0x34e88a39
+ (id)productVersion;	// 0x34e88f11
+ (id)serialNumber;	// 0x34e88a89
+ (id)signatureWithDictionary:(id)dictionary;	// 0x34e889e5
+ (id)udid;	// 0x34e889e9
+ (id)userAgentHeader;	// 0x34e88e39
- (id)init;	// 0x34e88959
- (void).cxx_destruct;	// 0x34e88f61
- (id)apnsToken;	// 0x34e89275
- (id)appleIDClientIdentifier;	// 0x34e892fd
- (id)buildVersion;	// 0x34e89215
- (id)deviceClass;	// 0x34e892e1
- (id)deviceInfoDictionary;	// 0x34e88fa9
- (id)osName;	// 0x34e891b9
- (id)osVersion;	// 0x34e890b5
- (id)productType;	// 0x34e8918d
- (id)productVersion;	// 0x34e89161
- (id)regionCode;	// 0x34e89271
- (id)serialNumber;	// 0x34e89119
- (id)udid;	// 0x34e890ed
- (id)wifiMacAddress;	// 0x34e89145
@end

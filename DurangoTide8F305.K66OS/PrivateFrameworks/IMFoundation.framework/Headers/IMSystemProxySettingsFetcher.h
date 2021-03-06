/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject {
	id _delegate;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	unsigned short _port;	// 12 = 0xc
	int _proxyProtocol;	// 16 = 0x10
	NSString *_proxyHost;	// 20 = 0x14
	unsigned short _proxyPort;	// 24 = 0x18
	NSString *_proxyAccount;	// 28 = 0x1c
	NSString *_proxyPassword;	// 32 = 0x20
}
@property(assign) id delegate;	// G=0x31ad2b2d; S=0x31ad2b3d; @synthesize=_delegate
- (id)initWithHost:(id)host port:(unsigned short)port delegate:(id)delegate;	// 0x31ad2d9d
- (id)initWithProxyProtocol:(int)proxyProtocol proxyHost:(id)host proxyPort:(unsigned short)port delegate:(id)delegate;	// 0x31ad2d19
- (void)_callAccountSettingsDelegateMethod;	// 0x31ad2bed
- (void)_callProxySettingsDelegateMethod;	// 0x31ad2c39
- (void)_getProxyAccountAndPasswordFromKeychain;	// 0x31ad2b89
- (void)_takeProxySettingsFromDictionary:(CFDictionaryRef)dictionary;	// 0x31ad2b25
- (void)dealloc;	// 0x31ad2c99
// declared property getter: - (id)delegate;	// 0x31ad2b2d
- (void)retrieveProxyAccountSettings;	// 0x31ad2b4d
- (void)retrieveProxySettings;	// 0x31ad2b29
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31ad2b3d
@end


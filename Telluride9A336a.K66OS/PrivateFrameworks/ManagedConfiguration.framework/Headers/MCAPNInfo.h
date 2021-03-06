/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber;

@interface MCAPNInfo : NSObject {
	NSString *_apnName;	// 4 = 0x4
	NSString *_username;	// 8 = 0x8
	NSString *_password;	// 12 = 0xc
	NSString *_proxy;	// 16 = 0x10
	NSNumber *_proxyPort;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *apnName;	// G=0x3307fd29; S=0x33080715; @synthesize=_apnName
@property(retain, nonatomic) NSString *password;	// G=0x3307fd09; S=0x33080765; @synthesize=_password
@property(retain, nonatomic) NSString *proxy;	// G=0x3307fcf9; S=0x3308078d; @synthesize=_proxy
@property(retain, nonatomic) NSNumber *proxyPort;	// G=0x3307fce9; S=0x330807b5; @synthesize=_proxyPort
@property(retain, nonatomic) NSString *username;	// G=0x3307fd19; S=0x3308073d; @synthesize=_username
// declared property getter: - (id)apnName;	// 0x3307fd29
- (void)dealloc;	// 0x330807dd
- (id)defaultsRepresentation;	// 0x3307ff31
- (id)description;	// 0x3307fdc1
// declared property getter: - (id)password;	// 0x3307fd09
// declared property getter: - (id)proxy;	// 0x3307fcf9
// declared property getter: - (id)proxyPort;	// 0x3307fce9
// declared property setter: - (void)setApnName:(id)name;	// 0x33080715
// declared property setter: - (void)setPassword:(id)password;	// 0x33080765
// declared property setter: - (void)setProxy:(id)proxy;	// 0x3308078d
// declared property setter: - (void)setProxyPort:(id)port;	// 0x330807b5
// declared property setter: - (void)setUsername:(id)username;	// 0x3308073d
- (id)strippedDefaultsRepresentation;	// 0x3307fec5
// declared property getter: - (id)username;	// 0x3307fd19
@end


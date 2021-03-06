/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPClientProperties : NSObject {
	int _pid;	// 4 = 0x4
	BOOL _registered;	// 8 = 0x8
	CFFileDescriptorRef _fdref;	// 12 = 0xc
	CFMessagePortRef _remotePort;	// 16 = 0x10
	int _remoteAddress;	// 20 = 0x14
	int _serverFD;	// 24 = 0x18
}
@property(assign) CFFileDescriptorRef fdref;	// G=0x3061cc91; S=0x3061cca5; @synthesize=_fdref
@property(assign) int pid;	// G=0x3061cc35; S=0x3061cc49; @synthesize=_pid
@property(assign, getter=didRegister) BOOL registered;	// G=0x3061cc61; S=0x3061cc79; @synthesize=_registered
@property(assign) int remoteAddress;	// G=0x3061cce9; S=0x3061ccfd; @synthesize=_remoteAddress
@property(assign) CFMessagePortRef remotePort;	// G=0x3061ccbd; S=0x3061ccd1; @synthesize=_remotePort
@property(assign) int serverFD;	// G=0x3061cd15; S=0x3061cd29; @synthesize=_serverFD
- (void)dealloc;	// 0x3061cb85
// declared property getter: - (BOOL)didRegister;	// 0x3061cc61
// declared property getter: - (CFFileDescriptorRef)fdref;	// 0x3061cc91
- (void)finalize;	// 0x3061cbdd
// declared property getter: - (int)pid;	// 0x3061cc35
// declared property getter: - (int)remoteAddress;	// 0x3061cce9
// declared property getter: - (CFMessagePortRef)remotePort;	// 0x3061ccbd
// declared property getter: - (int)serverFD;	// 0x3061cd15
// declared property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x3061cca5
// declared property setter: - (void)setPid:(int)pid;	// 0x3061cc49
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x3061cc79
// declared property setter: - (void)setRemoteAddress:(int)address;	// 0x3061ccfd
// declared property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x3061ccd1
// declared property setter: - (void)setServerFD:(int)fd;	// 0x3061cd29
@end


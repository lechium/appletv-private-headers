/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPClient : NSObject {
	id _clientProperties;	// 4 = 0x4
}
@property(assign) CFFileDescriptorRef fdref;	// G=0x33e662ad; S=0x33e662cd; converted property
@property(assign) int pid;	// G=0x33e66229; S=0x33e66249; converted property
@property(assign) BOOL registered;	// G=0x33e66269; S=0x33e6628d; converted property
@property(assign) int remoteAddress;	// G=0x33e6632d; S=0x33e6634d; converted property
@property(assign) CFMessagePortRef remotePort;	// G=0x33e662ed; S=0x33e6630d; converted property
@property(assign) int serverFD;	// G=0x33e6636d; S=0x33e6638d; converted property
- (id)init;	// 0x33e661c5
// converted property getter: - (CFFileDescriptorRef)fdref;	// 0x33e662ad
// converted property getter: - (int)pid;	// 0x33e66229
// converted property getter: - (BOOL)registered;	// 0x33e66269
// converted property getter: - (int)remoteAddress;	// 0x33e6632d
// converted property getter: - (CFMessagePortRef)remotePort;	// 0x33e662ed
// converted property getter: - (int)serverFD;	// 0x33e6636d
// converted property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x33e662cd
// converted property setter: - (void)setPid:(int)pid;	// 0x33e66249
// converted property setter: - (void)setRegistered:(BOOL)registered;	// 0x33e6628d
// converted property setter: - (void)setRemoteAddress:(int)address;	// 0x33e6634d
// converted property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x33e6630d
// converted property setter: - (void)setServerFD:(int)fd;	// 0x33e6638d
@end


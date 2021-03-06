/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRAirportNetwork : XXUnknownSuperclass {
	WiFiNetwork *_wiFiNetworkRef;	// 4 = 0x4
	BOOL _isDirected;	// 8 = 0x8
}
@property(assign, getter=isDirected) BOOL directed;	// G=0x4118fd; S=0x41190d; converted property
@property(readonly, assign) WiFiNetwork *wiFiNetworkRef;	// G=0x411651; converted property
+ (BOOL)asyncNetworkWithName:(id)name error:(id *)error;	// 0x4115cd
+ (id)networkWithWiFiNetwork:(WiFiNetwork *)wiFiNetwork;	// 0x4115f1
- (id)init;	// 0x411661
- (BOOL)asyncAssociateUsingPassword:(id)password error:(id *)error;	// 0x41191d
- (void)dealloc;	// 0x4116a5
// converted property getter: - (BOOL)isDirected;	// 0x4118fd
- (id)name;	// 0x4116e9
- (int)securityType;	// 0x411709
// converted property setter: - (void)setDirected:(BOOL)directed;	// 0x41190d
// converted property getter: - (WiFiNetwork *)wiFiNetworkRef;	// 0x411651
@end


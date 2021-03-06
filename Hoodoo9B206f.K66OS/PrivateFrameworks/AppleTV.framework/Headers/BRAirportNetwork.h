/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"


@interface BRAirportNetwork : NSObject {
@private
	WiFiNetwork *_wiFiNetworkRef;	// 4 = 0x4
	BOOL _isDirected;	// 8 = 0x8
}
@property(assign, getter=isDirected) BOOL directed;	// G=0x36754aad; S=0x36754abd; converted property
@property(readonly, assign) WiFiNetwork *wiFiNetworkRef;	// G=0x367547f9; converted property
+ (BOOL)asyncNetworkWithName:(id)name error:(id *)error;	// 0x36754775
+ (id)networkWithWiFiNetwork:(WiFiNetwork *)wiFiNetwork;	// 0x36754799
- (id)init;	// 0x36754809
- (BOOL)asyncAssociateUsingPassword:(id)password error:(id *)error;	// 0x36754acd
- (void)dealloc;	// 0x3675484d
// converted property getter: - (BOOL)isDirected;	// 0x36754aad
- (id)name;	// 0x36754891
- (int)securityType;	// 0x367548b1
// converted property setter: - (void)setDirected:(BOOL)directed;	// 0x36754abd
// converted property getter: - (WiFiNetwork *)wiFiNetworkRef;	// 0x367547f9
@end


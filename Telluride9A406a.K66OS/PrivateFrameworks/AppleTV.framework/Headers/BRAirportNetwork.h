/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface BRAirportNetwork : NSObject {
@private
	WiFiNetwork *_wiFiNetworkRef;	// 4 = 0x4
	BOOL _isDirected;	// 8 = 0x8
}
@property(assign, getter=isDirected) BOOL directed;	// G=0x3312f96d; S=0x3312f97d; converted property
@property(readonly, assign) WiFiNetwork *wiFiNetworkRef;	// G=0x3312f6d9; converted property
+ (BOOL)asyncNetworkWithName:(id)name error:(id *)error;	// 0x3312f651
+ (id)networkWithWiFiNetwork:(WiFiNetwork *)wiFiNetwork;	// 0x3312f675
- (id)init;	// 0x3312f6e9
- (BOOL)asyncAssociateUsingPassword:(id)password error:(id *)error;	// 0x3312f98d
- (void)dealloc;	// 0x3312f72d
// converted property getter: - (BOOL)isDirected;	// 0x3312f96d
- (id)name;	// 0x3312f771
- (int)securityType;	// 0x3312f791
// converted property setter: - (void)setDirected:(BOOL)directed;	// 0x3312f97d
// converted property getter: - (WiFiNetwork *)wiFiNetworkRef;	// 0x3312f6d9
@end


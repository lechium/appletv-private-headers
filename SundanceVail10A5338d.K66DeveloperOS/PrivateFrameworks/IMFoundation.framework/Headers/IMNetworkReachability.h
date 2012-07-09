/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface IMNetworkReachability : NSObject {
	BOOL localWiFiRef;	// 4 = 0x4
	SCNetworkReachabilityRef reachabilityRef;	// 8 = 0x8
}
+ (id)reachabilityForInternetConnection;	// 0x3695760d
+ (id)reachabilityForLocalWiFi;	// 0x3695763d
+ (id)reachabilityWithAddress:(const sockaddr_in *)address;	// 0x36957541
+ (id)reachabilityWithHostName:(id)hostName;	// 0x36957469
- (int)currentReachabilityStatus;	// 0x369577d1
- (void)dealloc;	// 0x36957421
- (int)localWiFiStatusForFlags:(unsigned)flags;	// 0x36957685
- (int)networkStatusForFlags:(unsigned)flags;	// 0x36957785
@end

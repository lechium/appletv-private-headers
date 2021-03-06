/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPortNameServer.h"


@interface NSMessagePortNameServer : NSPortNameServer {
}
+ (id)sharedInstance;	// 0x31989c75
- (id)portForName:(id)name;	// 0x31989cb1
- (id)portForName:(id)name host:(id)host;	// 0x31989cfd
- (BOOL)registerPort:(id)port name:(id)name;	// 0x31989d45
- (BOOL)removePortForName:(id)name;	// 0x31989d61
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPortNameServer.h"


@interface NSMachBootstrapServer : NSPortNameServer {
}
+ (id)sharedInstance;	// 0x324c7451
- (id)portForName:(id)name;	// 0x324c7511
- (id)portForName:(id)name host:(id)host;	// 0x324c7415
- (BOOL)registerPort:(id)port name:(id)name;	// 0x324c759d
- (BOOL)removePortForName:(id)name;	// 0x324c72a9
- (id)servicePortWithName:(id)name;	// 0x324c7649
@end


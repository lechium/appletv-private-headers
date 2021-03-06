/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPortNameServer.h"


@interface NSMachBootstrapServer : NSPortNameServer {
}
+ (id)sharedInstance;	// 0x306c95ad
- (id)portForName:(id)name;	// 0x306c9685
- (id)portForName:(id)name host:(id)host;	// 0x306c9831
- (id)portForName:(id)name options:(unsigned)options;	// 0x306c95e9
- (BOOL)registerPort:(id)port name:(id)name;	// 0x306c9699
- (BOOL)removePortForName:(id)name;	// 0x306c9879
- (id)servicePortWithName:(id)name;	// 0x306c9745
@end


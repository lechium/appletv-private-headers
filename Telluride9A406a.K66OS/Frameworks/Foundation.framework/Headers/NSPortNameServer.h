/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSPortNameServer : NSObject {
}
+ (id)defaultPortNameServer;	// 0x35ea44d9
+ (id)systemDefaultPortNameServer;	// 0x35ea44a1
- (id)portForName:(id)name;	// 0x35ea44f5
- (id)portForName:(id)name host:(id)host;	// 0x35ea4519
- (id)portForName:(id)name onHost:(id)host;	// 0x35ea459d
- (BOOL)registerPort:(id)port forName:(id)name;	// 0x35ea4585
- (BOOL)registerPort:(id)port name:(id)name;	// 0x35ea453d
- (BOOL)removePortForName:(id)name;	// 0x35ea4561
@end


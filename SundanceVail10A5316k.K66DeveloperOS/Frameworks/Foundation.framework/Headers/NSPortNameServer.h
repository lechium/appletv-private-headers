/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSPortNameServer : NSObject {
}
+ (id)defaultPortNameServer;	// 0x31ab87f1
+ (id)systemDefaultPortNameServer;	// 0x31ab87b9
- (id)portForName:(id)name;	// 0x31ab880d
- (id)portForName:(id)name host:(id)host;	// 0x31ab8831
- (id)portForName:(id)name onHost:(id)host;	// 0x31ab88b5
- (BOOL)registerPort:(id)port forName:(id)name;	// 0x31ab889d
- (BOOL)registerPort:(id)port name:(id)name;	// 0x31ab8855
- (BOOL)removePortForName:(id)name;	// 0x31ab8879
@end


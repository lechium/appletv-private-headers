/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PersistentConnection-Structs.h"
#import <NSObject.h> // Unknown library


@interface PCLogging : NSObject {
}
+ (void)__appendString:(id)string toFileNamed:(id)fileNamed;	// 0x34e41b71
+ (void)_appendString:(id)string toFileNamed:(id)fileNamed;	// 0x34e41ae5
+ (id)_stringWithCurrentTime;	// 0x34e41e41
+ (dispatch_group_s *)dispatchGroup;	// 0x34e4232d
+ (dispatch_queue_s *)dispatchQueue;	// 0x34e422cd
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0x34e41885
+ (void)enableFileLogging:(BOOL)logging;	// 0x34e41899
+ (void)enableLoggingForCustomHandler:(id)customHandler;	// 0x34e419b5
+ (void)initialize;	// 0x34e42359
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format;	// 0x34e422a5
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format arguments:(void *)arguments;	// 0x34e41ec9
+ (id)logFileDirectory;	// 0x34e41e9d
+ (void)logKeepAliveInterval:(double)interval forServiceIdentifier:(id)serviceIdentifier;	// 0x34e418ad
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0x34e41861
@end


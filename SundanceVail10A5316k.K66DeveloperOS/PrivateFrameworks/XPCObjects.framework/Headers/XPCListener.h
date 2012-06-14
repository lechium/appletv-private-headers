/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSObject.h> // Unknown library

@protocol OS_xpc_object, OS_dispatch_queue;

@interface XPCListener : NSObject {
	NSObject<OS_xpc_object> *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_incomingConnectionQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_invalidationQueue;	// 12 = 0xc
	int _internalRetainCount;	// 16 = 0x10
	long _selfInvalidationToken;	// 20 = 0x14
}
+ (id)alloc;	// 0x345dae65
- (id)initWithName:(id)name connectionHandler:(id)handler;	// 0x345daaa5
- (void)dealloc;	// 0x345db039
- (id)endpoint;	// 0x345db1fd
- (void)invalidateThen:(id)then;	// 0x345db251
- (oneway void)release;	// 0x345daec9
- (id)retain;	// 0x345daea9
@end


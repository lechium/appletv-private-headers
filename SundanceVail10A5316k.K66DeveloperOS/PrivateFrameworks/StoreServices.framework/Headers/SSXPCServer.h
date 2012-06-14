/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface SSXPCServer : NSObject {
@private
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	NSString *_entitlementName;	// 8 = 0x8
	NSObject<OS_xpc_object> *_listener;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_observerQueue;	// 16 = 0x10
	NSMutableDictionary *_observers;	// 20 = 0x14
	NSString *_serviceName;	// 24 = 0x18
}
+ (id)mainServer;	// 0x34e7d43d
- (id)init;	// 0x34e7d219
- (id)initWithServiceName:(id)serviceName;	// 0x34e7d22d
- (id)initWithServiceName:(id)serviceName entitlement:(id)entitlement queue:(id)queue;	// 0x34e7d24d
- (void)_dispatchMessage:(id)message connection:(id)connection;	// 0x34e7dc19
- (void)addObserver:(id)observer selector:(SEL)selector forMessage:(long long)message;	// 0x34e7d51d
- (void)dealloc;	// 0x34e7d385
- (void)removeObserver:(id)observer selector:(SEL)selector forMessage:(long long)message;	// 0x34e7d709
- (void)start;	// 0x34e7d8cd
@end


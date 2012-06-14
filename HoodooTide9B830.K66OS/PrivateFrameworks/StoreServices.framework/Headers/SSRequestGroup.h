/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableSet, NSArray;

@interface SSRequestGroup : NSObject {
@private
	NSString *_identifier;	// 4 = 0x4
	NSMutableSet *_requests;	// 8 = 0x8
	Class _requestClass;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *groupIdentifier;	// G=0x304fd805; @synthesize=_identifier
@property(readonly, assign, nonatomic) NSArray *requests;	// G=0x304fd3d5; 
- (id)init;	// 0x304fd069
- (id)initWithGroupIdentifier:(id)groupIdentifier;	// 0x304fd07d
- (id)initWithGroupIdentifier:(id)groupIdentifier requestClass:(Class)aClass;	// 0x304fd091
- (void)_daemonExited:(id)exited;	// 0x304fd491
- (void)_mainThreadDaemonExited:(id)exited;	// 0x304fd4d9
- (void)_registerForDaemonNotifications;	// 0x304fd525
- (void)_reloadRequestsFromDaemon;	// 0x304fd5a9
- (void)_setGroupIdentifier:(id)identifier forRequestWithIdentifier:(id)identifier2;	// 0x304fd71d
- (void)_unregisterForDaemonNotifications;	// 0x304fd7b9
- (void)addRequest:(id)request;	// 0x304fd291
- (void)dealloc;	// 0x304fd1e9
// declared property getter: - (id)groupIdentifier;	// 0x304fd805
- (void)removeRequest:(id)request;	// 0x304fd3f5
// declared property getter: - (id)requests;	// 0x304fd3d5
@end

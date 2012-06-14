/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMapTable, NSLock;

@interface GEOETARequester : NSObject {
@private
	NSMapTable *_pendingRequests;	// 4 = 0x4
	NSLock *_pendingRequestsLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedRequester;	// 0x34b45bf1
- (id)init;	// 0x34b45c5d
- (void)cancelRequest:(id)request;	// 0x34b462b5
- (Class)classForProviderID:(short)providerID;	// 0x34b463a9
- (void)dealloc;	// 0x34b45d3d
- (void)registerProvider:(Class)provider;	// 0x34b46369
- (void)startRequest:(id)request finished:(id)finished networkActivity:(id)activity error:(id)error;	// 0x34b45e6d
@end


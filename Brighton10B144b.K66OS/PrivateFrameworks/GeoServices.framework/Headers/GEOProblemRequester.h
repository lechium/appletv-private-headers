/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOProblemRequester : NSObject {
	NSMapTable *_pendingRequests;	// 4 = 0x4
	NSLock *_pendingRequestsLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedRequester;	// 0x33fff8e1
- (id)init;	// 0x33fff94d
- (void)cancelRequest:(id)request;	// 0x33ffff51
- (Class)classForProviderID:(short)providerID;	// 0x34000045
- (void)dealloc;	// 0x33fffa2d
- (void)registerProvider:(Class)provider;	// 0x34000005
- (void)startRequest:(id)request finished:(id)finished networkActivity:(id)activity error:(id)error;	// 0x33fffb5d
@end

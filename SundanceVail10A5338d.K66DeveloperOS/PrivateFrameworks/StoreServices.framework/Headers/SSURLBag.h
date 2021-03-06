/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection, NSMutableArray, NSDictionary, SSURLBagContext;
@protocol OS_dispatch_queue;

@interface SSURLBag : NSObject {
	SSXPCConnection *_connection;	// 4 = 0x4
	SSURLBagContext *_context;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	double _expirationTime;	// 20 = 0x14
	NSMutableArray *_pendingLookups;	// 28 = 0x1c
}
@property(readonly, assign) SSURLBagContext *URLBagContext;	// G=0x323789d9; 
+ (id)URLBagForContext:(id)context;	// 0x32378411
- (id)init;	// 0x32378239
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x32378299
// declared property getter: - (id)URLBagContext;	// 0x323789d9
- (id)_connection;	// 0x32378c6d
- (void)_drainPendingLookupsWithError:(id)error;	// 0x32378cc9
- (void)_loadURLBag;	// 0x32378ec9
- (void)_loadWithCompletionBlock:(id)completionBlock;	// 0x32379281
- (void)dealloc;	// 0x32378371
- (void)getTrustForURL:(id)url completionBlock:(id)block;	// 0x323785ad
- (void)invalidate;	// 0x32378809
- (void)loadValueForKey:(id)key completionBlock:(id)block;	// 0x32378909
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x32378c5d
- (id)valueForKey:(id)key error:(id *)error;	// 0x32378a11
@end


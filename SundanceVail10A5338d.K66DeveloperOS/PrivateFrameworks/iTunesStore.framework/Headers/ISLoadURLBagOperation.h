/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
	SSURLBagContext *_context;	// 60 = 0x3c
}
@property(readonly, assign) SSURLBagContext *context;	// G=0x309228d5; @synthesize=_context
- (id)init;	// 0x309216f1
- (id)initWithBagContext:(id)bagContext;	// 0x30921765
- (void)_addHeadersToRequestProperties:(id)requestProperties;	// 0x30921fc5
- (id)_copyBootstrapURLs;	// 0x309220e1
- (id)_copyProductionBootstrapURLs;	// 0x30922131
- (id)_copySandboxBootstrapURLs;	// 0x30922295
- (void)_loadURLBagFromURL:(id)url;	// 0x309223c1
- (void)_postBagDidLoadNotificationWithURLBag:(id)_postBag;	// 0x309226b1
- (void)_writeURLBagToDiskCache:(id)diskCache;	// 0x30922709
// declared property getter: - (id)context;	// 0x309228d5
- (void)dealloc;	// 0x309217b9
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x30921be1
- (BOOL)operation:(id)operation shouldSetStoreFrontID:(id)anId;	// 0x30921ec9
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x30921f05
- (void)run;	// 0x30921809
- (id)uniqueKey;	// 0x30921b8d
@end


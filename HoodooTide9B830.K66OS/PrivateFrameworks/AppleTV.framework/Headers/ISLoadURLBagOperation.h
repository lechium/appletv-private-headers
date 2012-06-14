/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class SSURLBagContext;

__attribute__((visibility("hidden")))
@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
@private
	SSURLBagContext *_context;	// 60 = 0x3c
}
@property(readonly, assign) SSURLBagContext *context;	// G=0x32b60e39; @synthesize=_context
- (id)init;	// 0x32b600b1
- (id)initWithBagContext:(id)bagContext;	// 0x32b60125
- (void)_addHeadersToRequestProperties:(id)requestProperties;	// 0x32b607ed
- (id)_copyBootstrapURLs;	// 0x32b60909
- (id)_copyProductionBootstrapURLs;	// 0x32b60955
- (id)_copySandboxBootstrapURLs;	// 0x32b60ab5
- (void)_loadConfigurationFromURLBag:(id)urlbag;	// 0x32b6041d
- (void)_loadURLBagFromURL:(id)url;	// 0x32b60be5
// declared property getter: - (id)context;	// 0x32b60e39
- (void)dealloc;	// 0x32b60179
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x32b60421
- (BOOL)operation:(id)operation shouldSetStoreFrontID:(id)anId;	// 0x32b606f9
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x32b60735
- (void)run;	// 0x32b601cd
- (id)uniqueKey;	// 0x32b603cd
@end

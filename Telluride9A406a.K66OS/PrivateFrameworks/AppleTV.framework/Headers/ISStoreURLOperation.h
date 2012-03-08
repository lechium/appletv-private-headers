/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISURLOperation.h"

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

__attribute__((visibility("hidden")))
@interface ISStoreURLOperation : ISURLOperation {
@private
	NSNumber *_authenticatedDSID;	// 100 = 0x64
	BOOL _canSendGUIDParameter;	// 104 = 0x68
	BOOL _needsAuthentication;	// 105 = 0x69
	BOOL _needsURLBag;	// 106 = 0x6a
	BOOL _urlKnownToBeTrusted;	// 107 = 0x6b
	BOOL _useUserSpecificURLBag;	// 108 = 0x6c
}
@property(retain) NSNumber *authenticatedDSID;	// G=0x331c95b9; S=0x331c95cd; @synthesize=_authenticatedDSID
@property(assign) BOOL canSendGUIDParameter;	// G=0x331c7e49; S=0x331c7e85; 
@property(assign) id<ISStoreURLOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x331c95f1; S=0x331c9601; @synthesize=_needsAuthentication
@property(assign) BOOL needsURLBag;	// G=0x331c9611; S=0x331c9621; @synthesize=_needsURLBag
@property(assign) BOOL urlKnownToBeTrusted;	// G=0x331c9631; S=0x331c9641; @synthesize=_urlKnownToBeTrusted
@property(assign) BOOL useUserSpecificURLBag;	// G=0x331c9651; S=0x331c9661; @synthesize=_useUserSpecificURLBag
+ (void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext;	// 0x331c8555
+ (id)_restrictionsHeaderValue;	// 0x331c898d
+ (void)addITunesStoreHeadersToRequest:(id)request;	// 0x331c79dd
+ (void)handleITunesStoreResponseHeaders:(id)headers;	// 0x331c7a1d
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;	// 0x331c7b25
+ (id)pingOperationWithUrl:(id)url;	// 0x331c7cbd
+ (id)propertyListOperationWithURLBagKey:(id)urlbagKey;	// 0x331c7d6d
- (id)init;	// 0x331c793d
- (void)_addStandardQueryParametersForURL:(id)url;	// 0x331c8cad
- (BOOL)_authenticateReturningError:(id *)error;	// 0x331c8f05
- (BOOL)_canSendTokenToURL:(id)url;	// 0x331c8fdd
- (id)_copyAuthenticationContext;	// 0x331c7f09
- (id)_copyURLBagContext;	// 0x331c9041
- (void)_runURLOperation;	// 0x331c915d
- (id)_storeFrontIdentifier;	// 0x331c9485
- (id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;	// 0x331c9559
- (id)authenticatedAccountDSID;	// 0x331c7ec5
// declared property getter: - (id)authenticatedDSID;	// 0x331c95b9
// declared property getter: - (BOOL)canSendGUIDParameter;	// 0x331c7e49
- (void)dealloc;	// 0x331c7989
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x331c8075
- (void)handleResponse:(id)response;	// 0x331c80e5
// declared property getter: - (BOOL)needsAuthentication;	// 0x331c95f1
// declared property getter: - (BOOL)needsURLBag;	// 0x331c9611
- (id)newRequestWithURL:(id)url;	// 0x331c8155
- (void)run;	// 0x331c8349
// declared property setter: - (void)setAuthenticatedDSID:(id)dsid;	// 0x331c95cd
// declared property setter: - (void)setCanSendGUIDParameter:(BOOL)parameter;	// 0x331c7e85
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x331c9601
// declared property setter: - (void)setNeedsURLBag:(BOOL)bag;	// 0x331c9621
// declared property setter: - (void)setUrlKnownToBeTrusted:(BOOL)beTrusted;	// 0x331c9641
// declared property setter: - (void)setUseUserSpecificURLBag:(BOOL)bag;	// 0x331c9661
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x331c8475
// declared property getter: - (BOOL)urlKnownToBeTrusted;	// 0x331c9631
// declared property getter: - (BOOL)useUserSpecificURLBag;	// 0x331c9651
@end


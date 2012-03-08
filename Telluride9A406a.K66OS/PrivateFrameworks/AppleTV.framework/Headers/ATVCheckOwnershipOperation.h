/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class NSArray, SSAuthenticationContext;

__attribute__((visibility("hidden")))
@interface ATVCheckOwnershipOperation : ISOperation <ISStoreURLOperationDelegate> {
@private
	SSAuthenticationContext *_authenticationContext;	// 60 = 0x3c
	NSArray *_bundles;	// 64 = 0x40
	NSArray *_ownedBundles;	// 68 = 0x44
	NSArray *_unownedBundles;	// 72 = 0x48
}
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x331e8699; S=0x331e86f9; 
@property(retain) NSArray *bundles;	// G=0x331e8941; S=0x331e8955; @synthesize=_bundles
@property(retain) NSArray *ownedBundles;	// G=0x331e8979; S=0x331e898d; @synthesize=_ownedBundles
@property(retain) NSArray *unownedBundles;	// G=0x331e89b1; S=0x331e89c5; @synthesize=_unownedBundles
- (id)initWithBundleIDs:(id)bundleIDs;	// 0x331e85c9
- (int)_bagType;	// 0x331e89e9
- (id)_copyQueryStringDictionaryForBundles:(id)bundles;	// 0x331e8c15
- (id)_copyResponseForBundles:(id)bundles returningError:(id *)error;	// 0x331e8a29
- (BOOL)_loadResponseWithError:(id *)error;	// 0x331e8c8d
// declared property getter: - (id)authenticationContext;	// 0x331e8699
// declared property getter: - (id)bundles;	// 0x331e8941
- (void)dealloc;	// 0x331e8611
- (void)operation:(id)operation didAuthenticateWithDSID:(id)dsid;	// 0x331e8881
// declared property getter: - (id)ownedBundles;	// 0x331e8979
- (void)run;	// 0x331e8761
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x331e86f9
// declared property setter: - (void)setBundles:(id)bundles;	// 0x331e8955
// declared property setter: - (void)setOwnedBundles:(id)bundles;	// 0x331e898d
// declared property setter: - (void)setUnownedBundles:(id)bundles;	// 0x331e89c5
// declared property getter: - (id)unownedBundles;	// 0x331e89b1
@end


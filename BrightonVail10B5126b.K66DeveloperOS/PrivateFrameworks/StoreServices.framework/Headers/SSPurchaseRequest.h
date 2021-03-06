/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSArray;
@protocol SSPurchaseRequestDelegate;

@interface SSPurchaseRequest : SSRequest <SSXPCCoding> {
	BOOL _isBackgroundRequest;	// 28 = 0x1c
	NSArray *_purchases;	// 32 = 0x20
	BOOL _shouldValidatePurchases;	// 36 = 0x24
	BOOL _createsDownloads;	// 37 = 0x25
	BOOL _needsAuthentication;	// 38 = 0x26
}
@property(assign, nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest;	// G=0x354bbbdd; S=0x354bbbed; @synthesize=_isBackgroundRequest
@property(assign, nonatomic) BOOL createsDownloads;	// G=0x354bbbfd; S=0x354bbc0d; @synthesize=_createsDownloads
@property(assign, nonatomic) id<SSPurchaseRequestDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL needsAuthentication;	// G=0x354bbc1d; S=0x354bbc2d; @synthesize=_needsAuthentication
@property(readonly, assign) NSArray *purchases;	// G=0x354bada1; 
@property(assign, nonatomic) BOOL shouldValidatePurchases;	// G=0x354bbc3d; S=0x354bbc4d; @synthesize=_shouldValidatePurchases
- (id)init;	// 0x354bac69
- (id)initWithPurchases:(id)purchases;	// 0x354bac7d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354bb905
- (id)_purchaseForUniqueIdentifier:(id)uniqueIdentifier;	// 0x354bbaf5
- (id)copyXPCEncoding;	// 0x354bb705
// declared property getter: - (BOOL)createsDownloads;	// 0x354bbbfd
- (void)dealloc;	// 0x354bacfd
// declared property getter: - (BOOL)isBackgroundRequest;	// 0x354bbbdd
// declared property getter: - (BOOL)needsAuthentication;	// 0x354bbc1d
// declared property getter: - (id)purchases;	// 0x354bada1
// declared property setter: - (void)setBackgroundRequest:(BOOL)request;	// 0x354bbbed
// declared property setter: - (void)setCreatesDownloads:(BOOL)downloads;	// 0x354bbc0d
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x354bbc2d
// declared property setter: - (void)setShouldValidatePurchases:(BOOL)validatePurchases;	// 0x354bbc4d
// declared property getter: - (BOOL)shouldValidatePurchases;	// 0x354bbc3d
- (BOOL)start;	// 0x354bb3a1
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354bb691
- (void)startWithPurchaseBlock:(id)purchaseBlock completionBlock:(id)block;	// 0x354badd9
- (void)startWithPurchaseResponseBlock:(id)purchaseResponseBlock completionBlock:(id)block;	// 0x354baed1
@end


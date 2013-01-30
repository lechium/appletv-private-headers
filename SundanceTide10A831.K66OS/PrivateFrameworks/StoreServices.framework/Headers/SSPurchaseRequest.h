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
	BOOL _needsAuthentication;	// 37 = 0x25
}
@property(assign, nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest;	// G=0x378072d1; S=0x378072e1; @synthesize=_isBackgroundRequest
@property(assign, nonatomic) id<SSPurchaseRequestDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL needsAuthentication;	// G=0x378072f1; S=0x37807301; @synthesize=_needsAuthentication
@property(readonly, assign) NSArray *purchases;	// G=0x378066ad; 
@property(assign, nonatomic) BOOL shouldValidatePurchases;	// G=0x37807311; S=0x37807321; @synthesize=_shouldValidatePurchases
- (id)init;	// 0x37806581
- (id)initWithPurchases:(id)purchases;	// 0x37806595
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x37807015
- (id)_purchaseForUniqueIdentifier:(id)uniqueIdentifier;	// 0x378071e9
- (id)copyXPCEncoding;	// 0x37806e39
- (void)dealloc;	// 0x37806609
// declared property getter: - (BOOL)isBackgroundRequest;	// 0x378072d1
// declared property getter: - (BOOL)needsAuthentication;	// 0x378072f1
// declared property getter: - (id)purchases;	// 0x378066ad
// declared property setter: - (void)setBackgroundRequest:(BOOL)request;	// 0x378072e1
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x37807301
// declared property setter: - (void)setShouldValidatePurchases:(BOOL)validatePurchases;	// 0x37807321
// declared property getter: - (BOOL)shouldValidatePurchases;	// 0x37807311
- (BOOL)start;	// 0x37806ad5
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x37806dc5
- (void)startWithPurchaseBlock:(id)purchaseBlock completionBlock:(id)block;	// 0x378066e5
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSArray, ClientIdentity;
@protocol StorePurchaseBatchOperationDelegate;

__attribute__((visibility("hidden")))
@interface StorePurchaseBatchOperation : ISOperation {
@private
	ClientIdentity *_clientIdentity;	// 60 = 0x3c
	BOOL _isBackgroundRequest;	// 64 = 0x40
	BOOL _needsAuthentication;	// 65 = 0x41
	NSArray *_purchases;	// 68 = 0x44
}
@property(assign, getter=isBackgroundRequest) BOOL backgroundRequest;	// G=0x33bf6be1; S=0x33bf6c91; 
@property(retain) ClientIdentity *clientIdentity;	// G=0x33bf79d9; S=0x33bf79ed; @synthesize=_clientIdentity
@property(assign) id<StorePurchaseBatchOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x33bf6c1d; S=0x33bf6cd1; 
@property(readonly, assign) NSArray *purchases;	// G=0x33bf6c59; 
- (id)initWithPurchases:(id)purchases;	// 0x33bf6b45
- (BOOL)_authenticateReturningError:(id *)error;	// 0x33bf6e2d
- (void)_cancelPurchasesWithError:(id)error;	// 0x33bf7041
- (void)_checkUpdateQueueIfNecessary;	// 0x33bf7175
- (id)_clientIdentifierForPurchases:(id)purchases;	// 0x33bf7099
- (id)_copyRingtonePurchasesForPurchases:(id)purchases;	// 0x33bf7179
- (void)_notePurchasesFailed:(id)failed;	// 0x33bf7279
- (void)_notePurchasesFinished:(id)finished withDownloads:(id)downloads;	// 0x33bf727d
- (void)_runPurchaseOperations;	// 0x33bf7281
- (void)_sendDelegatePurchaseCompleteWithPurchase:(id)purchase error:(id)error;	// 0x33bf7631
- (void)_sendError:(id)error forPurchase:(id)purchase;	// 0x33bf7691
- (void)_sendPurchaseFailed:(id)failed withError:(id)error;	// 0x33bf779d
- (void)_sendPurchaseFinished:(id)finished;	// 0x33bf783d
- (id)_userAgentForPurchases:(id)purchases;	// 0x33bf78dd
// declared property getter: - (id)clientIdentity;	// 0x33bf79d9
- (void)dealloc;	// 0x33bf6b95
// declared property getter: - (BOOL)isBackgroundRequest;	// 0x33bf6be1
// declared property getter: - (BOOL)needsAuthentication;	// 0x33bf6c1d
// declared property getter: - (id)purchases;	// 0x33bf6c59
- (void)run;	// 0x33bf6d11
// declared property setter: - (void)setBackgroundRequest:(BOOL)request;	// 0x33bf6c91
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x33bf79ed
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x33bf6cd1
@end

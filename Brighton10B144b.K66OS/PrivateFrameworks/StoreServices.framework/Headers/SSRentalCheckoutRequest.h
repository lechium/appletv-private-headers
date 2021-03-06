/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSNumber, NSArray;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {
	NSNumber *_accountIdentifier;	// 28 = 0x1c
	long long _downloadIdentifier;	// 32 = 0x20
	NSNumber *_rentalKeyIdentifier;	// 40 = 0x28
	NSArray *_sinfs;	// 44 = 0x2c
}
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x354c6089; 
@property(readonly, assign) long long downloadIdentifier;	// G=0x354c60c1; 
@property(readonly, assign) NSNumber *rentalKeyIdentifier;	// G=0x354c60d9; 
@property(readonly, assign) NSArray *sinfs;	// G=0x354c6111; 
- (id)init;	// 0x354c5d8d
- (id)initWithAccountIdentifier:(id)accountIdentifier rentalKeyIdentifier:(id)identifier;	// 0x354c5da1
- (id)initWithDownloadIdentifier:(long long)downloadIdentifier;	// 0x354c5ec9
- (id)initWithSinfs:(id)sinfs;	// 0x354c5f5d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354c64a1
// declared property getter: - (id)accountIdentifier;	// 0x354c6089
- (id)copyXPCEncoding;	// 0x354c640d
- (void)dealloc;	// 0x354c6011
// declared property getter: - (long long)downloadIdentifier;	// 0x354c60c1
// declared property getter: - (id)rentalKeyIdentifier;	// 0x354c60d9
// declared property getter: - (id)sinfs;	// 0x354c6111
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354c6149
- (void)startWithConnectionResponseBlock:(id)connectionResponseBlock;	// 0x354c61c1
@end


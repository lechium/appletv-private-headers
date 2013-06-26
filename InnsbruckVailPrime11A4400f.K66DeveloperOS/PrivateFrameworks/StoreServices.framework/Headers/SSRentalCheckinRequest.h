/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class NSNumber, NSArray;

@interface SSRentalCheckinRequest : SSRequest {
	NSNumber *_accountIdentifier;	// 28 = 0x1c
	NSNumber *_rentalKeyIdentifier;	// 32 = 0x20
	NSArray *_sinfs;	// 36 = 0x24
}
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x3281e7d5; 
@property(readonly, assign) NSNumber *rentalKeyIdentifier;	// G=0x3281e80d; 
@property(readonly, assign) NSArray *sinfs;	// G=0x3281e845; 
- (id)init;	// 0x3281e569
- (id)initWithAccountIdentifier:(id)accountIdentifier rentalKeyIdentifier:(id)identifier;	// 0x3281e57d
- (id)initWithSinfs:(id)sinfs;	// 0x3281e6a5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3281ebb1
// declared property getter: - (id)accountIdentifier;	// 0x3281e7d5
- (id)copyXPCEncoding;	// 0x3281eb41
- (void)dealloc;	// 0x3281e75d
// declared property getter: - (id)rentalKeyIdentifier;	// 0x3281e80d
// declared property getter: - (id)sinfs;	// 0x3281e845
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x3281e87d
- (void)startWithConnectionResponseBlock:(id)connectionResponseBlock;	// 0x3281e8f5
@end

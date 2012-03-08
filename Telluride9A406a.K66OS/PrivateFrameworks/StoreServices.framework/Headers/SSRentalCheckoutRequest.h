/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class NSArray, NSNumber;

@interface SSRentalCheckoutRequest : SSRequest <SSCoding> {
@private
	NSNumber *_accountIdentifier;	// 36 = 0x24
	long long _downloadIdentifier;	// 40 = 0x28
	NSNumber *_rentalKeyIdentifier;	// 48 = 0x30
	NSArray *_sinfs;	// 52 = 0x34
}
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x31552469; 
@property(readonly, assign) long long downloadIdentifier;	// G=0x315524a1; 
@property(readonly, assign) NSNumber *rentalKeyIdentifier;	// G=0x315524b9; 
@property(readonly, assign) NSArray *sinfs;	// G=0x315524f1; 
- (id)init;	// 0x31551f3d
- (id)initWithAccountIdentifier:(id)accountIdentifier rentalKeyIdentifier:(id)identifier;	// 0x31551f51
- (id)initWithDownloadIdentifier:(long long)downloadIdentifier;	// 0x31552075
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x31552331
- (id)initWithSinfs:(id)sinfs;	// 0x31552109
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3155242d
// declared property getter: - (id)accountIdentifier;	// 0x31552469
- (id)copyPropertyListEncoding;	// 0x31552231
- (void *)copyXPCEncoding;	// 0x315522fd
- (void)dealloc;	// 0x315521bd
// declared property getter: - (long long)downloadIdentifier;	// 0x315524a1
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x31552529
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x31552585
// declared property getter: - (id)rentalKeyIdentifier;	// 0x315524b9
// declared property getter: - (id)sinfs;	// 0x315524f1
@end


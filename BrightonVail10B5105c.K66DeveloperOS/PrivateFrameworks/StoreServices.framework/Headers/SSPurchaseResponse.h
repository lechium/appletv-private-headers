/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"

@class SSPurchase, NSError, SSURLConnectionResponse;

@interface SSPurchaseResponse : NSObject <SSXPCCoding> {
	NSError *_error;	// 4 = 0x4
	SSPurchase *_purchase;	// 8 = 0x8
	SSURLConnectionResponse *_response;	// 12 = 0xc
}
@property(retain, nonatomic) SSURLConnectionResponse *URLResponse;	// G=0x35892045; S=0x35892055; @synthesize=_response
@property(copy, nonatomic) NSError *error;	// G=0x35891ffd; S=0x35892011; @synthesize=_error
@property(copy, nonatomic) SSPurchase *purchase;	// G=0x35892021; S=0x35892035; @synthesize=_purchase
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x35891e59
// declared property getter: - (id)URLResponse;	// 0x35892045
- (id)copyXPCEncoding;	// 0x35891f8d
- (void)dealloc;	// 0x35891de1
// declared property getter: - (id)error;	// 0x35891ffd
// declared property getter: - (id)purchase;	// 0x35892021
// declared property setter: - (void)setError:(id)error;	// 0x35892011
// declared property setter: - (void)setPurchase:(id)purchase;	// 0x35892035
// declared property setter: - (void)setURLResponse:(id)response;	// 0x35892055
@end


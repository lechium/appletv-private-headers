/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSData, NSError, NSDictionary;

@interface HSResponse : NSObject {
@private
	CFHTTPMessageRef _CFHTTPMessage;	// 4 = 0x4
	NSData *_responseData;	// 8 = 0x8
	unsigned _responseCode;	// 12 = 0xc
	NSDictionary *_responseHeaderFields;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
}
@property(assign, nonatomic) CFHTTPMessageRef CFHTTPMessage;	// G=0x301412d1; S=0x30141299; @synthesize=_CFHTTPMessage
@property(readonly, assign, nonatomic) NSError *error;	// G=0x30141311; @synthesize=_error
@property(readonly, assign, nonatomic) unsigned responseCode;	// G=0x301412f1; @synthesize=_responseCode
@property(readonly, assign, nonatomic) NSData *responseData;	// G=0x301412e1; @synthesize=_responseData
@property(readonly, assign, nonatomic) NSDictionary *responseHeaderFields;	// G=0x30141301; @synthesize=_responseHeaderFields
+ (id)responseWithCode:(unsigned)code headerFields:(id)fields data:(id)data error:(id)error;	// 0x30141101
+ (id)responseWithResponse:(id)response;	// 0x3014115d
- (id)initWithCode:(unsigned)code headerFields:(id)fields data:(id)data error:(id)error;	// 0x30140fcd
// declared property getter: - (CFHTTPMessageRef)CFHTTPMessage;	// 0x301412d1
- (void)dealloc;	// 0x30141075
- (id)description;	// 0x3014120d
// declared property getter: - (id)error;	// 0x30141311
// declared property getter: - (unsigned)responseCode;	// 0x301412f1
// declared property getter: - (id)responseData;	// 0x301412e1
// declared property getter: - (id)responseHeaderFields;	// 0x30141301
// declared property setter: - (void)setCFHTTPMessage:(CFHTTPMessageRef)message;	// 0x30141299
@end


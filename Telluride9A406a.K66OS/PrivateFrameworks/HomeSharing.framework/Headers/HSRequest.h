/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSString, NSData, NSDictionary;

@interface HSRequest : NSObject {
@private
	NSString *_action;	// 4 = 0x4
	NSData *_bodyData;	// 8 = 0x8
	NSDictionary *_headers;	// 12 = 0xc
	NSDictionary *_arguments;	// 16 = 0x10
	CFHTTPMessageRef _message;	// 20 = 0x14
	int _method;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *action;	// G=0x30140f69; @synthesize=_action
@property(copy, nonatomic) NSData *bodyData;	// G=0x30140f79; S=0x30140f89; @synthesize=_bodyData
@property(assign, nonatomic) int method;	// G=0x30140fad; S=0x30140fbd; @synthesize=_method
+ (id)request;	// 0x30140845
- (id)initWithAction:(id)action;	// 0x301408e5
- (CFHTTPMessageRef)CFHTTPMessageForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x30140cad
- (id)_defaultHeaderFields;	// 0x30140ed9
- (id)_methodStringForMethod:(int)method;	// 0x30140f4d
- (BOOL)acceptsGzipEncoding;	// 0x30140ed5
// declared property getter: - (id)action;	// 0x30140f69
// declared property getter: - (id)bodyData;	// 0x30140f79
- (id)canonicalResponseForResponse:(id)response;	// 0x30140ed1
- (void)dealloc;	// 0x30140969
- (id)description;	// 0x30140a09
// declared property getter: - (int)method;	// 0x30140fad
- (id)requestURLForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x30140b01
- (id)requestURLForConnection:(id)connection;	// 0x30140725
// declared property setter: - (void)setBodyData:(id)data;	// 0x30140f89
// declared property setter: - (void)setMethod:(int)method;	// 0x30140fbd
- (void)setValue:(id)value forArgument:(id)argument;	// 0x30140a91
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x30140a71
@end


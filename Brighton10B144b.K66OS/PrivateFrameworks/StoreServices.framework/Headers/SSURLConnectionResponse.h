/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"

@class NSURL, NSDictionary, NSData, NSString;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding> {
	NSDictionary *_allHeaderFields;	// 4 = 0x4
	NSData *_body;	// 8 = 0x8
	long long _expectedContentLength;	// 12 = 0xc
	NSString *_mimeType;	// 20 = 0x14
	int _statusCode;	// 24 = 0x18
	NSString *_suggestedFilename;	// 28 = 0x1c
	NSString *_textEncodingName;	// 32 = 0x20
	NSURL *_url;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x354dea5d; @synthesize=_mimeType
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x354dea8d; @synthesize=_url
@property(readonly, retain) NSDictionary *allHeaderFields;	// G=0x354de6e9; converted property
@property(readonly, assign, nonatomic) NSData *bodyData;	// G=0x354dea35; @synthesize=_body
@property(readonly, assign, nonatomic) long long expectedContentLength;	// G=0x354dea45; @synthesize=_expectedContentLength
@property(readonly, assign) int statusCode;	// G=0x354de721; converted property
@property(readonly, assign, nonatomic) NSString *suggestedFilename;	// G=0x354dea6d; @synthesize=_suggestedFilename
@property(readonly, assign, nonatomic) NSString *textEncodingName;	// G=0x354dea7d; @synthesize=_textEncodingName
- (id)initWithURLResponse:(id)urlresponse bodyData:(id)data;	// 0x354de4c5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354de83d
// declared property getter: - (id)MIMEType;	// 0x354dea5d
// declared property getter: - (id)URL;	// 0x354dea8d
// converted property getter: - (id)allHeaderFields;	// 0x354de6e9
// declared property getter: - (id)bodyData;	// 0x354dea35
- (id)copyXPCEncoding;	// 0x354de731
- (void)dealloc;	// 0x354de635
// declared property getter: - (long long)expectedContentLength;	// 0x354dea45
// converted property getter: - (int)statusCode;	// 0x354de721
// declared property getter: - (id)suggestedFilename;	// 0x354dea6d
// declared property getter: - (id)textEncodingName;	// 0x354dea7d
@end


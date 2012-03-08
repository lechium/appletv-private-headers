/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSData, NSMutableData, NSError, NSString, NSURLConnection, NSMutableDictionary, NSHTTPURLResponse, NSURLCredential, NSURL;

__attribute__((visibility("hidden")))
@interface MMRequest : NSObject {
@private
	NSData *_messageBody;	// 4 = 0x4
	NSString *_method;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURL *_originalUrl;	// 16 = 0x10
	NSMutableDictionary *_requestHeaders;	// 20 = 0x14
	NSHTTPURLResponse *_response;	// 24 = 0x18
	NSMutableData *_responseData;	// 28 = 0x1c
	NSURLCredential *_credentials;	// 32 = 0x20
	NSError *_error;	// 36 = 0x24
	NSURLConnection *_connection;	// 40 = 0x28
	BOOL _requestStarted;	// 44 = 0x2c
	BOOL _requestCompleted;	// 45 = 0x2d
}
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x332484ad; S=0x332487f5; @synthesize=_connection
@property(retain, nonatomic) NSURLCredential *credentials;	// G=0x332484cd; S=0x332487a5; @synthesize=_credentials
@property(retain, nonatomic) NSError *error;	// G=0x332484bd; S=0x332487cd; @synthesize=_error
@property(retain, nonatomic) NSData *messageBody;	// G=0x3324854d; S=0x332486b5; @synthesize=_messageBody
@property(retain, nonatomic) NSString *method;	// G=0x3324853d; S=0x332486dd; @synthesize=_method
@property(retain, nonatomic) NSURL *originalUrl;	// G=0x3324851d; S=0x3324872d; @synthesize=_originalUrl
@property(assign, nonatomic) BOOL requestCompleted;	// G=0x3324846d; S=0x3324847d; @synthesize=_requestCompleted
@property(retain, nonatomic) NSMutableDictionary *requestHeaders;	// G=0x3324850d; S=0x33248755; @synthesize=_requestHeaders
@property(assign, nonatomic) BOOL requestStarted;	// G=0x3324848d; S=0x3324849d; @synthesize=_requestStarted
@property(retain, nonatomic) NSHTTPURLResponse *response;	// G=0x332484fd; S=0x3324877d; @synthesize=_response
@property(assign, nonatomic) NSMutableData *responseData;	// G=0x332484dd; S=0x332484ed; @synthesize=_responseData
@property(retain, nonatomic) NSURL *url;	// G=0x3324852d; S=0x33248705; @synthesize=_url
- (id)initWithMessage:(id)message usingMethod:(id)method headers:(id)headers url:(id)url;	// 0x3324855d
- (void)_cleanUpConnection;	// 0x33248a2d
- (void)_runRequestThread;	// 0x33248cad
- (id)_urlRequest;	// 0x33248ac1
// declared property getter: - (id)connection;	// 0x332484ad
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33248841
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x33248969
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x33248901
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x332488ed
- (void)connectionDidFinishLoading:(id)connection;	// 0x3324881d
// declared property getter: - (id)credentials;	// 0x332484cd
- (void)dealloc;	// 0x33248e61
// declared property getter: - (id)error;	// 0x332484bd
- (int)httpStatusCode;	// 0x33248c7d
// declared property getter: - (id)messageBody;	// 0x3324854d
// declared property getter: - (id)method;	// 0x3324853d
// declared property getter: - (id)originalUrl;	// 0x3324851d
// declared property getter: - (BOOL)requestCompleted;	// 0x3324846d
// declared property getter: - (id)requestHeaders;	// 0x3324850d
// declared property getter: - (BOOL)requestStarted;	// 0x3324848d
// declared property getter: - (id)response;	// 0x332484fd
// declared property getter: - (id)responseData;	// 0x332484dd
- (id)result;	// 0x33248c6d
- (void)sendAsynchronously;	// 0x33248e21
- (void)sendSynchronously;	// 0x33248dc5
// declared property setter: - (void)setConnection:(id)connection;	// 0x332487f5
// declared property setter: - (void)setCredentials:(id)credentials;	// 0x332487a5
// declared property setter: - (void)setError:(id)error;	// 0x332487cd
// declared property setter: - (void)setMessageBody:(id)body;	// 0x332486b5
// declared property setter: - (void)setMethod:(id)method;	// 0x332486dd
// declared property setter: - (void)setOriginalUrl:(id)url;	// 0x3324872d
// declared property setter: - (void)setRequestCompleted:(BOOL)completed;	// 0x3324847d
// declared property setter: - (void)setRequestHeaders:(id)headers;	// 0x33248755
// declared property setter: - (void)setRequestStarted:(BOOL)started;	// 0x3324849d
// declared property setter: - (void)setResponse:(id)response;	// 0x3324877d
// declared property setter: - (void)setResponseData:(id)data;	// 0x332484ed
// declared property setter: - (void)setUrl:(id)url;	// 0x33248705
- (void)setUsername:(id)username andPassword:(id)password;	// 0x33248bc9
- (void)setValue:(id)value forHeader:(id)header;	// 0x33248c35
// declared property getter: - (id)url;	// 0x3324852d
@end


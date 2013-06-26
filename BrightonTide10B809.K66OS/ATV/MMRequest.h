/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSURLCredential, NSURL, NSString, NSError, NSURLConnection, NSData, NSHTTPURLResponse, NSMutableData;

@interface MMRequest : XXUnknownSuperclass {
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
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x84de31; S=0x84de41; @synthesize=_connection
@property(retain, nonatomic) NSURLCredential *credentials;	// G=0x84ddf1; S=0x84de01; @synthesize=_credentials
@property(retain, nonatomic) NSError *error;	// G=0x84de11; S=0x84de21; @synthesize=_error
@property(retain, nonatomic) NSData *messageBody;	// G=0x84dd11; S=0x84dd21; @synthesize=_messageBody
@property(retain, nonatomic) NSString *method;	// G=0x84dd31; S=0x84dd41; @synthesize=_method
@property(retain, nonatomic) NSURL *originalUrl;	// G=0x84dd71; S=0x84dd81; @synthesize=_originalUrl
@property(assign, nonatomic) BOOL requestCompleted;	// G=0x84de71; S=0x84de81; @synthesize=_requestCompleted
@property(retain, nonatomic) NSMutableDictionary *requestHeaders;	// G=0x84dd91; S=0x84dda1; @synthesize=_requestHeaders
@property(assign, nonatomic) BOOL requestStarted;	// G=0x84de51; S=0x84de61; @synthesize=_requestStarted
@property(retain, nonatomic) NSHTTPURLResponse *response;	// G=0x84ddb1; S=0x84ddc1; @synthesize=_response
@property(assign, nonatomic) NSMutableData *responseData;	// G=0x84ddd1; S=0x84dde1; @synthesize=_responseData
@property(retain, nonatomic) NSURL *url;	// G=0x84dd51; S=0x84dd61; @synthesize=_url
- (id)initWithMessage:(id)message usingMethod:(id)method headers:(id)headers url:(id)url;	// 0x84d479
- (void)_cleanUpConnection;	// 0x84da59
- (void)_runRequestThread;	// 0x84d771
- (id)_urlRequest;	// 0x84d965
// declared property getter: - (id)connection;	// 0x84de31
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x84dc3d
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x84daf1
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x84dbbd
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x84dc29
- (void)connectionDidFinishLoading:(id)connection;	// 0x84dced
// declared property getter: - (id)credentials;	// 0x84ddf1
- (void)dealloc;	// 0x84d5d1
// declared property getter: - (id)error;	// 0x84de11
- (int)httpStatusCode;	// 0x84d87d
// declared property getter: - (id)messageBody;	// 0x84dd11
// declared property getter: - (id)method;	// 0x84dd31
// declared property getter: - (id)originalUrl;	// 0x84dd71
// declared property getter: - (BOOL)requestCompleted;	// 0x84de71
// declared property getter: - (id)requestHeaders;	// 0x84dd91
// declared property getter: - (BOOL)requestStarted;	// 0x84de51
// declared property getter: - (id)response;	// 0x84ddb1
// declared property getter: - (id)responseData;	// 0x84ddd1
- (id)result;	// 0x84d8ad
- (void)sendAsynchronously;	// 0x84d6d5
- (void)sendSynchronously;	// 0x84d711
// declared property setter: - (void)setConnection:(id)connection;	// 0x84de41
// declared property setter: - (void)setCredentials:(id)credentials;	// 0x84de01
// declared property setter: - (void)setError:(id)error;	// 0x84de21
// declared property setter: - (void)setMessageBody:(id)body;	// 0x84dd21
// declared property setter: - (void)setMethod:(id)method;	// 0x84dd41
// declared property setter: - (void)setOriginalUrl:(id)url;	// 0x84dd81
// declared property setter: - (void)setRequestCompleted:(BOOL)completed;	// 0x84de81
// declared property setter: - (void)setRequestHeaders:(id)headers;	// 0x84dda1
// declared property setter: - (void)setRequestStarted:(BOOL)started;	// 0x84de61
// declared property setter: - (void)setResponse:(id)response;	// 0x84ddc1
// declared property setter: - (void)setResponseData:(id)data;	// 0x84dde1
// declared property setter: - (void)setUrl:(id)url;	// 0x84dd61
- (void)setUsername:(id)username andPassword:(id)password;	// 0x84d8f9
- (void)setValue:(id)value forHeader:(id)header;	// 0x84d8bd
// declared property getter: - (id)url;	// 0x84dd51
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSError, NSURLConnection, NSData, NSString, NSURL;

@interface MCHTTPTransaction : NSObject {
@private
	NSURL *_requestURL;	// 4 = 0x4
	NSString *_method;	// 8 = 0x8
	double _timeout;	// 12 = 0xc
	NSString *_userAgent;	// 20 = 0x14
	NSString *_contentType;	// 24 = 0x18
	NSData *_data;	// 28 = 0x1c
	SecIdentity *_identity;	// 32 = 0x20
	NSString *_CMSSignatureHeaderName;	// 36 = 0x24
	NSURL *_currentURL;	// 40 = 0x28
	NSURL *_permanentlyRedirectedURL;	// 44 = 0x2c
	BOOL _rememberData;	// 48 = 0x30
	NSMutableData *_responseData;	// 52 = 0x34
	int _statusCode;	// 56 = 0x38
	NSError *_error;	// 60 = 0x3c
	NSURLConnection *_connection;	// 64 = 0x40
	dispatch_semaphore_s *_doneSema;	// 68 = 0x44
}
@property(retain) NSString *CMSSignatureHeaderName;	// G=0x3006b951; S=0x3006ba45; @synthesize=_CMSSignatureHeaderName
@property(retain) NSString *contentType;	// G=0x3006b921; S=0x3006b9ed; @synthesize=_contentType
@property(retain) NSData *data;	// G=0x3006b939; S=0x3006ba19; @synthesize=_data
@property(readonly, assign) NSError *error;	// G=0x3006a8e5; @synthesize=_error
@property(retain) NSString *method;	// G=0x3006b8f1; S=0x3006b995; @synthesize=_method
@property(readonly, assign) NSURL *permanentlyRedirectedURL;	// G=0x3006a8d5; @synthesize=_permanentlyRedirectedURL
@property(readonly, assign) NSData *responseData;	// G=0x3006a8f5; @synthesize=_responseData
@property(readonly, assign) int statusCode;	// G=0x3006a8c5; @synthesize=_statusCode
@property(assign) double timeout;	// G=0x3006ba9d; S=0x3006ba71; @synthesize=_timeout
@property(retain) NSURL *url;	// G=0x3006b8d9; S=0x3006b969; @synthesize=_requestURL
@property(retain) NSString *userAgent;	// G=0x3006b909; S=0x3006b9c1; @synthesize=_userAgent
+ (id)performRequestURL:(id)url method:(id)method timeout:(double)timeout userAgent:(id)agent contentType:(id)type data:(id)data identity:(SecIdentity *)identity outPermanentlyRedirectedURL:(id *)url8 outError:(id *)error;	// 0x3006aaa9
+ (id)transactionWithURL:(id)url method:(id)method;	// 0x3006abf1
- (id)initWithURL:(id)url method:(id)method;	// 0x3006ac35
// declared property getter: - (id)CMSSignatureHeaderName;	// 0x3006b951
- (void)_beginTransaction;	// 0x3006ae79
- (BOOL)_shouldAllowTrust:(SecTrust *)trust forHost:(id)host;	// 0x3006b241
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x3006add9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3006b7d1
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x3006b2b9
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3006a965
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3006b67d
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x3006acc1
- (void)connectionDidFinishLoading:(id)connection;	// 0x3006b629
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x3006a8c1
// declared property getter: - (id)contentType;	// 0x3006b921
- (SecIdentity *)copyIdentity;	// 0x3006a905
// declared property getter: - (id)data;	// 0x3006b939
- (void)dealloc;	// 0x3006a999
// declared property getter: - (id)error;	// 0x3006a8e5
// declared property getter: - (id)method;	// 0x3006b8f1
- (void)performSynchronously;	// 0x3006b099
// declared property getter: - (id)permanentlyRedirectedURL;	// 0x3006a8d5
// declared property getter: - (id)responseData;	// 0x3006a8f5
// declared property setter: - (void)setCMSSignatureHeaderName:(id)name;	// 0x3006ba45
// declared property setter: - (void)setContentType:(id)type;	// 0x3006b9ed
// declared property setter: - (void)setData:(id)data;	// 0x3006ba19
- (void)setIdentity:(SecIdentity *)identity;	// 0x3006a92d
// declared property setter: - (void)setMethod:(id)method;	// 0x3006b995
// declared property setter: - (void)setTimeout:(double)timeout;	// 0x3006ba71
// declared property setter: - (void)setUrl:(id)url;	// 0x3006b969
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x3006b9c1
// declared property getter: - (int)statusCode;	// 0x3006a8c5
// declared property getter: - (double)timeout;	// 0x3006ba9d
// declared property getter: - (id)url;	// 0x3006b8d9
// declared property getter: - (id)userAgent;	// 0x3006b909
@end


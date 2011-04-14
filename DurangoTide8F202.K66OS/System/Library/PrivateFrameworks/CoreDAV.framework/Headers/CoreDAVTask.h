/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAV-Structs.h"

@class NSError, CoreDAVRequestLogger, NSDictionary, NSHTTPURLResponse, NSURLConnection, NSURLRequest, NSDate, NSURL;
@protocol CoreDAVTaskManager, CoreDAVTaskDelegate, CoreDAVAccountInfoProvider, CoreDAVResponseBodyParser;

@interface CoreDAVTask : NSObject {
	id<CoreDAVTaskManager> _taskManager;	// 4 = 0x4
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 8 = 0x8
	int _numDownloadedElements;	// 12 = 0xc
	int _depth;	// 16 = 0x10
@private
	NSHTTPURLResponse *_response;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
	NSURLRequest *_request;	// 28 = 0x1c
	double _timeoutInterval;	// 32 = 0x20
	int _responseStatusCode;	// 40 = 0x28
	NSDate *_dateConnectionWentOut;	// 44 = 0x2c
	BOOL _didSendRequest;	// 48 = 0x30
	BOOL _didFailWithError;	// 49 = 0x31
	BOOL _didCancel;	// 50 = 0x32
	BOOL _didReceiveResponse;	// 51 = 0x33
	BOOL _didReceiveData;	// 52 = 0x34
	BOOL _didFinishLoading;	// 53 = 0x35
	BOOL _finished;	// 54 = 0x36
	void *_context;	// 56 = 0x38
	BOOL _receivedBadPasswordResponse;	// 60 = 0x3c
	NSError *_passwordNotificationError;	// 64 = 0x40
	id<CoreDAVResponseBodyParser> _responseBodyParser;	// 68 = 0x44
	CoreDAVRequestLogger *_logger;	// 72 = 0x48
	NSURL *_url;	// 76 = 0x4c
	id<CoreDAVTaskDelegate> _delegate;	// 80 = 0x50
	id _requestProgressBlock;	// 84 = 0x54
	id _responseProgressBlock;	// 88 = 0x58
	id _completionBlock;	// 92 = 0x5c
	NSError *_error;	// 96 = 0x60
	unsigned _totalBytesReceived;	// 100 = 0x64
}
@property(assign, nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x317a9955; S=0x317a9965; @synthesize=_accountInfoProvider
@property(copy, nonatomic) id completionBlock;	// G=0x317a98a5; S=0x317acbdd; @synthesize=_completionBlock
@property(assign, nonatomic) void *context;	// G=0x317a9915; S=0x317a9925; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// G=0x317a9935; S=0x317a9945; @synthesize=_delegate
@property(assign) int depth;	// G=0x317a98f5; S=0x317a9905; @synthesize=_depth
@property(retain, nonatomic) NSError *error;	// G=0x317a9895; S=0x317acc09; @synthesize=_error
@property(readonly, assign) int numDownloadedElements;	// G=0x317a9865; converted property
@property(copy, nonatomic) id requestProgressBlock;	// G=0x317a98c5; S=0x317acb85; @synthesize=_requestProgressBlock
@property(retain) id<CoreDAVResponseBodyParser> responseBodyParser;	// G=0x317acc49; S=0x317acb59; @synthesize=_responseBodyParser
@property(readonly, retain) NSDictionary *responseHeaders;	// G=0x317a9c69; 
@property(copy, nonatomic) id responseProgressBlock;	// G=0x317a98b5; S=0x317acbb1; @synthesize=_responseProgressBlock
@property(assign, nonatomic) int responseStatusCode;	// G=0x317a98d5; S=0x317a98e5; @synthesize=_responseStatusCode
@property(assign, nonatomic) id<CoreDAVTaskManager> taskManager;	// G=0x317a9975; S=0x317a9985; @synthesize=_taskManager
@property(assign) double timeoutInterval;	// G=0x317acc8d; S=0x317acc61; @synthesize=_timeoutInterval
@property(assign, nonatomic) unsigned totalBytesReceived;	// G=0x317a9875; S=0x317a9885; @synthesize=_totalBytesReceived
@property(readonly, retain) NSURL *url;	// G=0x317acc31; @synthesize=_url
+ (unsigned)uniqueQueryID;	// 0x317a983d
- (id)initWithURL:(id)url;	// 0x317ab34d
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x317aca55
- (id)_createBodyData;	// 0x317a9d79
- (void)_failImmediately;	// 0x317ab2a5
- (void)_handleBadPasswordResponse;	// 0x317a9d21
- (BOOL)_includeGeneralHeaders;	// 0x317a9e75
// declared property getter: - (id)accountInfoProvider;	// 0x317a9955
- (id)additionalHeaderValues;	// 0x317a985d
// declared property getter: - (id)completionBlock;	// 0x317a98a5
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x317aa665
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x317ab65d
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x317ab94d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x317aac65
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x317aa091
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x317a9cd9
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x317aac31
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x317aa845
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x317aa4f5
- (void)connectionDidFinishLoading:(id)connection;	// 0x317aa189
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x317a9c89
// declared property getter: - (void *)context;	// 0x317a9915
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x317a9e49
- (void)dealloc;	// 0x317ab42d
// declared property getter: - (id)delegate;	// 0x317a9935
// declared property getter: - (int)depth;	// 0x317a98f5
- (id)description;	// 0x317a9ea9
// declared property getter: - (id)error;	// 0x317a9895
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x317ab081
- (id)httpMethod;	// 0x317a984d
- (void)loadRequest:(id)request;	// 0x317abcc1
// converted property getter: - (int)numDownloadedElements;	// 0x317a9865
- (void)performCoreDAVTask;	// 0x317ac205
- (void)reportStatusWithError:(id)error;	// 0x317a9995
- (id)requestBody;	// 0x317ab329
- (id)requestBodyStream;	// 0x317a9859
// declared property getter: - (id)requestProgressBlock;	// 0x317a98c5
- (void)reset;	// 0x317a9b81
// declared property getter: - (id)responseBodyParser;	// 0x317acc49
// declared property getter: - (id)responseHeaders;	// 0x317a9c69
// declared property getter: - (id)responseProgressBlock;	// 0x317a98b5
// declared property getter: - (int)responseStatusCode;	// 0x317a98d5
// declared property setter: - (void)setAccountInfoProvider:(id)provider;	// 0x317a9965
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x317acbdd
// declared property setter: - (void)setContext:(void *)context;	// 0x317a9925
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x317a9945
// declared property setter: - (void)setDepth:(int)depth;	// 0x317a9905
// declared property setter: - (void)setError:(id)error;	// 0x317acc09
// declared property setter: - (void)setRequestProgressBlock:(id)block;	// 0x317acb85
// declared property setter: - (void)setResponseBodyParser:(id)parser;	// 0x317acb59
// declared property setter: - (void)setResponseProgressBlock:(id)block;	// 0x317acbb1
// declared property setter: - (void)setResponseStatusCode:(int)code;	// 0x317a98e5
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x317a9985
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x317acc61
// declared property setter: - (void)setTotalBytesReceived:(unsigned)received;	// 0x317a9885
- (void)startModal;	// 0x317a9c55
// declared property getter: - (id)taskManager;	// 0x317a9975
- (void)tearDownResources;	// 0x317a9d9d
// declared property getter: - (double)timeoutInterval;	// 0x317acc8d
// declared property getter: - (unsigned)totalBytesReceived;	// 0x317a9875
// declared property getter: - (id)url;	// 0x317acc31
- (BOOL)validate:(id *)validate;	// 0x317a9861
@end


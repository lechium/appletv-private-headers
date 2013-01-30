/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "NSURLConnectionDelegate.h"
#import "YouTubeATV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSURLRequest, NSURLConnection;

@interface XMLSAXHTTPRequest : NSObject <NSURLConnectionDelegate> {
	NSURLRequest *_request;	// 4 = 0x4
	NSURLConnection *_connection;	// 8 = 0x8
	NSMutableData *_rawData;	// 12 = 0xc
	xmlSAXHandler _saxHandler;	// 16 = 0x10
	BOOL _invalidResponse;	// 144 = 0x90
}
@property(readonly, retain) NSURLRequest *request;	// G=0x352d2611; converted property
+ (BOOL)anyRequestLoading;	// 0x352d231d
+ (id)serviceUnavailableError;	// 0x352d22d5
+ (unsigned)uniqueQueryID;	// 0x352d2331
- (id)init;	// 0x352d2345
- (void)_finishedLoading;	// 0x352d2441
- (void)_startedLoading;	// 0x352d2401
- (void)cancel;	// 0x352d2519
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x352d27f5
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x352d267d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x352d2649
- (void)connectionDidFinishLoading:(id)connection;	// 0x352d26f1
- (void)dealloc;	// 0x352d23c1
- (void)didParseData;	// 0x352d2841
- (void)failWithError:(id)error;	// 0x352d2865
- (BOOL)isLoading;	// 0x352d25b5
- (void)loadRequest:(id)request;	// 0x352d2481
- (void)loadStatusChanged;	// 0x352d25cd
- (int)parseData:(id)data;	// 0x352d2845
- (BOOL)receivedValidResponse:(id)response;	// 0x352d2881
// converted property getter: - (id)request;	// 0x352d2611
- (void)willParseData;	// 0x352d283d
@end

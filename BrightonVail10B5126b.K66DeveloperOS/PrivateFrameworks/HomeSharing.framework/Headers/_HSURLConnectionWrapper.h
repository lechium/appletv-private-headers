/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSURLRequest, NSURLConnection, NSMutableData, NSURLResponse;
@protocol OS_dispatch_queue;

@interface _HSURLConnectionWrapper : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	id _completionHandler;	// 8 = 0x8
	NSURLConnection *_connection;	// 12 = 0xc
	NSMutableData *_data;	// 16 = 0x10
	NSURLResponse *_response;	// 20 = 0x14
	NSURLRequest *_request;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSURLRequest *request;	// G=0x340dc4c9; @synthesize=_request
- (id)initWithRequest:(id)request;	// 0x340db721
- (void)cancel;	// 0x340db925
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x340dbc8d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x340dc0a5
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x340dbfb5
- (void)connectionDidFinishLoading:(id)connection;	// 0x340dc1b1
- (void)dealloc;	// 0x340db81d
// declared property getter: - (id)request;	// 0x340dc4c9
- (void)startWithCompletionHandler:(id)completionHandler;	// 0x340dbb91
@end


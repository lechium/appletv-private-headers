/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSMutableURLRequest, ATVJSContext, NSURLConnection, NSString, NSHTTPURLResponse;

__attribute__((visibility("hidden")))
@interface ATVJSXMLHttpRequest : NSObject {
@private
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_object;	// 8 = 0x8
	unsigned _readyState;	// 12 = 0xc
	NSMutableURLRequest *_urlRequest;	// 16 = 0x10
	NSURLConnection *_urlConnection;	// 20 = 0x14
	BOOL _async;	// 24 = 0x18
	NSString *_user;	// 28 = 0x1c
	NSString *_password;	// 32 = 0x20
	NSHTTPURLResponse *_urlResponse;	// 36 = 0x24
	unsigned _statusCode;	// 40 = 0x28
	NSString *_statusText;	// 44 = 0x2c
	NSMutableData *_receivedData;	// 48 = 0x30
}
@property(assign, nonatomic) unsigned readyState;	// G=0x330133e1; S=0x330129e5; @synthesize=_readyState
@property(retain) NSMutableData *receivedData;	// G=0x330134f1; S=0x33013505; @synthesize=_receivedData
@property(assign, nonatomic) unsigned statusCode;	// G=0x33013499; S=0x330134a9; @synthesize=_statusCode
@property(copy) NSString *statusText;	// G=0x330134b9; S=0x330134cd; @synthesize=_statusText
@property(retain) NSURLConnection *urlConnection;	// G=0x33013429; S=0x3301343d; @synthesize=_urlConnection
@property(retain) NSMutableURLRequest *urlRequest;	// G=0x330133f1; S=0x33013405; @synthesize=_urlRequest
@property(retain) NSHTTPURLResponse *urlResponse;	// G=0x33013461; S=0x33013475; @synthesize=_urlResponse
+ (void)registerClassInContext:(OpaqueJSContext *)context;	// 0x33011fd9
- (id)initWithContext:(id)context jsObject:(OpaqueJSValue *)object;	// 0x33012889
- (void)abort;	// 0x33012fc5
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33013229
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x330131e5
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33013129
- (void)connectionDidFinishLoading:(id)connection;	// 0x33013319
- (void)dealloc;	// 0x330128fd
- (void)openWithMethod:(id)method url:(id)url async:(BOOL)async user:(id)user password:(id)password;	// 0x33012af1
// declared property getter: - (unsigned)readyState;	// 0x330133e1
// declared property getter: - (id)receivedData;	// 0x330134f1
- (void)sendWithData:(id)data;	// 0x33012c39
// declared property setter: - (void)setReadyState:(unsigned)state;	// 0x330129e5
// declared property setter: - (void)setReceivedData:(id)data;	// 0x33013505
// declared property setter: - (void)setStatusCode:(unsigned)code;	// 0x330134a9
// declared property setter: - (void)setStatusText:(id)text;	// 0x330134cd
// declared property setter: - (void)setUrlConnection:(id)connection;	// 0x3301343d
// declared property setter: - (void)setUrlRequest:(id)request;	// 0x33013405
// declared property setter: - (void)setUrlResponse:(id)response;	// 0x33013475
// declared property getter: - (unsigned)statusCode;	// 0x33013499
// declared property getter: - (id)statusText;	// 0x330134b9
// declared property getter: - (id)urlConnection;	// 0x33013429
// declared property getter: - (id)urlRequest;	// 0x330133f1
// declared property getter: - (id)urlResponse;	// 0x33013461
@end


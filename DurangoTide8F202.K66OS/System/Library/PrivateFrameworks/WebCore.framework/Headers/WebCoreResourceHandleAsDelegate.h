/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"

@class NSFileHandle;

__attribute__((visibility("hidden")))
@interface WebCoreResourceHandleAsDelegate : NSObject <NSURLConnectionDelegate> {
@private
	ResourceHandle *m_handle;	// 4 = 0x4
	id m_converter;	// 8 = 0x8
	BOOL m_finishedLoadingDataIntoConverter;	// 12 = 0xc
	NSFileHandle *m_quicklookFileHandle;	// 16 = 0x10
}
- (id)initWithHandle:(ResourceHandle *)handle;	// 0x33da8171
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x341f75d1
- (void)connection:(id)connection didCancelAuthenticationChallenge:(id)challenge;	// 0x341f76f9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33ec1c0d
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x341f77f9
- (void)connection:(id)connection didReceiveData:(id)data lengthReceived:(long long)received;	// 0x33da9e69
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33da92e5
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x341f7525
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x33db9259
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x33da8961
- (void)connection:(id)connection willStopBufferingData:(id)data;	// 0x341f74b5
- (void)connectionDidFinishLoading:(id)connection;	// 0x33db955d
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x33da92e1
- (void)detachHandle;	// 0x33db9abd
@end


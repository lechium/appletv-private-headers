/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSURLDownload.h> // Unknown library

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload {
@private
	WebDownloadInternal *_webInternal;	// 8 = 0x8
}
- (id)init;	// 0x302de2b9
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x302de441
- (id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x302de379
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x302de3dd
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x302de321
- (void)_setRealDelegate:(id)delegate;	// 0x302de0fd
- (void)connection:(id)connection willStopBufferingData:(id)data;	// 0x302ddee5
- (void)dealloc;	// 0x302de495
@end


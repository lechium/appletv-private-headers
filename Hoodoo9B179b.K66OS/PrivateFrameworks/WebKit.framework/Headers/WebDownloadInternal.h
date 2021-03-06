/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSURLDownloadDelegate.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {
@private
	id realDelegate;	// 4 = 0x4
}
- (void)dealloc;	// 0x3454b269
- (void)download:(id)download decideDestinationWithSuggestedFilename:(id)suggestedFilename;	// 0x3454aff9
- (void)download:(id)download didBeginChildDownload:(id)download2;	// 0x3454b0cd
- (void)download:(id)download didCancelAuthenticationChallenge:(id)challenge;	// 0x3454aedd
- (void)download:(id)download didCreateDestination:(id)destination;	// 0x3454b025
- (void)download:(id)download didFailWithError:(id)error;	// 0x3454b075
- (void)download:(id)download didReceiveAuthenticationChallenge:(id)challenge;	// 0x3454aed9
- (void)download:(id)download didReceiveDataOfLength:(unsigned)length;	// 0x3454afa1
- (void)download:(id)download didReceiveResponse:(id)response;	// 0x3454af75
- (id)download:(id)download shouldBeginChildDownloadOfSource:(id)source delegate:(id *)delegate;	// 0x3454b0a1
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;	// 0x3454afcd
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;	// 0x3454af49
- (void)downloadDidBegin:(id)download;	// 0x3454af25
- (void)downloadDidFinish:(id)download;	// 0x3454b051
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3454b165
- (void)setRealDelegate:(id)delegate;	// 0x3454aee5
@end


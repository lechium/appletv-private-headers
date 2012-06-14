/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray, NSURL;

@interface YTFeedRequest : YTXMLHTTPRequest {
	id _delegate;	// 156 = 0x9c
	NSMutableArray *_videos;	// 160 = 0xa0
	NSURL *_batchURL;	// 164 = 0xa4
	unsigned _startIndex;	// 168 = 0xa8
	unsigned _videosPerPage;	// 172 = 0xac
	unsigned _totalResults;	// 176 = 0xb0
	BOOL _invalidatedToken;	// 180 = 0xb4
}
+ (int)partialFeedType;	// 0x35e73469
- (id)init;	// 0x35e7333d
- (void)dealloc;	// 0x35e733c5
- (void)didParseData;	// 0x35e731d5
- (void)failWithError:(id)error;	// 0x35e732fd
- (void)loadRequest:(id)request withDelegate:(id)delegate accountAuthRequired:(BOOL)required;	// 0x35e73411
- (int)parseData:(id)data;	// 0x35e731e5
- (void)setDelegate:(id)delegate;	// 0x35e73459
@end


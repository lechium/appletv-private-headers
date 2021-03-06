/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray;

@interface YTSubscriptionsRequest : YTXMLHTTPRequest {
	id _delegate;	// 156 = 0x9c
	NSMutableArray *_subscriptions;	// 160 = 0xa0
	int _mode;	// 164 = 0xa4
	int _startIndex;	// 168 = 0xa8
	int _totalResults;	// 172 = 0xac
	int _resultsPerPage;	// 176 = 0xb0
}
+ (id)URLForSubscription:(id)subscription;	// 0x32f5fda5
+ (id)displayStringForSubscription:(id)subscription;	// 0x32f5fc89
+ (BOOL)isSubscription:(id)subscription channelOfUser:(id)user;	// 0x32f5fd25
+ (unsigned)resultsPerRequest;	// 0x32f5fc85
- (id)init;	// 0x32f5fdc5
- (void)_doRequestWithURL:(id)url;	// 0x32f60065
- (void)createPlaylistNamed:(id)named;	// 0x32f602bd
- (void)dealloc;	// 0x32f5fe45
- (void)didAuthenticate:(id)authenticate;	// 0x32f5ffe5
- (void)didParseData;	// 0x32f5ff55
- (void)failWithError:(id)error;	// 0x32f605f5
- (int)parseData:(id)data;	// 0x32f5fe91
- (void)requestPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results searchTerm:(id)term;	// 0x32f6020d
- (void)requestUserPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results;	// 0x32f60161
- (void)requestUserSubscriptionsFromIndex:(unsigned)index maxResults:(unsigned)results;	// 0x32f600b5
- (void)setDelegate:(id)delegate;	// 0x32f60669
- (void)subscribeToUser:(id)user;	// 0x32f60481
@end


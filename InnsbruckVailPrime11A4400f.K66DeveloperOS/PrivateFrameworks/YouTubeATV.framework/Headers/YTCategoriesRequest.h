/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray;

@interface YTCategoriesRequest : YTXMLHTTPRequest {
	id _delegate;	// 156 = 0x9c
	NSMutableArray *_categories;	// 160 = 0xa0
}
- (id)init;	// 0x33ab0785
- (id)_categoriesURL;	// 0x33ab0a21
- (void)clearDelegate;	// 0x33ab0b89
- (void)dealloc;	// 0x33ab080d
- (void)didAuthenticate:(id)authenticate;	// 0x33ab0959
- (void)didParseData;	// 0x33ab08d1
- (void)failWithError:(id)error;	// 0x33ab0b15
- (void)loadRequest:(id)request;	// 0x33ab09d9
- (int)parseData:(id)data;	// 0x33ab0859
- (void)requestCategoriesWithDelegate:(id)delegate;	// 0x33ab0a95
@end


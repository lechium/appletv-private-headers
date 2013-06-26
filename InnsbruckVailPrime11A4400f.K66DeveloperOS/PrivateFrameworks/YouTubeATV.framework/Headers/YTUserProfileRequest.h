/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class YTUserProfile;
@protocol YTUserProfileRequestDelegate;

@interface YTUserProfileRequest : YTXMLHTTPRequest {
	id<YTUserProfileRequestDelegate> _delegate;	// 156 = 0x9c
	YTUserProfile *_profile;	// 160 = 0xa0
}
- (id)initWithDelegate:(id)delegate;	// 0x33ab3ad1
- (void)dealloc;	// 0x33ab3b5d
- (void)didParseData;	// 0x33ab3d2d
- (void)failWithError:(id)error;	// 0x33ab3d99
- (int)parseData:(id)data;	// 0x33ab3ca9
- (void)requestProfileForCurrentUser;	// 0x33ab3ba9
- (void)requestProfileForUsername:(id)username;	// 0x33ab3c21
@end

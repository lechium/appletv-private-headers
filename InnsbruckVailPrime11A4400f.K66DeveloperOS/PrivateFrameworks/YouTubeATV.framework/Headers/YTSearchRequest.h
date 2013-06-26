/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTFeedRequest.h"


@interface YTSearchRequest : YTFeedRequest {
}
+ (id)_formatFilter;	// 0x33aa547d
+ (id)feedCountryCode;	// 0x33aa5295
+ (unsigned)videosPerRequest;	// 0x33aa505d
- (void)didParseData;	// 0x33aa5061
- (void)failWithError:(id)error;	// 0x33aa5241
- (BOOL)receivedValidResponse:(id)response;	// 0x33aa62b5
- (void)searchForFavoriteVideosStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x33aa5f49
- (void)searchForMyVideosStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x33aa606d
- (void)searchForRecentVideosStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x33aa5b79
- (void)searchForStandardFeedVideosOfType:(id)type startIndex:(unsigned)index maxResults:(unsigned)results timeQualifier:(id)qualifier withDelegate:(id)delegate;	// 0x33aa5ae5
- (void)searchForVideoWithID:(id)anId withDelegate:(id)delegate;	// 0x33aa5489
- (void)searchForVideosByAuthor:(id)videosByAuthor startingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x33aa5e25
- (void)searchForVideosFromWatchLaterPlaylistStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x33aa6191
- (void)searchForVideosMatchingString:(id)videosMatchingString startingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x33aa57b9
- (void)searchForVideosRelatedToVideo:(id)video startingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x33aa5cb9
- (void)searchForVideosWithFeedURLBase:(id)feedURLBase startingAtIndex:(unsigned)index maxResults:(unsigned)results withTimeQualifier:(id)timeQualifier withFormatFilter:(BOOL)formatFilter authenticationRequired:(BOOL)required withDelegate:(id)delegate;	// 0x33aa5911
- (void)searchForVideosWithIDs:(id)ids withDelegate:(id)delegate;	// 0x33aa5539
@end

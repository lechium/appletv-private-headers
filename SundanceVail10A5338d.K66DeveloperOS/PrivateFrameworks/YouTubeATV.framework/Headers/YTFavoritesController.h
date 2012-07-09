/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, YTAccountFeedRequest, YTAuthenticatedAccountPost, NSURL;
@protocol YTFavoritesControllerDelegate;

@interface YTFavoritesController : NSObject {
	NSMutableArray *_pendingFavoritesShortIDs;	// 4 = 0x4
	NSMutableArray *_mergedFavorites;	// 8 = 0x8
	YTAuthenticatedAccountPost *_accountPost;	// 12 = 0xc
	YTAccountFeedRequest *_accountFeedRequest;	// 16 = 0x10
	BOOL _usingAccountFavorites;	// 20 = 0x14
	BOOL _shouldOfferMergeOfLocalBookmarks;	// 21 = 0x15
	NSURL *_batchURL;	// 24 = 0x18
	NSMutableArray *_bookmarkVideos;	// 28 = 0x1c
	NSMutableArray *_bookmarkShortIDs;	// 32 = 0x20
	id<YTFavoritesControllerDelegate> _mergeBookmarksDelegate;	// 36 = 0x24
}
@property(retain) NSURL *batchURL;	// G=0x33d12281; S=0x33d12229; converted property
@property(readonly, assign) BOOL shouldOfferMergeOfLocalBookmarks;	// G=0x33d11865; converted property
@property(assign) BOOL usingAccountFavorites;	// G=0x33d117e5; S=0x33d117f5; converted property
+ (id)sharedFavoritesController;	// 0x33d11751
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x33d12291
- (void)_bookmarksDidChangeNotifyObservers:(BOOL)_bookmarks;	// 0x33d11af9
- (void)_loadBookmarks;	// 0x33d11c41
- (void)_processNextPendingFavoritesBatch;	// 0x33d11939
- (void)_saveBookmarks;	// 0x33d11bb5
- (void)accountFeedRequest:(id)request didFailWithError:(id)error;	// 0x33d125d5
- (void)accountFeedRequest:(id)request receivedVideos:(id)videos;	// 0x33d122dd
- (void)addFavoriteForVideo:(id)video;	// 0x33d11fed
- (void)addLocalBookmarkForVideo:(id)video;	// 0x33d11f21
// converted property getter: - (id)batchURL;	// 0x33d12281
- (id)bookmarkedShortIDs;	// 0x33d11eed
- (id)bookmarkedVideos;	// 0x33d11e45
- (void)bookmarksSearchRequestInterrupted;	// 0x33d11ec1
- (void)dealloc;	// 0x33d11799
- (void)mergeLocalBookmarksToAccountFavoritesWithDelegate:(id)delegate;	// 0x33d11a29
- (void)removeFavoriteForVideo:(id)video;	// 0x33d120d1
- (void)saveBookmarksIfNeeded;	// 0x33d12205
- (void)searchRequestReturnedVideos:(id)videos;	// 0x33d11e55
// converted property setter: - (void)setBatchURL:(id)url;	// 0x33d12229
- (void)setLocalBookmarksMergeOffered:(BOOL)offered;	// 0x33d118d1
// converted property setter: - (void)setUsingAccountFavorites:(BOOL)favorites;	// 0x33d117f5
// converted property getter: - (BOOL)shouldOfferMergeOfLocalBookmarks;	// 0x33d11865
// converted property getter: - (BOOL)usingAccountFavorites;	// 0x33d117e5
@end

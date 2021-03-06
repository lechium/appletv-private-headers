/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSURLConnectionRequestDelegate.h"
#import <NSObject.h> // Unknown library

@class SSItemOffer, SSURLConnectionRequest, NSMutableArray, NSNumber, NSString, NSURL, NSDate, NSDictionary, SSItemImageCollection, NSArray;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {
	NSDate *_expirationDate;	// 4 = 0x4
	NSArray *_offers;	// 8 = 0x8
	NSDictionary *_properties;	// 12 = 0xc
	NSString *_tellAFriendBody;	// 16 = 0x10
	NSString *_tellAFriendBodyMIMEType;	// 20 = 0x14
	NSMutableArray *_tellAFriendHandlers;	// 24 = 0x18
	SSURLConnectionRequest *_tellAFriendRequest;	// 28 = 0x1c
	NSString *_tellAFriendSubject;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x3569e5e5; 
@property(readonly, assign, nonatomic) NSArray *allItemOffers;	// G=0x3569dd0d; 
@property(readonly, assign, nonatomic) NSString *artistName;	// G=0x3569dd45; 
@property(readonly, assign, nonatomic) float averageUserRating;	// G=0x3569ddbd; 
@property(readonly, assign, nonatomic) SSItemOffer *defaultItemOffer;	// G=0x3569de15; 
@property(readonly, assign, nonatomic) NSDate *expirationDate;	// G=0x356a00f5; @synthesize=_expirationDate
@property(readonly, assign, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;	// G=0x3569dfc9; 
@property(readonly, assign, nonatomic) SSItemImageCollection *imageCollection;	// G=0x3569df4d; 
@property(readonly, assign, nonatomic) NSString *itemKind;	// G=0x3569e391; 
@property(readonly, assign, nonatomic) NSString *itemTitle;	// G=0x3569e5a5; 
@property(readonly, assign, nonatomic) int numberOfUserRatings;	// G=0x3569e925; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x3569e029; 
@property(readonly, retain) NSString *tellAFriendBody;	// G=0x3569eb69; converted property
@property(readonly, retain) NSString *tellAFriendBodyMIMEType;	// G=0x3569ec1d; converted property
@property(readonly, retain) NSString *tellAFriendSubject;	// G=0x3569ed99; converted property
@property(readonly, assign, nonatomic) NSArray *thumbnailImages;	// G=0x3569ee4d; 
@property(readonly, assign, nonatomic) NSURL *viewItemURL;	// G=0x3569f059; 
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x3569f281
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x3569e5e5
- (void)_finishTellAFriendLoadWithError:(id)error;	// 0x3569fd29
- (id)_offers;	// 0x3569fe7d
- (void)_setExpirationDate:(id)date;	// 0x3569fad5
- (id)_tellAFriendDictionary;	// 0x356a008d
// declared property getter: - (id)allItemOffers;	// 0x3569dd0d
- (id)artistIdentifier;	// 0x3569f2d5
// declared property getter: - (id)artistName;	// 0x3569dd45
// declared property getter: - (float)averageUserRating;	// 0x3569ddbd
- (id)bundleIdentifier;	// 0x3569f2f1
- (id)bundleVersion;	// 0x3569f30d
- (id)buyParameters;	// 0x3569f0a1
- (id)collectionArtistName;	// 0x3569f329
- (id)collectionIdentifier;	// 0x3569f345
- (id)collectionIndexInCollectionGroup;	// 0x3569f361
- (id)collectionName;	// 0x3569f37d
- (id)composerName;	// 0x3569f399
- (id)contentRating;	// 0x3569f3b5
- (void)dealloc;	// 0x3569dbed
// declared property getter: - (id)defaultItemOffer;	// 0x3569de15
- (id)description;	// 0x3569f205
- (id)episodeIdentifier;	// 0x3569f451
- (id)episodeSortIdentifier;	// 0x3569f46d
// declared property getter: - (id)expirationDate;	// 0x356a00f5
- (id)genreIdentifier;	// 0x3569f489
- (id)genreName;	// 0x3569f4a5
// declared property getter: - (id)imageCollection;	// 0x3569df4d
- (id)indexInCollection;	// 0x3569f4c1
- (BOOL)isCompilation;	// 0x3569f4dd
// declared property getter: - (BOOL)isGameCenterEnabled;	// 0x3569dfc9
// declared property getter: - (BOOL)isRestricted;	// 0x3569e029
// declared property getter: - (id)itemKind;	// 0x3569e391
- (id)itemOfferForIdentifier:(id)identifier;	// 0x3569e461
// declared property getter: - (id)itemTitle;	// 0x3569e5a5
- (void)loadTellAFriendMessageWithCompletionHandler:(id)completionHandler;	// 0x3569e62d
- (id)longDescription;	// 0x3569f535
- (id)mediaKind;	// 0x3569f551
- (id)networkName;	// 0x3569f81d
- (id)numberOfCollectionsInCollectionGroup;	// 0x3569f839
- (id)numberOfItemsInCollection;	// 0x3569f855
- (int)numberOfPrintedPages;	// 0x3569e8cd
// declared property getter: - (int)numberOfUserRatings;	// 0x3569e925
- (id)playableMedia;	// 0x3569f0c9
- (id)podcastEpisodeGUID;	// 0x3569f871
- (id)podcastFeedURL;	// 0x3569f88d
- (id)preOrderIdentifier;	// 0x3569fa21
- (id)priceDisplay;	// 0x3569f1dd
- (id)rawItemDictionary;	// 0x3569f8d5
- (id)relatedItemsForRelationType:(id)relationType;	// 0x3569e97d
- (id)releaseDate;	// 0x3569f90d
- (id)releaseDateString;	// 0x3569fa05
- (void)request:(id)request didFailWithError:(id)error;	// 0x3569fbb5
- (void)requestDidFinish:(id)request;	// 0x3569fc05
- (id)seasonNumber;	// 0x3569fa3d
- (id)sendGiftURL;	// 0x3569fa59
- (id)seriesName;	// 0x3569fab9
- (id)shortDescription;	// 0x3569fb19
- (id)softwareType;	// 0x3569fb35
// converted property getter: - (id)tellAFriendBody;	// 0x3569eb69
// converted property getter: - (id)tellAFriendBodyMIMEType;	// 0x3569ec1d
- (id)tellAFriendBodyURL;	// 0x3569ed0d
// converted property getter: - (id)tellAFriendSubject;	// 0x3569ed99
// declared property getter: - (id)thumbnailImages;	// 0x3569ee4d
- (id)tweetInitialText;	// 0x3569ee75
- (id)tweetURL;	// 0x3569ef45
- (void)urlConnectionRequest:(id)request didReceiveResponse:(id)response;	// 0x3569fc2d
- (id)valueForProperty:(id)property;	// 0x3569f011
- (id)videoDetails;	// 0x3569fb51
// declared property getter: - (id)viewItemURL;	// 0x3569f059
- (id)viewReviewsURL;	// 0x3569fb6d
@end


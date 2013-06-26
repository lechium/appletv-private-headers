/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YouTubeATV-Structs.h"
#import </libobjc.A.h>

@class NSMutableArray, NSString, NSCalendarDate, NSArray, NSURL;

@interface YTVideo : NSObject {
	NSString *_id;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_author;	// 12 = 0xc
	NSCalendarDate *_dateUpdated;	// 16 = 0x10
	NSCalendarDate *_dateAdded;	// 20 = 0x14
	NSArray *_videoReferences;	// 24 = 0x18
	NSString *_notificationName;	// 28 = 0x1c
	NSString *_videoDescription;	// 32 = 0x20
	NSString *_category;	// 36 = 0x24
	NSArray *_tags;	// 40 = 0x28
	unsigned _numberOfViews;	// 44 = 0x2c
	unsigned _numLikes;	// 48 = 0x30
	unsigned _numDislikes;	// 52 = 0x34
	int _batchStatus;	// 56 = 0x38
	NSURL *_infoURL;	// 60 = 0x3c
	NSURL *_thumbnailURL;	// 64 = 0x40
	NSURL *_commentsURL;	// 68 = 0x44
	NSURL *_editURL;	// 72 = 0x48
	NSURL *_ratingsURL;	// 76 = 0x4c
	NSURL *_captionsURL;	// 80 = 0x50
	NSString *_shortID;	// 84 = 0x54
	NSString *_unplayable;	// 88 = 0x58
	BOOL _isProcessing;	// 92 = 0x5c
	NSMutableArray *_captions;	// 96 = 0x60
	int _privacy;	// 100 = 0x64
	NSString *_restrictedCountries;	// 104 = 0x68
	id _thumbnailProxyBlock;	// 108 = 0x6c
}
@property(readonly, retain) NSString *author;	// G=0x33aa7649; converted property
@property(readonly, assign) int batchStatus;	// G=0x33aa7951; converted property
@property(readonly, retain) NSMutableArray *captions;	// G=0x33aa7d9d; converted property
@property(readonly, retain) NSURL *captionsURL;	// G=0x33aa771d; converted property
@property(readonly, retain) NSString *category;	// G=0x33aa775d; converted property
@property(readonly, retain) NSURL *commentsURL;	// G=0x33aa76ed; converted property
@property(readonly, retain) NSCalendarDate *dateAdded;	// G=0x33aa7669; converted property
@property(readonly, retain) NSCalendarDate *dateUpdated;	// G=0x33aa7659; converted property
@property(readonly, retain) NSURL *editURL;	// G=0x33aa76fd; converted property
@property(readonly, retain) NSURL *infoURL;	// G=0x33aa772d; converted property
@property(readonly, assign) BOOL isProcessing;	// G=0x33aa7d8d; converted property
@property(readonly, assign) unsigned numDislikes;	// G=0x33aa7839; converted property
@property(readonly, assign) unsigned numLikes;	// G=0x33aa7829; converted property
@property(readonly, assign) unsigned numberOfViews;	// G=0x33aa7931; converted property
@property(readonly, retain) NSURL *ratingsURL;	// G=0x33aa770d; converted property
@property(readonly, retain) NSString *restrictedCountries;	// G=0x33aa7941; converted property
@property(readonly, retain) NSString *shortID;	// G=0x33aa75e5; converted property
@property(readonly, retain) NSArray *tags;	// G=0x33aa776d; converted property
@property(readonly, retain) NSURL *thumbnailURL;	// G=0x33aa773d; converted property
@property(readonly, retain) NSString *title;	// G=0x33aa7619; converted property
@property(readonly, retain) NSString *unplayable;	// G=0x33aa77a5; converted property
@property(readonly, retain) NSString *videoDescription;	// G=0x33aa774d; converted property
+ (void)disableNotifications;	// 0x33aa63a9
+ (void)enableNotifications;	// 0x33aa63bd
+ (id)unsupportedVideoError;	// 0x33aa63d1
+ (id)videoIsProcessingError;	// 0x33aa6461
+ (id)videoNotFoundError;	// 0x33aa6419
- (id)initFromArchiveDictionary:(id)archiveDictionary;	// 0x33aa65a1
- (id)initWithID:(id)anId title:(id)title dateUpdated:(id)updated dateAdded:(id)added videoReferences:(id)references infoURL:(id)url videoDescription:(id)description category:(id)category tags:(id)tags author:(id)author thumbnailURL:(id)url11 numLikes:(unsigned)likes numDislikes:(unsigned)dislikes numberOfViews:(unsigned)views batchStatus:(int)status commentsURL:(id)url16 editURL:(id)url17 ratingsURL:(id)url18 captionsURL:(id)url19 shortID:(id)anId20 unplayable:(id)unplayable isProcessing:(BOOL)processing privacy:(int)privacy restrictedCountries:(id)countries;	// 0x33aa6f95
- (id)ID;	// 0x33aa75d5
- (void)_postVideoDidChange;	// 0x33aa6edd
- (void)_thumbnailDidLoad;	// 0x33aa6f35
- (double)age;	// 0x33aa77b9
- (BOOL)allowsHighQuality3GPlayback;	// 0x33aa7c21
- (id)anyVideoReference;	// 0x33aa7c81
- (id)archiveDictionary;	// 0x33aa6a0d
// converted property getter: - (id)author;	// 0x33aa7649
// converted property getter: - (int)batchStatus;	// 0x33aa7951
- (id)bestVideoReference;	// 0x33aa7c35
// converted property getter: - (id)captions;	// 0x33aa7d9d
// converted property getter: - (id)captionsURL;	// 0x33aa771d
- (void)carrierBundleDidChangeNotification:(id)carrierBundle;	// 0x33aa7c25
// converted property getter: - (id)category;	// 0x33aa775d
// converted property getter: - (id)commentsURL;	// 0x33aa76ed
// converted property getter: - (id)dateAdded;	// 0x33aa7669
- (id)dateAddedString;	// 0x33aa7679
// converted property getter: - (id)dateUpdated;	// 0x33aa7659
- (void)dealloc;	// 0x33aa72e9
- (id)description;	// 0x33aa7535
// converted property getter: - (id)editURL;	// 0x33aa76fd
- (unsigned)hash;	// 0x33aa6551
// converted property getter: - (id)infoURL;	// 0x33aa772d
- (BOOL)isBookmarked;	// 0x33aa7c91
- (BOOL)isEqual:(id)equal;	// 0x33aa64a9
- (BOOL)isPlayable;	// 0x33aa7d45
// converted property getter: - (BOOL)isProcessing;	// 0x33aa7d8d
- (CGImageRef)largeThumbnailLoadIfAbsent:(BOOL)absent;	// 0x33aa7a21
- (void)loadThumbnailWithCallback:(id)callback;	// 0x33aa7ad9
// converted property getter: - (unsigned)numDislikes;	// 0x33aa7839
// converted property getter: - (unsigned)numLikes;	// 0x33aa7829
// converted property getter: - (unsigned)numberOfViews;	// 0x33aa7931
- (BOOL)ownVideo;	// 0x33aa7e15
- (CGImageRef)pluginThumbnailLoadIfAbsent:(BOOL)absent;	// 0x33aa7a7d
- (BOOL)positiveRating;	// 0x33aa7849
- (id)privacyString;	// 0x33aa7da1
- (id)ratingPercentageString;	// 0x33aa7871
// converted property getter: - (id)ratingsURL;	// 0x33aa770d
// converted property getter: - (id)restrictedCountries;	// 0x33aa7941
- (CGImageRef)roundedThumbnailLoadIfAbsent:(BOOL)absent;	// 0x33aa79c1
// converted property getter: - (id)shortID;	// 0x33aa75e5
// converted property getter: - (id)tags;	// 0x33aa776d
- (id)tagsString;	// 0x33aa777d
- (CGImageRef)thumbnailLoadIfAbsent:(BOOL)absent;	// 0x33aa7961
// converted property getter: - (id)thumbnailURL;	// 0x33aa773d
// converted property getter: - (id)title;	// 0x33aa7619
// converted property getter: - (id)unplayable;	// 0x33aa77a5
// converted property getter: - (id)videoDescription;	// 0x33aa774d
- (id)videoReferenceForProfile:(int)profile;	// 0x33aa7b4d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "StoreServices-Structs.h"

@class SSItemImageCollection, NSMutableDictionary, NSNumber, NSLock, NSString, NSURL, NSDate, NSDictionary, NSData, NSArray;

@interface SSDownloadMetadata : NSObject <SSCoding, NSCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	int _keyStyle;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
}
@property(readonly, assign) NSArray *MD5HashStrings;	// G=0x33c791f9; 
@property(assign) unsigned long long artistIdentifier;	// G=0x33c76e29; S=0x33c77d4d; 
@property(copy) NSString *artistName;	// G=0x33c76e65; S=0x33c77db5; 
@property(assign) BOOL artworkIsPrerendered;	// G=0x33c76ed5; S=0x33c77e01; converted property
@property(assign, getter=isAutomaticDownload) BOOL automaticDownload;	// G=0x33c790f1; S=0x33c7a18d; 
@property(retain) id bundleIdentifier;	// G=0x33c76f31; S=0x33c77e51; converted property
@property(retain) NSURL *cancelDownloadURL;	// G=0x33c78d5d; S=0x33c7a1d1; 
@property(retain) id collectionArtistName;	// G=0x33c76fa1; S=0x33c77e6d; converted property
@property(assign) unsigned long long collectionIdentifier;	// G=0x33c77001; S=0x33c77e89; converted property
@property(retain) id collectionIndexInCollectionGroup;	// G=0x33c7703d; S=0x33c77ef1; converted property
@property(retain) id collectionName;	// G=0x33c770ad; S=0x33c77f3d; converted property
@property(assign, getter=isCompilation) BOOL compilation;	// G=0x33c77619; S=0x33c77f89; converted property
@property(assign) unsigned long long composerIdentifier;	// G=0x33c7711d; S=0x33c77fcd; converted property
@property(retain) id composerName;	// G=0x33c77159; S=0x33c78035; converted property
@property(retain) id contentRating;	// G=0x33c771b9; S=0x33c78051; converted property
@property(readonly, assign, getter=isContentRestricted) BOOL contentRestricted;	// G=0x33c79149; 
@property(retain) NSString *copyright;	// G=0x33c78ddd; S=0x33c7a20d; 
@property(retain) NSDictionary *dictionary;	// G=0x33c78f4d; S=0x33c7a229; 
@property(retain) id documentTargetIdentifier;	// G=0x33c77259; S=0x33c7808d; converted property
@property(retain) NSString *downloadKey;	// G=0x33c78f85; S=0x33c7a2ad; 
@property(retain) id durationInMilliseconds;	// G=0x33c772b9; S=0x33c780a9; converted property
@property(retain) id episodeIdentifier;	// G=0x33c77319; S=0x33c780c5; converted property
@property(retain) id episodeSortIdentifier;	// G=0x33c77355; S=0x33c780e1; converted property
@property(retain) NSData *epubRightsData;	// G=0x33c78fe5; S=0x33c7a2c9; 
@property(assign, getter=isExplicitContent) BOOL explicitContent;	// G=0x33c77671; S=0x33c780fd; converted property
@property(retain) NSString *fileExtension;	// G=0x33c79045; S=0x33c7a2e5; 
@property(retain) NSURL *fullSizeImageURL;	// G=0x33c773c9; S=0x33c78141; 
@property(retain) NSString *genre;	// G=0x33c774f1; S=0x33c7817d; 
@property(assign) unsigned long long genreIdentifier;	// G=0x33c7756d; S=0x33c78199; 
@property(retain) id indexInCollection;	// G=0x33c775a9; S=0x33c78201; converted property
@property(assign) unsigned long long itemIdentifier;	// G=0x33c77779; S=0x33c7824d; 
@property(assign) int keyStyle;	// G=0x33c790a5; S=0x33c7a301; 
@property(retain) NSString *kind;	// G=0x33c777bd; S=0x33c782b5; 
@property(copy) NSString *longDescription;	// G=0x33c7781d; S=0x33c782d1; 
@property(retain) id longSeasonDescription;	// G=0x33c77ced; S=0x33c785cd; converted property
@property(retain) id networkName;	// G=0x33c7788d; S=0x33c7831d; converted property
@property(readonly, assign) NSNumber *numberOfBytesToHash;	// G=0x33c79e09; 
@property(retain) id numberOfCollectionsInCollectionGroup;	// G=0x33c778ed; S=0x33c78339; converted property
@property(retain) id numberOfItemsInCollection;	// G=0x33c7795d; S=0x33c78385; converted property
@property(retain) id podcastEpisodeGUID;	// G=0x33c779cd; S=0x33c783d1; converted property
@property(retain) id podcastFeedURL;	// G=0x33c77a2d; S=0x33c783ed; converted property
@property(retain) id podcastType;	// G=0x33c77a69; S=0x33c78429; converted property
@property(assign) unsigned long long preOrderIdentifier;	// G=0x33c79eb5; S=0x33c7a4d5; 
@property(retain) NSURL *primaryAssetURL;	// G=0x33c79f2d; S=0x33c7a519; 
@property(retain) id purchaseDate;	// G=0x33c77ac9; S=0x33c78445; converted property
@property(copy) NSString *redownloadActionParameters;	// G=0x33c79fb9; S=0x33c7a555; 
@property(assign, getter=isRedownloadDownload) BOOL redownloadDownload;	// G=0x33c791a1; S=0x33c7a571; 
@property(retain) NSDate *releaseDate;	// G=0x33c77b05; S=0x33c78461; 
@property(retain) NSString *releaseDateString;	// G=0x33c7a045; S=0x33c7a5b5; 
@property(retain) NSNumber *releaseYear;	// G=0x33c77b35; S=0x33c784ad; 
@property(assign, getter=isRental) BOOL rental;	// G=0x33c776c9; S=0x33c784c9; converted property
@property(copy) id requiredDeviceCapabilities;	// G=0x33c7a105; S=0x33c7a601; 
@property(assign) unsigned long long sagaIdentifier;	// G=0x33c77b95; S=0x33c7850d; converted property
@property(assign, getter=isSample) BOOL sample;	// G=0x33c77721; S=0x33c78551; converted property
@property(retain) id seasonNumber;	// G=0x33c77c19; S=0x33c78595; converted property
@property(retain) id seriesName;	// G=0x33c77c79; S=0x33c785b1; converted property
@property(copy) NSString *shortDescription;	// G=0x33c78791; S=0x33c785e9; 
@property(assign) BOOL shouldDownloadAutomatically;	// G=0x33c7b025; S=0x33c7a61d; 
@property(retain) NSArray *sinfs;	// G=0x33c7b07d; S=0x33c7a661; 
@property(retain) NSString *sortArtistName;	// G=0x33c787f1; S=0x33c78605; 
@property(retain) NSString *sortCollectionName;	// G=0x33c78865; S=0x33c78621; 
@property(retain) NSString *sortTitle;	// G=0x33c788d9; S=0x33c7863d; 
@property(retain) NSString *subtitle;	// G=0x33c7894d; S=0x33c78659; 
@property(readonly, assign) SSItemImageCollection *thumbnailImageCollection;	// G=0x33c7895d; 
@property(retain) NSURL *thumbnailImageURL;	// G=0x33c78bbd; S=0x33c786a1; 
@property(retain) NSString *thumbnailNewsstandBindingEdge;	// G=0x33c78a95; S=0x33c78669; 
@property(retain) NSString *thumbnailNewsstandBindingType;	// G=0x33c78b29; S=0x33c78685; 
@property(retain) NSString *title;	// G=0x33c78be5; S=0x33c786dd; 
@property(retain) NSString *transactionIdentifier;	// G=0x33c78c61; S=0x33c7871d; 
@property(retain) id videoDetailsDictionary;	// G=0x33c78cc1; S=0x33c78739; converted property
@property(retain) id viewStoreItemURL;	// G=0x33c78d21; S=0x33c78755; converted property
- (id)init;	// 0x33c75e99
- (id)initWithCoder:(id)coder;	// 0x33c76935
- (id)initWithDictionary:(id)dictionary;	// 0x33c75ead
- (id)initWithItem:(id)item;	// 0x33c75f31
- (id)initWithItem:(id)item offer:(id)offer;	// 0x33c75f65
- (id)initWithKind:(id)kind;	// 0x33c767a5
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x33c76d75
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x33c76d85
// declared property getter: - (id)MD5HashStrings;	// 0x33c791f9
- (id)_assetDictionary;	// 0x33c7b20d
- (id)_dateValueForValue:(id)value;	// 0x33c7b4dd
- (id)_newDateFormatter;	// 0x33c7b7cd
- (id)_newImageCollectionWithURLString:(id)urlstring;	// 0x33c7b58d
- (id)_releaseDateValue;	// 0x33c7b865
- (void)_setValue:(id)value forTopLevelKey:(id)topLevelKey;	// 0x33c7b899
- (void)_setValueCopy:(id)copy forMetadataKey:(id)metadataKey;	// 0x33c7b955
- (id)_stringValueForValue:(id)value;	// 0x33c7b99d
- (id)_thumbnailArtworkImage;	// 0x33c7ba15
- (id)_urlValueForValue:(id)value;	// 0x33c7bae5
- (id)_valueForFirstAvailableTopLevelKey:(id)firstAvailableTopLevelKey;	// 0x33c7bb69
- (id)applicationIdentifier;	// 0x33c76dc1
// declared property getter: - (unsigned long long)artistIdentifier;	// 0x33c76e29
// declared property getter: - (id)artistName;	// 0x33c76e65
// converted property getter: - (BOOL)artworkIsPrerendered;	// 0x33c76ed5
// converted property getter: - (id)bundleIdentifier;	// 0x33c76f31
// declared property getter: - (id)cancelDownloadURL;	// 0x33c78d5d
// converted property getter: - (id)collectionArtistName;	// 0x33c76fa1
// converted property getter: - (unsigned long long)collectionIdentifier;	// 0x33c77001
// converted property getter: - (id)collectionIndexInCollectionGroup;	// 0x33c7703d
// converted property getter: - (id)collectionName;	// 0x33c770ad
// converted property getter: - (unsigned long long)composerIdentifier;	// 0x33c7711d
// converted property getter: - (id)composerName;	// 0x33c77159
// converted property getter: - (id)contentRating;	// 0x33c771b9
- (id)copyPropertyListEncoding;	// 0x33c76d41
- (id)copyWithZone:(NSZone *)zone;	// 0x33c76c99
- (id)copyWritableMetadata;	// 0x33c78e3d
- (void *)copyXPCEncoding;	// 0x33c76d61
// declared property getter: - (id)copyright;	// 0x33c78ddd
- (void)dealloc;	// 0x33c767d9
// declared property getter: - (id)dictionary;	// 0x33c78f4d
// converted property getter: - (id)documentTargetIdentifier;	// 0x33c77259
// declared property getter: - (id)downloadKey;	// 0x33c78f85
// converted property getter: - (id)durationInMilliseconds;	// 0x33c772b9
- (void)encodeWithCoder:(id)coder;	// 0x33c76839
// converted property getter: - (id)episodeIdentifier;	// 0x33c77319
// converted property getter: - (id)episodeSortIdentifier;	// 0x33c77355
// declared property getter: - (id)epubRightsData;	// 0x33c78fe5
// declared property getter: - (id)fileExtension;	// 0x33c79045
// declared property getter: - (id)fullSizeImageURL;	// 0x33c773c9
// declared property getter: - (id)genre;	// 0x33c774f1
// declared property getter: - (unsigned long long)genreIdentifier;	// 0x33c7756d
// converted property getter: - (id)indexInCollection;	// 0x33c775a9
// declared property getter: - (BOOL)isAutomaticDownload;	// 0x33c790f1
// converted property getter: - (BOOL)isCompilation;	// 0x33c77619
// declared property getter: - (BOOL)isContentRestricted;	// 0x33c79149
// converted property getter: - (BOOL)isExplicitContent;	// 0x33c77671
// declared property getter: - (BOOL)isRedownloadDownload;	// 0x33c791a1
// converted property getter: - (BOOL)isRental;	// 0x33c776c9
// converted property getter: - (BOOL)isSample;	// 0x33c77721
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x33c77779
// declared property getter: - (int)keyStyle;	// 0x33c790a5
// declared property getter: - (id)kind;	// 0x33c777bd
// declared property getter: - (id)longDescription;	// 0x33c7781d
// converted property getter: - (id)longSeasonDescription;	// 0x33c77ced
// converted property getter: - (id)networkName;	// 0x33c7788d
- (id)newDownloadProperties;	// 0x33c79305
// declared property getter: - (id)numberOfBytesToHash;	// 0x33c79e09
// converted property getter: - (id)numberOfCollectionsInCollectionGroup;	// 0x33c778ed
// converted property getter: - (id)numberOfItemsInCollection;	// 0x33c7795d
// converted property getter: - (id)podcastEpisodeGUID;	// 0x33c779cd
// converted property getter: - (id)podcastFeedURL;	// 0x33c77a2d
// converted property getter: - (id)podcastType;	// 0x33c77a69
// declared property getter: - (unsigned long long)preOrderIdentifier;	// 0x33c79eb5
// declared property getter: - (id)primaryAssetURL;	// 0x33c79f2d
// converted property getter: - (id)purchaseDate;	// 0x33c77ac9
// declared property getter: - (id)redownloadActionParameters;	// 0x33c79fb9
// declared property getter: - (id)releaseDate;	// 0x33c77b05
// declared property getter: - (id)releaseDateString;	// 0x33c7a045
// declared property getter: - (id)releaseYear;	// 0x33c77b35
// declared property getter: - (id)requiredDeviceCapabilities;	// 0x33c7a105
// converted property getter: - (unsigned long long)sagaIdentifier;	// 0x33c77b95
// converted property getter: - (id)seasonNumber;	// 0x33c77c19
// converted property getter: - (id)seriesName;	// 0x33c77c79
// declared property setter: - (void)setArtistIdentifier:(unsigned long long)identifier;	// 0x33c77d4d
// declared property setter: - (void)setArtistName:(id)name;	// 0x33c77db5
// converted property setter: - (void)setArtworkIsPrerendered:(BOOL)prerendered;	// 0x33c77e01
// declared property setter: - (void)setAutomaticDownload:(BOOL)download;	// 0x33c7a18d
// converted property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x33c77e51
// declared property setter: - (void)setCancelDownloadURL:(id)url;	// 0x33c7a1d1
// converted property setter: - (void)setCollectionArtistName:(id)name;	// 0x33c77e6d
// converted property setter: - (void)setCollectionIdentifier:(unsigned long long)identifier;	// 0x33c77e89
// converted property setter: - (void)setCollectionIndexInCollectionGroup:(id)collectionGroup;	// 0x33c77ef1
// converted property setter: - (void)setCollectionName:(id)name;	// 0x33c77f3d
// converted property setter: - (void)setCompilation:(BOOL)compilation;	// 0x33c77f89
// converted property setter: - (void)setComposerIdentifier:(unsigned long long)identifier;	// 0x33c77fcd
// converted property setter: - (void)setComposerName:(id)name;	// 0x33c78035
// converted property setter: - (void)setContentRating:(id)rating;	// 0x33c78051
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x33c7a20d
// declared property setter: - (void)setDictionary:(id)dictionary;	// 0x33c7a229
// converted property setter: - (void)setDocumentTargetIdentifier:(id)identifier;	// 0x33c7808d
// declared property setter: - (void)setDownloadKey:(id)key;	// 0x33c7a2ad
// converted property setter: - (void)setDurationInMilliseconds:(id)milliseconds;	// 0x33c780a9
// converted property setter: - (void)setEpisodeIdentifier:(id)identifier;	// 0x33c780c5
// converted property setter: - (void)setEpisodeSortIdentifier:(id)identifier;	// 0x33c780e1
// declared property setter: - (void)setEpubRightsData:(id)data;	// 0x33c7a2c9
// converted property setter: - (void)setExplicitContent:(BOOL)content;	// 0x33c780fd
// declared property setter: - (void)setFileExtension:(id)extension;	// 0x33c7a2e5
// declared property setter: - (void)setFullSizeImageURL:(id)url;	// 0x33c78141
// declared property setter: - (void)setGenre:(id)genre;	// 0x33c7817d
// declared property setter: - (void)setGenreIdentifier:(unsigned long long)identifier;	// 0x33c78199
// converted property setter: - (void)setIndexInCollection:(id)collection;	// 0x33c78201
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x33c7824d
// declared property setter: - (void)setKeyStyle:(int)style;	// 0x33c7a301
// declared property setter: - (void)setKind:(id)kind;	// 0x33c782b5
// declared property setter: - (void)setLongDescription:(id)description;	// 0x33c782d1
// converted property setter: - (void)setLongSeasonDescription:(id)description;	// 0x33c785cd
- (void)setMD5HashStrings:(id)strings numberOfBytesToHash:(id)hash;	// 0x33c7a34d
// converted property setter: - (void)setNetworkName:(id)name;	// 0x33c7831d
// converted property setter: - (void)setNumberOfCollectionsInCollectionGroup:(id)collectionGroup;	// 0x33c78339
// converted property setter: - (void)setNumberOfItemsInCollection:(id)collection;	// 0x33c78385
// converted property setter: - (void)setPodcastEpisodeGUID:(id)guid;	// 0x33c783d1
// converted property setter: - (void)setPodcastFeedURL:(id)url;	// 0x33c783ed
// converted property setter: - (void)setPodcastType:(id)type;	// 0x33c78429
// declared property setter: - (void)setPreOrderIdentifier:(unsigned long long)identifier;	// 0x33c7a4d5
// declared property setter: - (void)setPrimaryAssetURL:(id)url;	// 0x33c7a519
// converted property setter: - (void)setPurchaseDate:(id)date;	// 0x33c78445
// declared property setter: - (void)setRedownloadActionParameters:(id)parameters;	// 0x33c7a555
// declared property setter: - (void)setRedownloadDownload:(BOOL)download;	// 0x33c7a571
// declared property setter: - (void)setReleaseDate:(id)date;	// 0x33c78461
// declared property setter: - (void)setReleaseDateString:(id)string;	// 0x33c7a5b5
// declared property setter: - (void)setReleaseYear:(id)year;	// 0x33c784ad
// converted property setter: - (void)setRental:(BOOL)rental;	// 0x33c784c9
// declared property setter: - (void)setRequiredDeviceCapabilities:(id)capabilities;	// 0x33c7a601
// converted property setter: - (void)setSagaIdentifier:(unsigned long long)identifier;	// 0x33c7850d
// converted property setter: - (void)setSample:(BOOL)sample;	// 0x33c78551
// converted property setter: - (void)setSeasonNumber:(id)number;	// 0x33c78595
// converted property setter: - (void)setSeriesName:(id)name;	// 0x33c785b1
// declared property setter: - (void)setShortDescription:(id)description;	// 0x33c785e9
// declared property setter: - (void)setShouldDownloadAutomatically:(BOOL)downloadAutomatically;	// 0x33c7a61d
// declared property setter: - (void)setSinfs:(id)sinfs;	// 0x33c7a661
// declared property setter: - (void)setSortArtistName:(id)name;	// 0x33c78605
// declared property setter: - (void)setSortCollectionName:(id)name;	// 0x33c78621
// declared property setter: - (void)setSortTitle:(id)title;	// 0x33c7863d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x33c78659
// declared property setter: - (void)setThumbnailImageURL:(id)url;	// 0x33c786a1
// declared property setter: - (void)setThumbnailNewsstandBindingEdge:(id)edge;	// 0x33c78669
// declared property setter: - (void)setThumbnailNewsstandBindingType:(id)type;	// 0x33c78685
// declared property setter: - (void)setTitle:(id)title;	// 0x33c786dd
// declared property setter: - (void)setTransactionIdentifier:(id)identifier;	// 0x33c7871d
- (void)setValue:(id)value forMetadataKey:(id)metadataKey;	// 0x33c7a67d
- (void)setValuesFromDownload:(id)download;	// 0x33c7a7fd
// converted property setter: - (void)setVideoDetailsDictionary:(id)dictionary;	// 0x33c78739
// converted property setter: - (void)setViewStoreItemURL:(id)url;	// 0x33c78755
// declared property getter: - (id)shortDescription;	// 0x33c78791
// declared property getter: - (BOOL)shouldDownloadAutomatically;	// 0x33c7b025
// declared property getter: - (id)sinfs;	// 0x33c7b07d
// declared property getter: - (id)sortArtistName;	// 0x33c787f1
// declared property getter: - (id)sortCollectionName;	// 0x33c78865
// declared property getter: - (id)sortTitle;	// 0x33c788d9
// declared property getter: - (id)subtitle;	// 0x33c7894d
// declared property getter: - (id)thumbnailImageCollection;	// 0x33c7895d
// declared property getter: - (id)thumbnailImageURL;	// 0x33c78bbd
// declared property getter: - (id)thumbnailNewsstandBindingEdge;	// 0x33c78a95
// declared property getter: - (id)thumbnailNewsstandBindingType;	// 0x33c78b29
// declared property getter: - (id)title;	// 0x33c78be5
// declared property getter: - (id)transactionIdentifier;	// 0x33c78c61
- (id)valueForFirstAvailableKey:(id)firstAvailableKey;	// 0x33c7b0dd
- (id)valueForMetadataKey:(id)metadataKey;	// 0x33c7b1f5
// converted property getter: - (id)videoDetailsDictionary;	// 0x33c78cc1
// converted property getter: - (id)viewStoreItemURL;	// 0x33c78d21
@end


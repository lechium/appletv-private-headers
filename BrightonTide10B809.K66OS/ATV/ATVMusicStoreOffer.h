/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOffer : XXUnknownSuperclass {
	NSString *_storeOfferType;	// 4 = 0x4
	int _offerCategory;	// 8 = 0x8
	NSDictionary *_storeOfferInfo;	// 12 = 0xc
}
@property(readonly, assign) int offerCategory;	// G=0x207e45; converted property
@property(readonly, retain) NSString *storeOfferType;	// G=0x207e35; converted property
+ (void)_swizzlePreviewsToSD:(id)sd;	// 0x208c19
+ (BOOL)anyOfferHasDigitalExtras:(id)extras;	// 0x207b0d
+ (id)normalizeOffersDictionary:(id)dictionary;	// 0x2073d5
+ (id)normalizeOffersDictionary:(id)dictionary preferHD:(BOOL)hd;	// 0x207425
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x207711
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary preferHD:(BOOL)hd;	// 0x207761
+ (id)priceRangeFromStoreOffers:(id)storeOffers;	// 0x207985
+ (id)priceRangeFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x207add
+ (id)primaryOfferFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x2078e5
+ (id)redownloadOffersDictionary:(id)dictionary;	// 0x2072dd
+ (id)storeOfferFromDictionary:(id)dictionary forType:(id)type;	// 0x207939
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary forType:(id)type;	// 0x207b6d
- (id)_flavorForPlaybackResolution:(int)playbackResolution;	// 0x208b0d
- (id)_storeOfferObjectForKey:(id)key;	// 0x208b79
- (id)_storeOfferObjectForKey:(id)key playbackResolution:(int)resolution;	// 0x208bc9
- (id)actionDisplayName;	// 0x208575
- (id)dateAvailable;	// 0x2082c1
- (void)dealloc;	// 0x207dd1
- (id)dolbyDigitalLanguages;	// 0x208621
- (id)downloadURL;	// 0x208335
- (long)duration;	// 0x207e71
- (id)fileSize;	// 0x207f91
- (BOOL)hasDateAvailable;	// 0x208279
- (BOOL)hasDigitalExtras;	// 0x20851d
- (BOOL)hasDownload;	// 0x2082ed
- (BOOL)hasPreview;	// 0x208361
- (BOOL)hasPurchase;	// 0x208071
- (BOOL)hasRedownload;	// 0x207fdd
- (BOOL)hasRental;	// 0x208201
- (BOOL)isCMS:(BOOL *)cms;	// 0x20808d
- (BOOL)isClosedCaptioned;	// 0x2083c9
- (BOOL)isDolbyDigital;	// 0x2084d5
- (BOOL)isHD;	// 0x208455
- (BOOL)isWideScreen;	// 0x208411
// converted property getter: - (int)offerCategory;	// 0x207e45
- (id)originalPurchasePrice;	// 0x2081d5
- (id)preActionWarning;	// 0x2085a1
- (long)previewDuration;	// 0x207f51
- (id)previewURL;	// 0x20839d
- (id)price;	// 0x207fb1
- (id)purchaseParams;	// 0x208119
- (id)purchasePrice;	// 0x2081a9
- (id)redownloadParams;	// 0x208045
- (id)rentalParams;	// 0x208221
- (id)rentalPrice;	// 0x20824d
- (id)stereoLanguages;	// 0x20879d
// converted property getter: - (id)storeOfferType;	// 0x207e35
- (id)subtitleLanguages;	// 0x208919
- (BOOL)supportsPlaybackResolution:(int)resolution;	// 0x207e55
- (BOOL)usesStoreDrivenFlow;	// 0x2085cd
@end


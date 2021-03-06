/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@protocol BRRatingInfoDatabase;

@interface BRParentalControlManager : BRSingleton {
@private
	id<BRRatingInfoDatabase> _ratingInfoDatabase;	// 4 = 0x4
}
@property(assign) BOOL accessControlEnabled;	// G=0x3427ba01; S=0x3427b945; converted property
@property(assign) int accessModeForPurchase;	// G=0x3427c905; S=0x3427c83d; converted property
@property(retain) id defaultRatingSystemID;	// G=0x3427bb89; S=0x3427bb41; converted property
@property(retain) id pin;	// G=0x3427bafd; S=0x3427ba41; converted property
@property(retain) id ratingDatabase;	// G=0x3427bc0d; S=0x3427bbcd; converted property
+ (void)setSingleton:(id)singleton;	// 0x3427b909
+ (id)singleton;	// 0x3427b8f9
+ (BOOL)storeAccessRestricted;	// 0x3427cc35
- (id)init;	// 0x3427b919
- (int)_accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier isSet:(BOOL *)set;	// 0x3427c13d
// converted property getter: - (BOOL)accessControlEnabled;	// 0x3427ba01
- (int)accessModeForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x3427c361
- (int)accessModeForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank;	// 0x3427c631
// converted property getter: - (int)accessModeForPurchase;	// 0x3427c905
- (void)clearAccessModeforAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x3427bc1d
- (int)computeAccessModeForAppliance:(id)appliance withCategoryIdentifier:(id)categoryIdentifier;	// 0x3427ce21
- (int)computeAccessModeForAsset:(id)asset;	// 0x3427cc8d
- (int)computeAccessModeForPurchase;	// 0x3427cd71
- (int)computeAccessModeForPurchaseWithMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withRank:(id)rank isExplicit:(BOOL)anExplicit;	// 0x3427cda9
// converted property getter: - (id)defaultRatingSystemID;	// 0x3427bb89
- (int)explicitAccessModeForMediaType:(id)mediaType;	// 0x3427cafd
- (BOOL)hasAccessModeBeenSetForAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x3427c335
// converted property getter: - (id)pin;	// 0x3427bafd
// converted property getter: - (id)ratingDatabase;	// 0x3427bc0d
// converted property setter: - (void)setAccessControlEnabled:(BOOL)enabled;	// 0x3427b945
- (void)setAccessMode:(int)mode forAppliance:(id)appliance categoryIdentifier:(id)identifier;	// 0x3427be15
- (void)setAccessMode:(int)mode forMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID withThresholdRank:(id)thresholdRank;	// 0x3427c385
// converted property setter: - (void)setAccessModeForPurchase:(int)purchase;	// 0x3427c83d
// converted property setter: - (void)setDefaultRatingSystemID:(id)anId;	// 0x3427bb41
- (void)setExplicitAccessMode:(int)mode forMediaType:(id)mediaType;	// 0x3427c959
// converted property setter: - (void)setPin:(id)pin;	// 0x3427ba41
// converted property setter: - (void)setRatingDatabase:(id)database;	// 0x3427bbcd
- (id)thresholdForMediaType:(id)mediaType withRatingSystemID:(id)ratingSystemID;	// 0x3427ce61
@end


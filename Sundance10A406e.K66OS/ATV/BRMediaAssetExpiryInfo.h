/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaAssetExpiryInfo : XXUnknownSuperclass {
	id<BRMediaAsset> _mediaAsset;	// 4 = 0x4
}
@property(retain) id expiryDate;	// G=0x367059; S=0x367075; converted property
+ (id)expiryInfoForMediaAsset:(id)mediaAsset;	// 0x366f5d
+ (void)setImplementationClass:(Class)aClass;	// 0x366f4d
- (id)initWithMediaAsset:(id)mediaAsset;	// 0x366fa5
- (id)asset;	// 0x366ff9
- (int)compare:(id)compare;	// 0x3670c9
- (void)dealloc;	// 0x367009
// converted property getter: - (id)expiryDate;	// 0x367059
- (id)expiryDescription;	// 0x367105
- (BOOL)hasBeenPlayed;	// 0x3671a5
- (BOOL)isExpired;	// 0x367055
- (unsigned)rentalPlaybackDuration;	// 0x3670c5
- (id)rentalPlaybackDurationDescription;	// 0x36712d
// converted property setter: - (void)setExpiryDate:(id)date;	// 0x367075
@end

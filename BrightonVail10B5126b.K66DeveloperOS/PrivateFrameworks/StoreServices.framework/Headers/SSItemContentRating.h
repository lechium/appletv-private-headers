/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, SSItemArtworkImage, NSString;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *contentRatingDictionary;	// G=0x354e4459; 
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x354e3ee9; 
@property(assign, nonatomic) int rank;	// G=0x354e4015; S=0x354e4225; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x354e4079; S=0x354e4269; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x354e4109; S=0x354e4285; 
@property(assign, nonatomic) int ratingSystem;	// G=0x354e4199; S=0x354e42a1; 
@property(readonly, assign, nonatomic) SSItemArtworkImage *ratingSystemLogo;	// G=0x354e4491; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x354e3f29; 
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;	// G=0x354e4335; S=0x354e42f1; 
+ (int)ratingSystemFromString:(id)string;	// 0x354e43e9
+ (id)stringForRatingSystem:(int)ratingSystem;	// 0x354e4431
- (id)init;	// 0x354e3d89
- (id)initWithDictionary:(id)dictionary;	// 0x354e3ded
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354e4599
- (BOOL)_isRatingSystemForApps:(int)apps;	// 0x354e4639
- (BOOL)_isRatingSystemForMovies:(int)movies;	// 0x354e4649
- (BOOL)_isRatingSystemForMusic:(int)music;	// 0x354e4661
- (BOOL)_isRatingSystemForTV:(int)tv;	// 0x354e466d
- (void)_setValue:(id)value forProperty:(id)property;	// 0x354e46c5
- (void)_setValueCopy:(id)copy forProperty:(id)property;	// 0x354e467d
// declared property getter: - (id)contentRatingDictionary;	// 0x354e4459
- (id)copyWithZone:(NSZone *)zone;	// 0x354e3e8d
- (id)copyXPCEncoding;	// 0x354e4565
- (void)dealloc;	// 0x354e3e41
// declared property getter: - (BOOL)isExplicitContent;	// 0x354e3ee9
// declared property getter: - (BOOL)isRestricted;	// 0x354e3f29
// declared property getter: - (int)rank;	// 0x354e4015
// declared property getter: - (id)ratingDescription;	// 0x354e4079
// declared property getter: - (id)ratingLabel;	// 0x354e4109
// declared property getter: - (int)ratingSystem;	// 0x354e4199
// declared property getter: - (id)ratingSystemLogo;	// 0x354e4491
// declared property setter: - (void)setRank:(int)rank;	// 0x354e4225
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x354e4269
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x354e4285
// declared property setter: - (void)setRatingSystem:(int)system;	// 0x354e42a1
// declared property setter: - (void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;	// 0x354e42f1
// declared property getter: - (BOOL)shouldHideWhenRestricted;	// 0x354e4335
- (id)valueForProperty:(id)property;	// 0x354e43a1
@end


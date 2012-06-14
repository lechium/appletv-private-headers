/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSDictionary, SSItemArtworkImage, NSMutableDictionary;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *contentRatingDictionary;	// G=0x34e69acd; 
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x34e6955d; 
@property(assign, nonatomic) int rank;	// G=0x34e69689; S=0x34e69899; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x34e696ed; S=0x34e698dd; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x34e6977d; S=0x34e698f9; 
@property(assign, nonatomic) int ratingSystem;	// G=0x34e6980d; S=0x34e69915; 
@property(readonly, assign, nonatomic) SSItemArtworkImage *ratingSystemLogo;	// G=0x34e69b05; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x34e6959d; 
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;	// G=0x34e699a9; S=0x34e69965; 
+ (int)ratingSystemFromString:(id)string;	// 0x34e69a5d
+ (id)stringForRatingSystem:(int)ratingSystem;	// 0x34e69aa5
- (id)init;	// 0x34e693fd
- (id)initWithDictionary:(id)dictionary;	// 0x34e69461
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e69c0d
- (BOOL)_isRatingSystemForApps:(int)apps;	// 0x34e69cad
- (BOOL)_isRatingSystemForMovies:(int)movies;	// 0x34e69cbd
- (BOOL)_isRatingSystemForMusic:(int)music;	// 0x34e69cd5
- (BOOL)_isRatingSystemForTV:(int)tv;	// 0x34e69ce1
- (void)_setValue:(id)value forProperty:(id)property;	// 0x34e69d39
- (void)_setValueCopy:(id)copy forProperty:(id)property;	// 0x34e69cf1
// declared property getter: - (id)contentRatingDictionary;	// 0x34e69acd
- (id)copyWithZone:(NSZone *)zone;	// 0x34e69501
- (id)copyXPCEncoding;	// 0x34e69bd9
- (void)dealloc;	// 0x34e694b5
// declared property getter: - (BOOL)isExplicitContent;	// 0x34e6955d
// declared property getter: - (BOOL)isRestricted;	// 0x34e6959d
// declared property getter: - (int)rank;	// 0x34e69689
// declared property getter: - (id)ratingDescription;	// 0x34e696ed
// declared property getter: - (id)ratingLabel;	// 0x34e6977d
// declared property getter: - (int)ratingSystem;	// 0x34e6980d
// declared property getter: - (id)ratingSystemLogo;	// 0x34e69b05
// declared property setter: - (void)setRank:(int)rank;	// 0x34e69899
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x34e698dd
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x34e698f9
// declared property setter: - (void)setRatingSystem:(int)system;	// 0x34e69915
// declared property setter: - (void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;	// 0x34e69965
// declared property getter: - (BOOL)shouldHideWhenRestricted;	// 0x34e699a9
- (id)valueForProperty:(id)property;	// 0x34e69a15
@end


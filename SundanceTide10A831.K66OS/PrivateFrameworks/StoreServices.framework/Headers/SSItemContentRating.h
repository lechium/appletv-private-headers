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
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *contentRatingDictionary;	// G=0x37830d79; 
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x37830809; 
@property(assign, nonatomic) int rank;	// G=0x37830935; S=0x37830b45; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x37830999; S=0x37830b89; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x37830a29; S=0x37830ba5; 
@property(assign, nonatomic) int ratingSystem;	// G=0x37830ab9; S=0x37830bc1; 
@property(readonly, assign, nonatomic) SSItemArtworkImage *ratingSystemLogo;	// G=0x37830db1; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x37830849; 
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;	// G=0x37830c55; S=0x37830c11; 
+ (int)ratingSystemFromString:(id)string;	// 0x37830d09
+ (id)stringForRatingSystem:(int)ratingSystem;	// 0x37830d51
- (id)init;	// 0x378306a9
- (id)initWithDictionary:(id)dictionary;	// 0x3783070d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x37830eb9
- (BOOL)_isRatingSystemForApps:(int)apps;	// 0x37830f59
- (BOOL)_isRatingSystemForMovies:(int)movies;	// 0x37830f69
- (BOOL)_isRatingSystemForMusic:(int)music;	// 0x37830f81
- (BOOL)_isRatingSystemForTV:(int)tv;	// 0x37830f8d
- (void)_setValue:(id)value forProperty:(id)property;	// 0x37830fe5
- (void)_setValueCopy:(id)copy forProperty:(id)property;	// 0x37830f9d
// declared property getter: - (id)contentRatingDictionary;	// 0x37830d79
- (id)copyWithZone:(NSZone *)zone;	// 0x378307ad
- (id)copyXPCEncoding;	// 0x37830e85
- (void)dealloc;	// 0x37830761
// declared property getter: - (BOOL)isExplicitContent;	// 0x37830809
// declared property getter: - (BOOL)isRestricted;	// 0x37830849
// declared property getter: - (int)rank;	// 0x37830935
// declared property getter: - (id)ratingDescription;	// 0x37830999
// declared property getter: - (id)ratingLabel;	// 0x37830a29
// declared property getter: - (int)ratingSystem;	// 0x37830ab9
// declared property getter: - (id)ratingSystemLogo;	// 0x37830db1
// declared property setter: - (void)setRank:(int)rank;	// 0x37830b45
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x37830b89
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x37830ba5
// declared property setter: - (void)setRatingSystem:(int)system;	// 0x37830bc1
// declared property setter: - (void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;	// 0x37830c11
// declared property getter: - (BOOL)shouldHideWhenRestricted;	// 0x37830c55
- (id)valueForProperty:(id)property;	// 0x37830cc1
@end


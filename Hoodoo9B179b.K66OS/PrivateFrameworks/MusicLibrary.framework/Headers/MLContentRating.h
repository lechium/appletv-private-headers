/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSMutableDictionary, NSString, NSNumber;

@interface MLContentRating : NSObject <NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x3004166d; S=0x300417ad; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x300416bd; S=0x300417c9; 
@property(retain, nonatomic) NSNumber *ratingRank;	// G=0x3004170d; S=0x300417e5; 
@property(copy, nonatomic) NSString *ratingSystem;	// G=0x3004175d; S=0x30041801; 
- (id)init;	// 0x3004153d
- (id)initWithContentRatingDictionary:(id)contentRatingDictionary;	// 0x30041551
- (id)initWithStringRepresentation:(id)stringRepresentation;	// 0x3004181d
- (void)_setValue:(id)value forKey:(id)key;	// 0x30041ab5
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x30041af1
- (id)copyStringRepresentation;	// 0x300419a9
- (id)copyWithZone:(NSZone *)zone;	// 0x30041621
- (void)dealloc;	// 0x300415d5
// declared property getter: - (id)ratingDescription;	// 0x3004166d
// declared property getter: - (id)ratingLabel;	// 0x300416bd
// declared property getter: - (id)ratingRank;	// 0x3004170d
// declared property getter: - (id)ratingSystem;	// 0x3004175d
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x300417ad
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x300417c9
// declared property setter: - (void)setRatingRank:(id)rank;	// 0x300417e5
// declared property setter: - (void)setRatingSystem:(id)system;	// 0x30041801
@end


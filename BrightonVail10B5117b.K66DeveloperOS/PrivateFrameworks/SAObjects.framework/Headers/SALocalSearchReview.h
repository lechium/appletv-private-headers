/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SACalendar, SALocalSearchRating, NSString, SAUIAppPunchOut;

@interface SALocalSearchReview : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *author;	// G=0x355ab069; S=0x355ab085; 
@property(copy, nonatomic) NSString *comment;	// G=0x355ab0d5; S=0x355ab0f1; 
@property(retain, nonatomic) SACalendar *lastUpdated;	// G=0x355ab141; S=0x355ab195; 
@property(copy, nonatomic) NSString *publication;	// G=0x355ab1d1; S=0x355ab1ed; 
@property(retain, nonatomic) SAUIAppPunchOut *reviewPunchOut;	// G=0x355ab23d; S=0x355ab291; 
@property(retain, nonatomic) SALocalSearchRating *reviewRating;	// G=0x355ab2cd; S=0x355ab321; 
+ (id)review;	// 0x355aafd9
+ (id)reviewWithDictionary:(id)dictionary context:(id)context;	// 0x355ab01d
// declared property getter: - (id)author;	// 0x355ab069
// declared property getter: - (id)comment;	// 0x355ab0d5
- (id)encodedClassName;	// 0x355aafcd
- (id)groupIdentifier;	// 0x355aafbd
// declared property getter: - (id)lastUpdated;	// 0x355ab141
// declared property getter: - (id)publication;	// 0x355ab1d1
// declared property getter: - (id)reviewPunchOut;	// 0x355ab23d
// declared property getter: - (id)reviewRating;	// 0x355ab2cd
// declared property setter: - (void)setAuthor:(id)author;	// 0x355ab085
// declared property setter: - (void)setComment:(id)comment;	// 0x355ab0f1
// declared property setter: - (void)setLastUpdated:(id)updated;	// 0x355ab195
// declared property setter: - (void)setPublication:(id)publication;	// 0x355ab1ed
// declared property setter: - (void)setReviewPunchOut:(id)anOut;	// 0x355ab291
// declared property setter: - (void)setReviewRating:(id)rating;	// 0x355ab321
@end


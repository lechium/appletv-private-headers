/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SAUIAppPunchOut, NSString, SACalendar, SALocalSearchRating, NSDate, NSNumber;

@interface SALocalSearchReview : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *author;	// G=0x32f41e3d; S=0x32f41e59; 
@property(copy, nonatomic) NSString *comment;	// G=0x32f41ea9; S=0x32f41ec5; 
@property(copy, nonatomic) NSDate *lastModified;	// G=0x32f41f15; S=0x32f41f31; 
@property(retain, nonatomic) SACalendar *lastUpdated;	// G=0x32f41f81; S=0x32f41fd5; 
@property(copy, nonatomic) NSString *publication;	// G=0x32f42011; S=0x32f4202d; 
@property(retain, nonatomic) NSNumber *rating;	// G=0x32f4207d; S=0x32f42099; 
@property(retain, nonatomic) SAUIAppPunchOut *reviewPunchOut;	// G=0x32f420b5; S=0x32f42109; 
@property(retain, nonatomic) SALocalSearchRating *reviewRating;	// G=0x32f42145; S=0x32f42199; 
+ (id)review;	// 0x32f41dad
+ (id)reviewWithDictionary:(id)dictionary context:(id)context;	// 0x32f41df1
// declared property getter: - (id)author;	// 0x32f41e3d
// declared property getter: - (id)comment;	// 0x32f41ea9
- (id)encodedClassName;	// 0x32f41da1
- (id)groupIdentifier;	// 0x32f41d91
// declared property getter: - (id)lastModified;	// 0x32f41f15
// declared property getter: - (id)lastUpdated;	// 0x32f41f81
// declared property getter: - (id)publication;	// 0x32f42011
// declared property getter: - (id)rating;	// 0x32f4207d
// declared property getter: - (id)reviewPunchOut;	// 0x32f420b5
// declared property getter: - (id)reviewRating;	// 0x32f42145
// declared property setter: - (void)setAuthor:(id)author;	// 0x32f41e59
// declared property setter: - (void)setComment:(id)comment;	// 0x32f41ec5
// declared property setter: - (void)setLastModified:(id)modified;	// 0x32f41f31
// declared property setter: - (void)setLastUpdated:(id)updated;	// 0x32f41fd5
// declared property setter: - (void)setPublication:(id)publication;	// 0x32f4202d
// declared property setter: - (void)setRating:(id)rating;	// 0x32f42099
// declared property setter: - (void)setReviewPunchOut:(id)anOut;	// 0x32f42109
// declared property setter: - (void)setReviewRating:(id)rating;	// 0x32f42199
@end


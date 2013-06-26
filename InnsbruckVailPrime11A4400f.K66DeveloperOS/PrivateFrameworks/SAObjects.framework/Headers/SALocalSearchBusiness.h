/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSURL, SALocalSearchRating, NSNumber, NSDictionary, NSString, NSArray;

@interface SALocalSearchBusiness : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *businessId;	// G=0x326b3fa9; S=0x326b3fc5; 
@property(copy, nonatomic) NSDictionary *businessIds;	// G=0x326b4015; S=0x326b4031; 
@property(copy, nonatomic) NSURL *businessUrl;	// G=0x326b4081; S=0x326b40fd; 
@property(copy, nonatomic) NSArray *categories;	// G=0x326b415d; S=0x326b4179; 
@property(copy, nonatomic) NSString *extSessionGuid;	// G=0x326b41c9; S=0x326b41e5; 
@property(copy, nonatomic) NSString *name;	// G=0x326b4235; S=0x326b4251; 
@property(copy, nonatomic) NSString *openingHours;	// G=0x326b42a1; S=0x326b42bd; 
@property(copy, nonatomic) NSArray *phoneNumbers;	// G=0x326b430d; S=0x326b4375; 
@property(copy, nonatomic) NSURL *photo;	// G=0x326b43dd; S=0x326b4459; 
@property(retain, nonatomic) SALocalSearchRating *rating;	// G=0x326b44b9; S=0x326b44fd; 
@property(copy, nonatomic) NSArray *reviews;	// G=0x326b4539; S=0x326b45a1; 
@property(assign, nonatomic) int totalNumberOfReviews;	// G=0x326b4609; S=0x326b4679; 
+ (id)business;	// 0x326b3f19
+ (id)businessWithDictionary:(id)dictionary context:(id)context;	// 0x326b3f5d
// declared property getter: - (id)businessId;	// 0x326b3fa9
// declared property getter: - (id)businessIds;	// 0x326b4015
// declared property getter: - (id)businessUrl;	// 0x326b4081
// declared property getter: - (id)categories;	// 0x326b415d
- (id)encodedClassName;	// 0x326b3f0d
// declared property getter: - (id)extSessionGuid;	// 0x326b41c9
- (id)groupIdentifier;	// 0x326b3efd
// declared property getter: - (id)name;	// 0x326b4235
// declared property getter: - (id)openingHours;	// 0x326b42a1
// declared property getter: - (id)phoneNumbers;	// 0x326b430d
// declared property getter: - (id)photo;	// 0x326b43dd
// declared property getter: - (id)rating;	// 0x326b44b9
// declared property getter: - (id)reviews;	// 0x326b4539
// declared property setter: - (void)setBusinessId:(id)anId;	// 0x326b3fc5
// declared property setter: - (void)setBusinessIds:(id)ids;	// 0x326b4031
// declared property setter: - (void)setBusinessUrl:(id)url;	// 0x326b40fd
// declared property setter: - (void)setCategories:(id)categories;	// 0x326b4179
// declared property setter: - (void)setExtSessionGuid:(id)guid;	// 0x326b41e5
// declared property setter: - (void)setName:(id)name;	// 0x326b4251
// declared property setter: - (void)setOpeningHours:(id)hours;	// 0x326b42bd
// declared property setter: - (void)setPhoneNumbers:(id)numbers;	// 0x326b4375
// declared property setter: - (void)setPhoto:(id)photo;	// 0x326b4459
// declared property setter: - (void)setRating:(id)rating;	// 0x326b44fd
// declared property setter: - (void)setReviews:(id)reviews;	// 0x326b45a1
// declared property setter: - (void)setTotalNumberOfReviews:(int)reviews;	// 0x326b4679
// declared property getter: - (int)totalNumberOfReviews;	// 0x326b4609
@end

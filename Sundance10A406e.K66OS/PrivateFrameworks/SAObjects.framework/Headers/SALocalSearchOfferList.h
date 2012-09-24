/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SALocalSearchOfferList : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *offers;	// G=0x3254f7ed; S=0x3254f869; 
@property(copy, nonatomic) NSString *providerId;	// G=0x3254f8d1; S=0x3254f8ed; 
+ (id)offerList;	// 0x3254f75d
+ (id)offerListWithDictionary:(id)dictionary context:(id)context;	// 0x3254f7a1
- (id)encodedClassName;	// 0x3254f751
- (id)groupIdentifier;	// 0x3254f741
// declared property getter: - (id)offers;	// 0x3254f7ed
// declared property getter: - (id)providerId;	// 0x3254f8d1
// declared property setter: - (void)setOffers:(id)offers;	// 0x3254f869
// declared property setter: - (void)setProviderId:(id)anId;	// 0x3254f8ed
@end

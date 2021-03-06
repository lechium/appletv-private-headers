/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, SAUIAppPunchOut;

@interface SALocalSearchOffer : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *identifier;	// G=0x353ffcf9; S=0x353ffd15; 
@property(retain, nonatomic) SAUIAppPunchOut *offerPunchOut;	// G=0x353ffd65; S=0x353ffdb9; 
@property(copy, nonatomic) NSString *title;	// G=0x353ffdf5; S=0x353ffe11; 
+ (id)offer;	// 0x353ffc69
+ (id)offerWithDictionary:(id)dictionary context:(id)context;	// 0x353ffcad
- (id)encodedClassName;	// 0x353ffc5d
- (id)groupIdentifier;	// 0x353ffc4d
// declared property getter: - (id)identifier;	// 0x353ffcf9
// declared property getter: - (id)offerPunchOut;	// 0x353ffd65
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353ffd15
// declared property setter: - (void)setOfferPunchOut:(id)anOut;	// 0x353ffdb9
// declared property setter: - (void)setTitle:(id)title;	// 0x353ffe11
// declared property getter: - (id)title;	// 0x353ffdf5
@end


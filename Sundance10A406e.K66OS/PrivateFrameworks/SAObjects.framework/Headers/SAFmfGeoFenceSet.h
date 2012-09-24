/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, SALocation, SAPerson, NSString, NSURL;

@interface SAFmfGeoFenceSet : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *enable;	// G=0x3253b661; S=0x3253b67d; 
@property(copy, nonatomic) NSString *fenceType;	// G=0x3253b6cd; S=0x3253b6e9; 
@property(retain, nonatomic) SAPerson *friend;	// G=0x3253b739; S=0x3253b78d; 
@property(copy, nonatomic) NSString *geoFenceTrigger;	// G=0x3253b7c9; S=0x3253b7e5; 
@property(copy, nonatomic) NSNumber *oneTimeOnly;	// G=0x3253b835; S=0x3253b851; 
@property(retain, nonatomic) SALocation *requestedLocation;	// G=0x3253b8a1; S=0x3253b8f5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3253b585; S=0x3253b601; 
+ (id)geoFenceSet;	// 0x3253b4f5
+ (id)geoFenceSetWithDictionary:(id)dictionary context:(id)context;	// 0x3253b539
// declared property getter: - (id)enable;	// 0x3253b661
- (id)encodedClassName;	// 0x3253b4e9
// declared property getter: - (id)fenceType;	// 0x3253b6cd
// declared property getter: - (id)friend;	// 0x3253b739
// declared property getter: - (id)geoFenceTrigger;	// 0x3253b7c9
- (id)groupIdentifier;	// 0x3253b4d9
// declared property getter: - (id)oneTimeOnly;	// 0x3253b835
// declared property getter: - (id)requestedLocation;	// 0x3253b8a1
- (BOOL)requiresResponse;	// 0x3253b931
// declared property setter: - (void)setEnable:(id)enable;	// 0x3253b67d
// declared property setter: - (void)setFenceType:(id)type;	// 0x3253b6e9
// declared property setter: - (void)setFriend:(id)aFriend;	// 0x3253b78d
// declared property setter: - (void)setGeoFenceTrigger:(id)trigger;	// 0x3253b7e5
// declared property setter: - (void)setOneTimeOnly:(id)only;	// 0x3253b851
// declared property setter: - (void)setRequestedLocation:(id)location;	// 0x3253b8f5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3253b601
// declared property getter: - (id)targetAppId;	// 0x3253b585
@end

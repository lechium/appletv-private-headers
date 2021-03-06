/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SALocation, NSNumber, SAPerson, NSString, NSURL;

@interface SAFmfGeoFenceSet : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *enable;	// G=0x353ebd19; S=0x353ebd35; 
@property(copy, nonatomic) NSString *fenceType;	// G=0x353ebd85; S=0x353ebda1; 
@property(retain, nonatomic) SAPerson *friend;	// G=0x353ebdf1; S=0x353ebe45; 
@property(copy, nonatomic) NSString *geoFenceTrigger;	// G=0x353ebe81; S=0x353ebe9d; 
@property(copy, nonatomic) NSNumber *oneTimeOnly;	// G=0x353ebeed; S=0x353ebf09; 
@property(retain, nonatomic) SALocation *requestedLocation;	// G=0x353ebf59; S=0x353ebfad; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353ebc3d; S=0x353ebcb9; 
+ (id)geoFenceSet;	// 0x353ebbad
+ (id)geoFenceSetWithDictionary:(id)dictionary context:(id)context;	// 0x353ebbf1
// declared property getter: - (id)enable;	// 0x353ebd19
- (id)encodedClassName;	// 0x353ebba1
// declared property getter: - (id)fenceType;	// 0x353ebd85
// declared property getter: - (id)friend;	// 0x353ebdf1
// declared property getter: - (id)geoFenceTrigger;	// 0x353ebe81
- (id)groupIdentifier;	// 0x353ebb91
// declared property getter: - (id)oneTimeOnly;	// 0x353ebeed
// declared property getter: - (id)requestedLocation;	// 0x353ebf59
- (BOOL)requiresResponse;	// 0x353ebfe9
// declared property setter: - (void)setEnable:(id)enable;	// 0x353ebd35
// declared property setter: - (void)setFenceType:(id)type;	// 0x353ebda1
// declared property setter: - (void)setFriend:(id)aFriend;	// 0x353ebe45
// declared property setter: - (void)setGeoFenceTrigger:(id)trigger;	// 0x353ebe9d
// declared property setter: - (void)setOneTimeOnly:(id)only;	// 0x353ebf09
// declared property setter: - (void)setRequestedLocation:(id)location;	// 0x353ebfad
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353ebcb9
// declared property getter: - (id)targetAppId;	// 0x353ebc3d
@end


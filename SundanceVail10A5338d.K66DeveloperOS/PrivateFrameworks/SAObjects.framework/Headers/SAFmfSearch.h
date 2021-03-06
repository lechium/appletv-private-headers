/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SALocation, NSString, NSArray, NSURL;

@interface SAFmfSearch : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SALocation *currentLocation;	// G=0x379606a9; S=0x379606fd; 
@property(copy, nonatomic) NSArray *emailAddresses;	// G=0x37960739; S=0x37960755; 
@property(copy, nonatomic) NSArray *friends;	// G=0x379607a5; S=0x37960821; 
@property(copy, nonatomic) NSString *proximity;	// G=0x37960889; S=0x379608a5; 
@property(retain, nonatomic) SALocation *requestedLocation;	// G=0x379608f5; S=0x37960949; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x379605cd; S=0x37960649; 
+ (id)search;	// 0x3796053d
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x37960581
// declared property getter: - (id)currentLocation;	// 0x379606a9
// declared property getter: - (id)emailAddresses;	// 0x37960739
- (id)encodedClassName;	// 0x37960531
// declared property getter: - (id)friends;	// 0x379607a5
- (id)groupIdentifier;	// 0x37960521
// declared property getter: - (id)proximity;	// 0x37960889
// declared property getter: - (id)requestedLocation;	// 0x379608f5
- (BOOL)requiresResponse;	// 0x37960985
// declared property setter: - (void)setCurrentLocation:(id)location;	// 0x379606fd
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x37960755
// declared property setter: - (void)setFriends:(id)friends;	// 0x37960821
// declared property setter: - (void)setProximity:(id)proximity;	// 0x379608a5
// declared property setter: - (void)setRequestedLocation:(id)location;	// 0x37960949
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x37960649
// declared property getter: - (id)targetAppId;	// 0x379605cd
@end


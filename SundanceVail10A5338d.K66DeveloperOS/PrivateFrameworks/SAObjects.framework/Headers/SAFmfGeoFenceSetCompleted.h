/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class SAFmfGeoFence, NSString, NSURL;

@interface SAFmfGeoFenceSetCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) SAFmfGeoFence *geoFence;	// G=0x37976809; S=0x3797685d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *searchContext;	// G=0x37976899; S=0x37976915; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3797672d; S=0x379767a9; 
+ (id)geoFenceSetCompleted;	// 0x3797669d
+ (id)geoFenceSetCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x379766e1
- (id)encodedClassName;	// 0x37976691
// declared property getter: - (id)geoFence;	// 0x37976809
- (id)groupIdentifier;	// 0x37976681
- (BOOL)requiresResponse;	// 0x37976975
// declared property getter: - (id)searchContext;	// 0x37976899
// declared property setter: - (void)setGeoFence:(id)fence;	// 0x3797685d
// declared property setter: - (void)setSearchContext:(id)context;	// 0x37976915
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x379767a9
// declared property getter: - (id)targetAppId;	// 0x3797672d
@end

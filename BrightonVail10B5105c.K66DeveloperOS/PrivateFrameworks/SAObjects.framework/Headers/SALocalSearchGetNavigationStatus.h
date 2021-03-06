/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSURL;

@interface SALocalSearchGetNavigationStatus : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *getRoute;	// G=0x303d097d; S=0x303d0999; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x303d08a1; S=0x303d091d; 
+ (id)getNavigationStatus;	// 0x303d0811
+ (id)getNavigationStatusWithDictionary:(id)dictionary context:(id)context;	// 0x303d0855
- (id)encodedClassName;	// 0x303d0805
// declared property getter: - (id)getRoute;	// 0x303d097d
- (id)groupIdentifier;	// 0x303d07f5
- (BOOL)requiresResponse;	// 0x303d09e9
// declared property setter: - (void)setGetRoute:(id)route;	// 0x303d0999
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x303d091d
// declared property getter: - (id)targetAppId;	// 0x303d08a1
@end


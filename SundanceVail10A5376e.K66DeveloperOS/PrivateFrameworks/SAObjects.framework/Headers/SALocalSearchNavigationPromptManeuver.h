/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSURL;

@interface SALocalSearchNavigationPromptManeuver : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *maneuverIndex;	// G=0x34261239; S=0x34261255; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3426115d; S=0x342611d9; 
+ (id)navigationPromptManeuver;	// 0x342610cd
+ (id)navigationPromptManeuverWithDictionary:(id)dictionary context:(id)context;	// 0x34261111
- (id)encodedClassName;	// 0x342610c1
- (id)groupIdentifier;	// 0x342610b1
// declared property getter: - (id)maneuverIndex;	// 0x34261239
- (BOOL)requiresResponse;	// 0x342612a5
// declared property setter: - (void)setManeuverIndex:(id)index;	// 0x34261255
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x342611d9
// declared property getter: - (id)targetAppId;	// 0x3426115d
@end

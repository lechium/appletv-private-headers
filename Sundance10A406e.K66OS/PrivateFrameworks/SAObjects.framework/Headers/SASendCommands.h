/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SASendCommands : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *commands;	// G=0x325326b5; S=0x3253271d; 
+ (id)sendCommands;	// 0x32532625
+ (id)sendCommandsWithDictionary:(id)dictionary context:(id)context;	// 0x32532669
// declared property getter: - (id)commands;	// 0x325326b5
- (id)encodedClassName;	// 0x32532619
- (id)groupIdentifier;	// 0x32532609
- (BOOL)requiresResponse;	// 0x32532785
// declared property setter: - (void)setCommands:(id)commands;	// 0x3253271d
@end

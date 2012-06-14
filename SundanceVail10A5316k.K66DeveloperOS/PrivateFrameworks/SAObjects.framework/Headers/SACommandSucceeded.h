/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SACommandSucceeded : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)commandSucceeded;	// 0x32f50359
+ (id)commandSucceededWithDictionary:(id)dictionary context:(id)context;	// 0x32f5039d
- (id)encodedClassName;	// 0x32f5034d
- (id)groupIdentifier;	// 0x32f5033d
- (BOOL)requiresResponse;	// 0x32f503e9
@end


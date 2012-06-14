/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAClearContext : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)clearContext;	// 0x32f4ff35
+ (id)clearContextWithDictionary:(id)dictionary context:(id)context;	// 0x32f4ff79
- (id)encodedClassName;	// 0x32f4ff29
- (id)groupIdentifier;	// 0x32f4ff19
@end


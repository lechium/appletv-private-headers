/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SASetRestrictions : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *restrictions;	// G=0x355c0dc9; S=0x355c0de5; 
+ (id)setRestrictions;	// 0x355c0d39
+ (id)setRestrictionsWithDictionary:(id)dictionary context:(id)context;	// 0x355c0d7d
- (id)encodedClassName;	// 0x355c0d2d
- (id)groupIdentifier;	// 0x355c0d1d
// declared property getter: - (id)restrictions;	// 0x355c0dc9
// declared property setter: - (void)setRestrictions:(id)restrictions;	// 0x355c0de5
@end

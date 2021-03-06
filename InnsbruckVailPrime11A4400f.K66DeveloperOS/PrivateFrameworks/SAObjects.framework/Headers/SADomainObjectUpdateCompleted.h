/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSURL, NSString;

@interface SADomainObjectUpdateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *identifier;	// G=0x326ee2d1; S=0x326ee34d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectUpdateCompleted;	// 0x326ee241
+ (id)domainObjectUpdateCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326ee285
- (id)encodedClassName;	// 0x326ee235
- (id)groupIdentifier;	// 0x326ee225
// declared property getter: - (id)identifier;	// 0x326ee2d1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x326ee34d
@end


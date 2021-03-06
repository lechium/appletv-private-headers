/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SADomainObjectCancel : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *identifier;	// G=0x353de739; S=0x353de78d; 
+ (id)domainObjectCancel;	// 0x353de6a9
+ (id)domainObjectCancelWithDictionary:(id)dictionary context:(id)context;	// 0x353de6ed
- (id)encodedClassName;	// 0x353de69d
- (id)groupIdentifier;	// 0x353de68d
// declared property getter: - (id)identifier;	// 0x353de739
- (BOOL)requiresResponse;	// 0x353de7c9
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353de78d
@end


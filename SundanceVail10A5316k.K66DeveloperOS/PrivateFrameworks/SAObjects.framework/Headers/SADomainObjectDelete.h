/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SADomainObjectCommand.h"

@class SADomainObject;

@interface SADomainObjectDelete : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *identifier;	// G=0x32f51169; S=0x32f511bd; 
+ (id)domainObjectDelete;	// 0x32f510d9
+ (id)domainObjectDeleteWithDictionary:(id)dictionary context:(id)context;	// 0x32f5111d
- (id)encodedClassName;	// 0x32f510cd
- (id)groupIdentifier;	// 0x32f510bd
// declared property getter: - (id)identifier;	// 0x32f51169
- (BOOL)requiresResponse;	// 0x32f511f9
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x32f511bd
@end


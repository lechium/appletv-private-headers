/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SADomainObjectCommand.h"

@class SADomainObject;

@interface SADomainObjectCommit : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *identifier;	// G=0x32f50afd; S=0x32f50b51; 
+ (id)domainObjectCommit;	// 0x32f50a6d
+ (id)domainObjectCommitWithDictionary:(id)dictionary context:(id)context;	// 0x32f50ab1
- (id)encodedClassName;	// 0x32f50a61
- (id)groupIdentifier;	// 0x32f50a51
// declared property getter: - (id)identifier;	// 0x32f50afd
- (BOOL)requiresResponse;	// 0x32f50b8d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x32f50b51
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SAAcknowledgeAlert : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SADomainObject *object;	// G=0x304f969d; S=0x304f96f1; 
+ (id)acknowledgeAlert;	// 0x304f960d
+ (id)acknowledgeAlertWithDictionary:(id)dictionary context:(id)context;	// 0x304f9651
- (id)encodedClassName;	// 0x304f9601
- (id)groupIdentifier;	// 0x304f95f1
// declared property getter: - (id)object;	// 0x304f969d
- (BOOL)requiresResponse;	// 0x304f972d
// declared property setter: - (void)setObject:(id)object;	// 0x304f96f1
@end


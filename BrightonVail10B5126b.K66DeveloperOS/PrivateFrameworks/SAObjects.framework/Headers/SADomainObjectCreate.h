/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSURL, SADomainObject;

@interface SADomainObjectCreate : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *object;	// G=0x353ddcc9; S=0x353ddd1d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353ddbed; S=0x353ddc69; 
+ (id)domainObjectCreate;	// 0x353ddb5d
+ (id)domainObjectCreateWithDictionary:(id)dictionary context:(id)context;	// 0x353ddba1
- (id)encodedClassName;	// 0x353ddb51
- (id)groupIdentifier;	// 0x353ddb41
// declared property getter: - (id)object;	// 0x353ddcc9
- (BOOL)requiresResponse;	// 0x353ddd59
// declared property setter: - (void)setObject:(id)object;	// 0x353ddd1d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353ddc69
// declared property getter: - (id)targetAppId;	// 0x353ddbed
@end


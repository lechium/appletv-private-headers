/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceIdentifiable.h"
#import "AceObject.h"

@class NSURL;

@interface SADomainObject : AceObject <SAAceIdentifiable> {
}
@property(copy, nonatomic) NSURL *identifier;	// G=0x32f50705; S=0x32f50781; @dynamic
+ (id)domainObject;	// 0x32f50675
+ (id)domainObjectWithDictionary:(id)dictionary context:(id)context;	// 0x32f506b9
- (id)encodedClassName;	// 0x32f50669
- (id)groupIdentifier;	// 0x32f50659
// declared property getter: - (id)identifier;	// 0x32f50705
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x32f50781
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f507e1
@end


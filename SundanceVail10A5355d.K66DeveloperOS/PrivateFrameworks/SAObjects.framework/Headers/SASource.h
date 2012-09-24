/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, NSString;

@interface SASource : SADomainObject {
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x36626b35; S=0x36626b51; 
@property(copy, nonatomic) NSString *accountName;	// G=0x36626ba1; S=0x36626bbd; 
@property(copy, nonatomic) NSString *domainIdentifier;	// G=0x36626c0d; S=0x36626c29; 
@property(copy, nonatomic) NSNumber *remote;	// G=0x36626c79; S=0x36626c95; 
+ (id)source;	// 0x36626aa5
+ (id)sourceWithDictionary:(id)dictionary context:(id)context;	// 0x36626ae9
// declared property getter: - (id)accountIdentifier;	// 0x36626b35
// declared property getter: - (id)accountName;	// 0x36626ba1
// declared property getter: - (id)domainIdentifier;	// 0x36626c0d
- (id)encodedClassName;	// 0x36626a99
- (id)groupIdentifier;	// 0x36626a89
// declared property getter: - (id)remote;	// 0x36626c79
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x36626b51
// declared property setter: - (void)setAccountName:(id)name;	// 0x36626bbd
// declared property setter: - (void)setDomainIdentifier:(id)identifier;	// 0x36626c29
// declared property setter: - (void)setRemote:(id)remote;	// 0x36626c95
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x36626ce5
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"
#import "SAAceCommand.h"

@class NSString;

@interface SABaseCommand : AceObject <SAAceSerializable, SAAceCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// G=0x353dcad9; S=0x353dcaf5; @dynamic
@property(copy, nonatomic) NSString *refId;	// G=0x353dcb45; S=0x353dcb61; @dynamic
+ (id)baseCommand;	// 0x353dca49
+ (id)baseCommandWithDictionary:(id)dictionary context:(id)context;	// 0x353dca8d
// declared property getter: - (id)aceId;	// 0x353dcad9
- (id)encodedClassName;	// 0x353dca3d
- (id)groupIdentifier;	// 0x353dca2d
// declared property getter: - (id)refId;	// 0x353dcb45
// declared property setter: - (void)setAceId:(id)anId;	// 0x353dcaf5
// declared property setter: - (void)setRefId:(id)anId;	// 0x353dcb61
@end


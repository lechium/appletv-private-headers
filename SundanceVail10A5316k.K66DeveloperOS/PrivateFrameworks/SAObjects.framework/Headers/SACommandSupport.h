/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray, SAObjectSupport;

@interface SACommandSupport : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *aceVersion;	// G=0x32f5ed25; S=0x32f5ed41; 
@property(copy, nonatomic) NSString *commandId;	// G=0x32f5ed91; S=0x32f5edad; 
@property(retain, nonatomic) SAObjectSupport *resultSupport;	// G=0x32f5edfd; S=0x32f5ee51; 
@property(copy, nonatomic) NSArray *supportedConstraints;	// G=0x32f5ee8d; S=0x32f5ef09; 
@property(assign, nonatomic) int weight;	// G=0x32f5ef71; S=0x32f5efe1; 
+ (id)commandSupport;	// 0x32f5ec95
+ (id)commandSupportWithDictionary:(id)dictionary context:(id)context;	// 0x32f5ecd9
// declared property getter: - (id)aceVersion;	// 0x32f5ed25
// declared property getter: - (id)commandId;	// 0x32f5ed91
- (id)encodedClassName;	// 0x32f5ec89
- (id)groupIdentifier;	// 0x32f5ec79
// declared property getter: - (id)resultSupport;	// 0x32f5edfd
// declared property setter: - (void)setAceVersion:(id)version;	// 0x32f5ed41
// declared property setter: - (void)setCommandId:(id)anId;	// 0x32f5edad
// declared property setter: - (void)setResultSupport:(id)support;	// 0x32f5ee51
// declared property setter: - (void)setSupportedConstraints:(id)constraints;	// 0x32f5ef09
// declared property setter: - (void)setWeight:(int)weight;	// 0x32f5efe1
// declared property getter: - (id)supportedConstraints;	// 0x32f5ee8d
// declared property getter: - (int)weight;	// 0x32f5ef71
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSNumber;

@interface SADistance : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *unit;	// G=0x3050e031; S=0x3050e04d; 
@property(copy, nonatomic) NSString *units;	// G=0x3050e09d; S=0x3050e0b9; 
@property(retain, nonatomic) NSNumber *value;	// G=0x3050e109; S=0x3050e125; 
+ (id)distance;	// 0x3050dfa1
+ (id)distanceWithDictionary:(id)dictionary context:(id)context;	// 0x3050dfe5
- (id)encodedClassName;	// 0x3050df95
- (id)groupIdentifier;	// 0x3050df85
// declared property setter: - (void)setUnit:(id)unit;	// 0x3050e04d
// declared property setter: - (void)setUnits:(id)units;	// 0x3050e0b9
// declared property setter: - (void)setValue:(id)value;	// 0x3050e125
// declared property getter: - (id)unit;	// 0x3050e031
// declared property getter: - (id)units;	// 0x3050e09d
// declared property getter: - (id)value;	// 0x3050e109
@end


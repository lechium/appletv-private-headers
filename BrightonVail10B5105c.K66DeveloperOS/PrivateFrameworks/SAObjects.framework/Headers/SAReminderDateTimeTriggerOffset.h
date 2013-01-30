/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *offsetTimeUnit;	// G=0x303c1725; S=0x303c1741; 
@property(copy, nonatomic) NSNumber *offsetValue;	// G=0x303c1791; S=0x303c17ad; 
+ (id)dateTimeTriggerOffset;	// 0x303c1695
+ (id)dateTimeTriggerOffsetWithDictionary:(id)dictionary context:(id)context;	// 0x303c16d9
- (id)encodedClassName;	// 0x303c1689
- (id)groupIdentifier;	// 0x303c1679
// declared property getter: - (id)offsetTimeUnit;	// 0x303c1725
// declared property getter: - (id)offsetValue;	// 0x303c1791
// declared property setter: - (void)setOffsetTimeUnit:(id)unit;	// 0x303c1741
// declared property setter: - (void)setOffsetValue:(id)value;	// 0x303c17ad
@end

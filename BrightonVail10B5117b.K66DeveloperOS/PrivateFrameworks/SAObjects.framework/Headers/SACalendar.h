/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSDate;

@interface SACalendar : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSDate *date;	// G=0x355cffc5; S=0x355cffe1; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x355d0031; S=0x355d004d; 
+ (id)calendar;	// 0x355cff35
+ (id)calendarWithDictionary:(id)dictionary context:(id)context;	// 0x355cff79
// declared property getter: - (id)date;	// 0x355cffc5
- (id)encodedClassName;	// 0x355cff29
- (id)groupIdentifier;	// 0x355cff19
// declared property setter: - (void)setDate:(id)date;	// 0x355cffe1
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x355d004d
// declared property getter: - (id)timeZoneId;	// 0x355d0031
@end


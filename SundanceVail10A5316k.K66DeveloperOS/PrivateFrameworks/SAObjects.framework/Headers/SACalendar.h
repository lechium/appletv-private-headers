/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSDate;

@interface SACalendar : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSDate *date;	// G=0x32f65ecd; S=0x32f65ee9; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x32f65f39; S=0x32f65f55; 
+ (id)calendar;	// 0x32f65e3d
+ (id)calendarWithDictionary:(id)dictionary context:(id)context;	// 0x32f65e81
// declared property getter: - (id)date;	// 0x32f65ecd
- (id)encodedClassName;	// 0x32f65e31
- (id)groupIdentifier;	// 0x32f65e21
// declared property setter: - (void)setDate:(id)date;	// 0x32f65ee9
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x32f65f55
// declared property getter: - (id)timeZoneId;	// 0x32f65f39
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"


@interface EKAlarmWrapper : NSObject {
	CalAlarmOccurrence *_alarm;	// 4 = 0x4
}
+ (id)wrapperWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x31682fd5
- (id)initWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x31682f1d
- (void)dealloc;	// 0x316834f5
- (id)description;	// 0x31684749
- (double)fireDate;	// 0x31684731
- (unsigned)hash;	// 0x316847ed
- (BOOL)isEqual:(id)equal;	// 0x31684821
- (id)occurrence;	// 0x31682fa5
@end


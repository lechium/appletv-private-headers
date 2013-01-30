/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"


__attribute__((visibility("hidden")))
@interface EKAlarmWrapper : NSObject {
	CalAlarmOccurrence *_alarm;	// 4 = 0x4
}
+ (id)wrapperWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x35b75819
- (id)initWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x35b75855
- (void)dealloc;	// 0x35b7589d
- (id)description;	// 0x35b759e9
- (double)fireDate;	// 0x35b758e1
- (unsigned)hash;	// 0x35b759b5
- (BOOL)isEqual:(id)equal;	// 0x35b7592d
- (id)occurrence;	// 0x35b758f5
@end

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
@private
	CalAlarmOccurrence *_alarm;	// 4 = 0x4
}
+ (id)wrapperWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x30e49a91
- (id)initWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x30e49acd
- (void)dealloc;	// 0x30e49b15
- (id)description;	// 0x30e49c61
- (double)fireDate;	// 0x30e49b59
- (unsigned)hash;	// 0x30e49c2d
- (BOOL)isEqual:(id)equal;	// 0x30e49ba5
- (id)occurrence;	// 0x30e49b6d
@end


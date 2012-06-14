/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSString;

@interface ICSTimeZone : ICSComponent {
	id _systemTimeZone;	// 12 = 0xc
}
@property(retain) NSString *tzid;	// G=0x33d69fa1; S=0x33d69fe9; 
+ (id)blocksAfterDate:(id)date untilDate:(id)date2 forTimeZone:(id)timeZone;	// 0x33d6a149
+ (id)name;	// 0x33d69f41
+ (id)timeZoneWithSystemTimeZoneName:(id)systemTimeZoneName;	// 0x33d6b975
- (id)initWithSystemTimeZone:(id)systemTimeZone;	// 0x33d6b159
- (id)initWithSystemTimeZone:(id)systemTimeZone fromDate:(id)date options:(int)options;	// 0x33d69f4d
- (id)initWithTimeZone:(id)timeZone fromDate:(id)date options:(int)options;	// 0x33d6b379
- (id)computeTimeZoneChangeListFromDate:(id)date toDate:(id)date2;	// 0x33d96271
- (void)dealloc;	// 0x33d6a0a1
- (id)getNSTimeZone:(id)zone;	// 0x33d960e9
- (id)getNSTimeZoneFromDate:(id)date toDate:(id)date2;	// 0x33d95cf5
- (BOOL)isEqualToNSTimeZone:(id)nstimeZone forDate:(id)date;	// 0x33d95ae9
// declared property setter: - (void)setTzid:(id)tzid;	// 0x33d69fe9
- (id)systemTimeZoneForDate:(id)date;	// 0x33d6a009
// declared property getter: - (id)tzid;	// 0x33d69fa1
@end


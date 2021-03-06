/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSString, NSURL, EKPersistentCalendar, EKPersistentCalendarItem, NSNumber, NSDate;

__attribute__((visibility("hidden")))
@interface EKPersistentResourceChange : EKPersistentObject {
}
@property(readonly, assign, nonatomic) BOOL alerted;	// G=0x313f2181; 
@property(readonly, assign, nonatomic) EKPersistentCalendar *calendar;	// G=0x313f2015; 
@property(readonly, assign, nonatomic) EKPersistentCalendarItem *calendarItem;	// G=0x313f2031; 
@property(readonly, assign, nonatomic) unsigned changeType;	// G=0x313f20bd; 
@property(readonly, assign, nonatomic) NSURL *changedByAddress;	// G=0x313f2069; 
@property(readonly, assign, nonatomic) NSString *changedByDisplayName;	// G=0x313f204d; 
@property(readonly, assign, nonatomic) NSString *changedByFirstName;	// G=0x313f2085; 
@property(readonly, assign, nonatomic) NSString *changedByLastName;	// G=0x313f20a1; 
@property(readonly, assign, nonatomic) unsigned changedProperties;	// G=0x313f2149; 
@property(readonly, assign, nonatomic) NSNumber *createCount;	// G=0x313f20f5; 
@property(readonly, assign, nonatomic) NSNumber *deleteCount;	// G=0x313f212d; 
@property(readonly, assign, nonatomic) NSString *deletedTitle;	// G=0x313f2165; 
@property(readonly, assign, nonatomic) unsigned publicStatus;	// G=0x313f21a1; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x313f20d9; 
@property(readonly, assign, nonatomic) NSNumber *updateCount;	// G=0x313f2111; 
+ (id)defaultPropertiesToLoad;	// 0x313f1e5d
+ (id)relations;	// 0x313f1f55
// declared property getter: - (BOOL)alerted;	// 0x313f2181
// declared property getter: - (id)calendar;	// 0x313f2015
// declared property getter: - (id)calendarItem;	// 0x313f2031
// declared property getter: - (unsigned)changeType;	// 0x313f20bd
// declared property getter: - (id)changedByAddress;	// 0x313f2069
// declared property getter: - (id)changedByDisplayName;	// 0x313f204d
// declared property getter: - (id)changedByFirstName;	// 0x313f2085
// declared property getter: - (id)changedByLastName;	// 0x313f20a1
// declared property getter: - (unsigned)changedProperties;	// 0x313f2149
// declared property getter: - (id)createCount;	// 0x313f20f5
// declared property getter: - (id)deleteCount;	// 0x313f212d
// declared property getter: - (id)deletedTitle;	// 0x313f2165
// declared property getter: - (unsigned)publicStatus;	// 0x313f21a1
// declared property getter: - (id)timestamp;	// 0x313f20d9
// declared property getter: - (id)updateCount;	// 0x313f2111
@end


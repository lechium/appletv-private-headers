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
@property(readonly, assign, nonatomic) BOOL alerted;	// G=0x30e6fe0d; 
@property(readonly, assign, nonatomic) EKPersistentCalendar *calendar;	// G=0x30e6fcd9; 
@property(readonly, assign, nonatomic) EKPersistentCalendarItem *calendarItem;	// G=0x30e6fcf5; 
@property(readonly, assign, nonatomic) unsigned changeType;	// G=0x30e6fd49; 
@property(readonly, assign, nonatomic) NSURL *changedByAddress;	// G=0x30e6fd2d; 
@property(readonly, assign, nonatomic) NSString *changedByName;	// G=0x30e6fd11; 
@property(readonly, assign, nonatomic) unsigned changedProperties;	// G=0x30e6fdd5; 
@property(readonly, assign, nonatomic) NSNumber *createCount;	// G=0x30e6fd81; 
@property(readonly, assign, nonatomic) NSNumber *deleteCount;	// G=0x30e6fdb9; 
@property(readonly, assign, nonatomic) NSString *deletedTitle;	// G=0x30e6fdf1; 
@property(readonly, assign, nonatomic) unsigned publicStatus;	// G=0x30e6fe2d; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x30e6fd65; 
@property(readonly, assign, nonatomic) NSNumber *updateCount;	// G=0x30e6fd9d; 
+ (id)defaultPropertiesToLoad;	// 0x30e6fb3d
+ (id)relations;	// 0x30e6fc19
// declared property getter: - (BOOL)alerted;	// 0x30e6fe0d
// declared property getter: - (id)calendar;	// 0x30e6fcd9
// declared property getter: - (id)calendarItem;	// 0x30e6fcf5
// declared property getter: - (unsigned)changeType;	// 0x30e6fd49
// declared property getter: - (id)changedByAddress;	// 0x30e6fd2d
// declared property getter: - (id)changedByName;	// 0x30e6fd11
// declared property getter: - (unsigned)changedProperties;	// 0x30e6fdd5
// declared property getter: - (id)createCount;	// 0x30e6fd81
// declared property getter: - (id)deleteCount;	// 0x30e6fdb9
// declared property getter: - (id)deletedTitle;	// 0x30e6fdf1
// declared property getter: - (unsigned)publicStatus;	// 0x30e6fe2d
// declared property getter: - (id)timestamp;	// 0x30e6fd65
// declared property getter: - (id)updateCount;	// 0x30e6fd9d
@end


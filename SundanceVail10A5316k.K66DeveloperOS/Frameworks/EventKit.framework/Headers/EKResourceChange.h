/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"
#import "EKIdentityProtocol.h"

@class NSString, NSURL, EKCalendar, NSNumber, NSDate, EKCalendarItem;

__attribute__((visibility("hidden")))
@interface EKResourceChange : EKObject <EKIdentityProtocol> {
}
@property(readonly, assign, nonatomic) BOOL alerted;	// G=0x30e70219; 
@property(readonly, assign, nonatomic) EKCalendar *calendar;	// G=0x30e7001d; 
@property(readonly, assign, nonatomic) EKCalendarItem *calendarItem;	// G=0x30e70051; 
@property(readonly, assign, nonatomic) unsigned changeType;	// G=0x30e70079; 
@property(readonly, assign, nonatomic) NSURL *changedByAddress;	// G=0x30e6ff69; 
@property(readonly, assign, nonatomic) NSString *changedByName;	// G=0x30e6ff41; 
@property(readonly, assign, nonatomic) NSNumber *createCount;	// G=0x30e70179; 
@property(readonly, assign, nonatomic) BOOL dateChanged;	// G=0x30e700c9; 
@property(readonly, assign, nonatomic) NSNumber *deleteCount;	// G=0x30e701c9; 
@property(readonly, assign, nonatomic) NSString *deletedTitle;	// G=0x30e701f1; 
@property(readonly, assign, nonatomic) BOOL locationChanged;	// G=0x30e7014d; 
@property(readonly, assign, nonatomic) unsigned publicStatus;	// G=0x30e70241; 
@property(readonly, assign, nonatomic) BOOL timeChanged;	// G=0x30e700f5; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x30e700a1; 
@property(readonly, assign, nonatomic) BOOL titleChanged;	// G=0x30e70121; 
@property(readonly, assign, nonatomic) NSNumber *updateCount;	// G=0x30e701a1; 
- (id)_calendarItemRelation;	// 0x30e6ff25
- (id)_persistentResourceChange;	// 0x30e6fe49
// declared property getter: - (BOOL)alerted;	// 0x30e70219
// declared property getter: - (id)calendar;	// 0x30e7001d
// declared property getter: - (id)calendarItem;	// 0x30e70051
// declared property getter: - (unsigned)changeType;	// 0x30e70079
// declared property getter: - (id)changedByAddress;	// 0x30e6ff69
// declared property getter: - (id)changedByName;	// 0x30e6ff41
- (void)clearAlertedStatus;	// 0x30e70269
// declared property getter: - (id)createCount;	// 0x30e70179
// declared property getter: - (BOOL)dateChanged;	// 0x30e700c9
// declared property getter: - (id)deleteCount;	// 0x30e701c9
// declared property getter: - (id)deletedTitle;	// 0x30e701f1
- (id)emailAddress;	// 0x30e6ffa1
- (id)lazyLoadRelationForKey:(id)key;	// 0x30e6fe59
// declared property getter: - (BOOL)locationChanged;	// 0x30e7014d
- (id)name;	// 0x30e6ff91
// declared property getter: - (unsigned)publicStatus;	// 0x30e70241
// declared property getter: - (BOOL)timeChanged;	// 0x30e700f5
// declared property getter: - (id)timestamp;	// 0x30e700a1
// declared property getter: - (BOOL)titleChanged;	// 0x30e70121
// declared property getter: - (id)updateCount;	// 0x30e701a1
@end


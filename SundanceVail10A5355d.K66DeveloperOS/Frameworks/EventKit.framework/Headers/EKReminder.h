/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"

@class NSDateComponents, NSDate;

@interface EKReminder : EKCalendarItem {
}
@property(assign, nonatomic, getter=isCompleted) BOOL completed;	// G=0x31f74fbd; S=0x31f7770d; 
@property(copy, nonatomic) NSDate *completionDate;	// G=0x31f74fd9; S=0x31f77751; 
@property(assign) unsigned displayOrder;	// G=0x31fb9eed; S=0x31fb9f89; converted property
@property(copy, nonatomic) NSDateComponents *dueDateComponents;	// G=0x31f66115; S=0x31f75385; 
@property(assign, nonatomic) int priority;	// G=0x31fb9fcd; S=0x31fb9ff9; 
@property(copy, nonatomic) NSDateComponents *startDateComponents;	// G=0x31f75631; S=0x31f7578d; 
+ (id)reminderWithEventStore:(id)eventStore;	// 0x31f759a1
- (id)initWithPersistentObject:(id)persistentObject;	// 0x31f66019
- (id)_persistentReminder;	// 0x31f75035
- (void)_sendModifiedNote;	// 0x31fb9d8d
- (void)clearParentID;	// 0x31fba111
- (BOOL)commit:(id *)commit;	// 0x31f76035
// declared property getter: - (id)completionDate;	// 0x31f74fd9
- (void)dealloc;	// 0x31f75119
- (id)description;	// 0x31fba025
// converted property getter: - (unsigned)displayOrder;	// 0x31fb9eed
- (id)dueDate;	// 0x31f74ee1
// declared property getter: - (id)dueDateComponents;	// 0x31f66115
- (id)externalURI;	// 0x31fb9de1
// declared property getter: - (BOOL)isCompleted;	// 0x31f74fbd
- (id)parentID;	// 0x31fba0e9
// declared property getter: - (int)priority;	// 0x31fb9fcd
- (id)reminderIdentifier;	// 0x31fb9dd1
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x31f7770d
// declared property setter: - (void)setCompletionDate:(id)date;	// 0x31f77751
// converted property setter: - (void)setDisplayOrder:(unsigned)order;	// 0x31fb9f89
// declared property setter: - (void)setDueDateComponents:(id)components;	// 0x31f75385
// declared property setter: - (void)setPriority:(int)priority;	// 0x31fb9ff9
// declared property setter: - (void)setStartDateComponents:(id)components;	// 0x31f7578d
- (void)setTimeZone:(id)zone;	// 0x31fb9e65
// declared property getter: - (id)startDateComponents;	// 0x31f75631
- (BOOL)validate:(id *)validate;	// 0x31f75d89
@end

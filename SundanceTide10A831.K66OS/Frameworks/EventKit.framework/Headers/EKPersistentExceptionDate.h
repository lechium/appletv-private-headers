/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentObject.h"

@class EKPersistentCalendarItem, NSDate;

@interface EKPersistentExceptionDate : EKPersistentObject {
	NSDate *_date;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x34f53299; @synthesize=_date
@property(retain, nonatomic) EKPersistentCalendarItem *owner;	// G=0x34f532e1; S=0x34f532fd; 
+ (id)exceptionDateWithDate:(id)date;	// 0x34f53129
+ (id)relations;	// 0x34f53165
- (id)initWithExceptionDate:(id)exceptionDate;	// 0x34f531f5
- (id)copyWithZone:(NSZone *)zone;	// 0x34f53231
// declared property getter: - (id)date;	// 0x34f53299
- (id)description;	// 0x34f53319
- (int)entityType;	// 0x34f532dd
- (unsigned)hash;	// 0x34f532b5
// declared property getter: - (id)owner;	// 0x34f532e1
// declared property setter: - (void)setOwner:(id)owner;	// 0x34f532fd
@end

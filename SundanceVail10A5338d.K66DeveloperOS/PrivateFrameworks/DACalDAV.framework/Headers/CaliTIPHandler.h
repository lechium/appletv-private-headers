/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library


@interface CaliTIPHandler : NSObject {
}
+ (id)calculateDiffsForEvent:(id)event inMessage:(id)message;	// 0x31dc493d
+ (id)debugStringForEvent:(id)event;	// 0x31dc34a1
+ (BOOL)diffsAreImportant:(id)important;	// 0x31dc3431
+ (BOOL)doScheduleChanges:(id)changes applyToEvent:(id)event inCalendar:(id)calendar;	// 0x31dc37b9
+ (id)getOccurrenceChange:(id)change forEvent:(id)event inCalendar:(id)calendar;	// 0x31dc3541
+ (void)initialize;	// 0x31dc3231
+ (BOOL)isAddressMe:(id)me forAccount:(id)account;	// 0x31dc394d
+ (BOOL)logiTIPDetail;	// 0x31dc32a1
+ (id)myAddressInAccount:(id)account forEvent:(id)event;	// 0x31dc3979
+ (BOOL)myStatusNeedsActionForEvent:(id)event withAccount:(id)account;	// 0x31dc3a81
+ (void)processMessage:(id)message inCalendar:(id)calendar;	// 0x31dc3bad
+ (void)processMessages:(id)messages inCalendar:(id)calendar;	// 0x31dc3335
+ (void)setLogiTIPDetail:(BOOL)detail;	// 0x31dc32b1
@end


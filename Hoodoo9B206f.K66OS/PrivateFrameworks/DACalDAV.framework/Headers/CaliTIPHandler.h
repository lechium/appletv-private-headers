/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library


@interface CaliTIPHandler : NSObject {
}
+ (id)calculateDiffsForEvent:(id)event inMessage:(id)message;	// 0x3315acd5
+ (id)debugStringForEvent:(id)event;	// 0x33159a6d
+ (BOOL)diffsAreImportant:(id)important;	// 0x33159945
+ (BOOL)doScheduleChanges:(id)changes applyToEvent:(id)event inCalendar:(id)calendar;	// 0x33159d5d
+ (id)getOccurrenceChange:(id)change forEvent:(id)event inCalendar:(id)calendar;	// 0x33159b05
+ (void)initialize;	// 0x33159769
+ (BOOL)isAddressMe:(id)me forAccount:(id)account;	// 0x33159ecd
+ (BOOL)logiTIPDetail;	// 0x331597d5
+ (id)myAddressInAccount:(id)account forEvent:(id)event;	// 0x33159ef9
+ (BOOL)myStatusNeedsActionForEvent:(id)event withAccount:(id)account;	// 0x33159fdd
+ (void)processMessage:(id)message inCalendar:(id)calendar;	// 0x3315a0cd
+ (void)processMessages:(id)messages inCalendar:(id)calendar;	// 0x33159865
+ (void)setLogiTIPDetail:(BOOL)detail;	// 0x331597e5
@end

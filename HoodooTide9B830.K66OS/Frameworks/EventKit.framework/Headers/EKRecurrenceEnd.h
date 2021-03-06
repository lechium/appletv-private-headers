/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {
@private
	NSDate *_endDate;	// 4 = 0x4
	unsigned _occurrenceCount;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x324730d5; @synthesize=_endDate
@property(readonly, assign, nonatomic) unsigned occurrenceCount;	// G=0x324730c5; @synthesize=_occurrenceCount
+ (id)recurrenceEndWithEndDate:(id)endDate;	// 0x324abdb1
+ (id)recurrenceEndWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x324abdf9
- (id)initWithCoder:(id)coder;	// 0x324abeb9
- (id)initWithEndDate:(id)endDate;	// 0x32473001
- (id)initWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x324abe41
- (id)copyWithZone:(NSZone *)zone;	// 0x324ac1a5
- (void)dealloc;	// 0x324746e9
- (id)description;	// 0x324abfc9
- (void)encodeWithCoder:(id)coder;	// 0x324abf51
// declared property getter: - (id)endDate;	// 0x324730d5
- (unsigned)hash;	// 0x324ac09d
- (BOOL)isEqual:(id)equal;	// 0x324ac0dd
// declared property getter: - (unsigned)occurrenceCount;	// 0x324730c5
- (BOOL)usesEndDate;	// 0x324abfb1
@end


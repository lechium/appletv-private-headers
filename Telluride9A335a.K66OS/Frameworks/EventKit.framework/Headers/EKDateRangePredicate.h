/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library
#import "EventKit-Structs.h"

@class NSDate;

@interface EKDateRangePredicate : NSPredicate {
@private
	NSDate *_startDate;	// 8 = 0x8
	NSDate *_endDate;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x310368d5; @synthesize=_endDate
@property(readonly, assign, nonatomic) NSDate *startDate;	// G=0x310368c5; @synthesize=_startDate
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date;	// 0x310365f5
- (id)initWithCoder:(id)coder;	// 0x310366b9
- (id)initWithStartDate:(id)startDate endDate:(id)date;	// 0x31036645
- (id)copyWithZone:(NSZone *)zone;	// 0x31036815
- (void)dealloc;	// 0x31036739
- (void)encodeWithCoder:(id)coder;	// 0x31036799
// declared property getter: - (id)endDate;	// 0x310368d5
- (BOOL)isEqual:(id)equal;	// 0x31036825
// declared property getter: - (id)startDate;	// 0x310368c5
@end

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
	NSDate *_startDate;	// 8 = 0x8
	NSDate *_endDate;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x318fc45d; @synthesize=_endDate
@property(readonly, assign, nonatomic) NSDate *startDate;	// G=0x318fc44d; @synthesize=_startDate
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date;	// 0x318fc169
- (id)initWithCoder:(id)coder;	// 0x318fc231
- (id)initWithStartDate:(id)startDate endDate:(id)date;	// 0x318fc1b9
- (id)copyWithZone:(NSZone *)zone;	// 0x318fc395
- (void)dealloc;	// 0x318fc2b5
- (void)encodeWithCoder:(id)coder;	// 0x318fc319
// declared property getter: - (id)endDate;	// 0x318fc45d
- (BOOL)isEqual:(id)equal;	// 0x318fc3a5
// declared property getter: - (id)startDate;	// 0x318fc44d
@end

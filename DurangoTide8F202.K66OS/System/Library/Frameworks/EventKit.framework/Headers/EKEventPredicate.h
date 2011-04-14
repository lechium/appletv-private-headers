/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString, NSDate, NSTimeZone, NSArray;

__attribute__((visibility("hidden")))
@interface EKEventPredicate : NSPredicate {
@private
	NSDate *_startDate;	// 8 = 0x8
	NSDate *_endDate;	// 12 = 0xc
	NSString *_uid;	// 16 = 0x10
	NSArray *_calendars;	// 20 = 0x14
	NSTimeZone *_timeZone;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *calendars;	// G=0x31676f01; 
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x31676ee1; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x31676ef1; 
@property(readonly, assign, nonatomic) NSDate *startDate;	// G=0x31676ed1; 
@property(readonly, assign, nonatomic) NSTimeZone *timeZone;	// G=0x31676f11; 
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;	// 0x31641865
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventIdentifier:(id)identifier calendars:(id)calendars;	// 0x31677291
- (id)initWithCoder:(id)coder;	// 0x31677181
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;	// 0x316418b9
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventIdentifier:(id)identifier calendars:(id)calendars;	// 0x316418ed
// declared property getter: - (id)calendars;	// 0x31676f01
- (id)copyWithZone:(NSZone *)zone;	// 0x316420ed
- (void)dealloc;	// 0x31646715
- (void)encodeWithCoder:(id)coder;	// 0x316428e5
// declared property getter: - (id)endDate;	// 0x31676ee1
- (BOOL)evaluateWithObject:(id)object;	// 0x31677019
// declared property getter: - (id)eventIdentifier;	// 0x31676ef1
- (BOOL)isEqual:(id)equal;	// 0x31641f8d
- (id)predicateFormat;	// 0x31676f21
// declared property getter: - (id)startDate;	// 0x31676ed1
// declared property getter: - (id)timeZone;	// 0x31676f11
@end


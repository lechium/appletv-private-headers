/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "NSCopying.h"
#import "CoreFoundation-Structs.h"
#import "NSCoding.h"


@interface NSDate : NSObject <NSCopying, NSCoding> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x34032d35
+ (id)date;	// 0x34061479
+ (id)dateWithDate:(id)date;	// 0x340da001
+ (id)dateWithString:(id)string;	// 0x340da0b9
+ (id)dateWithTimeInterval:(double)timeInterval sinceDate:(id)date;	// 0x340d9f31
+ (id)dateWithTimeIntervalSince1970:(double)timeIntervalSince1970;	// 0x3405fd75
+ (id)dateWithTimeIntervalSinceNow:(double)timeIntervalSinceNow;	// 0x34032cad
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x34047095
+ (id)distantFuture;	// 0x34034299
+ (id)distantPast;	// 0x34074bcd
+ (double)timeIntervalSinceReferenceDate;	// 0x34033469
- (id)initWithCoder:(id)coder;	// 0x340da4e1
- (id)initWithDate:(id)date;	// 0x340da071
- (id)initWithString:(id)string;	// 0x340da0f5
- (id)initWithTimeInterval:(double)timeInterval sinceDate:(id)date;	// 0x340d9fad
- (id)initWithTimeIntervalSince1970:(double)timeIntervalSince1970;	// 0x340d9f09
- (id)initWithTimeIntervalSinceNow:(double)timeIntervalSinceNow;	// 0x34043ead
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x340d9ee5
- (unsigned long)_cfTypeID;	// 0x3406633d
- (id)addTimeInterval:(double)interval;	// 0x340da4d1
- (int)compare:(id)compare;	// 0x3406691d
- (id)copyWithZone:(NSZone *)zone;	// 0x34078a41
- (id)dateByAddingTimeInterval:(double)interval;	// 0x34082ead
- (id)description;	// 0x340d9ed1
- (id)descriptionWithLocale:(id)locale;	// 0x340d9d05
- (id)earlierDate:(id)date;	// 0x34082c71
- (void)encodeWithCoder:(id)coder;	// 0x340da4e5
- (unsigned)hash;	// 0x34065815
- (BOOL)isEqual:(id)equal;	// 0x34065845
- (BOOL)isEqualToDate:(id)date;	// 0x34065891
- (BOOL)isNSDate__;	// 0x3406588d
- (id)laterDate:(id)date;	// 0x340d9ca9
- (double)timeIntervalSince1970;	// 0x3405fe19
- (double)timeIntervalSinceDate:(id)date;	// 0x340783e1
- (double)timeIntervalSinceNow;	// 0x3406cfb5
- (double)timeIntervalSinceReferenceDate;	// 0x340d9bd9
@end


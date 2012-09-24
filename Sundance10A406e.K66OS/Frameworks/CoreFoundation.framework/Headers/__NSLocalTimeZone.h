/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSLocalTimeZone : NSTimeZone {
}
+ (BOOL)supportsSecureCoding;	// 0x33b12375
- (id)initWithCoder:(id)coder;	// 0x33b12379
- (id)abbreviationForDate:(id)date;	// 0x33b121b1
- (Class)classForCoder;	// 0x33b123c1
- (id)copyWithZone:(NSZone *)zone;	// 0x33b1233d
- (id)data;	// 0x33b12145
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x33b12221
- (id)description;	// 0x33b122cd
- (void)encodeWithCoder:(id)coder;	// 0x33b123bd
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x33b121e9
- (id)localizedName:(int)name locale:(id)locale;	// 0x33b12291
- (id)name;	// 0x33b12111
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x33b12259
- (oneway void)release;	// 0x33b12331
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x33b123dd
- (id)retain;	// 0x33b1232d
- (unsigned)retainCount;	// 0x33b12335
- (int)secondsFromGMTForDate:(id)date;	// 0x33b12179
@end

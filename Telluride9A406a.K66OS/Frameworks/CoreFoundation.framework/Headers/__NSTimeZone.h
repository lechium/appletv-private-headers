/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimeZone.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSTimeZone : NSTimeZone {
@private
	CFStringRef _name;	// 4 = 0x4
	CFDataRef _data;	// 8 = 0x8
	void **_ucal;	// 12 = 0xc
	int _lock;	// 16 = 0x10
}
+ (id)__new:(CFStringRef)aNew cache:(BOOL)cache;	// 0x3404d651
+ (id)__new:(CFStringRef)aNew data:(CFDataRef)data;	// 0x340ed515
+ (id)allocWithZone:(NSZone *)zone;	// 0x340ed5e1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x340ed5dd
- (id)abbreviationForDate:(id)date;	// 0x340ecde5
- (id)data;	// 0x340776ad
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x340ed025
- (void)dealloc;	// 0x340789d1
- (void)finalize;	// 0x340ed56d
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x340ecffd
- (id)localizedName:(int)name locale:(id)locale;	// 0x340ed1e5
- (id)name;	// 0x3404dbad
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x34077d8d
- (int)secondsFromGMTForDate:(id)date;	// 0x34065399
@end

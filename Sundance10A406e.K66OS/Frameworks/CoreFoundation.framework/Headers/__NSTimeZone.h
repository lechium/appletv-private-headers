/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSTimeZone : NSTimeZone {
	CFStringRef _name;	// 4 = 0x4
	CFDataRef _data;	// 8 = 0x8
	void **_ucal;	// 12 = 0xc
	int _lock;	// 16 = 0x10
}
+ (id)__new:(CFStringRef)aNew cache:(BOOL)cache;	// 0x33a822a9
+ (id)__new:(CFStringRef)aNew data:(CFDataRef)data;	// 0x33b0d381
+ (id)allocWithZone:(NSZone *)zone;	// 0x33b0d44d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33b0d449
- (id)abbreviationForDate:(id)date;	// 0x33b0ca89
- (id)data;	// 0x33a67a89
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x33b0cdd1
- (void)dealloc;	// 0x33a98331
- (void)finalize;	// 0x33b0d3d9
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x33b0cda9
- (id)localizedName:(int)name locale:(id)locale;	// 0x33b0d159
- (id)name;	// 0x33a67381
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x33a976e9
- (int)secondsFromGMTForDate:(id)date;	// 0x33a446f1
@end

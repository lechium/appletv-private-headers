/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDate.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSDate : NSDate {
	double _time;	// 4 = 0x4
}
+ (id)__new:(double)aNew;	// 0x3104a339
+ (id)allocWithZone:(NSZone *)zone;	// 0x310a71e9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x310fede5
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x310feded
- (void)dealloc;	// 0x3104a601
- (double)timeIntervalSinceReferenceDate;	// 0x31049cc9
@end

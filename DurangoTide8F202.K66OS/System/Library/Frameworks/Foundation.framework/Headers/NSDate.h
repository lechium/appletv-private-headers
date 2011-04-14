/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDate.h> // Unknown library


@interface NSDate (NSNaturalLanguageDate)
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString;	// 0x3245a219
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x3245a239
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString locale:(id)locale;	// 0x3245a1f9
@end

@interface NSDate (NSCalendarDateStuff)
- (id)dateWithCalendarFormat:(id)calendarFormat timeZone:(id)zone;	// 0x3245a351
- (id)descriptionWithCalendarFormat:(id)calendarFormat timeZone:(id)zone locale:(id)locale;	// 0x3245a2b1
@end

@interface NSDate (NSDate)
+ (id)dateWithString:(id)string;	// 0x32462c61
- (id)initWithCoder:(id)coder;	// 0x32462c99
- (id)initWithString:(id)string;	// 0x32462d19
- (Class)classForCoder;	// 0x32434809
- (void)encodeWithCoder:(id)coder;	// 0x32434829
@end

@interface NSDate (NSURLExtras)
- (id)_web_RFC1123DateString;	// 0x324aecdd
- (int)_web_compareDay:(id)day;	// 0x324aebe9
- (BOOL)_web_isToday;	// 0x324aebb1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSPredefinedValue.h"


@interface ICSStatusValue : ICSPredefinedValue {
}
+ (id)statusTypeFromCode:(int)code;	// 0x31506245
+ (id)statusValueFromICSString:(id)icsstring;	// 0x3151a191
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3150925d
@end


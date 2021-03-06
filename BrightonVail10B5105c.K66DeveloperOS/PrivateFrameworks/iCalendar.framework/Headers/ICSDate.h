/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSDate : ICSProperty {
}
@property(retain) NSString *tzid;	// G=0x31b6d831; S=0x31b6d811; 
- (id)initWithValue:(id)value;	// 0x31b6d565
- (id)initWithYear:(int)year month:(int)month day:(int)day;	// 0x31b6d5ad
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second;	// 0x31b6d65d
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x31b6d695
- (id)components;	// 0x31b6d851
- (id)description;	// 0x31b6d92d
- (BOOL)hasFloatingTimeZone;	// 0x31b6d8c1
- (BOOL)hasTimeComponent;	// 0x31b6d879
// declared property setter: - (void)setTzid:(id)tzid;	// 0x31b6d811
// declared property getter: - (id)tzid;	// 0x31b6d831
@end


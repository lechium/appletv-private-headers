/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


__attribute__((visibility("hidden")))
@interface EMEnumProperty : CMProperty {
@private
	int wdValue;	// 8 = 0x8
}
+ (id)mapHorizontalAlignmentValue:(int)value;	// 0x32b14011
+ (id)mapUnderlineValue:(int)value;	// 0x32918b25
+ (id)mapVerticalAlignmentValue:(int)value;	// 0x32b1405d
- (id)initWithEnum:(int)anEnum;	// 0x32919141
- (id)cssStringForName:(id)name;	// 0x329191c1
- (id)mapHorizontalAlignment;	// 0x3291a369
- (id)mapUnderline;	// 0x32b14099
- (id)mapVerticalAlignment;	// 0x32919245
- (int)value;	// 0x3291a249
@end


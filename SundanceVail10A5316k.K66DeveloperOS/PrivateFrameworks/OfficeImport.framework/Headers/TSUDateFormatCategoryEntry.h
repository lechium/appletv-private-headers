/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface TSUDateFormatCategoryEntry : NSObject {
@private
	unsigned short mSeparator;	// 4 = 0x4
	CFArrayRef mFormatters;	// 8 = 0x8
	NSMutableSet *mFormatStrings;	// 12 = 0xc
}
- (id)initWithSeparator:(unsigned short)separator;	// 0x312d893d
- (void)addFormat:(id)format locale:(CFLocaleRef)locale;	// 0x312d8a49
- (CFDateRef)createDateFromString:(CFStringRef)string forceAllowAMPM:(BOOL)ampm succesTSUlFormatString:(const CFStringRef *)string3;	// 0x312d8b11
- (void)dealloc;	// 0x312d89d9
- (unsigned short)separator;	// 0x312d8a39
@end


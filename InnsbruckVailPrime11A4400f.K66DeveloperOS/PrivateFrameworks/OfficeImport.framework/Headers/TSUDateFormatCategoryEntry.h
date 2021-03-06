/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"

@class NSMutableSet;

@interface TSUDateFormatCategoryEntry : NSObject {
	unsigned short mSeparator;	// 4 = 0x4
	CFArrayRef mFormatters;	// 8 = 0x8
	NSMutableSet *mFormatStrings;	// 12 = 0xc
}
- (id)initWithSeparator:(unsigned short)separator;	// 0x3196f999
- (void)addFormat:(id)format locale:(CFLocaleRef)locale;	// 0x3196faa1
- (void)dealloc;	// 0x3196fa31
- (CFDateRef)newDateFromString:(CFStringRef)string forceAllowAMPM:(BOOL)ampm succesTSUlFormatString:(const CFStringRef *)string3;	// 0x3196fc15
- (unsigned short)separator;	// 0x3196fa91
@end


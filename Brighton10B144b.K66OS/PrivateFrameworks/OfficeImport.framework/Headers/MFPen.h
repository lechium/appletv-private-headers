/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFObject.h"
#import <NSObject.h> // Unknown library

@class TSUColor;

@interface MFPen : NSObject <MFObject> {
	int m_penStyle;	// 4 = 0x4
	long m_penWidth;	// 8 = 0x8
	TSUColor *m_colour;	// 12 = 0xc
	double *m_userStyleArray;	// 16 = 0x10
}
+ (id)pen;	// 0x348cdad9
+ (id)penWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double *)array;	// 0x34a62f69
- (id)init;	// 0x348cdb11
- (id)initWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double *)array;	// 0x348ca2ad
- (void)dealloc;	// 0x348ce68d
- (id)getColor;	// 0x34952881
- (int)getStyle;	// 0x34952955
- (long)getWidth;	// 0x34a62fb5
- (int)selectInto:(id)into;	// 0x348cdc59
@end


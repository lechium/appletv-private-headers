/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"

@class TSUColor;

@interface CMBordersProperty : CMProperty {
	TSUColor *mBorderColor;	// 8 = 0x8
	TSUColor *mBorderTopColor;	// 12 = 0xc
	TSUColor *mBorderLeftColor;	// 16 = 0x10
	TSUColor *mBorderBottomColor;	// 20 = 0x14
	TSUColor *mBorderRightColor;	// 24 = 0x18
	int mBorderStyle[5];	// 28 = 0x1c
	int mBorderWidth[5];	// 48 = 0x30
	int mCustomWidth;	// 68 = 0x44
}
+ (BOOL)isStroked:(id)stroked;	// 0x348be7fd
- (id)init;	// 0x349002fd
- (id)initWithOADStroke:(id)oadstroke;	// 0x3487d521
- (void)adjustValues;	// 0x34900825
- (id)colorString;	// 0x3487ddf5
- (id)cssString;	// 0x3487d8c9
- (id)cssStringForName:(id)name;	// 0x3487d89d
- (BOOL)isNoneAtLocation:(int)location;	// 0x349d74dd
- (void)setFromOadStroke:(id)oadStroke atLocation:(int)location state:(id)state;	// 0x34963f95
- (void)setNoneAtLocation:(int)location;	// 0x349d74f9
- (id)stringFromColor:(id)color;	// 0x3487df65
- (id)stringFromStyleEnum:(int)styleEnum;	// 0x3487db41
- (id)stringFromWidthEnum:(int)widthEnum;	// 0x3487dd7d
- (id)styleString;	// 0x3487d94d
- (id)widthString;	// 0x3487db89
@end


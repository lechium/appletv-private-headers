/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMStyle.h"

@class EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellStyle : CMStyle {
@private
	EDStyle *edStyle;	// 12 = 0xc
	BOOL _nameContainsItalic;	// 16 = 0x10
	BOOL _nameContainsBold;	// 17 = 0x11
}
- (id)init;	// 0x32735941
- (id)initWithEDStyle:(id)edstyle;	// 0x3282f421
- (id)_parseFontName:(id)name;	// 0x3282f89d
- (void)addAlignmentStyle:(id)style;	// 0x3282fe21
- (void)addBordersStyle:(id)style;	// 0x32832821
- (void)addFillStyle:(id)style;	// 0x3282fcd1
- (void)addFontStyle:(id)style;	// 0x3282f53d
- (void)changeWithContentFormatType:(int)contentFormatType;	// 0x32831259
- (void)changeWithContentWidth:(double)contentWidth columnWidth:(double)width;	// 0x328310a9
@end


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
- (id)init;	// 0x3281e941
- (id)initWithEDStyle:(id)edstyle;	// 0x32918421
- (id)_parseFontName:(id)name;	// 0x3291889d
- (void)addAlignmentStyle:(id)style;	// 0x32918e21
- (void)addBordersStyle:(id)style;	// 0x3291b821
- (void)addFillStyle:(id)style;	// 0x32918cd1
- (void)addFontStyle:(id)style;	// 0x3291853d
- (void)changeWithContentFormatType:(int)contentFormatType;	// 0x3291a259
- (void)changeWithContentWidth:(double)contentWidth columnWidth:(double)width;	// 0x3291a0a9
@end


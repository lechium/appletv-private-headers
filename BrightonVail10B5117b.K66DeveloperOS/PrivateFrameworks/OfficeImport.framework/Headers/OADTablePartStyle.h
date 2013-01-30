/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableTextStyle, OADTableCellStyle;

@interface OADTablePartStyle : NSObject {
	OADTableTextStyle *mTextStyle;	// 4 = 0x4
	OADTableCellStyle *mCellStyle;	// 8 = 0x8
}
@property(retain) id cellStyle;	// G=0x34b6f2a5; S=0x34b17241; converted property
@property(retain) id textStyle;	// G=0x34b6f471; S=0x34b17859; converted property
+ (id)defaultStyle;	// 0x34c2f0cd
- (void)applyOverridesFrom:(id)from;	// 0x34c2f235
// converted property getter: - (id)cellStyle;	// 0x34b6f2a5
- (void)dealloc;	// 0x34b1ecf5
// converted property setter: - (void)setCellStyle:(id)style;	// 0x34b17241
// converted property setter: - (void)setTextStyle:(id)style;	// 0x34b17859
- (id)shallowCopy;	// 0x34c2f171
// converted property getter: - (id)textStyle;	// 0x34b6f471
@end

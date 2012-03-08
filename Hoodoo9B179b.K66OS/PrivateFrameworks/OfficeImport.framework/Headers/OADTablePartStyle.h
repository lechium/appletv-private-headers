/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableTextStyle, OADTableCellStyle;

__attribute__((visibility("hidden")))
@interface OADTablePartStyle : NSObject {
@private
	OADTableTextStyle *mTextStyle;	// 4 = 0x4
	OADTableCellStyle *mCellStyle;	// 8 = 0x8
}
@property(retain) id cellStyle;	// G=0x3290fa5d; S=0x328e4c91; converted property
@property(retain) id textStyle;	// G=0x3290fc29; S=0x328e52b1; converted property
+ (id)defaultStyle;	// 0x329dc151
- (void)applyOverridesFrom:(id)from;	// 0x329dc201
// converted property getter: - (id)cellStyle;	// 0x3290fa5d
- (void)dealloc;	// 0x328e6541
// converted property setter: - (void)setCellStyle:(id)style;	// 0x328e4c91
// converted property setter: - (void)setTextStyle:(id)style;	// 0x328e52b1
- (id)shallowCopy;	// 0x329dc271
// converted property getter: - (id)textStyle;	// 0x3290fc29
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADFill, OADTableCellBorderStyle;

__attribute__((visibility("hidden")))
@interface OADTableCellStyle : NSObject {
@private
	OADTableCellBorderStyle *mBorderStyle;	// 4 = 0x4
	OADFill *mFill;	// 8 = 0x8
}
@property(retain) id borderStyle;	// G=0x329f8a6d; S=0x329cdad9; converted property
@property(retain) id fill;	// G=0x329f923d; S=0x329cdc4d; converted property
+ (id)defaultFill;	// 0x32ac500d
+ (id)defaultStyle;	// 0x32ac4f59
- (void)applyOverridesFrom:(id)from;	// 0x32ac5029
// converted property getter: - (id)borderStyle;	// 0x329f8a6d
- (void)dealloc;	// 0x329cf64d
// converted property getter: - (id)fill;	// 0x329f923d
// converted property setter: - (void)setBorderStyle:(id)style;	// 0x329cdad9
// converted property setter: - (void)setFill:(id)fill;	// 0x329cdc4d
- (id)shallowCopy;	// 0x32ac50a5
@end


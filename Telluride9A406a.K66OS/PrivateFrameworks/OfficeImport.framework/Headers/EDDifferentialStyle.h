/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class EDFont, EDProtection, EDAlignmentInfo, EDContentFormat, EDBorders, EDFill;

__attribute__((visibility("hidden")))
@interface EDDifferentialStyle : NSObject <NSCopying> {
@private
	EDAlignmentInfo *mAlignmentInfo;	// 4 = 0x4
	EDBorders *mBorders;	// 8 = 0x8
	EDFill *mFill;	// 12 = 0xc
	EDFont *mFont;	// 16 = 0x10
	EDProtection *mProtection;	// 20 = 0x14
	EDContentFormat *mContentFormat;	// 24 = 0x18
}
@property(retain) id alignmentInfo;	// G=0x32a6abc1; S=0x32a6abf1; converted property
@property(retain) id borders;	// G=0x32a16c45; S=0x3292bc19; converted property
@property(retain) id contentFormat;	// G=0x32a6abe1; S=0x329fb2d9; converted property
@property(retain) id fill;	// G=0x32a1733d; S=0x3292bf81; converted property
@property(retain) id font;	// G=0x32a17585; S=0x3292be41; converted property
@property(retain) id protection;	// G=0x32a6abd1; S=0x32a6ac39; converted property
+ (id)differentialStyle;	// 0x3292b985
// converted property getter: - (id)alignmentInfo;	// 0x32a6abc1
// converted property getter: - (id)borders;	// 0x32a16c45
// converted property getter: - (id)contentFormat;	// 0x32a6abe1
- (id)copyWithZone:(NSZone *)zone;	// 0x32a6ac81
- (void)dealloc;	// 0x3292ecc1
// converted property getter: - (id)fill;	// 0x32a1733d
// converted property getter: - (id)font;	// 0x32a17585
// converted property getter: - (id)protection;	// 0x32a6abd1
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x32a6abf1
// converted property setter: - (void)setBorders:(id)borders;	// 0x3292bc19
// converted property setter: - (void)setContentFormat:(id)format;	// 0x329fb2d9
// converted property setter: - (void)setFill:(id)fill;	// 0x3292bf81
// converted property setter: - (void)setFont:(id)font;	// 0x3292be41
// converted property setter: - (void)setProtection:(id)protection;	// 0x32a6ac39
@end


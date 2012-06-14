/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideChild.h"

@class PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PDSlideLayout : PDSlideChild {
@private
	int mSlideLayoutType;	// 40 = 0x28
	PDSlideMaster *mSlideMaster;	// 44 = 0x2c
}
@property(assign) int slideLayoutType;	// G=0x31075ec5; S=0x3107384d; converted property
@property(retain) id slideMaster;	// G=0x310738f9; S=0x3107383d; converted property
- (id)initWithSlideMaster:(id)slideMaster;	// 0x3107373d
- (void)dealloc;	// 0x3108d965
- (id)defaultTheme;	// 0x3107f6e1
- (void)doneWithContent;	// 0x31289a81
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x31073c29
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x31073b89
- (id)parentSlideBase;	// 0x31076215
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x31073909
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x3107385d
- (id)parentTextStyleForTables;	// 0x31195649
// converted property setter: - (void)setSlideLayoutType:(int)type;	// 0x3107384d
// converted property setter: - (void)setSlideMaster:(id)master;	// 0x3107383d
// converted property getter: - (int)slideLayoutType;	// 0x31075ec5
// converted property getter: - (id)slideMaster;	// 0x310738f9
@end


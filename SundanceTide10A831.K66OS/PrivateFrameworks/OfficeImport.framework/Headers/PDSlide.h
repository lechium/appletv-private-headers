/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideChild.h"

@class PDNotesSlide, PDSlideLayout, NSMutableArray;

@interface PDSlide : PDSlideChild {
	PDSlideLayout *mSlideLayout;	// 40 = 0x28
	NSMutableArray *mComments;	// 44 = 0x2c
	PDNotesSlide *mNotesSlide;	// 48 = 0x30
}
@property(retain) id notesSlide;	// G=0x36c4f379; S=0x36b243e5; converted property
@property(retain) id slideLayout;	// G=0x36a3f3fd; S=0x36a3e935; converted property
- (void)addComment:(id)comment;	// 0x36c4f3c9
- (id)commentAtIndex:(unsigned)index;	// 0x36c4f3a9
- (unsigned)commentCount;	// 0x36c4f389
- (void)dealloc;	// 0x36a50179
- (id)defaultTheme;	// 0x36a45021
- (void)doneWithContent;	// 0x36c4f435
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36a3f625
// converted property getter: - (id)notesSlide;	// 0x36c4f379
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36a3f591
- (id)parentSlideBase;	// 0x36a3f3ed
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36a3f4dd
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x36a3f425
- (id)parentTextStyleForTables;	// 0x36b5af61
- (void)setInheritedTextStyle:(id)style placeholderType:(int)type defaultTextListStyle:(id)style3;	// 0x36b57c49
// converted property setter: - (void)setNotesSlide:(id)slide;	// 0x36b243e5
// converted property setter: - (void)setSlideLayout:(id)layout;	// 0x36a3e935
// converted property getter: - (id)slideLayout;	// 0x36a3f3fd
@end


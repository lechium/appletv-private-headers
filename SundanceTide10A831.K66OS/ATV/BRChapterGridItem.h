/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, NSDictionary, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface BRChapterGridItem : BRControl {
	BRAsyncImageControl *_imageControl;	// 84 = 0x54
	BRMarqueeTextControl *_chapterTitleControl;	// 88 = 0x58
	NSDictionary *_chapterInfo;	// 92 = 0x5c
}
@property(retain) NSDictionary *chapterInfo;	// G=0x2bea45; S=0x2be721; converted property
- (id)init;	// 0x2be64d
// converted property getter: - (id)chapterInfo;	// 0x2bea45
- (void)controlWasFocused;	// 0x2bea55
- (void)controlWasUnfocused;	// 0x2beac5
- (void)dealloc;	// 0x2be6a9
- (void)layoutSubcontrols;	// 0x2beb15
// converted property setter: - (void)setChapterInfo:(id)info;	// 0x2be721
@end

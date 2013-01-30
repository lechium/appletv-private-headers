/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboardControl.h"

@class BRListView, NSArray;

__attribute__((visibility("hidden")))
@interface BRKeyboardHistoryControl : BRKeyboardControl {
	NSArray *_textEntryHistoryClients;	// 96 = 0x60
	NSArray *_textEntryHistoryBehaviors;	// 100 = 0x64
	BRListView *_list;	// 104 = 0x68
	CGSize _preferredSize;	// 108 = 0x6c
	float _listOriginXOffset;	// 116 = 0x74
	float _listWidth;	// 120 = 0x78
}
@property(retain) id focusedKeyControl;	// G=0x30db39; S=0x30db3d; converted property
- (id)initWithPreferredSize:(CGSize)preferredSize;	// 0x30d8c5
- (void)dealloc;	// 0x30d911
- (BOOL)focusIsAtRightEdge;	// 0x30db35
// converted property getter: - (id)focusedKeyControl;	// 0x30db39
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x30db45
- (void)layoutSubcontrols;	// 0x30d989
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x30db41
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x30db3d
- (void)setListOriginXOffset:(float)offset listWidth:(float)width;	// 0x30db05
- (void)setTextEntryHistoryClients:(id)clients textEntryBehaviors:(id)behaviors list:(id)list;	// 0x30da71
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30da59
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRGridView, BRImage;

__attribute__((visibility("hidden")))
@interface BRDotArrayControl : BRControl {
	long _dotCount;	// 84 = 0x54
	long _activeDot;	// 88 = 0x58
	BRGridView *_dotGrid;	// 92 = 0x5c
	BRImage *_dotOnImage;	// 96 = 0x60
	BRImage *_dotOffImage;	// 100 = 0x64
}
@property(assign) long activeDot;	// G=0x2d9ab5; S=0x2d9a69; converted property
@property(assign) long dotCount;	// G=0x2d9a59; S=0x2d9a25; converted property
- (id)init;	// 0x2d9711
- (id)initWithDotCount:(long)dotCount;	// 0x2d9725
// converted property getter: - (long)activeDot;	// 0x2d9ab5
- (void)dealloc;	// 0x2d98ad
// converted property getter: - (long)dotCount;	// 0x2d9a59
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x2d9b71
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x2d9ae5
- (void)layoutSubcontrols;	// 0x2d9925
- (long)numberOfColumnsInGrid:(id)grid;	// 0x2d9ad5
- (long)numberOfItemsInGrid:(id)grid;	// 0x2d9ac5
// converted property setter: - (void)setActiveDot:(long)dot;	// 0x2d9a69
// converted property setter: - (void)setDotCount:(long)count;	// 0x2d9a25
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRGridView, ATVImage;

__attribute__((visibility("hidden")))
@interface BRDotArrayControl : BRControl {
	long _dotCount;	// 84 = 0x54
	long _activeDot;	// 88 = 0x58
	BRGridView *_dotGrid;	// 92 = 0x5c
	ATVImage *_dotOnImage;	// 96 = 0x60
	ATVImage *_dotOffImage;	// 100 = 0x64
}
@property(assign) long activeDot;	// G=0x362a41; S=0x3629f5; converted property
@property(assign) long dotCount;	// G=0x3629e5; S=0x3629b1; converted property
- (id)init;	// 0x36269d
- (id)initWithDotCount:(long)dotCount;	// 0x3626b1
// converted property getter: - (long)activeDot;	// 0x362a41
- (void)dealloc;	// 0x362839
// converted property getter: - (long)dotCount;	// 0x3629e5
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x362afd
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x362a71
- (void)layoutSubcontrols;	// 0x3628b1
- (long)numberOfColumnsInGrid:(id)grid;	// 0x362a61
- (long)numberOfItemsInGrid:(id)grid;	// 0x362a51
// converted property setter: - (void)setActiveDot:(long)dot;	// 0x3629f5
// converted property setter: - (void)setDotCount:(long)count;	// 0x3629b1
@end


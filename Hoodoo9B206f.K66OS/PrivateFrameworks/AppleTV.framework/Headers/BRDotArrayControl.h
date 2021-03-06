/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRGridView, BRImage;

__attribute__((visibility("hidden")))
@interface BRDotArrayControl : BRControl {
@private
	long _dotCount;	// 48 = 0x30
	long _activeDot;	// 52 = 0x34
	BRGridView *_dotGrid;	// 56 = 0x38
	BRImage *_dotOnImage;	// 60 = 0x3c
	BRImage *_dotOffImage;	// 64 = 0x40
}
@property(assign) long activeDot;	// G=0x3668df31; S=0x3668dedd; converted property
@property(assign) long dotCount;	// G=0x3668decd; S=0x3668de91; converted property
- (id)init;	// 0x3668dba1
- (id)initWithDotCount:(long)dotCount;	// 0x3668dbb5
// converted property getter: - (long)activeDot;	// 0x3668df31
- (void)dealloc;	// 0x3668dd31
// converted property getter: - (long)dotCount;	// 0x3668decd
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x3668dfed
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x3668df61
- (void)layoutSubcontrols;	// 0x3668dda5
- (long)numberOfColumnsInGrid:(id)grid;	// 0x3668df51
- (long)numberOfItemsInGrid:(id)grid;	// 0x3668df41
// converted property setter: - (void)setActiveDot:(long)dot;	// 0x3668dedd
// converted property setter: - (void)setDotCount:(long)count;	// 0x3668de91
@end


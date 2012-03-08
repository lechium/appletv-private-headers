/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage, BRGridView;

__attribute__((visibility("hidden")))
@interface BRDotArrayControl : BRControl {
@private
	long _dotCount;	// 48 = 0x30
	long _activeDot;	// 52 = 0x34
	BRGridView *_dotGrid;	// 56 = 0x38
	BRImage *_dotOnImage;	// 60 = 0x3c
	BRImage *_dotOffImage;	// 64 = 0x40
}
@property(assign) long activeDot;	// G=0x3306ce6d; S=0x3306ce19; converted property
@property(assign) long dotCount;	// G=0x3306ce09; S=0x3306cdcd; converted property
- (id)init;	// 0x3306cae9
- (id)initWithDotCount:(long)dotCount;	// 0x3306cafd
// converted property getter: - (long)activeDot;	// 0x3306ce6d
- (void)dealloc;	// 0x3306cc79
// converted property getter: - (long)dotCount;	// 0x3306ce09
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x3306cf29
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x3306ce9d
- (void)layoutSubcontrols;	// 0x3306cced
- (long)numberOfColumnsInGrid:(id)grid;	// 0x3306ce8d
- (long)numberOfItemsInGrid:(id)grid;	// 0x3306ce7d
// converted property setter: - (void)setActiveDot:(long)dot;	// 0x3306ce19
// converted property setter: - (void)setDotCount:(long)count;	// 0x3306cdcd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSString, BRDividerControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserHeaderControl : BRControl {
@private
	BRTextControl *_titleControl;	// 44 = 0x2c
	BRTextControl *_subtitleControl;	// 48 = 0x30
	BRImageControl *_icon;	// 52 = 0x34
	BRDividerControl *_divider;	// 56 = 0x38
	NSString *_title;	// 60 = 0x3c
	long _count;	// 64 = 0x40
	BOOL _displaysCount;	// 68 = 0x44
	float _iconVerticalOffset;	// 72 = 0x48
}
@property(assign) long count;	// G=0x32971419; S=0x32971565; converted property
@property(assign) BOOL displaysCount;	// G=0x32971429; S=0x32971531; converted property
@property(assign) float dividerBrightness;	// G=0x32971449; S=0x32971469; converted property
@property(retain) BRImageControl *icon;	// G=0x329714ad; S=0x329714cd; converted property
@property(assign) float iconVerticalOffset;	// G=0x32971439; S=0x32971489; converted property
@property(retain) id subtitle;	// G=0x32971501; S=0x32971931; converted property
@property(retain) NSString *title;	// G=0x32971409; S=0x329717a5; converted property
- (id)init;	// 0x32971669
// converted property getter: - (long)count;	// 0x32971419
- (void)dealloc;	// 0x329715e9
// converted property getter: - (BOOL)displaysCount;	// 0x32971429
// converted property getter: - (float)dividerBrightness;	// 0x32971449
// converted property getter: - (id)icon;	// 0x329714ad
// converted property getter: - (float)iconVerticalOffset;	// 0x32971439
- (void)layoutSubcontrols;	// 0x32971a49
- (id)photoBrowserHeader;	// 0x329715a9
// converted property setter: - (void)setCount:(long)count;	// 0x32971565
// converted property setter: - (void)setDisplaysCount:(BOOL)count;	// 0x32971531
// converted property setter: - (void)setDividerBrightness:(float)brightness;	// 0x32971469
// converted property setter: - (void)setIcon:(id)icon;	// 0x329714cd
// converted property setter: - (void)setIconVerticalOffset:(float)offset;	// 0x32971489
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x32971931
// converted property setter: - (void)setTitle:(id)title;	// 0x329717a5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32971989
// converted property getter: - (id)subtitle;	// 0x32971501
// converted property getter: - (id)title;	// 0x32971409
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRVerticalDividerControl : BRControl {
	int _heightStyle;	// 80 = 0x50
}
@property(assign) int heightStyle;	// G=0x2af7d9; S=0x2af7b9; converted property
- (id)init;	// 0x2af5b5
- (void)drawRect:(CGRect)rect;	// 0x2af691
// converted property getter: - (int)heightStyle;	// 0x2af7d9
// converted property setter: - (void)setHeightStyle:(int)style;	// 0x2af7b9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2af60d
@end

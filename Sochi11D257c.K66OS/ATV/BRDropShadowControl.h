/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRDropShadowControl : BRControl {
	BRControl *_content;	// 84 = 0x54
	int _shadowStyle;	// 88 = 0x58
	float _sizeFactor;	// 92 = 0x5c
}
@property(retain) BRControl *content;	// G=0x3798ad; S=0x37983d; converted property
@property(assign) float shadowSizeFactor;	// G=0x37982d; S=0x3797f5; converted property
@property(assign) int shadowStyle;	// G=0x3797e5; S=0x3797bd; converted property
- (id)init;	// 0x379711
- (void)_updateImages;	// 0x379b81
// converted property getter: - (id)content;	// 0x3798ad
- (void)dealloc;	// 0x379771
- (void)layoutSubcontrols;	// 0x3798bd
// converted property setter: - (void)setContent:(id)content;	// 0x37983d
// converted property setter: - (void)setShadowSizeFactor:(float)factor;	// 0x3797f5
// converted property setter: - (void)setShadowStyle:(int)style;	// 0x3797bd
// converted property getter: - (float)shadowSizeFactor;	// 0x37982d
// converted property getter: - (int)shadowStyle;	// 0x3797e5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


@interface BRSpacerControl : BRControl {
@private
	float _pixels;	// 48 = 0x30
}
@property(assign) float pixels;	// G=0x302c299d; S=0x302c298d; converted property
+ (id)spacerWithPixels:(float)pixels;	// 0x302c28f1
- (id)init;	// 0x302c2931
// converted property getter: - (float)pixels;	// 0x302c299d
// converted property setter: - (void)setPixels:(float)pixels;	// 0x302c298d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x302c29ad
@end


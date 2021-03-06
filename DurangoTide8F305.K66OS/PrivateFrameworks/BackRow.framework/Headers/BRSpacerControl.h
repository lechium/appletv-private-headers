/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


@interface BRSpacerControl : BRControl {
@private
	float _pixels;	// 44 = 0x2c
}
@property(assign) float pixels;	// G=0x3297ce21; S=0x3297ce11; converted property
+ (id)spacerWithPixels:(float)pixels;	// 0x3297ce85
- (id)init;	// 0x3297ce31
// converted property getter: - (float)pixels;	// 0x3297ce21
// converted property setter: - (void)setPixels:(float)pixels;	// 0x3297ce11
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3297cebd
@end


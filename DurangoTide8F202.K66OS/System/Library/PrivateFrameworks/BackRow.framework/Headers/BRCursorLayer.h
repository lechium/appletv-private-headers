/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMultiPartWidgetLayer.h"


__attribute__((visibility("hidden")))
@interface BRCursorLayer : BRMultiPartWidgetLayer {
@private
	float _radius;	// 96 = 0x60
	float _haloPercentage;	// 100 = 0x64
}
@property(assign) float cornerRadius;	// G=0x3297204d; S=0x32972061; converted property
@property(assign) float haloPercentage;	// G=0x3297202d; S=0x3297203d; converted property
- (id)init;	// 0x329720f9
// converted property getter: - (float)cornerRadius;	// 0x3297204d
// converted property getter: - (float)haloPercentage;	// 0x3297202d
- (id)imageMapForCornerRadius:(float)cornerRadius;	// 0x3297205d
// converted property setter: - (void)setCornerRadius:(float)radius;	// 0x32972061
// converted property setter: - (void)setHaloPercentage:(float)percentage;	// 0x3297203d
@end


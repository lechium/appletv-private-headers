/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSelectionLozengeLayer.h"
#import "BackRow-Structs.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRUnboundedSelectionLozengeLayer : BRSelectionLozengeLayer {
@private
	BRImage *_topImage;	// 96 = 0x60
	BRImage *_bottomImage;	// 100 = 0x64
	BOOL _brighterImage;	// 104 = 0x68
	BOOL _focusedImage;	// 105 = 0x69
}
@property(assign) BOOL useBrighterUnselectedImage;	// G=0x32973e21; S=0x3291b4d5; converted property
- (id)init;	// 0x3291b355
- (void)_updateImages;	// 0x3291b3a5
- (void)dealloc;	// 0x32973e35
- (void)drawInContext:(CGContextRef)context;	// 0x32921f95
- (void)layoutSubcontrols;	// 0x32973e31
- (void)setFocused:(BOOL)focused;	// 0x329223a5
// converted property setter: - (void)setUseBrighterUnselectedImage:(BOOL)image;	// 0x3291b4d5
// converted property getter: - (BOOL)useBrighterUnselectedImage;	// 0x32973e21
@end

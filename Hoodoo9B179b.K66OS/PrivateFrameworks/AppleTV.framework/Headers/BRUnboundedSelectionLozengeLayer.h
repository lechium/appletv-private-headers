/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSelectionLozengeLayer.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRUnboundedSelectionLozengeLayer : BRSelectionLozengeLayer {
@private
	BRImage *_topImage;	// 48 = 0x30
	BRImage *_bottomImage;	// 52 = 0x34
	BOOL _brighterImage;	// 56 = 0x38
	BOOL _focusedImage;	// 57 = 0x39
}
@property(assign) BOOL useBrighterUnselectedImage;	// G=0x302a29e5; S=0x302a29b5; converted property
- (id)init;	// 0x302a28f9
- (void)_updateImages;	// 0x302a2af9
- (void)dealloc;	// 0x302a2955
- (void)drawInContext:(CGContextRef)context;	// 0x302a2a29
- (void)layoutSubcontrols;	// 0x302a2a25
- (void)setFocused:(BOOL)focused;	// 0x302a29f5
// converted property setter: - (void)setUseBrighterUnselectedImage:(BOOL)image;	// 0x302a29b5
// converted property getter: - (BOOL)useBrighterUnselectedImage;	// 0x302a29e5
@end


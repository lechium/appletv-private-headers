/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRImageControl.h"

@class BRImage;

@interface BRFocusableImageControl : BRImageControl {
@private
	BRImage *_focusedImage;	// 64 = 0x40
	BRImage *_unfocusedImage;	// 68 = 0x44
	BRImage *_disabledImage;	// 72 = 0x48
	BOOL _dimsWhenDisabled;	// 76 = 0x4c
	BOOL _disabled;	// 77 = 0x4d
}
@property(assign) BOOL dimsWhenDisabled;	// G=0x33a874f1; S=0x33a874c1; converted property
@property(assign) BOOL disabled;	// G=0x33a8744d; S=0x33a87415; converted property
@property(retain) BRImage *disabledImage;	// G=0x33a874b1; S=0x33a8745d; converted property
@property(retain) BRImage *focusedImage;	// G=0x33a873a1; S=0x33a8734d; converted property
@property(retain) BRImage *unfocusedImage;	// G=0x33a87405; S=0x33a873b1; converted property
- (void)_updateDim;	// 0x33a87711
- (void)_updateImage;	// 0x33a8764d
- (void)controlWasFocused;	// 0x33a87501
- (void)controlWasUnfocused;	// 0x33a87559
- (void)dealloc;	// 0x33a872d9
// converted property getter: - (BOOL)dimsWhenDisabled;	// 0x33a874f1
// converted property getter: - (BOOL)disabled;	// 0x33a8744d
// converted property getter: - (id)disabledImage;	// 0x33a874b1
// converted property getter: - (id)focusedImage;	// 0x33a873a1
- (id)preferredActionForKey:(id)key;	// 0x33a875b1
// converted property setter: - (void)setDimsWhenDisabled:(BOOL)disabled;	// 0x33a874c1
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x33a87415
// converted property setter: - (void)setDisabledImage:(id)image;	// 0x33a8745d
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x33a8734d
// converted property setter: - (void)setUnfocusedImage:(id)image;	// 0x33a873b1
// converted property getter: - (id)unfocusedImage;	// 0x33a87405
@end


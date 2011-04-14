/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRImageControl.h"

@class BRImage;

@interface BRFocusableImageControl : BRImageControl {
@private
	BRImage *_focusedImage;	// 68 = 0x44
	BRImage *_unfocusedImage;	// 72 = 0x48
	BRImage *_disabledImage;	// 76 = 0x4c
	BOOL _dimsWhenDisabled;	// 80 = 0x50
	BOOL _disabled;	// 81 = 0x51
}
@property(assign) BOOL dimsWhenDisabled;	// G=0x328f8e1d; S=0x328f8ec9; converted property
@property(assign) BOOL disabled;	// G=0x328f8dfd; S=0x328f8f39; converted property
@property(retain) BRImage *disabledImage;	// G=0x328f8e0d; S=0x328f8ef1; converted property
@property(retain) BRImage *focusedImage;	// G=0x328c94a9; S=0x328c8b25; converted property
@property(retain) BRImage *unfocusedImage;	// G=0x328c8b6d; S=0x328c8ba1; converted property
- (void)_updateDim;	// 0x328f8ff1
- (void)_updateImage;	// 0x328f8e2d
- (void)controlWasFocused;	// 0x328c9455
- (void)controlWasUnfocused;	// 0x328c94b9
- (void)dealloc;	// 0x328c93e9
// converted property getter: - (BOOL)dimsWhenDisabled;	// 0x328f8e1d
// converted property getter: - (BOOL)disabled;	// 0x328f8dfd
// converted property getter: - (id)disabledImage;	// 0x328f8e0d
// converted property getter: - (id)focusedImage;	// 0x328c94a9
- (id)preferredActionForKey:(id)key;	// 0x328f8f69
// converted property setter: - (void)setDimsWhenDisabled:(BOOL)disabled;	// 0x328f8ec9
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x328f8f39
// converted property setter: - (void)setDisabledImage:(id)image;	// 0x328f8ef1
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x328c8b25
// converted property setter: - (void)setUnfocusedImage:(id)image;	// 0x328c8ba1
// converted property getter: - (id)unfocusedImage;	// 0x328c8b6d
@end


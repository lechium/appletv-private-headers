/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRPasscodeSelectionWidget, NSArray, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRPasscodeSelectionLayer : BRControl {
@private
	NSArray *_backgroundLayers;	// 48 = 0x30
	NSArray *_digitLayers;	// 52 = 0x34
	NSArray *_bulletLayers;	// 56 = 0x38
	BRImageControl *_arrowsLayer;	// 60 = 0x3c
	BRPasscodeSelectionWidget *_selectionWidget;	// 64 = 0x40
	BRTextControl *_doneLayer;	// 68 = 0x44
	BOOL _isUserEditable;	// 72 = 0x48
	unsigned _numDigits;	// 76 = 0x4c
	BOOL _hideDigits;	// 80 = 0x50
	int _selection;	// 84 = 0x54
}
@property(retain) id passcode;	// G=0x33b1026d; S=0x33b103b1; converted property
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x33b0f669
- (void)_adjustDigitVisibility:(id)visibility;	// 0x33b11b11
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x33b1135d
- (id)_buildArrowsLayer;	// 0x33b10d41
- (id)_buildBackgroundLayers;	// 0x33b10981
- (id)_buildBulletLayers;	// 0x33b10be5
- (id)_buildDigitLayers;	// 0x33b10aad
- (id)_buildDoneLayer;	// 0x33b10e05
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x33b1157d
- (CGRect)_digitFrameForSelection:(int)selection digit:(id)digit;	// 0x33b11489
- (void)_hideDigitAtIndex:(int)index;	// 0x33b11a85
- (float)_layoutUIWithHeight:(float)height;	// 0x33b10ee1
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x33b11299
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x33b118c5
- (void)_setDigitValue:(id)value atIndex:(int)index;	// 0x33b119b1
- (void)_setSelection:(int)selection;	// 0x33b116a9
- (id)accessibilityLabel;	// 0x33b11b75
- (id)accessibilityTraits;	// 0x33b11ce1
- (void)dealloc;	// 0x33b0f8e9
- (BOOL)decrementSelection;	// 0x33b0ff7d
- (BOOL)digitsHidden;	// 0x33b10779
- (BOOL)doneButtonSelected;	// 0x33b1059d
- (void)hideDigits:(int)digits;	// 0x33b10789
- (BOOL)incrementSelection;	// 0x33b0fd55
- (BOOL)moveSelectionLeft;	// 0x33b0fc7d
- (BOOL)moveSelectionRight;	// 0x33b0fb91
// converted property getter: - (id)passcode;	// 0x33b1026d
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x33b0f999
- (void)reset;	// 0x33b105e9
- (void)setFrame:(CGRect)frame;	// 0x33b10689
// converted property setter: - (void)setPasscode:(id)passcode;	// 0x33b103b1
- (BOOL)setSelection:(int)selection;	// 0x33b10191
- (void)showDigits;	// 0x33b1086d
- (float)widthOfDigitsForScreenSize:(CGSize)screenSize;	// 0x33b0fb05
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, NSArray, BRTextControl, BRPasscodeSelectionWidget;

__attribute__((visibility("hidden")))
@interface BRPasscodeSelectionLayer : BRControl {
	NSArray *_backgroundLayers;	// 84 = 0x54
	NSArray *_digitLayers;	// 88 = 0x58
	NSArray *_bulletLayers;	// 92 = 0x5c
	BRImageControl *_arrowsLayer;	// 96 = 0x60
	BRPasscodeSelectionWidget *_selectionWidget;	// 100 = 0x64
	BRTextControl *_doneLayer;	// 104 = 0x68
	BOOL _isUserEditable;	// 108 = 0x6c
	unsigned _numDigits;	// 112 = 0x70
	BOOL _hideDigits;	// 116 = 0x74
	int _selection;	// 120 = 0x78
}
@property(retain) id passcode;	// G=0x35447d; S=0x3545e5; converted property
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x353899
- (void)_adjustDigitVisibility:(id)visibility;	// 0x355d8d
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x3555bd
- (id)_buildArrowsLayer;	// 0x354fb9
- (id)_buildBackgroundLayers;	// 0x354c05
- (id)_buildBulletLayers;	// 0x354e4d
- (id)_buildDigitLayers;	// 0x354d05
- (id)_buildDoneLayer;	// 0x355075
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x3557c5
- (CGRect)_digitFrameForSelection:(int)selection digit:(id)digit;	// 0x3556c9
- (void)_hideDigitAtIndex:(int)index;	// 0x355cf5
- (float)_layoutUIWithHeight:(float)height;	// 0x355151
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x3554fd
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x355b31
- (void)_setDigitValue:(id)value atIndex:(int)index;	// 0x355c21
- (void)_setSelection:(int)selection;	// 0x3558ed
- (id)accessibilityLabel;	// 0x355df5
- (id)accessibilityTraitsList;	// 0x355f75
- (void)dealloc;	// 0x353add
- (BOOL)decrementSelection;	// 0x354171
- (BOOL)digitsHidden;	// 0x3549bd
- (BOOL)doneButtonSelected;	// 0x3547dd
- (void)hideDigits:(int)digits;	// 0x3549cd
- (BOOL)incrementSelection;	// 0x353f39
- (BOOL)moveSelectionLeft;	// 0x353e59
- (BOOL)moveSelectionRight;	// 0x353d65
// converted property getter: - (id)passcode;	// 0x35447d
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x353b91
- (void)reset;	// 0x354825
- (void)setFrame:(CGRect)frame;	// 0x3548c5
// converted property setter: - (void)setPasscode:(id)passcode;	// 0x3545e5
- (BOOL)setSelection:(int)selection;	// 0x354399
- (void)showDigits;	// 0x354ac5
- (float)widthOfDigitsForScreenSize:(CGSize)screenSize;	// 0x353ce5
@end

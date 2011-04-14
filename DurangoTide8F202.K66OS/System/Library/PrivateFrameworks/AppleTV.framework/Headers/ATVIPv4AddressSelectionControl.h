/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library

@class NSArray, BRTextControl, ATVIPv4AddressSelectionWidget, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVIPv4AddressSelectionControl : BRControl {
@private
	NSArray *_octetBackgroundLayers;	// 44 = 0x2c
	NSArray *_digitLayers;	// 48 = 0x30
	NSArray *_dotLayers;	// 52 = 0x34
	BRImageControl *_arrowsLayer;	// 56 = 0x38
	ATVIPv4AddressSelectionWidget *_selectionWidget;	// 60 = 0x3c
	BRTextControl *_doneLayer;	// 64 = 0x40
	int _selection;	// 68 = 0x44
}
- (id)init;	// 0x336e7b1d
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x336e9211
- (id)_buildArrowsLayer;	// 0x336e8e55
- (id)_buildDigitLayers;	// 0x336e7761
- (id)_buildDoneLayer;	// 0x336e7545
- (id)_buildDotLayers;	// 0x336e7619
- (id)_buildOctetBackgroundLayers;	// 0x336e78a5
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x336e9055
- (CGRect)_digitFrameForSelection:(int)selection;	// 0x336e9149
- (float)_layoutUIWithHeight:(float)height;	// 0x336e7f35
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x336e7ea9
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x336e7485
- (void)_setDigitValue:(int)value atIndex:(int)index;	// 0x336e737d
- (void)_setSelection:(int)selection;	// 0x336e7d0d
- (float)_singleCellWidth;	// 0x336e7e5d
- (id)_textEntryGlyphAttributes;	// 0x336e8f01
- (id)_textEntryGlyphGrayAttributes;	// 0x336e8f21
- (id)accessibilityLabel;	// 0x336e72fd
- (id)accessibilityTraits;	// 0x336e7285
- (void)controlWasActivated;	// 0x336e7a25
- (void)dealloc;	// 0x336e7a79
- (BOOL)decrementSelection;	// 0x336e878d
- (BOOL)doneButtonSelected;	// 0x336e85cd
- (BOOL)incrementSelection;	// 0x336e8a31
- (id)ipAddress;	// 0x336e85f5
- (BOOL)moveSelectionLeft;	// 0x336e8cd9
- (BOOL)moveSelectionRight;	// 0x336e8d95
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x336e8f45
- (void)reset;	// 0x336e7a09
- (void)setFrame:(CGRect)frame;	// 0x336e8305
- (void)setIPAddress:(id)address;	// 0x336e83f9
@end


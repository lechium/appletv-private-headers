/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTextField.h"
#import "BRControl.h"

@class ATVIPv4AddressSelectionControl, BRTextControl;
@protocol BRTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface ATVIPv4AddressEntryControl : BRControl <BRTextField> {
@private
	ATVIPv4AddressSelectionControl *_addressPicker;	// 48 = 0x30
	BRTextControl *_labelLayer;	// 52 = 0x34
	CGSize _addressPickerSize;	// 56 = 0x38
	float _labelPadding;	// 64 = 0x40
	id<BRTextFieldDelegate> _textFieldDelegate;	// 68 = 0x44
}
- (id)init;	// 0x301cd925
- (void)_handlePlayPauseButton:(id)button;	// 0x301ce04d
- (void)_layoutUI;	// 0x301ce165
- (id)accessibilityLabel;	// 0x301ce145
- (id)accessibilityTraits;	// 0x301ce0c1
- (BOOL)brEventAction:(id)action;	// 0x301cdd85
- (void)dealloc;	// 0x301cda11
- (BOOL)isAccessibilityElement;	// 0x301ce0bd
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x301cda71
- (void)reset;	// 0x301cdcf5
- (void)setDelegate:(id)delegate;	// 0x301cdb71
- (void)setFrame:(CGRect)frame;	// 0x301cdd3d
- (void)setInitialAddress:(id)address;	// 0x301cdcd5
- (void)setLabel:(id)label;	// 0x301cdb81
- (void)setString:(id)string;	// 0x301ce02d
- (id)stringValue;	// 0x301ce00d
@end


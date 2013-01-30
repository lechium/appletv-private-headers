/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import <PSTableCell.h> // Unknown library

@class UILabel, NSNumberFormatter, UISlider, UIView;

@interface AXHearingSliderValueCell : PSTableCell {
	UIView *_leftView;	// 364 = 0x16c
	UISlider *_slider;	// 368 = 0x170
	UILabel *_valueLabel;	// 372 = 0x174
	NSNumberFormatter *_numberFormatter;	// 376 = 0x178
	float _sliderMargin;	// 380 = 0x17c
	float _valueWidth;	// 384 = 0x180
}
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x32e686c1
- (void)accessibilityDecrement;	// 0x32e69a49
- (id)accessibilityHint;	// 0x32e69921
- (void)accessibilityIncrement;	// 0x32e69a29
- (id)accessibilityLabel;	// 0x32e69941
- (unsigned long long)accessibilityTraits;	// 0x32e698e1
- (id)accessibilityValue;	// 0x32e69901
- (void)dealloc;	// 0x32e687a5
- (BOOL)isAccessibilityElement;	// 0x32e69a25
- (void)layoutSubviews;	// 0x32e691b9
- (void)sliderValueDidChange:(id)sliderValue;	// 0x32e68ce5
- (void)updateValue;	// 0x32e690e5
- (id)value;	// 0x32e68dd9
- (void)willMoveToSuperview:(id)superview;	// 0x32e6885d
@end

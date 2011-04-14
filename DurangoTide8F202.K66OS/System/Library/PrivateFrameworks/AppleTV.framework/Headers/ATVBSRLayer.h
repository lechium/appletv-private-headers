/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVBSRLayer : BRControl {
@private
	BRImageControl *_appleLogo;	// 44 = 0x2c
	BRTextControl *_currentResolutionLabel;	// 48 = 0x30
	BRTextControl *_countDownToNextResolutionLabel;	// 52 = 0x34
	BRTextControl *_canYouSeeTheAppleLogoLabel;	// 56 = 0x38
}
- (id)init;	// 0x33681e0d
- (id)_bsrCountDownLabelAttributes;	// 0x33682291
- (id)_centeredTextAttributesForAttributes:(id)attributes;	// 0x33681bb5
- (void)dealloc;	// 0x33681ca9
- (void)layoutSubcontrols;	// 0x33681fe9
- (void)setCurrentResolutionString:(id)string;	// 0x33681d29
- (void)setSecondsLeftBeforeNextDisplayModeChangeString:(id)string;	// 0x33681c11
@end


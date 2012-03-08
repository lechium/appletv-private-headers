/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVBSRLayer : BRControl {
@private
	BRImageControl *_appleLogo;	// 48 = 0x30
	BRTextControl *_currentResolutionLabel;	// 52 = 0x34
	BRTextControl *_countDownToNextResolutionLabel;	// 56 = 0x38
	BRTextControl *_canYouSeeTheAppleLogoLabel;	// 60 = 0x3c
}
- (id)init;	// 0x301556bd
- (id)_bsrCountDownLabelAttributes;	// 0x30155e65
- (id)_centeredTextAttributesForAttributes:(id)attributes;	// 0x30155dfd
- (void)dealloc;	// 0x301558c5
- (void)layoutSubcontrols;	// 0x3015594d
- (void)setCurrentResolutionString:(id)string;	// 0x30155c5d
- (void)setSecondsLeftBeforeNextDisplayModeChangeString:(id)string;	// 0x30155d59
@end


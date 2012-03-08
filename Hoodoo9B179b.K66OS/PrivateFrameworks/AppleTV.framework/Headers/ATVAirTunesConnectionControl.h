/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRTextControl, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface ATVAirTunesConnectionControl : BRControl {
@private
	BRControl *_background;	// 48 = 0x30
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
	BRTextControl *_text;	// 56 = 0x38
}
- (id)init;	// 0x3014db29
- (void)dealloc;	// 0x3014dc6d
- (void)layoutSubcontrols;	// 0x3014dd2d
- (void)setStatus:(id)status;	// 0x3014dce1
@end


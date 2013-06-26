/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "AppleTV-Structs.h"

@class NSTimer, BRWaitPromptControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVAirPlayCRDModeAutostartController : BRController {
	BRWaitPromptControl *_prompt;	// 100 = 0x64
	BRTextControl *_subtext;	// 104 = 0x68
	NSTimer *_countdownTimer;	// 108 = 0x6c
}
@property(retain, nonatomic) NSTimer *countdownTimer;	// G=0x3648e5; S=0x3648f5; @synthesize=_countdownTimer
@property(retain, nonatomic) BRWaitPromptControl *prompt;	// G=0x364875; S=0x364885; @synthesize=_prompt
@property(retain, nonatomic) BRTextControl *subtext;	// G=0x3648ad; S=0x3648bd; @synthesize=_subtext
- (id)init;	// 0x364439
- (void).cxx_destruct;	// 0x36491d
- (void)_enterCRDMode;	// 0x364a65
- (void)_startCountdown;	// 0x364965
- (void)_stopCountdown;	// 0x3649fd
- (id)accessibilityLabel;	// 0x3646d9
- (BOOL)brEventAction:(id)action;	// 0x3646f9
// declared property getter: - (id)countdownTimer;	// 0x3648e5
- (void)dealloc;	// 0x364695
- (BOOL)isAccessibilityElement;	// 0x3646d5
- (void)layoutSubcontrols;	// 0x3647a5
// declared property getter: - (id)prompt;	// 0x364875
// declared property setter: - (void)setCountdownTimer:(id)timer;	// 0x3648f5
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x364885
// declared property setter: - (void)setSubtext:(id)subtext;	// 0x3648bd
// declared property getter: - (id)subtext;	// 0x3648ad
- (void)wasPushed;	// 0x364765
@end

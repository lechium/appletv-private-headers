/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIResponder, UIDelayedAction;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
	UIResponder<UITextInput> *_textInput;	// 116 = 0x74
	UIDelayedAction *_secondDelayTimer;	// 120 = 0x78
	double _secondDelay;	// 124 = 0x7c
	BOOL _secondDelayElapsed;	// 132 = 0x84
	id _userData;	// 136 = 0x88
}
@property(assign, nonatomic) double secondDelay;	// G=0x2f7531d1; S=0x2f7531e9; @synthesize=_secondDelay
@property(readonly, assign, nonatomic) BOOL secondDelayElapsed;	// G=0x2f7531fd; @synthesize=_secondDelayElapsed
@property(assign, nonatomic) UIResponder<UITextInput> *textInput;	// G=0x2f7531b1; S=0x2f7531c1; @synthesize=_textInput
@property(assign, nonatomic) id userData;	// G=0x2f75320d; S=0x2f75321d; @synthesize=_userData
- (void)_resetGestureRecognizer;	// 0x2f752df9
- (void)clearTimer;	// 0x2f75314d
// declared property getter: - (double)secondDelay;	// 0x2f7531d1
// declared property getter: - (BOOL)secondDelayElapsed;	// 0x2f7531fd
- (void)secondDelayElapsed:(id)elapsed;	// 0x2f752f05
// declared property setter: - (void)setSecondDelay:(double)delay;	// 0x2f7531e9
- (void)setState:(int)state;	// 0x2f752e45
// declared property setter: - (void)setTextInput:(id)input;	// 0x2f7531c1
// declared property setter: - (void)setUserData:(id)data;	// 0x2f75321d
- (void)startTimer;	// 0x2f752f59
// declared property getter: - (id)textInput;	// 0x2f7531b1
// declared property getter: - (id)userData;	// 0x2f75320d
@end

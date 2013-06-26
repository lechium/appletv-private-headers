/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "AppleTV-Structs.h"

@class NSTimer, BRWaitPromptControl;

__attribute__((visibility("hidden")))
@interface BRTextWithSpinnerController : BRController {
	NSTimer *_revealTimer;	// 100 = 0x64
	double _revealInterval;	// 104 = 0x68
	BRWaitPromptControl *_prompt;	// 112 = 0x70
	BOOL _isNetworkDependent;	// 116 = 0x74
}
@property(readonly, assign) BOOL isNetworkDependent;	// G=0x2f2095; converted property
- (id)initWithTitle:(id)title text:(id)text;	// 0x2f1cc1
- (id)initWithTitle:(id)title text:(id)text isNetworkDependent:(BOOL)dependent;	// 0x2f1d19
- (id)initWithTitle:(id)title text:(id)text isNetworkDependent:(BOOL)dependent revealAfter:(double)after;	// 0x2f1d49
- (id)initWithTitle:(id)title text:(id)text revealAfter:(double)after;	// 0x2f1ced
- (void)_checkActivationState:(id)state;	// 0x2f20a9
- (void)controlWasActivated;	// 0x2f1f21
- (void)controlWasDeactivated;	// 0x2f2041
- (void)dealloc;	// 0x2f1ed1
// converted property getter: - (BOOL)isNetworkDependent;	// 0x2f2095
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x2f20a5
@end

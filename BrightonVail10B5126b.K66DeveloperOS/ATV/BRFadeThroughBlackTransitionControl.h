/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTransitionControl.h"


__attribute__((visibility("hidden")))
@interface BRFadeThroughBlackTransitionControl : BRTransitionControl {
	BRControl *_shroud;	// 92 = 0x5c
}
- (void)_addShroud;	// 0x320af5
- (void)_removeShroud;	// 0x320bc9
- (void)_transitionInCompleted:(id)completed;	// 0x320f21
- (void)_transitionOutCompleted:(id)completed;	// 0x320f91
- (void)_updateContentForTransitionState;	// 0x320c09
- (void)dealloc;	// 0x320969
- (void)layoutSubcontrols;	// 0x320a55
- (void)setContent:(id)content;	// 0x3209b5
- (void)setTransitionedIn:(BOOL)anIn;	// 0x3209f5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTransitionControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRFadeThroughBlackTransitionControl : BRTransitionControl {
@private
	BRControl *_shroud;	// 56 = 0x38
}
- (void)_addShroud;	// 0x330b9255
- (void)_removeShroud;	// 0x330b9301
- (void)_transitionInCompleted:(id)completed;	// 0x330b9691
- (void)_transitionOutCompleted:(id)completed;	// 0x330b9701
- (void)_updateContentForTransitionState;	// 0x330b9341
- (void)dealloc;	// 0x330b90cd
- (void)layoutSubcontrols;	// 0x330b91b9
- (void)setContent:(id)content;	// 0x330b9119
- (void)setTransitionedIn:(BOOL)anIn;	// 0x330b9159
@end


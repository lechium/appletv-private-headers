/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTransitionControl.h"


__attribute__((visibility("hidden")))
@interface BRFadeThroughBlackTransitionControl : BRTransitionControl {
@private
	BRControl *_shroud;	// 56 = 0x38
}
- (void)_addShroud;	// 0x302dc495
- (void)_removeShroud;	// 0x302dc541
- (void)_transitionInCompleted:(id)completed;	// 0x302dc8d1
- (void)_transitionOutCompleted:(id)completed;	// 0x302dc941
- (void)_updateContentForTransitionState;	// 0x302dc581
- (void)dealloc;	// 0x302dc30d
- (void)layoutSubcontrols;	// 0x302dc3f9
- (void)setContent:(id)content;	// 0x302dc359
- (void)setTransitionedIn:(BOOL)anIn;	// 0x302dc399
@end


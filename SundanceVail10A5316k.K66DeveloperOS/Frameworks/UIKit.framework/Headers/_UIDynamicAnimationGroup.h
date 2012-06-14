/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIDynamicAnimation.h"

@class NSArray, NSMutableArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {
@private
	id _applier;	// 16 = 0x10
	NSMutableArray *_animations;	// 20 = 0x14
	NSMutableArray *_runningAnimations;	// 24 = 0x18
}
@property(copy, nonatomic) NSArray *animations;	// G=0x30432ce5; S=0x304324c9; @synthesize=_animations
- (BOOL)_animateForInterval:(double)interval;	// 0x30432241
- (void)_appendSubclassDescription:(id)description atLevel:(int)level;	// 0x30432b71
- (void)_stopAnimation;	// 0x304321c9
- (void)addAnimation:(id)animation;	// 0x30432731
// declared property getter: - (id)animations;	// 0x30432ce5
- (void)dealloc;	// 0x30432165
- (void)removeAnimation:(id)animation;	// 0x304328c9
- (void)runWithCompletion:(id)completion;	// 0x30432b09
- (void)runWithGroupApplier:(id)groupApplier completion:(id)completion;	// 0x30432ae1
- (void)runWithGroupApplier:(id)groupApplier completion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;	// 0x304329ad
// declared property setter: - (void)setAnimations:(id)animations;	// 0x304324c9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface _UIDynamicAnimation : NSObject {
@private
	id _completion;	// 4 = 0x4
	int _state;	// 8 = 0x8
	unsigned _began : 1;	// 12 = 0xc
	unsigned _running : 1;	// 12 = 0xc
	unsigned _yield : 1;	// 12 = 0xc
	unsigned _grouped : 1;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int state;	// G=0x35a1ce4d; 
+ (void)_updateAnimations:(id)animations;	// 0x35a1bd09
+ (id)dynamicAnimationForView:(id)view withInitialValue:(double)initialValue velocity:(double)velocity type:(int)type anchorPoint:(CGPoint)point;	// 0x35a1c341
- (BOOL)_animateForInterval:(double)interval;	// 0x35a1c981
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x35a1cecd
- (void)_appendSubclassDescription:(id)description atLevel:(int)level;	// 0x35a1cec9
- (void)_callAppliers:(id)appliers additionalEndAppliers:(id)appliers2 done:(BOOL)done;	// 0x35a1c985
- (void)_cancelWithAppliers:(id)appliers;	// 0x35a1ce05
- (BOOL)_isGrouped;	// 0x35a1ce89
- (BOOL)_isRunning;	// 0x35a1ceb5
- (void)_setGrouped:(BOOL)grouped;	// 0x35a1ce9d
- (void)_setShouldYield:(BOOL)_set;	// 0x35a1ce71
- (BOOL)_shouldYield;	// 0x35a1ce5d
- (void)_stopAnimation;	// 0x35a1c91d
- (void)dealloc;	// 0x35a1c8d1
- (id)description;	// 0x35a1d10d
- (void)runWithCompletion:(id)completion;	// 0x35a1cd85
- (void)runWithCompletion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;	// 0x35a1ca29
// declared property getter: - (int)state;	// 0x35a1ce4d
- (void)stop;	// 0x35a1cda5
@end


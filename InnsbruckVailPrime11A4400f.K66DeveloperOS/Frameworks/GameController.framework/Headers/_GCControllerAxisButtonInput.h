/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameController.framework/GameController
 */

#import "GameController-Structs.h"
#import "_GCControllerButtonInput.h"

@class _GCControllerAxisInput;

__attribute__((visibility("hidden")))
@interface _GCControllerAxisButtonInput : _GCControllerButtonInput {
	_GCControllerAxisInput *_axis;	// 12 = 0xc
	BOOL _positive;	// 16 = 0x10
}
@property(assign) __weak _GCControllerAxisInput *axis;	// G=0x2dd84cad; S=0x2dd84ccd; @synthesize=_axis
@property(readonly, assign, getter=isPositive) BOOL positive;	// G=0x2dd84ce1; @synthesize=_positive
- (id)initWithAxis:(id)axis positive:(BOOL)positive;	// 0x2dd84abd
- (void).cxx_destruct;	// 0x2dd84cf9
// declared property getter: - (id)axis;	// 0x2dd84cad
- (id)collection;	// 0x2dd84b25
- (id)description;	// 0x2dd84b69
- (BOOL)isAnalog;	// 0x2dd84b81
// declared property getter: - (BOOL)isPositive;	// 0x2dd84ce1
// declared property setter: - (void)setAxis:(id)axis;	// 0x2dd84ccd
- (BOOL)setHIDValue:(IOHIDValueRef)value;	// 0x2dd84bb9
- (float)value;	// 0x2dd84c39
@end


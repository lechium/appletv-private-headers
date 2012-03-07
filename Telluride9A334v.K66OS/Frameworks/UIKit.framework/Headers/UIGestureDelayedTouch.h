/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class UITouch, UIEvent;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedTouch : NSObject <NSCopying> {
@private
	UITouch *_touch;	// 4 = 0x4
	UITouch *_stateWhenDelayed;	// 8 = 0x8
	UITouch *_stateWhenDelivered;	// 12 = 0xc
	UIEvent *_event;	// 16 = 0x10
	int _delayCount;	// 20 = 0x14
	BOOL _cloneForSecondDelivery;	// 24 = 0x18
}
@property(assign) BOOL cloneForSecondDelivery;	// G=0x30132561; S=0x30152659; @synthesize=_cloneForSecondDelivery
@property(readonly, assign) int delayCount;	// G=0x301324cd; converted property
@property(retain) UIEvent *event;	// G=0x3012b3b5; S=0x3012a9e1; @synthesize=_event
@property(retain) UITouch *stateWhenDelayed;	// G=0x3012aa29; S=0x30152635; @synthesize=_stateWhenDelayed
@property(retain) UITouch *stateWhenDelivered;	// G=0x301325d9; S=0x302e8505; @synthesize=_stateWhenDelivered
@property(retain) UITouch *touch;	// G=0x3012b3a1; S=0x3012aa05; @synthesize=_touch
- (id)init;	// 0x3012a6b5
// declared property getter: - (BOOL)cloneForSecondDelivery;	// 0x30132561
- (id)copyWithZone:(NSZone *)zone;	// 0x30152551
- (void)dealloc;	// 0x3012f801
- (int)decrementDelayCount;	// 0x3012b545
// converted property getter: - (int)delayCount;	// 0x301324cd
- (id)description;	// 0x302e83e1
// declared property getter: - (id)event;	// 0x3012b3b5
- (void)incrementDelayCount;	// 0x3012ab2d
- (int)phaseForDelivery;	// 0x301526bd
- (void)saveCurrentTouchState;	// 0x30132571
// declared property setter: - (void)setCloneForSecondDelivery:(BOOL)secondDelivery;	// 0x30152659
// declared property setter: - (void)setEvent:(id)event;	// 0x3012a9e1
// declared property setter: - (void)setStateWhenDelayed:(id)delayed;	// 0x30152635
// declared property setter: - (void)setStateWhenDelivered:(id)delivered;	// 0x302e8505
// declared property setter: - (void)setTouch:(id)touch;	// 0x3012aa05
// declared property getter: - (id)stateWhenDelayed;	// 0x3012aa29
// declared property getter: - (id)stateWhenDelivered;	// 0x301325d9
- (double)timestampForDelivery;	// 0x30152669
// declared property getter: - (id)touch;	// 0x3012b3a1
@end

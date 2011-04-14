/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <CALayer.h> // Unknown library


@interface CALayer (ControlCheaters)
- (id)_owningControl;	// 0x328e4279
@end

@interface CALayer (DirtyLayout)
- (void)setNeedsLayoutOnAllSublayers;	// 0x328e5af1
@end

@interface CALayer (BRScalingLayoutManager)
@property(assign) CGRect scaledFrame;	// G=0x329367f9; S=0x32936841; converted property
// converted property getter: - (CGRect)scaledFrame;	// 0x329367f9
// converted property setter: - (void)setScaledFrame:(CGRect)frame;	// 0x32936841
@end

@interface CALayer (BRCALayerAdditions)
- (void)addBasicAnimationForProperty:(id)property fromValue:(id)value toValue:(id)value3 duration:(double)duration timingFunction:(id)function delegate:(id)delegate;	// 0x32956cbd
- (id)firstLayerNamed:(id)named;	// 0x32956d8d
@end


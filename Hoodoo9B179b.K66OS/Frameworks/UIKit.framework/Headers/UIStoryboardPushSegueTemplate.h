/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardPushSegueTemplate : UIStoryboardSegueTemplate {
@private
	int _destinationContainmentContext;	// 20 = 0x14
	int _splitViewControllerIndex;	// 24 = 0x18
}
@property(assign, nonatomic) int destinationContainmentContext;	// G=0x33272b45; S=0x33272b55; @synthesize=_destinationContainmentContext
@property(assign, nonatomic) int splitViewControllerIndex;	// G=0x33272b65; S=0x33272b75; @synthesize=_splitViewControllerIndex
- (id)initWithCoder:(id)coder;	// 0x3327290d
- (id)defaultSegueClassName;	// 0x33272a15
// declared property getter: - (int)destinationContainmentContext;	// 0x33272b45
- (void)encodeWithCoder:(id)coder;	// 0x3327298d
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x33272a21
// declared property setter: - (void)setDestinationContainmentContext:(int)context;	// 0x33272b55
// declared property setter: - (void)setSplitViewControllerIndex:(int)index;	// 0x33272b75
// declared property getter: - (int)splitViewControllerIndex;	// 0x33272b65
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardReplaceSegueTemplate : UIStoryboardSegueTemplate {
@private
	int _destinationContainmentContext;	// 24 = 0x18
	int _splitViewControllerIndex;	// 28 = 0x1c
}
@property(assign, nonatomic) int destinationContainmentContext;	// G=0x3043699d; S=0x304369ad; @synthesize=_destinationContainmentContext
@property(assign, nonatomic) int splitViewControllerIndex;	// G=0x304369bd; S=0x304369cd; @synthesize=_splitViewControllerIndex
- (id)initWithCoder:(id)coder;	// 0x30436775
- (id)defaultSegueClassName;	// 0x30436881
// declared property getter: - (int)destinationContainmentContext;	// 0x3043699d
- (void)encodeWithCoder:(id)coder;	// 0x304367f9
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x3043688d
// declared property setter: - (void)setDestinationContainmentContext:(int)context;	// 0x304369ad
// declared property setter: - (void)setSplitViewControllerIndex:(int)index;	// 0x304369cd
// declared property getter: - (int)splitViewControllerIndex;	// 0x304369bd
@end


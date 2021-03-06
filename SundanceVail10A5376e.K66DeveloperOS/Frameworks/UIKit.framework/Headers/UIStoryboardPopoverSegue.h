/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStoryboardSegue.h"

@class UIBarButtonItem, UIPopoverController, NSArray, UIView;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue {
	UIPopoverController *_popoverController;	// 20 = 0x14
	NSArray *_passthroughViews;	// 24 = 0x18
	unsigned _permittedArrowDirections;	// 28 = 0x1c
	UIView *_anchorView;	// 32 = 0x20
	UIBarButtonItem *_anchorBarButtonItem;	// 36 = 0x24
	CGRect _anchorRect;	// 40 = 0x28
}
@property(retain, nonatomic, setter=_setAnchorBarButtonItem:) UIBarButtonItem *_anchorBarButtonItem;	// G=0x305b40b9; S=0x305b40c9; @synthesize
@property(assign, nonatomic, setter=_setAnchorRect:) CGRect _anchorRect;	// G=0x305b40d9; S=0x305b40fd; @synthesize
@property(retain, nonatomic, setter=_setAnchorView:) UIView *_anchorView;	// G=0x305b4099; S=0x305b40a9; @synthesize
@property(copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews;	// G=0x305b4055; S=0x305b4069; @synthesize
@property(assign, nonatomic, setter=_setPermittedArrowDirections:) unsigned _permittedArrowDirections;	// G=0x305b4079; S=0x305b4089; @synthesize
@property(readonly, assign, nonatomic) UIPopoverController *popoverController;	// G=0x305b3ded; @synthesize=_popoverController
// declared property getter: - (id)_anchorBarButtonItem;	// 0x305b40b9
// declared property getter: - (CGRect)_anchorRect;	// 0x305b40d9
// declared property getter: - (id)_anchorView;	// 0x305b4099
// declared property getter: - (id)_passthroughViews;	// 0x305b4055
// declared property getter: - (unsigned)_permittedArrowDirections;	// 0x305b4079
// declared property setter: - (void)_setAnchorBarButtonItem:(id)item;	// 0x305b40c9
// declared property setter: - (void)_setAnchorRect:(CGRect)rect;	// 0x305b40fd
// declared property setter: - (void)_setAnchorView:(id)view;	// 0x305b40a9
// declared property setter: - (void)_setPassthroughViews:(id)views;	// 0x305b4069
// declared property setter: - (void)_setPermittedArrowDirections:(unsigned)directions;	// 0x305b4089
- (void)dealloc;	// 0x305b3d61
- (void)perform;	// 0x305b3e99
// declared property getter: - (id)popoverController;	// 0x305b3ded
@end


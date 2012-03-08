/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableCell, NSString;

__attribute__((visibility("hidden")))
@interface UIRemoveControlTextButton : UIControl {
@private
	UITableCell *_tableCell;	// 72 = 0x48
	NSString *_label;	// 76 = 0x4c
}
- (id)initWithRemoveControl:(id)removeControl withTarget:(id)target withLabel:(id)label;	// 0x330b21f1
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x330b2565
- (void)_controlMouseDown:(GSEventRef)down;	// 0x330b2401
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x330b23b1
- (void)_controlMouseUp:(GSEventRef)up;	// 0x330b2405
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x330b2409
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x330b2411
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x330b240d
- (id)_scriptingInfo;	// 0x330b2901
- (float)buttonWidth;	// 0x330b2481
- (void)dealloc;	// 0x330b23b5
- (void)drawRect:(CGRect)rect;	// 0x330b257d
- (void)sizeToFit;	// 0x330b2415
@end


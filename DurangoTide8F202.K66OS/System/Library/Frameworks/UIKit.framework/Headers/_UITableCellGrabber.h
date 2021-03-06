/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableCell;

__attribute__((visibility("hidden")))
@interface _UITableCellGrabber : UIControl {
@private
	UITableCell *_cell;	// 68 = 0x44
	CGPoint _downPoint;	// 72 = 0x48
}
- (id)initWithCell:(id)cell;	// 0x30706a05
- (void)_controlMouseDown:(GSEventRef)down;	// 0x307055c5
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x307055cd
- (void)_controlMouseUp:(GSEventRef)up;	// 0x307055c9
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x30705799
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x30706999
- (BOOL)cancelMouseTracking;	// 0x307056c5
- (BOOL)cancelTouchTracking;	// 0x30705695
- (void)cancelTrackingWithEvent:(id)event;	// 0x30705711
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x30706cd5
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x30706c69
- (void)drawRect:(CGRect)rect;	// 0x30706fed
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x30705761
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x30705729
- (BOOL)shouldTrack;	// 0x307055c1
@end


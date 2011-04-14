/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewCellGrabber : UIControl {
@private
	UITableViewCell *_cell;	// 68 = 0x44
	CGPoint _downPoint;	// 72 = 0x48
}
+ (id)grabberImage;	// 0x30783d79
- (id)initWithFrame:(CGRect)frame tableViewCell:(id)cell;	// 0x30783659
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x30783c19
- (void)cancelTrackingWithEvent:(id)event;	// 0x30782fed
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x30783d0d
- (void)drawRect:(CGRect)rect;	// 0x30783c85
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x30783019
- (BOOL)shouldTrack;	// 0x30781b6d
@end


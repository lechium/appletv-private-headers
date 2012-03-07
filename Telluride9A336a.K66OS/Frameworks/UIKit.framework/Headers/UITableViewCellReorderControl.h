/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl : UIControl {
@private
	UITableViewCell *_cell;	// 72 = 0x48
	CGPoint _downPoint;	// 76 = 0x4c
}
+ (CGSize)defaultSize;	// 0x3511b805
+ (id)grabberImage;	// 0x3511b87d
- (id)initWithTableViewCell:(id)tableViewCell;	// 0x351f71c5
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x351f7555
- (void)cancelTrackingWithEvent:(id)event;	// 0x3536245d
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x351f9b0d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x351f9f75
- (id)grabberImage;	// 0x351f74a1
- (void)layoutSubviews;	// 0x351f73e1
- (void)setFrame:(CGRect)frame;	// 0x351f7399
- (BOOL)shouldTrack;	// 0x351f7551
@end

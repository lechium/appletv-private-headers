/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIToolbar, NSMutableArray, UIImageView, UIBarButtonItemProxy, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface UIToolbarCustomizeView : UIView {
@private
	UIToolbar *_toolbar;	// 44 = 0x2c
	NSMutableArray *_proxies;	// 48 = 0x30
	NSMutableArray *_fixedItems;	// 52 = 0x34
	UIBarButtonItemProxy *_draggingProxy;	// 56 = 0x38
	UIBarButtonItem *_draggingItem;	// 60 = 0x3c
	UIImageView *_dragImage;	// 64 = 0x40
	UIImageView *_replacementGlow;	// 68 = 0x44
	UIBarButtonItem *_replaceItem;	// 72 = 0x48
	CGPoint _startPoint;	// 76 = 0x4c
}
- (void)_finishTouchesEndedChangeAnimation:(id)animation finished:(id)finished context:(id)context;	// 0x30720ff9
- (void)adjustDragImageWithTouches:(id)touches withEvent:(id)event;	// 0x30726315
- (void)buttonBarTouchesBegan:(id)began withEvent:(id)event;	// 0x30722991
- (void)buttonBarTouchesEnded:(id)ended withEvent:(id)event;	// 0x307210d5
- (void)buttonBarTouchesMoved:(id)moved withEvent:(id)event;	// 0x30722889
- (BOOL)canHandleSwipes;	// 0x3071f901
- (void)dealloc;	// 0x30722355
- (id)itemInToolbarWithTouches:(id)touches withEvent:(id)event;	// 0x307250f1
- (void)layoutSubviews;	// 0x30726455
- (void)setToolbar:(id)toolbar currentItems:(id)items availableItems:(id)items3;	// 0x30723a51
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30726de5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30723581
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30725be1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITabBarItem, UIImageView;

__attribute__((visibility("hidden")))
@interface UITabBarItemProxy : NSObject {
@private
	UITabBarItem *_item;	// 4 = 0x4
	UIImageView *_view;	// 8 = 0x8
}
@property(readonly, retain) UITabBarItem *item;	// G=0x30798eb5; converted property
@property(readonly, retain) UIImageView *view;	// G=0x30798ec5; converted property
- (id)initWithItem:(id)item inTabBar:(id)tabBar;	// 0x3079a6b1
- (void)dealloc;	// 0x3079a669
// converted property getter: - (id)item;	// 0x30798eb5
// converted property getter: - (id)view;	// 0x30798ec5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardMenuView.h"
#import "UIKit-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {
@private
	NSMutableArray *m_menuOptions;	// 180 = 0xb4
	CGSize m_preferredSize;	// 184 = 0xb8
}
@property(readonly, assign) CGSize preferredSize;	// G=0x30443eb5; converted property
+ (id)activeInstance;	// 0x3018a6a9
+ (id)sharedInstance;	// 0x30443de5
- (id)initWithFrame:(CGRect)frame;	// 0x30443b71
- (void)dealloc;	// 0x30443d99
- (int)defaultSelectedIndex;	// 0x30443ecd
- (void)didSelectItemAtIndex:(int)index;	// 0x30443f5d
- (int)numberOfItems;	// 0x30443e69
// converted property getter: - (CGSize)preferredSize;	// 0x30443eb5
- (id)titleForItemAtIndex:(int)index;	// 0x30443ed5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiPicker.h"
#import "UIKeyboardEmojiInput.h"

@class UIKeyboardEmojiInputController, UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCharacterPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiInput> {
	UIKeyboardEmojiCategory *_category;	// 124 = 0x7c
	UIKeyboardEmojiInputController *_inputController;	// 128 = 0x80
}
@property(assign) UIKeyboardEmojiCategory *category;	// G=0x32f291c1; S=0x32f291d5; @synthesize=_category
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x32f28b81
// declared property getter: - (id)category;	// 0x32f291c1
- (id)charactersForRow:(int)row;	// 0x32f28ee9
- (void)dealloc;	// 0x32f28d91
- (void)reloadForCategory:(id)category;	// 0x32f28ddd
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;	// 0x32f2909d
// declared property setter: - (void)setCategory:(id)category;	// 0x32f291d5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x32f28fdd
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x32f28fa5
@end

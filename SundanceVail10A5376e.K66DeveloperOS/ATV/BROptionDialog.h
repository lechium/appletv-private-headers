/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@class NSMutableArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BROptionDialog : BRMenuController <BRMenuListItemProvider> {
	NSString *_tagString;	// 144 = 0x90
	int _currentSelection;	// 148 = 0x94
	NSDictionary *_userInfo;	// 152 = 0x98
	NSMutableArray *_options;	// 156 = 0x9c
	id _delegate;	// 160 = 0xa0
	SEL _actionSelector;	// 164 = 0xa4
}
@property(readonly, retain) NSString *tagString;	// G=0x2a8379; converted property
@property(retain) NSDictionary *userInfo;	// G=0x2a83c5; S=0x2a8389; converted property
- (id)init;	// 0x2a7ff1
- (BOOL)_itemSelected:(id)selected;	// 0x2a84f9
- (void)_setSelectedIndex:(long)index;	// 0x2a85c5
- (void)addOptionText:(id)text;	// 0x2a8219
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x2a8265
- (void)dealloc;	// 0x2a811d
- (float)heightForRow:(long)row;	// 0x2a8439
- (long)itemCount;	// 0x2a8419
- (id)itemForRow:(long)row;	// 0x2a8489
- (float)listVerticalOffset;	// 0x2a83d5
- (BOOL)rowSelectable:(long)selectable;	// 0x2a843d
- (long)selectedIndex;	// 0x2a832d
- (id)selectedText;	// 0x2a82dd
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x2a81ad
- (void)setTag:(id)tag;	// 0x2a833d
// converted property setter: - (void)setUserInfo:(id)info;	// 0x2a8389
// converted property getter: - (id)tagString;	// 0x2a8379
- (id)titleForRow:(long)row;	// 0x2a8441
// converted property getter: - (id)userInfo;	// 0x2a83c5
@end


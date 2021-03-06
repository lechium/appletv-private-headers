/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRMenuItem;

__attribute__((visibility("hidden")))
@interface BRMenuItemMediator : XXUnknownSuperclass {
	BRMenuItem *_menuItem;	// 4 = 0x4
	SEL _mediaParadeSelector;	// 8 = 0x8
	SEL _menuSelector;	// 12 = 0xc
	id _object;	// 16 = 0x10
}
@property(assign) SEL mediaPreviewSelector;	// G=0x3da1fd; S=0x3da1ed; converted property
@property(assign) SEL menuActionSelector;	// G=0x3da21d; S=0x3da20d; converted property
@property(readonly, retain) BRMenuItem *menuItem;	// G=0x3da1dd; converted property
@property(readonly, retain) id object;	// G=0x3da279; converted property
+ (id)mediatorWithMenuItem:(id)menuItem;	// 0x3da0d9
- (id)initWithMenuItem:(id)menuItem;	// 0x3da125
- (void)dealloc;	// 0x3da179
// converted property getter: - (SEL)mediaPreviewSelector;	// 0x3da1fd
// converted property getter: - (SEL)menuActionSelector;	// 0x3da21d
// converted property getter: - (id)menuItem;	// 0x3da1dd
// converted property getter: - (id)object;	// 0x3da279
// converted property setter: - (void)setMediaPreviewSelector:(SEL)selector;	// 0x3da1ed
// converted property setter: - (void)setMenuActionSelector:(SEL)selector;	// 0x3da20d
- (void)setMenuActionSelector:(SEL)selector withObject:(id)object;	// 0x3da22d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRSimpleMenuItem : XXUnknownSuperclass {
	NSString *_title;	// 4 = 0x4
	NSString *_rightJustifiedText;	// 8 = 0x8
	int _titlePosition;	// 12 = 0xc
	int _menuItemType;	// 16 = 0x10
}
@property(readonly, assign) int menuItemType;	// G=0x2a5411; converted property
@property(readonly, retain) NSString *rightJustifiedText;	// G=0x2a53f1; converted property
@property(readonly, retain) NSString *title;	// G=0x2a53e1; converted property
@property(readonly, assign) int titlePosition;	// G=0x2a5401; converted property
+ (id)simpleMenuItemWithTitle:(id)title rightJustifiedText:(id)text titlePosition:(int)position menuItemType:(int)type;	// 0x2a5261
+ (id)simpleMenuItemWithTitle:(id)title titlePosition:(int)position menuItemType:(int)type;	// 0x2a5209
- (id)initWithTitle:(id)title rightJustifiedText:(id)text titlePosition:(int)position menuItemType:(int)type;	// 0x2a52dd
- (id)initWithTitle:(id)title titlePosition:(int)position menuItemType:(int)type;	// 0x2a52b9
- (void)dealloc;	// 0x2a537d
// converted property getter: - (int)menuItemType;	// 0x2a5411
// converted property getter: - (id)rightJustifiedText;	// 0x2a53f1
// converted property getter: - (id)title;	// 0x2a53e1
// converted property getter: - (int)titlePosition;	// 0x2a5401
@end

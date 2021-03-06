/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRSimpleMenuItem : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_rightJustifiedText;	// 8 = 0x8
	int _titlePosition;	// 12 = 0xc
	int _menuItemType;	// 16 = 0x10
}
@property(readonly, assign) int menuItemType;	// G=0x32f54605; converted property
@property(readonly, retain) NSString *rightJustifiedText;	// G=0x32f545e5; converted property
@property(readonly, retain) NSString *title;	// G=0x32f545d5; converted property
@property(readonly, assign) int titlePosition;	// G=0x32f545f5; converted property
+ (id)simpleMenuItemWithTitle:(id)title rightJustifiedText:(id)text titlePosition:(int)position menuItemType:(int)type;	// 0x32f54639
+ (id)simpleMenuItemWithTitle:(id)title titlePosition:(int)position menuItemType:(int)type;	// 0x32f54689
- (id)initWithTitle:(id)title rightJustifiedText:(id)text titlePosition:(int)position menuItemType:(int)type;	// 0x32f54735
- (id)initWithTitle:(id)title titlePosition:(int)position menuItemType:(int)type;	// 0x32f54615
- (void)dealloc;	// 0x32f546d9
// converted property getter: - (int)menuItemType;	// 0x32f54605
// converted property getter: - (id)rightJustifiedText;	// 0x32f545e5
// converted property getter: - (id)title;	// 0x32f545d5
// converted property getter: - (int)titlePosition;	// 0x32f545f5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface ABPersonTableActionDataSource : NSObject {
	NSMutableArray *_topActions;	// 4 = 0x4
	NSMutableArray *_bottomActions;	// 8 = 0x8
	CFDictionaryRef _actionsByProperty;	// 12 = 0xc
	CFDictionaryRef _actionGroupingsByProperty;	// 16 = 0x10
	CFDictionaryRef _inlineActionsByProperty;	// 20 = 0x14
	CFSetRef _hiddenActions;	// 24 = 0x18
}
@property(readonly, assign) CFDictionaryRef actionGroupingsByProperty;	// G=0x30920491; converted property
@property(readonly, assign) CFDictionaryRef actionsByProperty;	// G=0x3092044d; converted property
@property(readonly, retain) NSMutableArray *bottomActions;	// G=0x308fe345; converted property
@property(readonly, assign) CFDictionaryRef inlineActionsByProperty;	// G=0x30963abd; converted property
@property(readonly, retain) NSMutableArray *topActions;	// G=0x30963b01; converted property
- (int)actionCountForActionGrouping:(int)actionGrouping;	// 0x3090ff9d
- (int)actionCountForProperty:(int)property withActionGrouping:(int)actionGrouping;	// 0x30963d49
- (id)actionForProperty:(int)property withActionGrouping:(int)actionGrouping atIndex:(int)index;	// 0x30963d71
// converted property getter: - (CFDictionaryRef)actionGroupingsByProperty;	// 0x30920491
- (id)actionWithActionGrouping:(int)actionGrouping atIndex:(int)index;	// 0x30910059
// converted property getter: - (CFDictionaryRef)actionsByProperty;	// 0x3092044d
- (id)actionsForProperty:(int)property withActionGrouping:(int)actionGrouping;	// 0x308fa215
- (id)actionsForProperty:(int)property withActionGroupingAtIndex:(int)index;	// 0x309206b1
- (id)addActionWithTitle:(id)title shortTitle:(id)title2 detailText:(id)text style:(int)style target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x308fdee1
// converted property getter: - (id)bottomActions;	// 0x308fe345
- (void)dealloc;	// 0x3091cac5
- (int)groupingCountForProperty:(int)property;	// 0x3090eb29
- (CFArrayRef)groupingsForProperty:(int)property;	// 0x3090eb4d
- (BOOL)hasActionWithTarget:(id)target selector:(SEL)selector matchProperty:(BOOL)property property:(int)property4 inArray:(id)array outActions:(id *)actions outIndex:(int *)index;	// 0x308fb52d
- (BOOL)hasActionWithTarget:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering outActions:(id *)actions outIndex:(int *)index;	// 0x308fb4d1
- (CFArrayRef)indexesOfActionsForProperty:(int)property withActionGrouping:(int)actionGrouping;	// 0x30963d9d
// converted property getter: - (CFDictionaryRef)inlineActionsByProperty;	// 0x30963abd
- (BOOL)isActionHidden:(id)hidden;	// 0x30963ed1
- (id)newActionsForProperty:(int)property;	// 0x308fa34d
- (void)removeAction:(id)action;	// 0x308fe451
- (void)removeActionWithTarget:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x30963b65
- (void)setAction:(id)action hidden:(BOOL)hidden;	// 0x308fe83d
// converted property getter: - (id)topActions;	// 0x30963b01
@end


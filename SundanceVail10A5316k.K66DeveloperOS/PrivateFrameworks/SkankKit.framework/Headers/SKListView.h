/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKItemList.h"

@class SKLayer;

@interface SKListView : SKItemList {
	SKLayer *_selectedItem;	// 96 = 0x60
}
@property(readonly, retain) SKLayer *selectedItem;	// G=0x32819a79; converted property
@property(retain) id selectedObject;	// G=0x32819b29; S=0x32819b49; converted property
- (void)refreshItems;	// 0x32819949
- (void)selectLayer:(id)layer;	// 0x32819ae5
// converted property getter: - (id)selectedItem;	// 0x32819a79
// converted property getter: - (id)selectedObject;	// 0x32819b29
- (void)setSelectedLayer:(id)layer;	// 0x32819a89
// converted property setter: - (void)setSelectedObject:(id)object;	// 0x32819b49
@end


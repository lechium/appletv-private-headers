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
@property(readonly, retain) SKLayer *selectedItem;	// G=0x3560b349; converted property
@property(retain) id selectedObject;	// G=0x3560b3f9; S=0x3560b419; converted property
- (void)refreshItems;	// 0x3560b219
- (void)selectLayer:(id)layer;	// 0x3560b3b5
// converted property getter: - (id)selectedItem;	// 0x3560b349
// converted property getter: - (id)selectedObject;	// 0x3560b3f9
- (void)setSelectedLayer:(id)layer;	// 0x3560b359
// converted property setter: - (void)setSelectedObject:(id)object;	// 0x3560b419
@end

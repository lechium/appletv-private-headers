/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDDataPoint.h"

@class ODDTransitionPoint, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDNodePoint : ODDDataPoint {
@private
	ODDNodePoint *mParent;	// 24 = 0x18
	NSMutableArray *mChildren;	// 28 = 0x1c
	ODDTransitionPoint *mParentTransition;	// 32 = 0x20
	ODDTransitionPoint *mSiblingTransition;	// 36 = 0x24
}
@property(retain) id parentTransition;	// G=0x32cc0ecd; S=0x32c8cab1; converted property
@property(retain) id siblingTransition;	// G=0x32ca9795; S=0x32c8cb75; converted property
- (void)addChild:(id)child order:(unsigned long)order;	// 0x32c8c911
- (id)children;	// 0x32c8d431
- (void)dealloc;	// 0x32c90aad
- (id)parent;	// 0x32c9e0f5
// converted property getter: - (id)parentTransition;	// 0x32cc0ecd
// converted property setter: - (void)setParentTransition:(id)transition;	// 0x32c8cab1
// converted property setter: - (void)setSiblingTransition:(id)transition;	// 0x32c8cb75
- (void)setType:(int)type;	// 0x32c8bc29
// converted property getter: - (id)siblingTransition;	// 0x32ca9795
@end

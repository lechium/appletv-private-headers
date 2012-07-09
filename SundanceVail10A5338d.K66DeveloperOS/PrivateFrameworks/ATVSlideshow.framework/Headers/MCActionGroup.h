/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSMutableArray, NSArray;

@interface MCActionGroup : MCAction {
	NSMutableArray *_actions;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x334b12e1; @synthesize=_actions
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x334b13cd; 
+ (id)actionGroup;	// 0x334b0ddd
- (id)init;	// 0x334b0e21
- (id)initWithImprint:(id)imprint;	// 0x334b0e85
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x334b1ab9
- (id)actionAtIndex:(unsigned)index;	// 0x334b14c9
// declared property getter: - (id)actions;	// 0x334b12e1
- (void)addAction:(id)action;	// 0x334b15f5
- (void)addActions:(id)actions;	// 0x334b1645
// declared property getter: - (unsigned)countOfActions;	// 0x334b13cd
- (void)demolish;	// 0x334b0fbd
- (id)description;	// 0x334b1bcd
- (id)imprint;	// 0x334b118d
- (void)insertAction:(id)action atIndex:(unsigned)index;	// 0x334b1679
- (void)insertActions:(id)actions atIndex:(unsigned)index;	// 0x334b16b9
- (void)moveActionsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x334b1961
- (void)removeActionsAtIndices:(id)indices;	// 0x334b17cd
- (void)removeAllActions;	// 0x334b1899
@end

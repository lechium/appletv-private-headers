/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSMutableArray, NSArray;

@interface MCActionGroup : MCAction {
@private
	NSMutableArray *_actions;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x3652cf39; @synthesize=_actions
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x3652d025; 
+ (id)actionGroup;	// 0x3652ca35
- (id)init;	// 0x3652ca79
- (id)initWithImprint:(id)imprint;	// 0x3652cadd
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3652d711
- (id)actionAtIndex:(unsigned)index;	// 0x3652d121
// declared property getter: - (id)actions;	// 0x3652cf39
- (void)addAction:(id)action;	// 0x3652d24d
- (void)addActions:(id)actions;	// 0x3652d29d
// declared property getter: - (unsigned)countOfActions;	// 0x3652d025
- (void)demolish;	// 0x3652cc15
- (id)description;	// 0x3652d825
- (id)imprint;	// 0x3652cde5
- (void)insertAction:(id)action atIndex:(unsigned)index;	// 0x3652d2d1
- (void)insertActions:(id)actions atIndex:(unsigned)index;	// 0x3652d311
- (void)moveActionsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x3652d5b9
- (void)removeActionsAtIndices:(id)indices;	// 0x3652d425
- (void)removeAllActions;	// 0x3652d4f1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class UIDynamicAnimator, NSArray, NSMutableArray;

@interface UIDynamicBehavior : NSObject {
	UIDynamicAnimator *_context;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	NSMutableArray *_behaviors;	// 12 = 0xc
	NSMutableArray *_addedBehaviors;	// 16 = 0x10
	BOOL __isPrimitiveBehavior;	// 20 = 0x14
	id _action;	// 24 = 0x18
}
@property(assign, nonatomic, setter=_isPrimitiveBehavior:) BOOL _isPrimitiveBehavior;	// G=0x2f96767d; S=0x2f96768d; @synthesize=__isPrimitiveBehavior
@property(copy, nonatomic) id action;	// G=0x2f967659; S=0x2f96766d; @synthesize=_action
@property(readonly, assign, nonatomic) NSArray *childBehaviors;	// G=0x2f967329; 
@property(readonly, retain) NSMutableArray *items;	// G=0x2f966dc1; converted property
- (id)init;	// 0x2f966e7d
- (void)_associate;	// 0x2f966f49
- (void)_changedParameterForBody:(id)body;	// 0x2f967355
- (id)_context;	// 0x2f966db1
- (void)_dissociate;	// 0x2f967035
- (id)_init:(BOOL)init;	// 0x2f966dc5
// declared property getter: - (BOOL)_isPrimitiveBehavior;	// 0x2f96767d
// declared property setter: - (void)_isPrimitiveBehavior:(BOOL)behavior;	// 0x2f96768d
- (id)_items;	// 0x2f966da1
- (id)_itemsDescription;	// 0x2f967395
- (void)_reevaluate:(unsigned)reevaluate;	// 0x2f966f45
- (void)_setContext:(id)context;	// 0x2f966d81
- (void)_setItems:(id)items;	// 0x2f966d91
- (void)_step;	// 0x2f966f41
// declared property getter: - (id)action;	// 0x2f967659
- (void)addChildBehavior:(id)behavior;	// 0x2f967251
- (BOOL)allowsAnimatorToStop;	// 0x2f96712d
// declared property getter: - (id)childBehaviors;	// 0x2f967329
- (void)dealloc;	// 0x2f966e91
- (id)description;	// 0x2f9675a5
// converted property getter: - (id)items;	// 0x2f966dc1
- (void)removeChildBehavior:(id)behavior;	// 0x2f9672bd
// declared property setter: - (void)setAction:(id)action;	// 0x2f96766d
@end

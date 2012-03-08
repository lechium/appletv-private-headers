/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"
#import "MPActionSupport.h"

@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport> {
@private
	NSMutableArray *_actions;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *actions;	// G=0x354235cd; converted property
+ (id)actionGroup;	// 0x35423301
- (id)init;	// 0x35423345
- (id)initWithCoder:(id)coder;	// 0x354233a9
// converted property getter: - (id)actions;	// 0x354235cd
- (void)addAction:(id)action;	// 0x354235dd
- (void)addActions:(id)actions;	// 0x35423679
- (void)configureAction:(id)action atIndex:(int)index;	// 0x354239c9
- (void)configureTarget;	// 0x35423d0d
- (void)copyActions:(id)actions;	// 0x35423909
- (id)copyWithZone:(NSZone *)zone;	// 0x35423555
- (void)dealloc;	// 0x354234ad
- (void)encodeWithCoder:(id)coder;	// 0x354234f9
- (void)insertAction:(id)action atIndex:(int)index;	// 0x35423639
- (void)insertActions:(id)actions atIndex:(int)index;	// 0x354236b9
- (unsigned)numberOfActions;	// 0x354235ad
- (void)removeActionsAtIndices:(id)indices;	// 0x354237dd
- (void)removeAllActions;	// 0x354238a9
- (void)setAction:(id)action;	// 0x35423dc1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPActionSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport> {
@private
	NSMutableArray *_actions;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *actions;	// G=0x313f8ac5; converted property
+ (id)actionGroup;	// 0x313f87e5
- (id)init;	// 0x313f8821
- (id)initWithCoder:(id)coder;	// 0x313f888d
// converted property getter: - (id)actions;	// 0x313f8ac5
- (void)addAction:(id)action;	// 0x313f8ad5
- (void)addActions:(id)actions;	// 0x313f8b5d
- (void)configureAction:(id)action atIndex:(int)index;	// 0x313f8db9
- (void)configureTarget;	// 0x313f902d
- (void)copyActions:(id)actions;	// 0x313f8cf1
- (id)copyWithZone:(NSZone *)zone;	// 0x313f8a41
- (void)dealloc;	// 0x313f899d
- (void)encodeWithCoder:(id)coder;	// 0x313f89e9
- (void)insertAction:(id)action atIndex:(int)index;	// 0x313f8b25
- (void)insertActions:(id)actions atIndex:(int)index;	// 0x313f8b95
- (unsigned)numberOfActions;	// 0x313f8aa5
- (void)removeActionsAtIndices:(id)indices;	// 0x313f8cb1
- (void)removeAllActions;	// 0x313f8cd1
- (void)setAction:(id)action;	// 0x313f9105
@end


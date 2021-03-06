/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSDate;

__attribute__((visibility("hidden")))
@interface _UITransitionState : NSObject {
	int _transitionDirection;	// 4 = 0x4
	id _completion;	// 8 = 0x8
	NSDate *_beginDate;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;	// G=0x3061b981; 
@property(readonly, assign, nonatomic) NSDate *beginDate;	// G=0x3061bb1d; @synthesize=_beginDate
@property(readonly, assign, nonatomic) int effectiveTransitionDirection;	// G=0x3061ba2d; 
@property(readonly, assign, nonatomic) int transitionDirection;	// G=0x3061bb0d; @synthesize=_transitionDirection
- (id)initWithTransitionDirection:(int)transitionDirection completion:(id)completion;	// 0x3061b8b9
// declared property getter: - (id)beginDate;	// 0x3061bb1d
- (void)cleanupWithFinishedState:(BOOL)finishedState completedState:(BOOL)state;	// 0x3061b9f1
- (void)dealloc;	// 0x3061b91d
- (id)description;	// 0x3061ba61
// declared property getter: - (int)effectiveTransitionDirection;	// 0x3061ba2d
// declared property getter: - (BOOL)isActive;	// 0x3061b981
- (BOOL)isCompatibleWithTransitionInDirection:(int)direction;	// 0x3061ba3d
- (void)markBeginDate;	// 0x3061b999
// declared property getter: - (int)transitionDirection;	// 0x3061bb0d
@end


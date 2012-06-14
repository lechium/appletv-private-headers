/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol MPActionableSupport;

@interface MPTransitionAction : MPAction {
	NSString *_transitionID;	// 16 = 0x10
	double _transitionDuration;	// 20 = 0x14
	NSMutableDictionary *_transitionAttributes;	// 28 = 0x1c
	NSObject<MPActionableSupport> *_transitionDestination;	// 32 = 0x20
}
@property(copy, nonatomic) NSDictionary *transitionAttributes;	// G=0x363db469; S=0x363dafed; @synthesize=_transitionAttributes
@property(retain, nonatomic) NSObject<MPActionableSupport> *transitionDestination;	// G=0x363db4a9; S=0x363db105; @synthesize=_transitionDestination
@property(assign, nonatomic) double transitionDuration;	// G=0x363db491; S=0x363db0c5; @synthesize=_transitionDuration
@property(copy, nonatomic) NSString *transitionID;	// G=0x363db47d; S=0x363db059; @synthesize=_transitionID
+ (id)transitionAction;	// 0x363dab49
- (id)init;	// 0x363dab8d
- (id)initWithCoder:(id)coder;	// 0x363dabf9
- (void)configureTarget;	// 0x363db335
- (id)copyWithZone:(NSZone *)zone;	// 0x363daf11
- (void)dealloc;	// 0x363dad49
- (void)encodeWithCoder:(id)coder;	// 0x363dadc1
- (void)setAction:(id)action;	// 0x363db185
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x363dafed
// declared property setter: - (void)setTransitionDestination:(id)destination;	// 0x363db105
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x363db0c5
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x363db059
- (id)transitionAttributeForKey:(id)key;	// 0x363dafcd
// declared property getter: - (id)transitionAttributes;	// 0x363db469
// declared property getter: - (id)transitionDestination;	// 0x363db4a9
// declared property getter: - (double)transitionDuration;	// 0x363db491
// declared property getter: - (id)transitionID;	// 0x363db47d
@end


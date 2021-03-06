/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, CAAnimation;

__attribute__((visibility("hidden")))
@interface ATVChainedAnimationGroup : XXUnknownSuperclass {
	CAAnimation *_defaultFillerAnimation;	// 4 = 0x4
	BOOL _evaluated;	// 8 = 0x8
	NSMutableArray *_tuples;	// 12 = 0xc
}
@property(retain, nonatomic) CAAnimation *defaultFillerAnimation;	// G=0x3e7b0d; S=0x3e7b1d; @synthesize=_defaultFillerAnimation
@property(assign, nonatomic) BOOL evaluated;	// G=0x3e7b45; S=0x3e7b55; @synthesize=_evaluated
@property(retain, nonatomic) NSMutableArray *tuples;	// G=0x3e7b65; S=0x3e7b75; @synthesize=_tuples
- (void).cxx_destruct;	// 0x3e7b9d
- (void)_evaluateTuplesWithContinuationCheck;	// 0x3e75d1
- (void)_evaluateTuplesWithoutContinuationCheck;	// 0x3e74d9
- (void)addChainedAnimation:(id)animation forKey:(id)key inView:(id)view;	// 0x3e6de9
- (void)cleanUp;	// 0x3e73f9
// declared property getter: - (id)defaultFillerAnimation;	// 0x3e7b0d
- (void)evaluate;	// 0x3e6f25
// declared property getter: - (BOOL)evaluated;	// 0x3e7b45
// declared property setter: - (void)setDefaultFillerAnimation:(id)animation;	// 0x3e7b1d
// declared property setter: - (void)setEvaluated:(BOOL)evaluated;	// 0x3e7b55
// declared property setter: - (void)setTuples:(id)tuples;	// 0x3e7b75
// declared property getter: - (id)tuples;	// 0x3e7b65
@end


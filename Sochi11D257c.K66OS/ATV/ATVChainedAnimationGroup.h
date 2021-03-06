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
	BOOL _evaluated;	// 4 = 0x4
	CAAnimation *_defaultFillerAnimation;	// 8 = 0x8
	NSMutableArray *_tuples;	// 12 = 0xc
}
@property(retain, nonatomic) CAAnimation *defaultFillerAnimation;	// G=0x1081d1; S=0x1081e1; @synthesize=_defaultFillerAnimation
@property(assign, nonatomic) BOOL evaluated;	// G=0x108209; S=0x108219; @synthesize=_evaluated
@property(retain, nonatomic) NSMutableArray *tuples;	// G=0x108229; S=0x108239; @synthesize=_tuples
- (void).cxx_destruct;	// 0x108261
- (void)_evaluateTuplesWithContinuationCheck;	// 0x107c69
- (void)_evaluateTuplesWithoutContinuationCheck;	// 0x107b75
- (void)addChainedAnimation:(id)animation forKey:(id)key inView:(id)view;	// 0x107419
- (void)cleanUp;	// 0x107a95
// declared property getter: - (id)defaultFillerAnimation;	// 0x1081d1
- (void)evaluate;	// 0x107569
// declared property getter: - (BOOL)evaluated;	// 0x108209
// declared property setter: - (void)setDefaultFillerAnimation:(id)animation;	// 0x1081e1
// declared property setter: - (void)setEvaluated:(BOOL)evaluated;	// 0x108219
// declared property setter: - (void)setTuples:(id)tuples;	// 0x108239
// declared property getter: - (id)tuples;	// 0x108229
@end


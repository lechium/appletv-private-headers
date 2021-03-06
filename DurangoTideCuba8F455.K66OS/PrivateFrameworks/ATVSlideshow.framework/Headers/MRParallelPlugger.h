/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MCPlugParallel, MCAnimationPath;

@interface MRParallelPlugger : NSObject {
	MCPlugParallel *mPlug;	// 4 = 0x4
	MCAnimationPath *mAnimationPathParam1;	// 8 = 0x8
	MCAnimationPath *mAnimationPathParam2;	// 12 = 0xc
	MCAnimationPath *mAnimationPathXY;	// 16 = 0x10
	MCAnimationPath *mAnimationPathX;	// 20 = 0x14
	MCAnimationPath *mAnimationPathY;	// 24 = 0x18
	MCAnimationPath *mAnimationPathZ;	// 28 = 0x1c
	MCAnimationPath *mAnimationPathRX;	// 32 = 0x20
	MCAnimationPath *mAnimationPathRY;	// 36 = 0x24
	MCAnimationPath *mAnimationPathRZ;	// 40 = 0x28
	MCAnimationPath *mAnimationPathOpacity;	// 44 = 0x2c
	BOOL mNeedsUpdate;	// 48 = 0x30
	BOOL mPlugWasSetSinceLastRendering;	// 49 = 0x31
}
@property(assign) BOOL needsUpdate;	// G=0x33d7f5e9; S=0x33d7f5f9; @synthesize=mNeedsUpdate
@property(copy, nonatomic) MCPlugParallel *plug;	// G=0x33d7f5d9; S=0x33d7f251; @synthesize=mPlug
- (id)init;	// 0x33d7debd
- (BOOL)applyAtTime:(double)time toSublayer:(id)sublayer;	// 0x33d7dfc9
- (void)dealloc;	// 0x33d7defd
// declared property getter: - (BOOL)needsUpdate;	// 0x33d7f5e9
// declared property getter: - (id)plug;	// 0x33d7f5d9
// declared property setter: - (void)setNeedsUpdate:(BOOL)update;	// 0x33d7f5f9
// declared property setter: - (void)setPlug:(id)plug;	// 0x33d7f251
@end


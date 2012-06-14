/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRLayer.h"

@class NSMutableArray, MCContainerNavigator, MRTransition, NSDictionary, NSArray, NSMutableDictionary;

@interface MRLayerNavigator : MRLayer {
@private
	MCContainerNavigator *mContainer;	// 120 = 0x78
	NSMutableArray *mSublayers;	// 124 = 0x7c
	NSMutableDictionary *mSublayersForPlugs;	// 128 = 0x80
	MRLayer *mNextSublayer;	// 132 = 0x84
	MRTransition *mCurrentTransition;	// 136 = 0x88
	BOOL mIsTransitioning;	// 140 = 0x8c
	BOOL mTransitionWasAborted;	// 141 = 0x8d
	MRLayer *mSublayerToPrecompute;	// 144 = 0x90
	id mPrecomputingTarget;	// 148 = 0x94
	unsigned mPrecomputingType;	// 152 = 0x98
	double mTransitionStartTime;	// 156 = 0x9c
	double mTransitionDuration;	// 164 = 0xa4
	BOOL mTransitionIsBackwards;	// 172 = 0xac
	NSDictionary *mTransitionChanges;	// 176 = 0xb0
	NSMutableArray *mHistoryBack;	// 180 = 0xb4
	NSMutableArray *mHistoryForth;	// 184 = 0xb8
	MRLayer *mCurrentSublayer;	// 188 = 0xbc
	BOOL mBackAndForthIsEnabled;	// 192 = 0xc0
	double mForcedTransitionTime;	// 196 = 0xc4
}
@property(assign) BOOL backAndForthIsEnabled;	// G=0x364edd49; S=0x364edd61; @synthesize=mBackAndForthIsEnabled
@property(readonly, assign) MRLayer *currentSublayer;	// G=0x364edd35; @synthesize=mCurrentSublayer
@property(assign, nonatomic) double forcedTransitionTime;	// G=0x364edd79; S=0x364edd91; @synthesize=mForcedTransitionTime
@property(readonly, assign) NSArray *sublayers;	// G=0x364edd21; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x364ea859
- (id)_createSublayerForPlug:(id)plug;	// 0x364ee135
- (id)_currentState;	// 0x364edab1
- (void)_deleteSublayer:(id)sublayer;	// 0x364ee27d
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x364edb99
- (void)_executeLayerCommandQueue;	// 0x364edda5
- (BOOL)_isNative3D;	// 0x364ec331
- (void)_observePlug;	// 0x364ee511
- (void)_observePlugOnPreactivate;	// 0x364ee5c9
- (void)_observeSublayer:(id)sublayer;	// 0x364ee411
- (void)_precomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364ee7cd
- (void)_preprecomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364ef669
- (void)_prerenderSublayersAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364eed99
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364ee9e9
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364eeb91
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x364ee6e5
- (void)_unobservePlug;	// 0x364ee571
- (void)_unobservePlugOnDepreactivate;	// 0x364ee665
- (void)_unobserveSublayer:(id)sublayer;	// 0x364ee491
- (double)abortTransition:(id)transition;	// 0x364eca21
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x364ec7fd
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x364ec6a9
// declared property getter: - (BOOL)backAndForthIsEnabled;	// 0x364edd49
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x364eb319
- (void)cleanup;	// 0x364eaa3d
// declared property getter: - (id)currentSublayer;	// 0x364edd35
- (void)deactivate;	// 0x364eb3c9
- (void)depreactivate:(BOOL)depreactivate;	// 0x364eb5b5
- (double)doTransition:(id)transition;	// 0x364ed68d
- (double)doTransition:(id)transition backwards:(BOOL)backwards;	// 0x364ecb11
- (double)doTransitionBackwards:(id)backwards;	// 0x364ed6a1
- (void)endMorphing;	// 0x364eb385
- (void)endTransitionToSublayer;	// 0x364ed9c9
- (double)finishTransition:(id)transition;	// 0x364ec951
// declared property getter: - (double)forcedTransitionTime;	// 0x364edd79
- (double)goBack;	// 0x364ed841
- (double)goForth;	// 0x364ed6b9
- (BOOL)hasAudio;	// 0x364ec219
- (BOOL)hasSomethingToRender;	// 0x364eb205
- (BOOL)isAlphaFriendly;	// 0x364eb8e5
- (BOOL)isInfinite;	// 0x364eb959
- (BOOL)isLoadedForTime:(double)time;	// 0x364eb6b9
- (BOOL)isOpaque;	// 0x364eb871
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x364ead3d
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364ebee5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364eb98d
// declared property setter: - (void)setBackAndForthIsEnabled:(BOOL)enabled;	// 0x364edd61
// declared property setter: - (void)setForcedTransitionTime:(double)time;	// 0x364edd91
- (void)setPixelSize:(CGSize)size;	// 0x364eb11d
- (id)sublayerForID:(id)anId;	// 0x364ec385
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x364ec4a1
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x364ec075
// declared property getter: - (id)sublayers;	// 0x364edd21
- (void)synchronizeTime;	// 0x364eb28d
@end


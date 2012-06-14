/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library
#import "MRLoadable.h"
#import "MRRenderable.h"

@class MRAudioPlayer, NSString, MCPlug, NSMutableDictionary, MCPlugHaven, NSMutableArray, MCPlugParallel, MCPlugSerial, MRLayerClock, MRRenderer, NSDictionary;

@interface MRLayer : NSObject <MRLoadable, MRRenderable> {
	MRLayer *mSuperlayer;	// 4 = 0x4
	MCPlug *mPlug;	// 8 = 0x8
	MCPlugSerial *mPlugAsSerial;	// 12 = 0xc
	MCPlugParallel *mPlugAsParallel;	// 16 = 0x10
	MCPlugHaven *mPlugAsHaven;	// 20 = 0x14
	NSString *mUUID;	// 24 = 0x18
	NSString *mIDInSupercontainer;	// 28 = 0x1c
	unsigned mIndex;	// 32 = 0x20
	CGSize mPixelSize;	// 36 = 0x24
	double mTimeStamp;	// 44 = 0x2c
	double mTimeIn;	// 52 = 0x34
	MRLayerClock *mClock;	// 60 = 0x3c
	MRLayerRenderingStateOpaque *mRenderingState;	// 64 = 0x40
	NSMutableDictionary *mAnimationTriggers;	// 68 = 0x44
	NSMutableDictionary *mMotions;	// 72 = 0x48
	NSMutableDictionary *mPersistentState;	// 76 = 0x4c
	NSMutableArray *mLayerCommandQueue;	// 80 = 0x50
	NSDictionary *mParameters;	// 84 = 0x54
	MRRenderer *mRenderer;	// 88 = 0x58
	MRAudioPlayer *mAudioPlayer;	// 92 = 0x5c
	id mParentHelper;	// 96 = 0x60
	BOOL mIsPreactivated;	// 100 = 0x64
	BOOL mIsActivated;	// 101 = 0x65
	BOOL mOkToDeferKenBurns;	// 102 = 0x66
	BOOL mIsPrecomputing;	// 103 = 0x67
	BOOL mIsReadonly;	// 104 = 0x68
	BOOL mDoAudio;	// 105 = 0x69
	BOOL mIsSelected;	// 106 = 0x6a
	BOOL mIsDimmed;	// 107 = 0x6b
	BOOL mNeedsRendering;	// 108 = 0x6c
	BOOL mNeedsToUpdateGeometry;	// 109 = 0x6d
	BOOL mNeedsToUpdateInitialState;	// 110 = 0x6e
	BOOL mNeedsToRequestRebuildAudio;	// 111 = 0x6f
	BOOL mNeedsToRequestRebuildVolume;	// 112 = 0x70
	BOOL mNeedsToSynchronizeTime;	// 113 = 0x71
	BOOL mLayerCommandQueueNeedsAttention;	// 114 = 0x72
	BOOL mIsScheduledForDestruction;	// 115 = 0x73
	BOOL mSupportsAccumulation;	// 116 = 0x74
}
@property(readonly, assign, nonatomic) BOOL _isNative3D;	// G=0x364e6115; 
@property(readonly, assign) NSDictionary *animationTriggers;	// G=0x364e6051; @synthesize=mAnimationTriggers
@property(readonly, assign) MRLayerClock *clock;	// G=0x364e1d5d; 
@property(assign, nonatomic) double duration;	// G=0x364e20d9; S=0x364e213d; 
@property(readonly, assign, nonatomic) BOOL hasAudio;	// G=0x364e3ed5; 
@property(readonly, assign) NSString *idInSupercontainer;	// G=0x364e60b1; @synthesize=mIDInSupercontainer
@property(readonly, assign, nonatomic) unsigned index;	// G=0x364e60c5; @synthesize=mIndex
@property(readonly, assign, nonatomic) BOOL isActivated;	// G=0x364e5fb5; @synthesize=mIsActivated
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x364e2691; 
@property(assign, nonatomic) BOOL isDimmed;	// G=0x364e5ff5; S=0x364e5ead; @synthesize=mIsDimmed
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x364e268d; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x364e264d; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x364e2689; 
@property(readonly, assign, nonatomic) BOOL isPreactivated;	// G=0x364e5fc5; @synthesize=mIsPreactivated
@property(readonly, assign, nonatomic) BOOL isScheduledForDestruction;	// G=0x364e602d; @synthesize=mIsScheduledForDestruction
@property(assign, nonatomic) BOOL isSelected;	// G=0x364e5fd5; S=0x364e5fe5; @synthesize=mIsSelected
@property(readonly, assign) NSMutableDictionary *motions;	// G=0x364e6065; @synthesize=mMotions
@property(assign, nonatomic) BOOL needsToSynchronizeTime;	// G=0x364e60d5; S=0x364e60e5; @synthesize=mNeedsToSynchronizeTime
@property(assign, nonatomic) BOOL needsToUpdateGeometry;	// G=0x364e60f5; S=0x364e6105; @synthesize=mNeedsToUpdateGeometry
@property(readonly, assign) NSDictionary *parameters;	// G=0x364e5f75; @synthesize=mParameters
@property(retain) id parentHelper;	// G=0x364e6079; S=0x364e608d; @synthesize=mParentHelper
@property(readonly, assign) NSDictionary *persistentState;	// G=0x364e603d; @synthesize=mPersistentState
@property(assign, nonatomic) CGSize pixelSize;	// G=0x364e5f49; S=0x364e1d7d; @synthesize=mPixelSize
@property(readonly, assign) MCPlug *plug;	// G=0x364e5ef9; @synthesize=mPlug
@property(readonly, assign) MCPlugHaven *plugAsHaven;	// G=0x364e5f35; @synthesize=mPlugAsHaven
@property(readonly, assign) MCPlugParallel *plugAsParallel;	// G=0x364e5f21; @synthesize=mPlugAsParallel
@property(readonly, assign) MCPlugSerial *plugAsSerial;	// G=0x364e5f0d; @synthesize=mPlugAsSerial
@property(readonly, assign) MRLayerRenderingStateOpaque *renderingState;	// G=0x364e1d6d; 
@property(readonly, assign) MRLayer *superlayer;	// G=0x364e5ee5; @synthesize=mSuperlayer
@property(readonly, assign, nonatomic) BOOL supportsAccumulation;	// G=0x364e601d; @synthesize=mSupportsAccumulation
@property(readonly, assign, nonatomic) BOOL supportsDynamicExpansion;	// G=0x364e3e21; 
@property(assign, nonatomic) double timeIn;	// G=0x364e5f89; S=0x364e5fa1; @synthesize=mTimeIn
@property(readonly, assign, nonatomic) double timeStamp;	// G=0x364e6005; @synthesize=mTimeStamp
@property(readonly, assign) NSString *uuid;	// G=0x364e5f61; @synthesize=mUUID
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x364e0f41
- (id)__retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364e3169
- (void)_applyState:(id)state;	// 0x364e4065
- (id)_currentState;	// 0x364e5d49
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x364e5d9d
// declared property getter: - (BOOL)_isNative3D;	// 0x364e6115
- (void)_observePlug;	// 0x364e6249
- (void)_observePlugOnPreactivate;	// 0x364e6359
- (void)_queueLayerCommand:(int)command object:(id)object;	// 0x364e6121
- (void)_rebuildAudio;	// 0x364e58c1
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364e6119
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364e611d
- (void)_sendAction:(id)action withStates:(id)states async:(BOOL)async yesterday:(BOOL)yesterday;	// 0x364e5671
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x364e64f9
- (void)_setScissorRectOnContext:(id)context saveTo:(int *)to;	// 0x364e2739
- (BOOL)_setStateValue:(id)value forKey:(id)key;	// 0x364e57f1
- (void)_unobservePlug;	// 0x364e62e9
- (void)_unobservePlugOnDepreactivate;	// 0x364e6445
- (void)_updateStateWithContext:(id)context;	// 0x364e5469
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x364e4199
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x364e4195
- (void)activate;	// 0x364e2255
// declared property getter: - (id)animationTriggers;	// 0x364e6051
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x364e20d1
- (void)cancelLoading;	// 0x364e2649
- (void)cleanup;	// 0x364e149d
// declared property getter: - (id)clock;	// 0x364e1d5d
- (CGPoint)convertGlobalPoint:(CGPoint)point;	// 0x364e3fa1
- (CGPoint)convertLocalPoint:(CGPoint)point;	// 0x364e3ed9
- (void)deactivate;	// 0x364e2365
- (void)dealloc;	// 0x364e141d
- (void)depreactivate:(BOOL)depreactivate;	// 0x364e2489
- (double)doActionTrigger:(id)trigger;	// 0x364e45b9
- (double)doAnimationTrigger:(id)trigger;	// 0x364e41d1
- (double)doGenericAction:(id)action;	// 0x364e4d09
- (double)doMotionTrigger:(id)trigger;	// 0x364e49cd
- (double)doStateOperation:(id)operation;	// 0x364e4699
// declared property getter: - (double)duration;	// 0x364e20d9
- (void)endMorphing;	// 0x364e20d5
- (void)finalize;	// 0x364e145d
// declared property getter: - (BOOL)hasAudio;	// 0x364e3ed5
- (BOOL)hasSomethingToRender;	// 0x364e1fbd
// declared property getter: - (id)idInSupercontainer;	// 0x364e60b1
// declared property getter: - (unsigned)index;	// 0x364e60c5
// declared property getter: - (BOOL)isActivated;	// 0x364e5fb5
- (BOOL)isActivatedAtTime:(double)time;	// 0x364e25f1
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x364e2691
// declared property getter: - (BOOL)isDimmed;	// 0x364e5ff5
- (BOOL)isFlatAndSquare;	// 0x364e2695
// declared property getter: - (BOOL)isInfinite;	// 0x364e268d
- (BOOL)isLoadedForTime:(double)time;	// 0x364e2631
// declared property getter: - (BOOL)isNative3D;	// 0x364e264d
// declared property getter: - (BOOL)isOpaque;	// 0x364e2689
// declared property getter: - (BOOL)isPreactivated;	// 0x364e5fc5
- (BOOL)isPreactivatedAtTime:(double)time;	// 0x364e2599
// declared property getter: - (BOOL)isScheduledForDestruction;	// 0x364e602d
// declared property getter: - (BOOL)isSelected;	// 0x364e5fd5
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x364e2641
// declared property getter: - (id)motions;	// 0x364e6065
// declared property getter: - (BOOL)needsToSynchronizeTime;	// 0x364e60d5
// declared property getter: - (BOOL)needsToUpdateGeometry;	// 0x364e60f5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x364e1749
// declared property getter: - (id)parameters;	// 0x364e5f75
// declared property getter: - (id)parentHelper;	// 0x364e6079
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364e3cb9
// declared property getter: - (id)persistentState;	// 0x364e603d
// declared property getter: - (CGSize)pixelSize;	// 0x364e5f49
// declared property getter: - (id)plug;	// 0x364e5ef9
// declared property getter: - (id)plugAsHaven;	// 0x364e5f35
// declared property getter: - (id)plugAsParallel;	// 0x364e5f21
// declared property getter: - (id)plugAsSerial;	// 0x364e5f0d
- (void)preactivate;	// 0x364e217d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364e29c1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364e33a5
// declared property getter: - (MRLayerRenderingStateOpaque *)renderingState;	// 0x364e1d6d
- (void)resumeOrPause:(BOOL)pause;	// 0x364e203d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364e3b29
- (void)scheduleForDestruction;	// 0x364e3e89
// declared property setter: - (void)setDuration:(double)duration;	// 0x364e213d
// declared property setter: - (void)setIsDimmed:(BOOL)dimmed;	// 0x364e5ead
// declared property setter: - (void)setIsSelected:(BOOL)selected;	// 0x364e5fe5
// declared property setter: - (void)setNeedsToSynchronizeTime:(BOOL)synchronizeTime;	// 0x364e60e5
// declared property setter: - (void)setNeedsToUpdateGeometry:(BOOL)updateGeometry;	// 0x364e6105
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x364e1d59
// declared property setter: - (void)setParentHelper:(id)helper;	// 0x364e608d
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x364e1d7d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x364e5fa1
- (void)stampTime;	// 0x364e3e25
- (id)sublayerForPrecomputingWithPlug:(id)plug;	// 0x364e1b55
- (id)sublayerWithPlug:(id)plug;	// 0x364e1a0d
// declared property getter: - (id)superlayer;	// 0x364e5ee5
// declared property getter: - (BOOL)supportsAccumulation;	// 0x364e601d
// declared property getter: - (BOOL)supportsDynamicExpansion;	// 0x364e3e21
- (void)synchronizeTime;	// 0x364e20ad
// declared property getter: - (double)timeIn;	// 0x364e5f89
// declared property getter: - (double)timeStamp;	// 0x364e6005
- (void)unload;	// 0x364e2645
- (void)updateGeometry;	// 0x364e1de5
// declared property getter: - (id)uuid;	// 0x364e5f61
@end


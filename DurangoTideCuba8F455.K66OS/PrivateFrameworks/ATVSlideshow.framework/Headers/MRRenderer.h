/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRContext, MCMontage, MRRendererInternal, NSDictionary, CADisplayLink, MRLayerParallelizer;
@protocol MRFeatureDelegate, MediaManagementProtocol, MRLiveSlideshowDelegate, MRRenderingDelegate, MREditingDelegate;

@interface MRRenderer : NSObject {
	MCMontage *mMontage;	// 4 = 0x4
	MRLayerParallelizer *mTopMRLayer;	// 8 = 0x8
	float mVolume;	// 12 = 0xc
	CGSize mSize;	// 16 = 0x10
	double mTimeQuantum;	// 24 = 0x18
	CADisplayLink *mDisplayLink;	// 32 = 0x20
	double mDisplayLinkTimestamp;	// 36 = 0x24
	BOOL mIsCleanedUp;	// 44 = 0x2c
	BOOL mIsPlaying;	// 45 = 0x2d
	BOOL mPushRendering;	// 46 = 0x2e
	int mMode;	// 48 = 0x30
	BOOL mDisplaysFPS;	// 52 = 0x34
	BOOL mIsEditing;	// 53 = 0x35
	NSDictionary *mParameters;	// 56 = 0x38
	MRRendererInternal *mInternal;	// 60 = 0x3c
	id<MediaManagementProtocol> mAssetManagementDelegate;	// 64 = 0x40
	id<MRRenderingDelegate> mRenderingDelegate;	// 68 = 0x44
	id<MREditingDelegate> mEditingDelegate;	// 72 = 0x48
	id<MRFeatureDelegate> mFeatureDelegate;	// 76 = 0x4c
	NSDictionary *mDescriptionsForRandomTransitionPresetIDs;	// 80 = 0x50
}
@property(retain, nonatomic) id<MediaManagementProtocol> assetManagementDelegate;	// G=0x33d831d1; S=0x33d8232d; @synthesize=mAssetManagementDelegate
@property(readonly, assign) MRContext *context;	// G=0x33d84979; 
@property(assign) BOOL displaysFPS;	// G=0x33d831b1; S=0x33d831c1; @synthesize=mDisplaysFPS
@property(assign) BOOL dontShowDRMUI;	// G=0x33d84995; S=0x33d849b1; 
@property(retain) id<MREditingDelegate> editingDelegate;	// G=0x33d83261; S=0x33d83279; @synthesize=mEditingDelegate
@property(retain) id<MRFeatureDelegate> featureDelegate;	// G=0x33d831e1; S=0x33d831f9; @synthesize=mFeatureDelegate
@property(assign) BOOL isEditing;	// G=0x33d83161; S=0x33d83171; @synthesize=mIsEditing
@property(readonly, assign) BOOL isFlipped;	// G=0x33d84ac5; 
@property(readonly, assign) BOOL isOffscreen;	// G=0x33d82315; 
@property(readonly, assign) BOOL isPlaying;	// G=0x33d83181; @synthesize=mIsPlaying
@property(retain) id<MRLiveSlideshowDelegate> liveSlideshowDelegate;	// G=0x33d84ded; S=0x33d84e09; 
@property(assign) double masterClock;	// G=0x33d849cd; S=0x33d84a1d; 
@property(assign, nonatomic) int mode;	// G=0x33d83151; S=0x33d82221; @synthesize=mMode
@property(retain, nonatomic) MCMontage *montage;	// G=0x33d83129; S=0x33d800fd; @synthesize=mMontage
@property(readonly, assign) NSDictionary *parameters;	// G=0x33d832f1; @synthesize=mParameters
@property(assign) BOOL pushRendering;	// G=0x33d83191; S=0x33d831a1; @synthesize=mPushRendering
@property(retain) id<MRRenderingDelegate> renderingDelegate;	// G=0x33d83221; S=0x33d83239; @synthesize=mRenderingDelegate
@property(assign) BOOL screenBurnTest;	// G=0x33d84e29; S=0x33d84e45; 
@property(assign, nonatomic) CGSize size;	// G=0x33d83139; S=0x33d82081; @synthesize=mSize
@property(assign) double time;	// G=0x33d81e89; S=0x33d82025; 
@property(assign) double timeQuantum;	// G=0x33d832c1; S=0x33d832d9; @synthesize=mTimeQuantum
@property(assign) float volume;	// G=0x33d832a1; S=0x33d832b1; @synthesize=mVolume
+ (float)textScaleForResolution:(CGSize)resolution;	// 0x33d843e9
- (id)init;	// 0x33d7faad
- (id)initWithParameters:(id)parameters;	// 0x33d7f61d
- (void)_displayFPS:(double)fps;	// 0x33d833b1
- (double)_doAction:(id)action;	// 0x33d823a5
- (void)_doSnapshot;	// 0x33d81dd9
- (void)_exitRenderThread;	// 0x33d80a4d
- (BOOL)_lockRendering;	// 0x33d803c1
- (int)_maxLinesForCurrentEditingTextElement;	// 0x33d84931
- (CGSize)_maxSizeForCurrentEditingTextElement;	// 0x33d848d5
- (void)_nearingEndForSerializer:(id)serializer;	// 0x33d83069
- (void)_render:(id)render;	// 0x33d80bd9
- (void)_renderForScreenBurnTestAtTime:(double)time;	// 0x33d81535
- (void)_sendNotificationMainThread:(id)thread;	// 0x33d84f59
- (void)_setTime:(double)time;	// 0x33d83301
- (void)_startRenderThread;	// 0x33d8087d
- (void)_startRenderTimer;	// 0x33d80a61
- (void)_stopRenderTimer;	// 0x33d80b09
- (void)_unlockRendering;	// 0x33d80469
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x33d84229
// declared property getter: - (id)assetManagementDelegate;	// 0x33d831d1
- (id)audioMovieForExportForDuration:(double)duration;	// 0x33d81ddd
- (BOOL)beginTextEditingOfElement:(id)element inLayer:(id)layer callDelegate:(BOOL)delegate;	// 0x33d84401
- (BOOL)beginTextEditingOfElement:(id)element inPlug:(id)plug callDelegate:(BOOL)delegate;	// 0x33d84665
- (id)chooseTransitionIDForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x33d84fbd
- (void)cleanup;	// 0x33d7fb85
// declared property getter: - (id)context;	// 0x33d84979
- (void)dealloc;	// 0x33d7fac5
- (void)deselectAllLayers;	// 0x33d84c05
- (void)deselectLayer:(id)layer;	// 0x33d84b61
// declared property getter: - (BOOL)displaysFPS;	// 0x33d831b1
- (void)doAction:(id)action;	// 0x33d82bad
// declared property getter: - (BOOL)dontShowDRMUI;	// 0x33d84995
- (int)dragTo:(CGPoint)to withModifiers:(unsigned)modifiers;	// 0x33d840b5
// declared property getter: - (id)editingDelegate;	// 0x33d83261
- (void)endTextEditing:(BOOL)editing;	// 0x33d84755
// declared property getter: - (id)featureDelegate;	// 0x33d831e1
- (void)finalize;	// 0x33d7fb25
- (BOOL)getVerticesCoordinatesForCurrentlyEditedTextElement:(CGPoint (*)[4])currentlyEditedTextElement;	// 0x33d8432d
- (int)hitAt:(CGPoint)at hitCount:(int)count withModifiers:(unsigned)modifiers;	// 0x33d83951
// declared property getter: - (BOOL)isEditing;	// 0x33d83161
// declared property getter: - (BOOL)isFlipped;	// 0x33d84ac5
- (BOOL)isHitting;	// 0x33d840fd
// declared property getter: - (BOOL)isOffscreen;	// 0x33d82315
// declared property getter: - (BOOL)isPlaying;	// 0x33d83181
- (id)layerForPlug:(id)plug;	// 0x33d82f49
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x33d84119
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3 localTime:(double *)time;	// 0x33d84895
// declared property getter: - (id)liveSlideshowDelegate;	// 0x33d84ded
- (void)lockRendering;	// 0x33d80399
// declared property getter: - (double)masterClock;	// 0x33d849cd
// declared property getter: - (int)mode;	// 0x33d83151
// declared property getter: - (id)montage;	// 0x33d83129
- (unsigned)mouseDownAt:(CGPoint)at clickCount:(int)count withModifiers:(unsigned)modifiers;	// 0x33d84871
- (void)nearingEndForSerializer:(id)serializer;	// 0x33d830dd
// declared property getter: - (id)parameters;	// 0x33d832f1
- (void)pause;	// 0x33d80495
- (id)plugForCurrentSublayerInNavigatorForPlug:(id)plug;	// 0x33d82f81
// declared property getter: - (BOOL)pushRendering;	// 0x33d83191
- (void)render;	// 0x33d848bd
// declared property getter: - (id)renderingDelegate;	// 0x33d83221
- (void)requestRendering:(BOOL)rendering;	// 0x33d806e9
- (BOOL)requestRenderingWithin:(double)within;	// 0x33d80829
- (void)resume;	// 0x33d805d5
// declared property getter: - (BOOL)screenBurnTest;	// 0x33d84e29
- (void)selectLayer:(id)layer;	// 0x33d84b01
- (id)selectedLayers;	// 0x33d84d41
- (void)sendNotification:(id)notification;	// 0x33d84f8d
// declared property setter: - (void)setAssetManagementDelegate:(id)delegate;	// 0x33d8232d
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x33d831c1
- (void)setDisplaysFPS:(BOOL)fps;	// 0x33d84a45
// declared property setter: - (void)setDontShowDRMUI:(BOOL)drmui;	// 0x33d849b1
- (void)setEAGLContext:(id)context;	// 0x33d7febd
// declared property setter: - (void)setEditingDelegate:(id)delegate;	// 0x33d83279
// declared property setter: - (void)setFeatureDelegate:(id)delegate;	// 0x33d831f9
- (void)setFreezeSizeOfImageRequests:(BOOL)imageRequests;	// 0x33d84a69
// declared property setter: - (void)setIsEditing:(BOOL)editing;	// 0x33d83171
// declared property setter: - (void)setLiveSlideshowDelegate:(id)delegate;	// 0x33d84e09
// declared property setter: - (void)setMasterClock:(double)clock;	// 0x33d84a1d
- (void)setMasterStartTime:(double)time andDuration:(double)duration loop:(BOOL)loop;	// 0x33d84d5d
- (void)setMasterStartTime:(double)time andDuration:(double)duration mode:(int)mode;	// 0x33d84d95
// declared property setter: - (void)setMode:(int)mode;	// 0x33d82221
// declared property setter: - (void)setMontage:(id)montage;	// 0x33d800fd
// declared property setter: - (void)setPushRendering:(BOOL)rendering;	// 0x33d831a1
// declared property setter: - (void)setRenderingDelegate:(id)delegate;	// 0x33d83239
// declared property setter: - (void)setScreenBurnTest:(BOOL)test;	// 0x33d84e45
// declared property setter: - (void)setSize:(CGSize)size;	// 0x33d82081
- (void)setTemporarySize:(CGSize)size;	// 0x33d8216d
// declared property setter: - (void)setTime:(double)time;	// 0x33d82025
// declared property setter: - (void)setTimeQuantum:(double)quantum;	// 0x33d832d9
// declared property setter: - (void)setVolume:(float)volume;	// 0x33d832b1
// declared property getter: - (CGSize)size;	// 0x33d83139
- (void)stepBackward;	// 0x33d81e3d
- (void)stepForward;	// 0x33d81df1
// declared property getter: - (double)time;	// 0x33d81e89
// declared property getter: - (double)timeQuantum;	// 0x33d832c1
- (int)trackingAt:(CGPoint)at;	// 0x33d83b85
- (void)transitionToNextPlugInContainerOfPlug:(id)plug;	// 0x33d82cb9
- (void)transitionToPreviousPlugInContainerOfPlug:(id)plug;	// 0x33d82e01
- (int)unhitAt:(CGPoint)at withModifiers:(unsigned)modifiers;	// 0x33d840e1
- (void)unlockRendering;	// 0x33d803ad
- (void)updateSelectionLayer;	// 0x33d84afd
// declared property getter: - (float)volume;	// 0x33d832a1
- (void)warmupAudio:(BOOL)audio;	// 0x33d80879
@end

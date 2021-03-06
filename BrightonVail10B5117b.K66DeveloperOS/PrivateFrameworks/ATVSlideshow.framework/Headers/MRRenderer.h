/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRRendererInternal, CADisplayLink, MRContext, NSDictionary, MRLayerParallelizer, MCMontage;
@protocol MRFeatureDelegate, MRLiveSlideshowDelegate, MZMediaManagement, MRRenderingDelegate, MRAsynchronousOperationsDelegate, MREditingDelegate;

@interface MRRenderer : NSObject {
	MRLayerParallelizer *mTopMRLayer;	// 4 = 0x4
	CGSize mSize;	// 8 = 0x8
	MRRendererInternal *mInternal;	// 16 = 0x10
	id<MREditingDelegate> mEditingDelegate;	// 20 = 0x14
	id<MRFeatureDelegate> mFeatureDelegate;	// 24 = 0x18
	NSDictionary *mDescriptionsForRandomTransitionPresetIDs;	// 44 = 0x2c
	CADisplayLink *mDisplayLink;	// 32 = 0x20
	double mDisplayLinkTimestamp;	// 36 = 0x24
	NSDictionary *mDescriptionsForRandomTransitionPresetIDs;	// 44 = 0x2c
	MCMontage *mMontage;	// 48 = 0x30
	int mMode;	// 52 = 0x34
	int mOrientation;	// 56 = 0x38
	BOOL mIsEditing;	// 60 = 0x3c
	BOOL mIsPlaying;	// 61 = 0x3d
	BOOL mPushRendering;	// 62 = 0x3e
	BOOL mRequestRenderingOnChanges;	// 63 = 0x3f
	BOOL mDisplaysFPS;	// 64 = 0x40
	BOOL mDisplaysPlayingIDs;	// 65 = 0x41
	BOOL mDisplaysIsPreloadingImages;	// 66 = 0x42
	id<MZMediaManagement> mAssetManagementDelegate;	// 68 = 0x44
	id<MRRenderingDelegate> mRenderingDelegate;	// 72 = 0x48
	float mVolume;	// 76 = 0x4c
	double mTimeQuantum;	// 80 = 0x50
	NSDictionary *mParameters;	// 88 = 0x58
	BOOL mIsCleanedUp;	// 92 = 0x5c
	BOOL _asynchronousOperationsAreSuspended;	// 93 = 0x5d
}
@property(retain, nonatomic) id<MZMediaManagement> assetManagementDelegate;	// G=0x333d1ee1; S=0x333d0eb1; @synthesize=mAssetManagementDelegate
@property(assign, setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;	// G=0x333d1fc1; S=0x333d1fd9; @synthesize=_asynchronousOperationsAreSuspended
@property(retain) id<MRAsynchronousOperationsDelegate> asynchronousOperationsDelegate;	// G=0x333d4a95; S=0x333d4ab5; 
@property(readonly, assign) MRContext *context;	// G=0x333d3659; 
@property(assign, nonatomic) CGPoint contextOffset;	// G=0x333d0b21; S=0x333d0b49; 
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x333d0cc5; S=0x333d0cf9; 
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x333d1e91; S=0x333d0f21; @synthesize=mDisplaysFPS
@property(assign, nonatomic) BOOL displaysIsPreloadingImages;	// G=0x333d1ec1; S=0x333d1ed1; @synthesize=mDisplaysIsPreloadingImages
@property(assign, nonatomic) BOOL displaysPlayingIDs;	// G=0x333d1ea1; S=0x333d1eb1; @synthesize=mDisplaysPlayingIDs
@property(assign) BOOL dontShowDRMUI;	// G=0x333d3679; S=0x333d3699; 
@property(retain) id<MREditingDelegate> editingDelegate;	// G=0x333d1f39; S=0x333d1f4d; @synthesize=mEditingDelegate
@property(retain) id<MRFeatureDelegate> featureDelegate;	// G=0x333d1ef1; S=0x333d1f05; @synthesize=mFeatureDelegate
@property(assign) BOOL hideTextWhileEditing;	// G=0x333d4c19; S=0x333d4c39; 
@property(readonly, assign) BOOL isCleanedUp;	// G=0x333d1fa9; @synthesize=mIsCleanedUp
@property(assign, nonatomic) BOOL isEditing;	// G=0x333d1e31; S=0x333d1e41; @synthesize=mIsEditing
@property(readonly, assign) BOOL isFlipped;	// G=0x333d375d; 
@property(readonly, assign) BOOL isOffscreen;	// G=0x333d0e99; 
@property(readonly, assign) BOOL isPlaying;	// G=0x333cc961; @synthesize=mIsPlaying
@property(retain) id<MRLiveSlideshowDelegate> liveSlideshowDelegate;	// G=0x333d4a51; S=0x333d4a71; 
@property(assign) double masterClock;	// G=0x333d36b9; S=0x333d3709; 
@property(assign, nonatomic) int mode;	// G=0x333d1e21; S=0x333d0d25; @synthesize=mMode
@property(retain, nonatomic) MCMontage *montage;	// G=0x333d1df9; S=0x333cc619; @synthesize=mMontage
@property(assign, nonatomic) int orientation;	// G=0x333d0c1d; S=0x333d0c2d; @synthesize=mOrientation
@property(readonly, assign) NSDictionary *parameters;	// G=0x333d1f95; @synthesize=mParameters
@property(assign, nonatomic) BOOL pushRendering;	// G=0x333d1e51; S=0x333d1e61; @synthesize=mPushRendering
@property(retain) id<MRRenderingDelegate> renderingDelegate;	// G=0x333d1f15; S=0x333d1f29; @synthesize=mRenderingDelegate
@property(assign, nonatomic) BOOL requestRenderingOnChanges;	// G=0x333d1e71; S=0x333d1e81; @synthesize=mRequestRenderingOnChanges
@property(assign) BOOL screenBurnTest;	// G=0x333d4ad9; S=0x333d4af9; 
@property(assign, nonatomic) CGSize size;	// G=0x333d1e09; S=0x333d0619; @synthesize=mSize
@property(assign) BOOL slaveFrameMode;	// G=0x333cc921; S=0x333cc941; 
@property(assign, nonatomic) double time;	// G=0x333d0219; S=0x333d03e1; 
@property(assign, nonatomic) double timeQuantum;	// G=0x333d1f7d; S=0x333d0559; @synthesize=mTimeQuantum
@property(assign) BOOL usesNewImageManager;	// G=0x333d0e45; S=0x333d0e65; 
@property(assign, nonatomic) float volume;	// G=0x333d1f5d; S=0x333d1f6d; @synthesize=mVolume
+ (void)enableDiskImageCache;	// 0x333cb8ed
+ (BOOL)isDiskImageCacheEnabled;	// 0x333cb8f1
+ (float)textScaleForResolution:(CGSize)resolution;	// 0x334b55b5
- (id)init;	// 0x333cbda1
- (id)initWithParameters:(id)parameters;	// 0x333cb8f5
- (void)_cleanupGestureRecognizers;	// 0x334b4651
- (id)_computeMatrixChainForLayer:(id)layer;	// 0x334b499d
- (void)_dimLayersExceptForPathTo:(id)to;	// 0x333d39c1
- (void)_displayFPS:(double)fps actuallyDisplay:(BOOL)display;	// 0x333d2289
- (void)_displayIsPreloadingImages;	// 0x333d2c39
- (void)_displayPlayingIDs;	// 0x333d2839
- (double)_doAction:(id)action;	// 0x334af029
- (void)_doActions;	// 0x334afae9
- (void)_doLayerTrackingAtLocation:(CGPoint)location;	// 0x334b4bcd
- (void)_doSnapshot;	// 0x333cfa55
- (void)_effectRequestedSlides:(id)slides;	// 0x333d1711
- (int)_maxLinesForCurrentEditingTextElement;	// 0x334b5711
- (CGSize)_maxSizeForCurrentEditingTextElement;	// 0x334b56a9
- (void)_nearingEndForSerializer:(id)serializer;	// 0x333d1601
- (void)_pause;	// 0x333ccb49
- (void)_renderForScreenBurnTestAtTime:(double)time;	// 0x333cf2f9
- (void)_renderOnDisplayLink:(id)link;	// 0x333cd5e1
- (void)_renderThreadMain;	// 0x333cd361
- (void)_renderWithPassParameters:(id)passParameters;	// 0x333cd8c1
- (void)_resume;	// 0x333ccd39
- (void)_sendNotificationMainThread:(id)thread;	// 0x333d4c6d
- (void)_setTime:(double)time isResyncing:(BOOL)resyncing;	// 0x333d1ff1
- (void)_startRenderTimer;	// 0x333cd641
- (void)_stopRenderTimer;	// 0x333cd779
- (void)_syncIsPlayingToOuter;	// 0x333ccadd
- (void)_syncTimeToOuter;	// 0x333d0489
- (double)_unalteredTime;	// 0x333d20d9
- (void)_undimAllLayersInLayer:(id)layer;	// 0x333d3e91
- (id)actionByEvaluatingConditionalAction:(id)action withStates:(id)states;	// 0x334aeee9
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x334b4519
- (void)addAudioPlayer:(id)player;	// 0x333d3399
- (void)addIDToDisplay:(id)display :(id)arg2;	// 0x333d19ad
- (void)addNavigatorToBackHistory:(id)backHistory;	// 0x333cfec1
- (void)addNavigatorToForthHistory:(id)forthHistory;	// 0x333cff45
// declared property getter: - (id)assetManagementDelegate;	// 0x333d1ee1
// declared property getter: - (BOOL)asynchronousOperationsAreSuspended;	// 0x333d1fc1
// declared property getter: - (id)asynchronousOperationsDelegate;	// 0x333d4a95
- (void)beginMorphingToAspectRatio:(float)aspectRatio andOrientation:(int)orientation withDuration:(double)duration;	// 0x333d1b35
- (BOOL)beginTextEditingOfElement:(id)element inLayer:(id)layer callDelegate:(BOOL)delegate;	// 0x334b5769
- (BOOL)beginTextEditingOfElement:(id)element inPlug:(id)plug callDelegate:(BOOL)delegate;	// 0x334b59a1
- (BOOL)canGoBack;	// 0x333cfe51
- (BOOL)canGoForth;	// 0x333cfe89
- (id)chooseTransitionIDForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x333d4cd9
- (void)cleanup;	// 0x333cbee5
// declared property getter: - (id)context;	// 0x333d3659
// declared property getter: - (CGPoint)contextOffset;	// 0x333d0b21
- (CGImageRef)copyCGSnapshotAtTime:(double)time andSize:(CGSize)size;	// 0x333d4881
- (CGImageRef)currentFrameAsCGImage;	// 0x333d48a9
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x333d0cc5
- (id)currentState;	// 0x333d12c9
- (void)dealloc;	// 0x333cbdb5
- (void)deselectAllLayers;	// 0x333d3889
- (void)deselectLayer:(id)layer;	// 0x333d3801
- (void)dimLayersExceptForPathTo:(id)to;	// 0x333d4239
// declared property getter: - (BOOL)displaysFPS;	// 0x333d1e91
// declared property getter: - (BOOL)displaysIsPreloadingImages;	// 0x333d1ec1
// declared property getter: - (BOOL)displaysPlayingIDs;	// 0x333d1ea1
- (void)doAction:(id)action;	// 0x334ae9e9
// declared property getter: - (BOOL)dontShowDRMUI;	// 0x333d3679
- (void)dumpActiveHierarchy;	// 0x333d156d
// declared property getter: - (id)editingDelegate;	// 0x333d1f39
- (void)effect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;	// 0x333d1825
- (void)endMorphing;	// 0x333d1d09
- (void)endTextEditing:(BOOL)editing;	// 0x334b5aa1
// declared property getter: - (id)featureDelegate;	// 0x333d1ef1
- (void)finalize;	// 0x333cbe81
- (BOOL)getVerticesCoordinatesForCurrentlyEditedTextElement:(CGPoint (*)[4])currentlyEditedTextElement;	// 0x334b55dd
- (void)goBack;	// 0x333cfc21
- (void)goForth;	// 0x333cfd39
- (void)gotoState:(id)state;	// 0x333d13c1
// declared property getter: - (BOOL)hideTextWhileEditing;	// 0x333d4c19
- (void)imagePreloadingBegan;	// 0x333d1961
- (void)imagePreloadingEnded;	// 0x333d1985
// declared property getter: - (BOOL)isCleanedUp;	// 0x333d1fa9
// declared property getter: - (BOOL)isEditing;	// 0x333d1e31
// declared property getter: - (BOOL)isFlipped;	// 0x333d375d
// declared property getter: - (BOOL)isOffscreen;	// 0x333d0e99
// declared property getter: - (BOOL)isPlaying;	// 0x333cc961
- (id)layerAtPath:(id)path fromLayer:(id)layer;	// 0x333d4321
- (id)layerForPlug:(id)plug;	// 0x333d114d
- (id)layerForPlugObjectID:(id)plugObjectID;	// 0x333d118d
- (id)layerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x334b43d9
// declared property getter: - (id)liveSlideshowDelegate;	// 0x333d4a51
- (void)lockRendering;	// 0x333cc8c9
// declared property getter: - (double)masterClock;	// 0x333d36b9
// declared property getter: - (int)mode;	// 0x333d1e21
// declared property getter: - (id)montage;	// 0x333d1df9
- (void)moveNavigatorFromBackToForthHistory:(id)forthHistory;	// 0x333d0021
- (void)moveNavigatorFromForthToBackHistory:(id)backHistory;	// 0x333d011d
- (void)nearingEndForSerializer:(id)serializer;	// 0x333d16ad
// declared property getter: - (int)orientation;	// 0x333d0c1d
// declared property getter: - (id)parameters;	// 0x333d1f95
- (void)pause;	// 0x333cc9a5
- (void)pauseWhenStill;	// 0x333ccf21
- (id)plugForCurrentSublayerInNavigatorForPlug:(id)plug;	// 0x333d11ad
- (void)processAudioPlayers;	// 0x333d3031
// declared property getter: - (BOOL)pushRendering;	// 0x333d1e51
- (void)removeAudioPlayer:(id)player;	// 0x333d3579
- (void)removeNavigatorFromBackHistory:(id)backHistory;	// 0x333cffc9
- (void)removeNavigatorFromForthHistory:(id)forthHistory;	// 0x333cfff5
// declared property getter: - (id)renderingDelegate;	// 0x333d1f15
- (void)requestRendering:(BOOL)rendering;	// 0x333ccf41
// declared property getter: - (BOOL)requestRenderingOnChanges;	// 0x333d1e71
- (BOOL)requestRenderingWithin:(double)within;	// 0x333cd0dd
- (void)resume;	// 0x333cca3d
// declared property getter: - (BOOL)screenBurnTest;	// 0x333d4ad9
- (void)selectLayer:(id)layer;	// 0x333d37a1
- (id)selectedLayers;	// 0x333d39a1
- (void)sendMCAction:(id)action fromSender:(id)sender;	// 0x334aeb01
- (void)sendMCAction:(id)action fromSender:(id)sender toTarget:(id)target;	// 0x334aec85
- (void)sendNotification:(id)notification;	// 0x333d4ca9
- (BOOL)sendStandardAction:(id)action;	// 0x334aee09
// declared property setter: - (void)setAssetManagementDelegate:(id)delegate;	// 0x333d0eb1
// declared property setter: - (void)setAsynchronousOperationsDelegate:(id)delegate;	// 0x333d4ab5
// declared property setter: - (void)setContextOffset:(CGPoint)offset;	// 0x333d0b49
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x333d0cf9
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x333d0f21
// declared property setter: - (void)setDisplaysIsPreloadingImages:(BOOL)images;	// 0x333d1ed1
// declared property setter: - (void)setDisplaysPlayingIDs:(BOOL)ids;	// 0x333d1eb1
// declared property setter: - (void)setDontShowDRMUI:(BOOL)drmui;	// 0x333d3699
- (void)setEAGLContext:(id)context;	// 0x333cc37d
// declared property setter: - (void)setEditingDelegate:(id)delegate;	// 0x333d1f4d
// declared property setter: - (void)setFeatureDelegate:(id)delegate;	// 0x333d1f05
- (void)setFreezeSizeOfImageRequests:(BOOL)imageRequests;	// 0x333d3731
// declared property setter: - (void)setHideTextWhileEditing:(BOOL)editing;	// 0x333d4c39
// declared property setter: - (void)setIsEditing:(BOOL)editing;	// 0x333d1e41
// declared property setter: - (void)setLiveSlideshowDelegate:(id)delegate;	// 0x333d4a71
// declared property setter: - (void)setMasterClock:(double)clock;	// 0x333d3709
- (void)setMasterStartTime:(double)time andDuration:(double)duration loop:(BOOL)loop;	// 0x333d49b9
- (void)setMasterStartTime:(double)time andDuration:(double)duration mode:(int)mode;	// 0x333d49f1
// declared property setter: - (void)setMode:(int)mode;	// 0x333d0d25
// declared property setter: - (void)setMontage:(id)montage;	// 0x333cc619
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x333d0c2d
// declared property setter: - (void)setPushRendering:(BOOL)rendering;	// 0x333d1e61
// declared property setter: - (void)setRenderingDelegate:(id)delegate;	// 0x333d1f29
// declared property setter: - (void)setRequestRenderingOnChanges:(BOOL)changes;	// 0x333d1e81
// declared property setter: - (void)setScreenBurnTest:(BOOL)test;	// 0x333d4af9
// declared property setter: - (void)setSize:(CGSize)size;	// 0x333d0619
// declared property setter: - (void)setSlaveFrameMode:(BOOL)mode;	// 0x333cc941
- (void)setTemporarySize:(CGSize)size;	// 0x333d0a45
// declared property setter: - (void)setTime:(double)time;	// 0x333d03e1
// declared property setter: - (void)setTimeQuantum:(double)quantum;	// 0x333d0559
- (void)setUseCGLFlushDrawableWorkaround:(BOOL)workaround;	// 0x333d4c59
// declared property setter: - (void)setUsesNewImageManager:(BOOL)manager;	// 0x333d0e65
// declared property setter: - (void)setVolume:(float)volume;	// 0x333d1f6d
// declared property getter: - (CGSize)size;	// 0x333d1e09
// declared property getter: - (BOOL)slaveFrameMode;	// 0x333cc921
- (CGImageRef)snapshotAsCGImageForTime:(double)time andSize:(CGSize)size;	// 0x333d445d
- (id)snapshotOfStates:(id)states atSize:(CGSize)size;	// 0x333d14b5
- (void)stall;	// 0x333d1941
- (void)stepBackward;	// 0x333cfbd5
- (void)stepForward;	// 0x333cfb89
// declared property setter: - (void)suspendAsynchronousOperations:(BOOL)operations;	// 0x333d1fd9
// declared property getter: - (double)time;	// 0x333d0219
// declared property getter: - (double)timeQuantum;	// 0x333d1f7d
- (void)touchesBegan:(id)began;	// 0x334b2fb1
- (void)touchesCancelled:(id)cancelled;	// 0x334b4215
- (BOOL)touchesEnded:(id)ended;	// 0x334b3fcd
- (void)touchesMoved:(id)moved;	// 0x334b3a19
- (void)transitionToNextPlugInContainerOfPlug:(id)plug;	// 0x333d0f55
- (void)transitionToPreviousPlugInContainerOfPlug:(id)plug;	// 0x333d1051
- (void)undimAllLayers;	// 0x333d42a9
- (void)unlockRendering;	// 0x333cc8f5
- (void)updateSelectionLayer;	// 0x333d379d
- (void)updateTimeWithDisplayLinkTimestamp:(double)displayLinkTimestamp;	// 0x333cd479
// declared property getter: - (BOOL)usesNewImageManager;	// 0x333d0e45
// declared property getter: - (float)volume;	// 0x333d1f5d
- (void)warmupAudio:(BOOL)audio;	// 0x333cd181
- (void)warmupVideo:(BOOL)video;	// 0x333cd185
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MRMarimbaPlayback.h"
#import "MRMarimbaHitBlobSupport.h"
#import "MRMarimbaBasicPlayback.h"

@class MPDocument, MRRenderer, NSDictionary, MPFaceDetector, EAGLContext;

@interface MRMarimbaLayer : XXUnknownSuperclass <MRMarimbaPlayback, MRMarimbaHitBlobSupport, MRMarimbaBasicPlayback> {
@private
	MRRenderer *_renderer;	// 52 = 0x34
	MPDocument *_document;	// 56 = 0x38
	BOOL _masterClockIsSet;	// 60 = 0x3c
	BOOL _bailTimeWatcher;	// 61 = 0x3d
	BOOL _stopWithVideo;	// 62 = 0x3e
	BOOL _wasSuspended;	// 63 = 0x3f
	MPFaceDetector *_faceDetector;	// 64 = 0x40
	float _morphingToAspectRatio;	// 68 = 0x44
	CGSize _frameBufferSize;	// 72 = 0x48
	NSDictionary *_nextMorphInfo;	// 80 = 0x50
	EAGLContext *_context;	// 84 = 0x54
	unsigned _viewRenderbuffer;	// 88 = 0x58
	unsigned _viewFramebuffer;	// 92 = 0x5c
	unsigned _depthBuffer;	// 96 = 0x60
	BOOL _isReadonly;	// 100 = 0x64
	BOOL _slidesAreReadonly;	// 101 = 0x65
}
@property(assign) BOOL bailTimeWatcher;	// G=0x365005d5; S=0x365005e5; converted property
@property(assign, nonatomic) BOOL displaysFPS;	// G=0x364fec81; S=0x364feca5; 
@property(retain, nonatomic) MPDocument *document;	// G=0x364fe1d9; S=0x364fe405; 
@property(assign, nonatomic) double framesPerSecond;	// G=0x364ff021; S=0x364ff055; @dynamic
@property(readonly, assign, nonatomic) BOOL isPlaying;	// G=0x364fea25; 
@property(assign, nonatomic) BOOL isReadonly;	// G=0x36500595; S=0x365005a5; @synthesize=_isReadonly
@property(readonly, assign, nonatomic) MRRenderer *renderer;	// G=0x364ff011; 
@property(readonly, assign) CGSize size;	// G=0x364fe3cd; 
@property(assign, nonatomic) BOOL slidesAreReadonly;	// G=0x365005b5; S=0x365005c5; @synthesize=_slidesAreReadonly
@property(assign, nonatomic) BOOL stopWithVideo;	// G=0x364febd1; S=0x364febe1; 
@property(assign, nonatomic) double time;	// G=0x364fecc5; S=0x364fece5; 
@property(readonly, assign, nonatomic) double timeRemaining;	// G=0x364fed29; 
@property(assign, nonatomic) float volume;	// G=0x364fed89; S=0x364feda9; 
+ (id)layerWithDocument:(id)document;	// 0x364fdb61
+ (id)layerWithDocument:(id)document size:(CGSize)size;	// 0x364fdb01
+ (void)releaseResources;	// 0x364fdb9d
- (id)init;	// 0x364fddfd
- (id)_currentEffectContainer;	// 0x364f9d09
- (id)_currentEffectLayer;	// 0x364f9c35
- (id)_effectContainerForTime:(double)time;	// 0x364fa6e5
- (id)_firstEffectContainer;	// 0x364fa635
- (int)_mainLayerIndex;	// 0x364fa82d
- (void)_reauthorForAspectRatioChange;	// 0x364ff6bd
- (void)aspectRatioChangedTo:(id)to;	// 0x36500439
// converted property getter: - (BOOL)bailTimeWatcher;	// 0x365005d5
- (void)beginGesture:(id)gesture;	// 0x364fd03d
- (BOOL)beginLiveUpdateForHitBlob:(id)hitBlob;	// 0x364fc7a9
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x364ff329
- (id)blobHitAtPoint:(CGPoint)point fromObjectsForObjectIDs:(id)objectIDs localPoint:(CGPoint *)point3;	// 0x364fc2d1
- (void)callbackThread:(id)thread;	// 0x364fa8e1
- (void)cancelGesture:(id)gesture;	// 0x364fda39
- (void)cleanup;	// 0x364fe129
- (CGPoint)convertPoint:(CGPoint)point toHitBlob:(id)hitBlob;	// 0x364fc6d9
- (id)currentSlide;	// 0x364facb9
- (id)currentSlides;	// 0x364faab1
- (void)dealloc;	// 0x364fdf2d
- (void)destroyFramebuffer;	// 0x365005f5
- (void)didAddEffects:(id)effects;	// 0x365003c1
- (void)didApplyStyle:(id)style;	// 0x365001e1
- (void)didLiveChanged:(id)changed;	// 0x364fe9b9
- (id)displayedEffectContainers;	// 0x364f92a1
// declared property getter: - (BOOL)displaysFPS;	// 0x364fec81
- (void)doGesture:(id)gesture;	// 0x364fd451
// declared property getter: - (id)document;	// 0x364fe1d9
- (BOOL)effect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;	// 0x364ffd79
- (BOOL)effectRequestedSlidesAfterDelay:(id)delay;	// 0x36500091
- (void)endGesture:(id)gesture;	// 0x364fd9e5
- (BOOL)endLiveUpdateForHitBlob:(id)hitBlob;	// 0x364fcc01
- (void)endMorphing;	// 0x364ff4e1
// declared property getter: - (double)framesPerSecond;	// 0x364ff021
- (BOOL)getOnScreenVertices:(CGPoint [4])vertices forHitBlob:(id)hitBlob;	// 0x364fc4e9
- (void)goBack;	// 0x364fedfd
- (void)goForth;	// 0x364fee1d
- (void)gotoBeginning;	// 0x364feef1
- (void)gotoEnd;	// 0x364fee3d
- (void)gotoNextSlide;	// 0x364fb0f9
- (void)gotoPreviousSlide;	// 0x364fb809
- (void)gotoSlide:(id)slide;	// 0x364fbf19
- (BOOL)isInFade;	// 0x364f9f09
- (BOOL)isInTransition;	// 0x364fa0e1
// declared property getter: - (BOOL)isPlaying;	// 0x364fea25
// declared property getter: - (BOOL)isReadonly;	// 0x36500595
- (void)lockRendering;	// 0x364ff8a9
- (void)morphToAspectRatio:(float)aspectRatio andOrientation:(int)orientation withDuration:(double)duration;	// 0x364ff0d1
- (void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;	// 0x364f9309
- (void)moveToNextEffectContainer;	// 0x364f9531
- (void)moveToPreviousEffectContainer;	// 0x364f9615
- (void)moveToSubtitleForSlide:(id)slide;	// 0x364f9981
- (void)moveToTitleSlide;	// 0x364f96e5
- (BOOL)nearingEndForSerializer:(id)serializer;	// 0x364ff8e9
- (BOOL)nearingEndForSerializerAfterDelay:(id)serializerAfterDelay;	// 0x364ffc01
- (void)nextFrame;	// 0x364fef41
- (void)pause;	// 0x364feb31
- (void)pauseWhenStill;	// 0x364febb1
- (void)play;	// 0x364fea49
- (void)prevFrame;	// 0x364fefa9
- (double)relativeTime;	// 0x364f90c1
- (double)relativeTimeForBackgroundAudio;	// 0x364f9151
- (double)relativeTimeForLayer:(id)layer;	// 0x364f91f9
- (void)removeEffectContainersBeforeTime:(double)time;	// 0x364faec9
- (void)removeFadeIn;	// 0x364fc171
// declared property getter: - (id)renderer;	// 0x364ff011
- (void)requestRendering:(BOOL)rendering;	// 0x364ff085
- (void)setAsynchronous:(BOOL)asynchronous;	// 0x364fe1e9
// converted property setter: - (void)setBailTimeWatcher:(BOOL)watcher;	// 0x365005e5
- (void)setBounds:(CGRect)bounds;	// 0x364fe1ed
// declared property setter: - (void)setDisplaysFPS:(BOOL)fps;	// 0x364feca5
// declared property setter: - (void)setDocument:(id)document;	// 0x364fe405
// declared property setter: - (void)setFramesPerSecond:(double)second;	// 0x364ff055
// declared property setter: - (void)setIsReadonly:(BOOL)readonly;	// 0x365005a5
// declared property setter: - (void)setSlidesAreReadonly:(BOOL)readonly;	// 0x365005c5
// declared property setter: - (void)setStopWithVideo:(BOOL)video;	// 0x364febe1
- (void)setSuspended:(BOOL)suspended;	// 0x364fedc9
// declared property setter: - (void)setTime:(double)time;	// 0x364fece5
// declared property setter: - (void)setVolume:(float)volume;	// 0x364feda9
// declared property getter: - (CGSize)size;	// 0x364fe3cd
// declared property getter: - (BOOL)slidesAreReadonly;	// 0x365005b5
- (CGImageRef)snapshotAsCGImage;	// 0x365004f1
- (CGImageRef)snapshotAsCGImageForTime:(double)time withSize:(CGSize)size;	// 0x3650043d
// declared property getter: - (BOOL)stopWithVideo;	// 0x364febd1
// declared property getter: - (double)time;	// 0x364fecc5
// declared property getter: - (double)timeRemaining;	// 0x364fed29
- (void)togglePlayback;	// 0x364fe9d9
- (void)touchesBegan:(id)began;	// 0x36500511
- (void)touchesCancelled:(id)cancelled;	// 0x36500575
- (BOOL)touchesEnded:(id)ended;	// 0x36500551
- (void)touchesMoved:(id)moved;	// 0x36500531
- (void)unlockRendering;	// 0x364ff8c9
- (BOOL)updateFramebuffer;	// 0x365006f9
// declared property getter: - (float)volume;	// 0x364fed89
- (void)warmupRenderer;	// 0x364ff0a5
- (void)watcherThread:(id)thread;	// 0x364fa9cd
- (void)whenTransitionIsFinishedSendAction:(SEL)action toTarget:(id)target;	// 0x364fa2fd
@end


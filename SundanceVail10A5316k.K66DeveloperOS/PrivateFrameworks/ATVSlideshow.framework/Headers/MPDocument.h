/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "MPLayerableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class MPDocumentInternal, MCMontage, NSArray, NSMutableDictionary;
@protocol MPAssetKeyDelegate;

@interface MPDocument : NSObject <MPLayerableSupportInternal, NSCoding> {
@private
	MCMontage *_montage;	// 4 = 0x4
	NSArray *_userProvidedStacks;	// 8 = 0x8
	NSMutableDictionary *_documentAttributes;	// 12 = 0xc
	NSMutableDictionary *_fileProperties;	// 16 = 0x10
	NSMutableDictionary *_layerGroups;	// 20 = 0x14
	BOOL _preserveMedia;	// 24 = 0x18
	id<MPAssetKeyDelegate> _assetKeyDelegate;	// 28 = 0x1c
	MPDocumentInternal *_internal;	// 32 = 0x20
}
@property(assign) id assetKeyDelegate;	// G=0x364226b1; S=0x364226c5; converted property
@property(retain) id audioPaths;	// G=0x36423415; S=0x3642344d; converted property
@property(retain) id audioPlaylist;	// G=0x36423b91; S=0x36423bc9; converted property
@property(assign) CGColorRef backgroundCGColor;	// G=0x36423aad; S=0x36423ae5; converted property
@property(readonly, retain) NSMutableDictionary *documentAttributes;	// G=0x36422fbd; converted property
@property(retain) id documentLayerGroup;	// G=0x36425485; S=0x36424d95; converted property
@property(retain) id fileURL;	// G=0x36422829; S=0x36422849; converted property
@property(retain) id lastRandomTransition;	// G=0x364270a5; S=0x364270c5; converted property
@property(assign) int loopingMode;	// G=0x364225c5; S=0x364225fd; converted property
@property(retain) id mediaProperties;	// G=0x36422115; S=0x36422125; converted property
@property(retain) MCMontage *montage;	// G=0x36423c3d; S=0x364256f1; converted property
@property(assign) double numberOfLoops;	// G=0x36422639; S=0x36422671; converted property
@property(assign) BOOL preserveMedia;	// G=0x364220f5; S=0x36422105; converted property
@property(assign) BOOL savesPathsAsAbsolute;	// G=0x364227a5; S=0x364227c9; converted property
@property(retain) id stacks;	// G=0x36423319; S=0x36423329; converted property
@property(retain) id styleID;	// G=0x36427e19; S=0x36427e51; converted property
@property(retain) id title;	// G=0x36427de1; S=0x36427dfd; converted property
@property(retain) id undoManager;	// G=0x364227e9; S=0x36422809; converted property
@property(retain) id videoPaths;	// G=0x36423369; S=0x364233d9; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x36420d79
+ (void)initialize;	// 0x36420cad
+ (BOOL)isNativeType:(id)type;	// 0x36420df9
+ (id)readableTypes;	// 0x36420dd1
+ (id)unarchiveDocumentFromData:(id)data error:(id *)error;	// 0x36420c91
+ (id)writableTypes;	// 0x36420da9
- (id)init;	// 0x36420e21
- (id)initWithCoder:(id)coder;	// 0x364214ad
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x364286a5
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size orientation:(char *)orientation thumbnailIfPossible:(BOOL)possible now:(BOOL)now;	// 0x364286e1
- (IOSurfaceRef)IOSurfaceForAssetAtPath:(id)path andSize:(CGSize)size orientation:(char *)orientation;	// 0x364288e1
- (void)_setMediaProperties:(id)properties;	// 0x36425731
- (id)absolutePathForAssetAtPath:(id)path;	// 0x36427e8d
- (id)absolutePathForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x364281a9
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x36428621
- (id)absoluteVideoPaths;	// 0x36425741
- (id)actionableObjectForID:(id)anId;	// 0x36425321
- (void)addAudioPath:(id)path;	// 0x364231a1
- (void)addAudioPaths:(id)paths;	// 0x364231dd
- (void)addLayer:(id)layer;	// 0x36423561
- (void)addLayers:(id)layers;	// 0x364235f5
- (void)addStacks:(id)stacks;	// 0x36423219
- (void)addVideoPath:(id)path;	// 0x36423129
- (void)addVideoPaths:(id)paths;	// 0x36423165
- (id)allEffectContainers;	// 0x364240a5
- (id)allEffects;	// 0x364240dd
- (id)allElements;	// 0x36422b29
- (id)allSlides;	// 0x364229b9
- (id)allSlides:(BOOL)slides;	// 0x364229cd
- (id)allSongs;	// 0x36424115
- (id)altitudeForPath:(id)path;	// 0x364267d1
- (int)antialiasLevel;	// 0x364242a1
- (unsigned)applyStyle:(id)style;	// 0x36421efd
- (id)areaForPath:(id)path;	// 0x36426711
- (float)aspectRatio;	// 0x3642766d
- (double)aspectRatioDidChange:(float)aspectRatio atTime:(double)time;	// 0x364276cd
// converted property getter: - (id)assetKeyDelegate;	// 0x364226b1
- (id)attributeForAssetAtPath:(id)path forKey:(id)key;	// 0x36428b3d
// converted property getter: - (id)audioPaths;	// 0x36423415
// converted property getter: - (id)audioPlaylist;	// 0x36423b91
- (id)authoringOptionForKey:(id)key;	// 0x36422549
// converted property getter: - (CGColorRef)backgroundCGColor;	// 0x36423aad
- (void)beginBatchModify;	// 0x36422869
- (id)cachedAbsolutePathFromPath:(id)path;	// 0x36427781
- (id)cachedAbsoluteStillPathFromPath:(id)path;	// 0x364278f1
- (id)captionForPath:(id)path;	// 0x36426481
- (id)cityForPath:(id)path;	// 0x36426691
- (void)cleanup;	// 0x36422fcd
- (void)configureActions;	// 0x36427ad5
- (int)countOfLayers;	// 0x36427c75
- (id)countryForPath:(id)path;	// 0x364265d1
- (id)creationDateForPath:(id)path;	// 0x36426371
- (id)currentStyle;	// 0x36421ec5
- (id)dataForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x36428869
- (void)dealloc;	// 0x36421db9
- (id)definedPlaceNameForPath:(id)path;	// 0x36426791
- (id)description;	// 0x36421cb1
- (id)descriptionForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x36427095
- (BOOL)detectFacesInBackground;	// 0x36427711
- (id)displayName;	// 0x36421eb9
- (id)documentAttributeForKey:(id)key;	// 0x36421f61
// converted property getter: - (id)documentAttributes;	// 0x36422fbd
// converted property getter: - (id)documentLayerGroup;	// 0x36425485
- (void)dump;	// 0x36423c4d
- (double)duration;	// 0x36423b21
- (double)durationForPath:(id)path;	// 0x36424bb9
- (void)encodeWithCoder:(id)coder;	// 0x364212f9
- (void)endBatchModify;	// 0x364228e5
- (double)fadeOutAudioDuration;	// 0x364270e5
// converted property getter: - (id)fileURL;	// 0x36422829
- (void)finalize;	// 0x36421d79
- (id)flightPlanFrom:(CGPoint)from to:(CGPoint)to;	// 0x36427021
- (id)fullDebugLog;	// 0x36423c51
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x36423645
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x36427d25
- (BOOL)isAudioAtPath:(id)path;	// 0x36425bc1
- (BOOL)isImageAtPath:(id)path;	// 0x364257f5
- (BOOL)isInBatchModify;	// 0x36427be5
- (BOOL)isLive;	// 0x36427745
- (BOOL)isMovieAtPath:(id)path;	// 0x3642594d
- (BOOL)isSupportedMovieForAssetAtPath:(id)path;	// 0x3642897d
- (id)keyedLayers;	// 0x36423a9d
- (id)keywordsForPath:(id)path;	// 0x364263f9
// converted property getter: - (id)lastRandomTransition;	// 0x364270a5
- (CGPoint)latLongPointForMap:(id)map withAttributes:(id)attributes;	// 0x36426b01
- (id)latitudeForPath:(id)path;	// 0x364264c1
- (id)layerForKey:(id)key;	// 0x36423875
- (id)layers;	// 0x36423529
- (BOOL)layersCanPositionZIndex;	// 0x36427ad1
- (id)longitudeForPath:(id)path;	// 0x36426549
// converted property getter: - (int)loopingMode;	// 0x364225c5
- (id)mainLayers;	// 0x36423c05
- (int)mapLevelForPath:(id)path;	// 0x36426f59
- (id)marimbaDocument;	// 0x36428be9
// converted property getter: - (id)mediaProperties;	// 0x36422115
- (int)mediaTypeForPath:(id)path;	// 0x36424c81
// converted property getter: - (id)montage;	// 0x36423c3d
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x36423835
- (BOOL)nearingEndWithOptions:(id)options;	// 0x3642761d
- (BOOL)needsToRemoveFadeIn;	// 0x36427c41
- (id)neighborhoodForPath:(id)path;	// 0x36426751
// converted property getter: - (double)numberOfLoops;	// 0x36422639
- (id)objectInLayersAtIndex:(int)index;	// 0x36427cad
- (id)oceanForPath:(id)path;	// 0x36426611
- (id)orderedVideoPaths;	// 0x364233a1
- (void)organizeRandomTransitions;	// 0x36427125
- (id)organizedRandomTransitions;	// 0x364275d5
- (id)outroEffect;	// 0x36423ee9
- (id)placeForPath:(id)path;	// 0x364266d1
- (CGPoint)pointForMap:(id)map withAttributes:(id)attributes;	// 0x36426be1
- (double)posterTime;	// 0x36424269
// converted property getter: - (BOOL)preserveMedia;	// 0x364220f5
- (id)propertiesForMediaPath:(id)mediaPath;	// 0x364221b9
- (BOOL)readFromPath:(id)path ofType:(id)type error:(id *)error;	// 0x36421d75
- (void)reconnectAllTransitions;	// 0x364242f1
- (id)regionsOfInterestForPath:(id)path;	// 0x36425d19
- (id)regionsOfInterestForPath:(id)path detect:(BOOL)detect;	// 0x36425d2d
- (void)removeAllAudioPaths;	// 0x364234c1
- (void)removeAllLayers;	// 0x36423685
- (void)removeAllStacks;	// 0x364234f9
- (void)removeAllVideoPaths;	// 0x36423489
- (double)removeFadeInIfNeeded;	// 0x36427c09
- (void)removeLayerForKey:(id)key;	// 0x364239b9
- (void)removeLayersAtIndices:(id)indices;	// 0x364237f9
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x36427d65
- (void)removePath:(id)path;	// 0x364232a1
- (void)removePaths:(id)paths;	// 0x364232dd
- (void)removePropertiesForMediaPath:(id)mediaPath;	// 0x364224cd
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x36427da1
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x36428a39
- (CGSize)resolutionForPath:(id)path;	// 0x36424441
// converted property getter: - (BOOL)savesPathsAsAbsolute;	// 0x364227a5
- (void)setAbsolutePath:(id)path forKey:(id)key;	// 0x36427825
- (void)setAbsoluteStillPath:(id)path forKey:(id)key;	// 0x36427995
// converted property setter: - (void)setAssetKeyDelegate:(id)delegate;	// 0x364226c5
- (void)setAudioFadeOutDuration:(double)duration;	// 0x36427105
// converted property setter: - (void)setAudioPaths:(id)paths;	// 0x3642344d
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x36423bc9
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x36422585
// converted property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x36423ae5
- (void)setDocumentAttribute:(id)attribute forKey:(id)key;	// 0x36422011
// converted property setter: - (void)setDocumentLayerGroup:(id)group;	// 0x36424d95
// converted property setter: - (void)setFileURL:(id)url;	// 0x36422849
// converted property setter: - (void)setLastRandomTransition:(id)transition;	// 0x364270c5
- (void)setLayer:(id)layer forKey:(id)key;	// 0x36423895
// converted property setter: - (void)setLoopingMode:(int)mode;	// 0x364225fd
// converted property setter: - (void)setMediaProperties:(id)properties;	// 0x36422125
// converted property setter: - (void)setMontage:(id)montage;	// 0x364256f1
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x36422671
// converted property setter: - (void)setPreserveMedia:(BOOL)media;	// 0x36422105
- (void)setProperties:(id)properties forMediaPath:(id)mediaPath;	// 0x36422239
// converted property setter: - (void)setSavesPathsAsAbsolute:(BOOL)absolute;	// 0x364227c9
// converted property setter: - (void)setStacks:(id)stacks;	// 0x36423329
// converted property setter: - (void)setStyleID:(id)anId;	// 0x36427e51
- (void)setTemporarilyCacheAbsolutePaths:(BOOL)paths;	// 0x36427a61
// converted property setter: - (void)setTitle:(id)title;	// 0x36427dfd
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x36422809
// converted property setter: - (void)setVideoPaths:(id)paths;	// 0x364233d9
- (void)setupDocumentLayerGroup;	// 0x36425009
- (void)setupLayerGroups;	// 0x36425239
// converted property getter: - (id)stacks;	// 0x36423319
- (double)startTimeForAssetAtPath:(id)path;	// 0x36428b41
- (double)startTimeForPath:(id)path;	// 0x36424a29
- (id)stateForPath:(id)path;	// 0x36426651
- (double)stopTimeForAssetAtPath:(id)path;	// 0x36428b95
- (double)stopTimeForPath:(id)path;	// 0x36424af1
// converted property getter: - (id)styleID;	// 0x36427e19
- (CGImageRef)thumbnailCGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x364287ed
- (id)tiledMapPathsForAttributes:(id)attributes;	// 0x36426859
// converted property getter: - (id)title;	// 0x36427de1
- (id)titleEffect;	// 0x36423c55
// converted property getter: - (id)undoManager;	// 0x364227e9
- (void)upgradeDocument;	// 0x364254a5
- (id)uuid;	// 0x36424421
- (id)valueInLayersWithName:(id)name;	// 0x36427ce9
- (double)videoDuration;	// 0x36423b59
// converted property getter: - (id)videoPaths;	// 0x36423369
- (float)volumeForPath:(id)path;	// 0x36425779
@end


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

@class MPDocumentInternal, NSMutableDictionary, MCMontage, NSArray;
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
@property(assign) id assetKeyDelegate;	// G=0x354717b9; S=0x354717c9; converted property
@property(retain) id audioPaths;	// G=0x35471ead; S=0x35471ee5; converted property
@property(retain) id audioPlaylist;	// G=0x35472609; S=0x35472641; converted property
@property(assign) CGColorRef backgroundCGColor;	// G=0x35472525; S=0x3547255d; converted property
@property(readonly, retain) NSMutableDictionary *documentAttributes;	// G=0x354726cd; converted property
@property(retain) id documentLayerGroup;	// G=0x35473ef1; S=0x3547385d; converted property
@property(retain) id fileURL;	// G=0x35471931; S=0x35471951; converted property
@property(retain) id lastRandomTransition;	// G=0x3547578d; S=0x354757ad; converted property
@property(assign) int loopingMode;	// G=0x354716cd; S=0x35471705; converted property
@property(retain) id mediaProperties;	// G=0x35471229; S=0x35471239; converted property
@property(retain) MCMontage *montage;	// G=0x354726b5; S=0x3547412d; converted property
@property(assign) double numberOfLoops;	// G=0x35471741; S=0x35471779; converted property
@property(assign) BOOL preserveMedia;	// G=0x35471209; S=0x35471219; converted property
@property(assign) BOOL savesPathsAsAbsolute;	// G=0x354718ad; S=0x354718d1; converted property
@property(retain) id stacks;	// G=0x35471db1; S=0x35471dc1; converted property
@property(retain) id styleID;	// G=0x3547648d; S=0x354764c5; converted property
@property(retain) id title;	// G=0x35476455; S=0x35476471; converted property
@property(retain) id undoManager;	// G=0x354718f1; S=0x35471911; converted property
@property(retain) id videoPaths;	// G=0x35471e01; S=0x35471e71; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3546fe91
+ (void)initialize;	// 0x3546fdc9
+ (BOOL)isNativeType:(id)type;	// 0x3546ff11
+ (id)readableTypes;	// 0x3546fee9
+ (id)unarchiveDocumentFromData:(id)data error:(id *)error;	// 0x3546fdad
+ (id)writableTypes;	// 0x3546fec1
- (id)init;	// 0x3546ff35
- (id)initWithCoder:(id)coder;	// 0x354705a1
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x35476c7d
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size orientation:(char *)orientation thumbnailIfPossible:(BOOL)possible now:(BOOL)now;	// 0x35476cb9
- (IOSurfaceRef)IOSurfaceForAssetAtPath:(id)path andSize:(CGSize)size orientation:(char *)orientation;	// 0x35476f0d
- (void)_setMediaProperties:(id)properties;	// 0x3547416d
- (id)absolutePathForAssetAtPath:(id)path;	// 0x35476501
- (id)absolutePathForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x35476801
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x35476c0d
- (id)absoluteVideoPaths;	// 0x3547417d
- (id)actionableObjectForID:(id)anId;	// 0x35473dd9
- (void)addAudioPath:(id)path;	// 0x35471c2d
- (void)addAudioPaths:(id)paths;	// 0x35471c69
- (void)addLayer:(id)layer;	// 0x35471ffd
- (void)addLayers:(id)layers;	// 0x35472091
- (void)addStacks:(id)stacks;	// 0x35471ca5
- (void)addVideoPath:(id)path;	// 0x35471bb5
- (void)addVideoPaths:(id)paths;	// 0x35471bf1
- (id)allEffectContainers;	// 0x35472b0d
- (id)allEffects;	// 0x35472b45
- (id)allSlides;	// 0x35472b7d
- (id)allSlides:(BOOL)slides;	// 0x35472b91
- (id)allSongs;	// 0x35472ccd
- (id)altitudeForPath:(id)path;	// 0x35474ed1
- (int)antialiasLevel;	// 0x35472e3d
- (unsigned)applyStyle:(id)style;	// 0x35471021
- (id)areaForPath:(id)path;	// 0x35474e11
- (double)aspectRatioDidChange:(float)aspectRatio atTime:(double)time;	// 0x35475d5d
// converted property getter: - (id)assetKeyDelegate;	// 0x354717b9
- (id)attributeForAssetAtPath:(id)path forKey:(id)key;	// 0x35477165
// converted property getter: - (id)audioPaths;	// 0x35471ead
// converted property getter: - (id)audioPlaylist;	// 0x35472609
- (id)authoringOptionForKey:(id)key;	// 0x35471651
// converted property getter: - (CGColorRef)backgroundCGColor;	// 0x35472525
- (void)beginBatchModify;	// 0x35471971
- (id)cachedAbsolutePathFromPath:(id)path;	// 0x35475e11
- (id)cachedAbsoluteStillPathFromPath:(id)path;	// 0x35475f89
- (id)captionForPath:(id)path;	// 0x35474b81
- (id)cityForPath:(id)path;	// 0x35474d91
- (void)cleanup;	// 0x35471a85
- (void)configureActions;	// 0x35476171
- (int)countOfLayers;	// 0x354762e9
- (id)countryForPath:(id)path;	// 0x35474cd1
- (id)creationDateForPath:(id)path;	// 0x35474a71
- (id)currentStyle;	// 0x35470fe9
- (id)dataForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x35476ea1
- (void)dealloc;	// 0x35470ed5
- (id)definedPlaceNameForPath:(id)path;	// 0x35474e91
- (id)description;	// 0x35470dc9
- (id)descriptionForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x3547577d
- (BOOL)detectFacesInBackground;	// 0x35475da1
- (id)displayName;	// 0x35470fdd
- (id)documentAttributeForKey:(id)key;	// 0x35471085
// converted property getter: - (id)documentAttributes;	// 0x354726cd
// converted property getter: - (id)documentLayerGroup;	// 0x35473ef1
- (void)dump;	// 0x354726c5
- (double)duration;	// 0x35472599
- (double)durationForPath:(id)path;	// 0x35473845
- (id)elements;	// 0x35472fb9
- (void)encodeWithCoder:(id)coder;	// 0x354703f5
- (void)endBatchModify;	// 0x354719d1
- (double)fadeOutAudioDuration;	// 0x354757cd
// converted property getter: - (id)fileURL;	// 0x35471931
- (void)finalize;	// 0x35470e95
- (id)flightPlanFrom:(CGPoint)from to:(CGPoint)to;	// 0x35475711
- (id)fullDebugLog;	// 0x354726c9
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x354720e1
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x35476399
- (BOOL)isAudioAtPath:(id)path;	// 0x354744e9
- (BOOL)isImageAtPath:(id)path;	// 0x35474231
- (BOOL)isInBatchModify;	// 0x35476259
- (BOOL)isLive;	// 0x35475dd5
- (BOOL)isMovieAtPath:(id)path;	// 0x3547438d
- (BOOL)isSupportedMovieForAssetAtPath:(id)path;	// 0x35476f95
- (id)keyedLayers;	// 0x35472515
- (id)keywordsForPath:(id)path;	// 0x35474af9
// converted property getter: - (id)lastRandomTransition;	// 0x3547578d
- (CGPoint)latLongPointForMap:(id)map withAttributes:(id)attributes;	// 0x354751e1
- (id)latitudeForPath:(id)path;	// 0x35474bc1
- (id)layerForKey:(id)key;	// 0x354722f1
- (id)layers;	// 0x35471fc5
- (BOOL)layersCanPositionZIndex;	// 0x3547616d
- (id)longitudeForPath:(id)path;	// 0x35474c49
// converted property getter: - (int)loopingMode;	// 0x354716cd
- (id)mainLayers;	// 0x3547267d
- (int)mapLevelForPath:(id)path;	// 0x3547565d
- (id)marimbaDocument;	// 0x35477211
// converted property getter: - (id)mediaProperties;	// 0x35471229
- (int)mediaTypeForPath:(id)path;	// 0x35473859
// converted property getter: - (id)montage;	// 0x354726b5
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x354722b1
- (BOOL)nearingEndWithOptions:(id)options;	// 0x35475d0d
- (BOOL)needsToRemoveFadeIn;	// 0x354762b5
- (id)neighborhoodForPath:(id)path;	// 0x35474e51
// converted property getter: - (double)numberOfLoops;	// 0x35471741
- (id)objectInLayersAtIndex:(int)index;	// 0x35476321
- (id)oceanForPath:(id)path;	// 0x35474d11
- (id)orderedVideoPaths;	// 0x35471e39
- (void)organizeRandomTransitions;	// 0x3547580d
- (id)organizedRandomTransitions;	// 0x35475cc5
- (id)outroEffect;	// 0x35472971
- (id)placeForPath:(id)path;	// 0x35474dd1
- (CGPoint)pointForMap:(id)map withAttributes:(id)attributes;	// 0x354752c1
- (double)posterTime;	// 0x35472e05
// converted property getter: - (BOOL)preserveMedia;	// 0x35471209
- (id)propertiesForMediaPath:(id)mediaPath;	// 0x354712d5
- (BOOL)readFromPath:(id)path ofType:(id)type error:(id *)error;	// 0x35470e91
- (void)reconnectAllTransitions;	// 0x35472e8d
- (id)regionsOfInterestForPath:(id)path;	// 0x35474645
- (id)regionsOfInterestForPath:(id)path detect:(BOOL)detect;	// 0x35474659
- (void)removeAllAudioPaths;	// 0x35471f59
- (void)removeAllLayers;	// 0x35472121
- (void)removeAllStacks;	// 0x35471f91
- (void)removeAllVideoPaths;	// 0x35471f21
- (double)removeFadeInIfNeeded;	// 0x3547627d
- (void)removeLayerForKey:(id)key;	// 0x35472431
- (void)removeLayersAtIndices:(id)indices;	// 0x35472275
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x354763d9
- (void)removePath:(id)path;	// 0x35471d39
- (void)removePaths:(id)paths;	// 0x35471d75
- (void)removePropertiesForMediaPath:(id)mediaPath;	// 0x354715d1
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x35476415
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x35477051
- (CGSize)resolutionForPath:(id)path;	// 0x3547345d
// converted property getter: - (BOOL)savesPathsAsAbsolute;	// 0x354718ad
- (void)setAbsolutePath:(id)path forKey:(id)key;	// 0x35475eb9
- (void)setAbsoluteStillPath:(id)path forKey:(id)key;	// 0x35476031
// converted property setter: - (void)setAssetKeyDelegate:(id)delegate;	// 0x354717c9
- (void)setAudioFadeOutDuration:(double)duration;	// 0x354757ed
// converted property setter: - (void)setAudioPaths:(id)paths;	// 0x35471ee5
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x35472641
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x3547168d
// converted property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x3547255d
- (void)setDocumentAttribute:(id)attribute forKey:(id)key;	// 0x35471135
// converted property setter: - (void)setDocumentLayerGroup:(id)group;	// 0x3547385d
// converted property setter: - (void)setFileURL:(id)url;	// 0x35471951
// converted property setter: - (void)setLastRandomTransition:(id)transition;	// 0x354757ad
- (void)setLayer:(id)layer forKey:(id)key;	// 0x35472311
// converted property setter: - (void)setLoopingMode:(int)mode;	// 0x35471705
// converted property setter: - (void)setMediaProperties:(id)properties;	// 0x35471239
// converted property setter: - (void)setMontage:(id)montage;	// 0x3547412d
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x35471779
// converted property setter: - (void)setPreserveMedia:(BOOL)media;	// 0x35471219
- (void)setProperties:(id)properties forMediaPath:(id)mediaPath;	// 0x35471359
// converted property setter: - (void)setSavesPathsAsAbsolute:(BOOL)absolute;	// 0x354718d1
// converted property setter: - (void)setStacks:(id)stacks;	// 0x35471dc1
// converted property setter: - (void)setStyleID:(id)anId;	// 0x354764c5
- (void)setTemporarilyCacheAbsolutePaths:(BOOL)paths;	// 0x35476101
// converted property setter: - (void)setTitle:(id)title;	// 0x35476471
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x35471911
// converted property setter: - (void)setVideoPaths:(id)paths;	// 0x35471e71
- (void)setupDocumentLayerGroup;	// 0x35473acd
- (void)setupLayerGroups;	// 0x35473ce9
// converted property getter: - (id)stacks;	// 0x35471db1
- (double)startTimeForAssetAtPath:(id)path;	// 0x35477169
- (double)startTimeForPath:(id)path;	// 0x3547381d
- (id)stateForPath:(id)path;	// 0x35474d51
- (double)stopTimeForAssetAtPath:(id)path;	// 0x354771bd
- (double)stopTimeForPath:(id)path;	// 0x35473831
// converted property getter: - (id)styleID;	// 0x3547648d
- (CGImageRef)thumbnailCGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x35476e1d
- (id)tiledMapPathsForAttributes:(id)attributes;	// 0x35474f59
// converted property getter: - (id)title;	// 0x35476455
- (id)titleEffect;	// 0x354726dd
// converted property getter: - (id)undoManager;	// 0x354718f1
- (void)upgradeDocument;	// 0x35473f11
- (id)uuid;	// 0x35472f99
- (id)valueInLayersWithName:(id)name;	// 0x3547635d
- (double)videoDuration;	// 0x354725d1
// converted property getter: - (id)videoPaths;	// 0x35471e01
- (float)volumeForPath:(id)path;	// 0x354741b5
@end


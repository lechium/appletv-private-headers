/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "ATVSlideshow-Structs.h"
#import "NSCopying.h"
#import "MPAnimationSupport.h"
#import "MPFilterSupport.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, MPLayerGroup, MCSlide, NSString, MPFrame;
@protocol MPEffectSupport;

@interface MPSlide : NSObject <NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport> {
	MPFrame *_frame;	// 4 = 0x4
	NSMutableDictionary *_attributes;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	MPLayerGroup *_layerGroup;	// 16 = 0x10
	NSMutableArray *_filters;	// 20 = 0x14
	NSMutableDictionary *_animationPaths;	// 24 = 0x18
	MCSlide *_slide;	// 28 = 0x1c
	NSObject<MPEffectSupport> *_parent;	// 32 = 0x20
	double _startTime;	// 36 = 0x24
	double _duration;	// 44 = 0x2c
	double _audioFadeInDuration;	// 52 = 0x34
	double _audioFadeOutDuration;	// 60 = 0x3c
	double _audioDuckInDuration;	// 68 = 0x44
	double _audioDuckOutDuration;	// 76 = 0x4c
	double _audioDuckLevel;	// 84 = 0x54
	float _scale;	// 92 = 0x5c
	float _rotation;	// 96 = 0x60
	CGPoint _center;	// 100 = 0x64
	float _audioVolume;	// 108 = 0x6c
	NSString *_sizingMode;	// 112 = 0x70
	int _mediaType;	// 116 = 0x74
	BOOL _isSecondary;	// 120 = 0x78
	BOOL _mirrorToDuplicatePaths;	// 121 = 0x79
	double _cachedShowTime;	// 124 = 0x7c
	double _cachedShowDuration;	// 132 = 0x84
	CGSize _cachedSize;	// 140 = 0x8c
}
@property(copy, nonatomic) NSString *absolutePath;	// G=0x324240e5; S=0x3242414d; 
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x324251c9; converted property
@property(assign, nonatomic) double audioDuckInDuration;	// G=0x32426689; S=0x324266a1; 
@property(assign, nonatomic) float audioDuckLevel;	// G=0x32426739; S=0x32426755; 
@property(assign, nonatomic) double audioDuckOutDuration;	// G=0x324266e1; S=0x324266f9; 
@property(assign, nonatomic) double audioFadeInDuration;	// G=0x324265d9; S=0x324265f1; 
@property(assign, nonatomic) double audioFadeOutDuration;	// G=0x32426631; S=0x32426649; 
@property(assign, nonatomic) float audioVolume;	// G=0x3242656d; S=0x3242659d; 
@property(assign, nonatomic) CGPoint center;	// G=0x32426f19; S=0x32426f31; 
@property(assign, nonatomic) double duration;	// G=0x3242642d; S=0x324264fd; 
@property(readonly, retain) NSMutableArray *filters;	// G=0x3242454d; converted property
@property(retain, nonatomic) MPFrame *frame;	// G=0x32423e35; S=0x32423e45; 
@property(assign) BOOL isSecondary;	// G=0x32427001; S=0x324278c5; converted property
@property(retain, nonatomic) MPLayerGroup *layerGroup;	// G=0x32424419; S=0x32424429; 
@property(retain) id parent;	// G=0x32426ddd; S=0x32428f89; converted property
@property(copy, nonatomic) NSString *path;	// G=0x32423ed9; S=0x32423ee9; 
@property(assign, nonatomic) float rotation;	// G=0x32426fb5; S=0x32426fc5; 
@property(assign, nonatomic) float scale;	// G=0x32426f69; S=0x32426f79; 
@property(retain) id scriptingAnimations;	// G=0x3242923d; S=0x32429599; converted property
@property(retain) id scriptingFrame;	// G=0x324297e1; S=0x32429895; converted property
@property(copy, nonatomic) NSString *sizingMode;	// G=0x32426799; S=0x3242690d; 
@property(retain) MCSlide *slide;	// G=0x32427579; S=0x32428161; converted property
@property(assign, nonatomic) double startTime;	// G=0x32426311; S=0x324263bd; 
+ (id)slide;	// 0x32422789
+ (id)slideWithPath:(id)path;	// 0x324227c1
- (id)init;	// 0x324227fd
- (id)initWithCoder:(id)coder;	// 0x32423119
- (id)initWithLayerGroup:(id)layerGroup;	// 0x32423a39
- (id)initWithPath:(id)path;	// 0x324239f5
// declared property getter: - (id)absolutePath;	// 0x324240e5
- (id)action;	// 0x32427805
- (void)addFilter:(id)filter;	// 0x3242455d
- (void)addFilters:(id)filters;	// 0x324245bd
- (id)animationPathForKey:(id)key;	// 0x32425431
// converted property getter: - (id)animationPaths;	// 0x324251c9
- (float)aspectRatio;	// 0x32426dc5
// declared property getter: - (double)audioDuckInDuration;	// 0x32426689
// declared property getter: - (float)audioDuckLevel;	// 0x32426739
// declared property getter: - (double)audioDuckOutDuration;	// 0x324266e1
// declared property getter: - (double)audioFadeInDuration;	// 0x324265d9
// declared property getter: - (double)audioFadeOutDuration;	// 0x32426631
// declared property getter: - (float)audioVolume;	// 0x3242656d
- (BOOL)canZoom;	// 0x32427769
// declared property getter: - (CGPoint)center;	// 0x32426f19
- (void)cleanup;	// 0x32427d0d
- (void)copyAnimationPaths:(id)paths;	// 0x32427c05
- (void)copyFilters:(id)filters;	// 0x32427ac5
- (void)copyFrame:(id)frame;	// 0x324279ed
- (void)copyLayerGroup:(id)group;	// 0x32427a59
- (void)copyVars:(id)vars;	// 0x324278d5
- (id)copyWithZone:(NSZone *)zone;	// 0x32423a99
- (int)countOfFilter;	// 0x324290bd
- (void)dealloc;	// 0x32423d1d
- (id)description;	// 0x32423b95
- (BOOL)determineShowTime:(double *)time showDuration:(double *)duration;	// 0x32427e99
- (void)dump;	// 0x32427589
- (void)duplicateAnimationPaths;	// 0x32428cb5
// declared property getter: - (double)duration;	// 0x3242642d
- (void)encodeWithCoder:(id)coder;	// 0x324229d1
// converted property getter: - (id)filters;	// 0x3242454d
- (void)finalize;	// 0x32423cdd
// declared property getter: - (id)frame;	// 0x32423e35
- (id)fullDebugLog;	// 0x324275b1
- (BOOL)hasMovie;	// 0x324270a9
- (int)index;	// 0x32426bcd
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x32424601
- (void)insertObject:(id)object inFilterAtIndex:(int)index;	// 0x324290fd
- (BOOL)isBreakInDocument:(id)document;	// 0x32428ff9
// converted property getter: - (BOOL)isSecondary;	// 0x32427001
- (id)keyframedAnimationPathForKey:(id)key;	// 0x32425611
// declared property getter: - (id)layerGroup;	// 0x32424419
- (int)liveIndex;	// 0x32426d01
- (double)maxDuration;	// 0x32427751
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x32424f01
- (id)nearestLayer;	// 0x32427e15
- (BOOL)needsStyleUpdateOnSlideChange;	// 0x324271bd
- (BOOL)needsTimingUpdateOnSlideChange;	// 0x3242737d
- (id)objectInFilterAtIndex:(int)index;	// 0x324290dd
- (float)originalAspectRatio;	// 0x3242753d
// converted property getter: - (id)parent;	// 0x32426ddd
- (id)parentDocument;	// 0x32427df5
- (id)parentEffect;	// 0x32426dcd
- (id)parentSubtitleEffect;	// 0x32426ded
// declared property getter: - (id)path;	// 0x32423ed9
- (void)removeAllFilters;	// 0x32424e5d
- (void)removeAnimationPathForKey:(id)key;	// 0x32425a15
- (void)removeFiltersAtIndices:(id)indices;	// 0x32424b3d
- (void)removeObjectFromFilterAtIndex:(int)index;	// 0x32429165
- (void)replaceObjectInFilterAtIndex:(int)index withObject:(id)object;	// 0x324291c9
- (void)resetCachedTimes;	// 0x32427885
// declared property getter: - (float)rotation;	// 0x32426fb5
// declared property getter: - (float)scale;	// 0x32426f69
// converted property getter: - (id)scriptingAnimations;	// 0x3242923d
// converted property getter: - (id)scriptingFrame;	// 0x324297e1
// declared property setter: - (void)setAbsolutePath:(id)path;	// 0x3242414d
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x32425671
// declared property setter: - (void)setAudioDuckInDuration:(double)duration;	// 0x324266a1
// declared property setter: - (void)setAudioDuckLevel:(float)level;	// 0x32426755
// declared property setter: - (void)setAudioDuckOutDuration:(double)duration;	// 0x324266f9
// declared property setter: - (void)setAudioFadeInDuration:(double)duration;	// 0x324265f1
// declared property setter: - (void)setAudioFadeOutDuration:(double)duration;	// 0x32426649
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x3242659d
// declared property setter: - (void)setCenter:(CGPoint)center;	// 0x32426f31
// declared property setter: - (void)setDuration:(double)duration;	// 0x324264fd
// declared property setter: - (void)setFrame:(id)frame;	// 0x32423e45
// converted property setter: - (void)setIsSecondary:(BOOL)secondary;	// 0x324278c5
- (void)setKeyframedAnimationPath:(id)path forKey:(id)key;	// 0x32425661
// declared property setter: - (void)setLayerGroup:(id)group;	// 0x32424429
- (void)setMediaType:(int)type;	// 0x32427741
- (void)setMirrorToDuplicatePaths:(BOOL)duplicatePaths;	// 0x324278b5
// converted property setter: - (void)setParent:(id)parent;	// 0x32428f89
// declared property setter: - (void)setPath:(id)path;	// 0x32423ee9
// declared property setter: - (void)setRotation:(float)rotation;	// 0x32426fc5
// declared property setter: - (void)setScale:(float)scale;	// 0x32426f79
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x32429599
// converted property setter: - (void)setScriptingFrame:(id)frame;	// 0x32429895
// declared property setter: - (void)setSizingMode:(id)mode;	// 0x3242690d
// converted property setter: - (void)setSlide:(id)slide;	// 0x32428161
// declared property setter: - (void)setStartTime:(double)time;	// 0x324263bd
- (void)setUserInfoAttribute:(id)attribute forKey:(id)key;	// 0x32427039
- (double)showDisplayStartTime;	// 0x324261d1
- (double)showDisplayTime;	// 0x32425f21
- (double)showDuration;	// 0x32425db9
- (double)showTime;	// 0x32425c91
// declared property getter: - (id)sizingMode;	// 0x32426799
// converted property getter: - (id)slide;	// 0x32427579
// declared property getter: - (double)startTime;	// 0x32426311
- (id)userInfoAttributeForKey:(id)key;	// 0x32427011
@end

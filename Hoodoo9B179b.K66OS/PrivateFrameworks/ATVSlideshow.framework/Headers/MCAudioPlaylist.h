/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSArray, NSMutableSet, NSSet, MCContainer;

@interface MCAudioPlaylist : MCObject {
	NSMutableSet *mSongs;	// 12 = 0xc
	NSArray *mCachedOrderedSongs;	// 16 = 0x10
	float mVolume;	// 20 = 0x14
	double mFadeInDuration;	// 24 = 0x18
	double mFadeOutDuration;	// 32 = 0x20
	float mDuckLevel;	// 40 = 0x28
	double mDuckInDuration;	// 44 = 0x2c
	double mDuckOutDuration;	// 52 = 0x34
	MCContainer *mContainer;	// 60 = 0x3c
}
@property(assign) MCContainer *container;	// G=0x355925f9; S=0x35592609; @synthesize=mContainer
@property(assign, nonatomic) double duckInDuration;	// G=0x355925a1; S=0x355925b9; @synthesize=mDuckInDuration
@property(assign, nonatomic) float duckLevel;	// G=0x35592581; S=0x35592591; @synthesize=mDuckLevel
@property(assign, nonatomic) double duckOutDuration;	// G=0x355925cd; S=0x355925e5; @synthesize=mDuckOutDuration
@property(assign, nonatomic) double fadeInDuration;	// G=0x35592529; S=0x35592541; @synthesize=mFadeInDuration
@property(assign, nonatomic) double fadeOutDuration;	// G=0x35592555; S=0x3559256d; @synthesize=mFadeOutDuration
@property(readonly, assign) NSArray *orderedSongs;	// G=0x3559233d; 
@property(readonly, assign) NSSet *songs;	// G=0x355913bd; 
@property(assign, nonatomic) float volume;	// G=0x35592509; S=0x35592519; @synthesize=mVolume
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x35590889
- (id)init;	// 0x35590a15
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x35590a99
- (id)addSongForAsset:(id)asset;	// 0x35591775
- (id)addSongsForAssets:(id)assets;	// 0x355917d9
// declared property getter: - (id)container;	// 0x355925f9
- (unsigned)countOfSongs;	// 0x355914e9
- (void)demolish;	// 0x35590db9
// declared property getter: - (double)duckInDuration;	// 0x355925a1
// declared property getter: - (float)duckLevel;	// 0x35592581
// declared property getter: - (double)duckOutDuration;	// 0x355925cd
// declared property getter: - (double)fadeInDuration;	// 0x35592529
// declared property getter: - (double)fadeOutDuration;	// 0x35592555
- (id)imprint;	// 0x35590fd9
- (id)insertSongForAsset:(id)asset atIndex:(unsigned)index;	// 0x3559180d
- (id)insertSongsForAssets:(id)assets atIndex:(unsigned)index;	// 0x3559185d
- (void)moveSongsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x355920a5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35591351
// declared property getter: - (id)orderedSongs;	// 0x3559233d
- (void)removeAllSongs;	// 0x35592051
- (void)removeSongsAtIndices:(id)indices;	// 0x35591cb5
// declared property setter: - (void)setContainer:(id)container;	// 0x35592609
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x355925b9
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x35592591
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x355925e5
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x35592541
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x3559256d
// declared property setter: - (void)setVolume:(float)volume;	// 0x35592519
- (id)songAtIndex:(unsigned)index;	// 0x355915a5
// declared property getter: - (id)songs;	// 0x355913bd
// declared property getter: - (float)volume;	// 0x35592509
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCSlide, MCAssetAudio, MCAudioPlaylist;

@interface MCSong : MCObject {
	MCAssetAudio *mAsset;	// 12 = 0xc
	float mVolume;	// 16 = 0x10
	double mFadeInDuration;	// 20 = 0x14
	double mFadeOutDuration;	// 28 = 0x1c
	unsigned mIndex;	// 36 = 0x24
	double mStartTime;	// 40 = 0x28
	double mDuration;	// 48 = 0x30
	BOOL mStartTimeIsDefined;	// 56 = 0x38
	BOOL mDurationIsDefined;	// 57 = 0x39
	MCAudioPlaylist *mAudioPlaylistIfAudioPlaylistSong;	// 60 = 0x3c
	MCSlide *mSlideIfSlideSong;	// 64 = 0x40
}
@property(retain) MCAssetAudio *asset;	// G=0x355aba09; S=0x355abafd; 
@property(assign) MCAudioPlaylist *audioPlaylistIfAudioPlaylistSong;	// G=0x355abf11; S=0x355abf21; @synthesize=mAudioPlaylistIfAudioPlaylistSong
@property(assign, nonatomic) double duration;	// G=0x355abee9; S=0x355abc71; @synthesize=mDuration
@property(readonly, assign, nonatomic) BOOL durationIsDefined;	// G=0x355abf01; @synthesize=mDurationIsDefined
@property(assign, nonatomic) double fadeInDuration;	// G=0x355abe49; S=0x355abe61; @synthesize=mFadeInDuration
@property(assign, nonatomic) double fadeOutDuration;	// G=0x355abe75; S=0x355abe8d; @synthesize=mFadeOutDuration
@property(assign, nonatomic) unsigned index;	// G=0x355abea1; S=0x355abeb1; @synthesize=mIndex
@property(assign) MCSlide *slideIfSlideSong;	// G=0x355abf31; S=0x355abf41; @synthesize=mSlideIfSlideSong
@property(assign, nonatomic) double startTime;	// G=0x355abec1; S=0x355abc35; @synthesize=mStartTime
@property(readonly, assign, nonatomic) BOOL startTimeIsDefined;	// G=0x355abed9; @synthesize=mStartTimeIsDefined
@property(assign, nonatomic) float volume;	// G=0x355abe29; S=0x355abe39; @synthesize=mVolume
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x355ab245
- (id)init;	// 0x355ab391
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x355ab3d1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x355abc99
// declared property getter: - (id)asset;	// 0x355aba09
// declared property getter: - (id)audioPlaylistIfAudioPlaylistSong;	// 0x355abf11
- (void)demolish;	// 0x355ab6b9
// declared property getter: - (double)duration;	// 0x355abee9
// declared property getter: - (BOOL)durationIsDefined;	// 0x355abf01
// declared property getter: - (double)fadeInDuration;	// 0x355abe49
// declared property getter: - (double)fadeOutDuration;	// 0x355abe75
- (id)imprint;	// 0x355ab73d
// declared property getter: - (unsigned)index;	// 0x355abea1
// declared property setter: - (void)setAsset:(id)asset;	// 0x355abafd
// declared property setter: - (void)setAudioPlaylistIfAudioPlaylistSong:(id)song;	// 0x355abf21
// declared property setter: - (void)setDuration:(double)duration;	// 0x355abc71
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x355abe61
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x355abe8d
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x355abeb1
// declared property setter: - (void)setSlideIfSlideSong:(id)song;	// 0x355abf41
// declared property setter: - (void)setStartTime:(double)time;	// 0x355abc35
// declared property setter: - (void)setVolume:(float)volume;	// 0x355abe39
// declared property getter: - (id)slideIfSlideSong;	// 0x355abf31
// declared property getter: - (double)startTime;	// 0x355abec1
// declared property getter: - (BOOL)startTimeIsDefined;	// 0x355abed9
- (void)undefineDuration;	// 0x355abc5d
- (void)undefineStartTime;	// 0x355abc21
// declared property getter: - (float)volume;	// 0x355abe29
@end


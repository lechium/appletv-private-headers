/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class AVPlayerItem;

@interface MRAudioItem : NSObject {
@private
	AVPlayerItem *_avPlayerItem;	// 4 = 0x4
	double _startTime;	// 8 = 0x8
	double _duration;	// 16 = 0x10
	double _localTimeOffset;	// 24 = 0x18
	float _volume;	// 32 = 0x20
	double _fadeInDuration;	// 36 = 0x24
	double _fadeOutDuration;	// 44 = 0x2c
	float _duckLevel;	// 52 = 0x34
	double _duckInDuration;	// 56 = 0x38
	double _duckOutDuration;	// 64 = 0x40
}
@property(readonly, assign) AVPlayerItem *avPlayerItem;	// G=0x365bb405; @synthesize=_avPlayerItem
@property(assign) double duckInDuration;	// G=0x365bb611; S=0x365bb645; @synthesize=_duckInDuration
@property(assign) float duckLevel;	// G=0x365bb5e5; S=0x365bb5f9; @synthesize=_duckLevel
@property(assign) double duckOutDuration;	// G=0x365bb679; S=0x365bb6ad; @synthesize=_duckOutDuration
@property(readonly, assign) double duration;	// G=0x365bb44d; @synthesize=_duration
@property(assign) double fadeInDuration;	// G=0x365bb515; S=0x365bb549; @synthesize=_fadeInDuration
@property(assign) double fadeOutDuration;	// G=0x365bb57d; S=0x365bb5b1; @synthesize=_fadeOutDuration
@property(assign) double localTimeOffset;	// G=0x365bb481; S=0x365bb4b5; @synthesize=_localTimeOffset
@property(readonly, assign) double startTime;	// G=0x365bb419; @synthesize=_startTime
@property(assign) float volume;	// G=0x365bb4e9; S=0x365bb4fd; @synthesize=_volume
- (id)initWithURL:(id)url startTime:(double)time andDuration:(double)duration;	// 0x365baff1
// declared property getter: - (id)avPlayerItem;	// 0x365bb405
- (void)dealloc;	// 0x365bb1e9
// declared property getter: - (double)duckInDuration;	// 0x365bb611
// declared property getter: - (float)duckLevel;	// 0x365bb5e5
// declared property getter: - (double)duckOutDuration;	// 0x365bb679
// declared property getter: - (double)duration;	// 0x365bb44d
// declared property getter: - (double)fadeInDuration;	// 0x365bb515
// declared property getter: - (double)fadeOutDuration;	// 0x365bb57d
- (void)gotoTime:(double)time;	// 0x365bb2e1
// declared property getter: - (double)localTimeOffset;	// 0x365bb481
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x365bb645
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x365bb5f9
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x365bb6ad
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x365bb549
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x365bb5b1
// declared property setter: - (void)setLocalTimeOffset:(double)offset;	// 0x365bb4b5
// declared property setter: - (void)setVolume:(float)volume;	// 0x365bb4fd
// declared property getter: - (double)startTime;	// 0x365bb419
- (void)syncVolumeToSong:(id)song;	// 0x365bb391
// declared property getter: - (float)volume;	// 0x365bb4e9
- (float)volumeAtTime:(double)time;	// 0x365bb239
@end


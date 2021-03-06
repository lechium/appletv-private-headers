/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import </libobjc.A.h>


@interface MPSongInternal : NSObject {
	double duration;	// 4 = 0x4
	double startTime;	// 12 = 0xc
	float audioVolume;	// 20 = 0x14
	double fadeInDuration;	// 24 = 0x18
	double fadeOutDuration;	// 32 = 0x20
	BOOL assetLogging;	// 40 = 0x28
}
@property(assign, nonatomic) BOOL assetLogging;	// G=0x2fbd7951; S=0x2fbd7961; @synthesize
@property(assign, nonatomic) float audioVolume;	// G=0x2fbd78d9; S=0x2fbd78e9; @synthesize
@property(assign, nonatomic) double duration;	// G=0x2fbd7881; S=0x2fbd7899; @synthesize
@property(assign, nonatomic) double fadeInDuration;	// G=0x2fbd78f9; S=0x2fbd7911; @synthesize
@property(assign, nonatomic) double fadeOutDuration;	// G=0x2fbd7925; S=0x2fbd793d; @synthesize
@property(assign, nonatomic) double startTime;	// G=0x2fbd78ad; S=0x2fbd78c5; @synthesize
// declared property getter: - (BOOL)assetLogging;	// 0x2fbd7951
// declared property getter: - (float)audioVolume;	// 0x2fbd78d9
// declared property getter: - (double)duration;	// 0x2fbd7881
// declared property getter: - (double)fadeInDuration;	// 0x2fbd78f9
// declared property getter: - (double)fadeOutDuration;	// 0x2fbd7925
// declared property setter: - (void)setAssetLogging:(BOOL)logging;	// 0x2fbd7961
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x2fbd78e9
// declared property setter: - (void)setDuration:(double)duration;	// 0x2fbd7899
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x2fbd7911
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x2fbd793d
// declared property setter: - (void)setStartTime:(double)time;	// 0x2fbd78c5
// declared property getter: - (double)startTime;	// 0x2fbd78ad
@end


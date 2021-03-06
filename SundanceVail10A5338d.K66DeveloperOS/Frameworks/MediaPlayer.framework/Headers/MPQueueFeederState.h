/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPQueueFeeder;

@interface MPQueueFeederState : NSObject {
	MPQueueFeeder *_feeder;	// 4 = 0x4
	unsigned _currentItemIndex;	// 8 = 0x8
	double _currentTime;	// 12 = 0xc
	int _feederMode;	// 20 = 0x14
}
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x34187d89; S=0x34187d99; @synthesize=_currentItemIndex
@property(assign, nonatomic) double currentTime;	// G=0x34187da9; S=0x34187dc1; @synthesize=_currentTime
@property(retain, nonatomic) MPQueueFeeder *feeder;	// G=0x34187d69; S=0x34187d79; @synthesize=_feeder
@property(assign, nonatomic) int feederMode;	// G=0x34187dd5; S=0x34187de5; @synthesize=_feederMode
- (id)initWithStateOfAVController:(id)avcontroller;	// 0x34187b89
// declared property getter: - (unsigned)currentItemIndex;	// 0x34187d89
// declared property getter: - (double)currentTime;	// 0x34187da9
- (void)dealloc;	// 0x34187c69
- (id)description;	// 0x34187cb5
// declared property getter: - (id)feeder;	// 0x34187d69
// declared property getter: - (int)feederMode;	// 0x34187dd5
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x34187d99
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x34187dc1
// declared property setter: - (void)setFeeder:(id)feeder;	// 0x34187d79
// declared property setter: - (void)setFeederMode:(int)mode;	// 0x34187de5
@end


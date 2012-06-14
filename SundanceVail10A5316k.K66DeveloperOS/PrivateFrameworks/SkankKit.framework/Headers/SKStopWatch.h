/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "DPTextLayer.h"
#import "SkankKit-Structs.h"

@class NSTimer;

@interface SKStopWatch : DPTextLayer {
	NSTimer *_runTimer;	// 92 = 0x5c
	double _duration;	// 96 = 0x60
}
- (void)dealloc;	// 0x32830e69
- (void)reset;	// 0x328310e5
- (BOOL)running;	// 0x32830f59
- (void)start;	// 0x32830f7d
- (void)stop;	// 0x32831015
- (void)updateTime:(id)time;	// 0x32830ea9
@end


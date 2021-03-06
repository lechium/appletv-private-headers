/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"


@interface SKAccelerometerLayer : SKLayer {
	float _x;	// 56 = 0x38
	float _y;	// 60 = 0x3c
	float _z;	// 64 = 0x40
	int _style;	// 68 = 0x44
	BOOL _paused;	// 72 = 0x48
}
@property(readonly, assign) BOOL paused;	// G=0x34f13b21; converted property
- (id)init;	// 0x34f13979
- (void)accelerometerEvent:(id)event;	// 0x34f14189
- (void)dealloc;	// 0x34f13a15
- (void)drawArrowFrom:(CGPoint)from toPoint:(CGPoint)point inContext:(CGContextRef)context;	// 0x34f13bc9
- (void)drawArrowInContext:(CGContextRef)context;	// 0x34f13dd9
- (void)drawInContext:(CGContextRef)context;	// 0x34f14151
- (void)drawXYZInContext:(CGContextRef)context;	// 0x34f13f39
- (void)pause;	// 0x34f13ad9
// converted property getter: - (BOOL)paused;	// 0x34f13b21
- (void)restart;	// 0x34f13a71
- (void)setAccelerometerStyle:(int)style;	// 0x34f13ba9
- (void)setNeedsDisplayMainThread:(id)thread;	// 0x34f13b99
- (void)setX:(float)x y:(float)y z:(float)z;	// 0x34f13b31
@end


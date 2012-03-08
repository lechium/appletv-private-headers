/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIStatusBarAnimationParameters : NSObject {
	double _startTime;	// 4 = 0x4
	double _duration;	// 12 = 0xc
	int _curve;	// 20 = 0x14
}
@property(assign, nonatomic) int curve;	// G=0x35759245; S=0x359a4fe9; @synthesize=_curve
@property(assign, nonatomic) double duration;	// G=0x3575922d; S=0x357df6e5; @synthesize=_duration
@property(assign, nonatomic) double startTime;	// G=0x357df6f9; S=0x359a4fd5; @synthesize=_startTime
- (id)init;	// 0x359a4fc5
- (id)initWithDefaultParameters;	// 0x357591dd
// declared property getter: - (int)curve;	// 0x35759245
// declared property getter: - (double)duration;	// 0x3575922d
// declared property setter: - (void)setCurve:(int)curve;	// 0x359a4fe9
// declared property setter: - (void)setDuration:(double)duration;	// 0x357df6e5
// declared property setter: - (void)setStartTime:(double)time;	// 0x359a4fd5
// declared property getter: - (double)startTime;	// 0x357df6f9
@end


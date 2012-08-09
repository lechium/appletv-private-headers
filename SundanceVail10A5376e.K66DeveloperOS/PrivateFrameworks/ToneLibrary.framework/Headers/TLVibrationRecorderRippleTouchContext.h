/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import <NSObject.h> // Unknown library


@interface TLVibrationRecorderRippleTouchContext : NSObject {
	double _creationTimestamp;	// 4 = 0x4
	CGPoint _location;	// 12 = 0xc
	float _speed;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGPoint location;	// G=0x33ac2649; @synthesize=_location
@property(readonly, assign, nonatomic) float speed;	// G=0x33ac2661; @synthesize=_speed
- (id)init;	// 0x33ac24d1
- (void)configureWithTimeIntervalSinceCreation:(double)timeIntervalSinceCreation location:(CGPoint)location;	// 0x33ac2515
- (void)configureWithTimeIntervalSinceCreation:(double)timeIntervalSinceCreation location:(CGPoint)location speed:(float)speed;	// 0x33ac2541
// declared property getter: - (CGPoint)location;	// 0x33ac2649
- (void)reset;	// 0x33ac25b5
// declared property getter: - (float)speed;	// 0x33ac2661
- (double)timeIntervalSinceCreation;	// 0x33ac2605
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSObject.h> // Unknown library

@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject {
	unsigned _deviceIdentifier;	// 4 = 0x4
	SCRCGestureFinger *_finger[5];	// 8 = 0x8
	unsigned _fingerCount;	// 28 = 0x1c
	double _time;	// 32 = 0x20
	CGPoint _averageLocation;	// 40 = 0x28
}
@property(readonly, assign) CGPoint averageLocation;	// G=0x36965ca9; converted property
@property(readonly, assign) unsigned deviceIdentifier;	// G=0x369658a9; converted property
@property(readonly, assign) unsigned fingerCount;	// G=0x36965ac5; converted property
@property(readonly, assign) double time;	// G=0x369658b9; converted property
- (id)initWithDeviceIdentifier:(unsigned)deviceIdentifier;	// 0x36965715
- (void)addFingerWithIdentifier:(unsigned)identifier location:(CGPoint)location;	// 0x369658d1
// converted property getter: - (CGPoint)averageLocation;	// 0x36965ca9
- (CGPoint)balancedLocation;	// 0x36965d01
- (void)dealloc;	// 0x3696576d
- (id)description;	// 0x369657ed
// converted property getter: - (unsigned)deviceIdentifier;	// 0x369658a9
- (id)fingerAtIndex:(unsigned)index;	// 0x36965ad5
// converted property getter: - (unsigned)fingerCount;	// 0x36965ac5
- (CGRect)fingerFrame;	// 0x36965bf1
- (id)fingerWithIdentifier:(unsigned)identifier;	// 0x36965ae9
- (id)fingerWithoutIdentifier:(unsigned)identifier;	// 0x36965b3d
- (id)fingers;	// 0x36965b91
- (BOOL)isCancelEvent;	// 0x36965d45
- (CGPoint)magneticLocation;	// 0x36965d49
- (void)removeFingerWithIdentifier:(unsigned)identifier;	// 0x36965981
// converted property getter: - (double)time;	// 0x369658b9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CMMotionManager, CLLocationManager, NSTimer;

__attribute__((visibility("hidden")))
@interface CoreMotionManager : NSObject {
@private
	CMMotionManager *m_motionManager;	// 4 = 0x4
	CLLocationManager *m_locationManager;	// 8 = 0x8
	HashSet<WebCore::DeviceMotionClientIPhone*,WTF::PtrHash<WebCore::DeviceMotionClientIPhone*>,WTF::HashTraits<WebCore::DeviceMotionClientIPhone*> > m_deviceMotionClients;	// 12 = 0xc
	HashSet<WebCore::DeviceOrientationClientIPhone*,WTF::PtrHash<WebCore::DeviceOrientationClientIPhone*>,WTF::HashTraits<WebCore::DeviceOrientationClientIPhone*> > m_deviceOrientationClients;	// 32 = 0x20
	NSTimer *m_updateTimer;	// 52 = 0x34
	BOOL m_gyroAvailable;	// 56 = 0x38
	BOOL m_headingAvailable;	// 57 = 0x39
}
@property(readonly, assign) BOOL gyroAvailable;	// G=0x3069ebe9; converted property
@property(readonly, assign) BOOL headingAvailable;	// G=0x3069ebf9; converted property
+ (id)sharedManager;	// 0x3069ec95
- (id)init;	// 0x3069ec3d
- (id).cxx_construct;	// 0x3069ec09
- (void).cxx_destruct;	// 0x3069edd9
- (void)addMotionClient:(DeviceMotionClientIPhone *)client;	// 0x3069f2fd
- (void)addOrientationClient:(DeviceOrientationClientIPhone *)client;	// 0x3069f291
- (void)checkClientStatus;	// 0x3069ef6d
- (void)dealloc;	// 0x3069f335
// converted property getter: - (BOOL)gyroAvailable;	// 0x3069ebe9
// converted property getter: - (BOOL)headingAvailable;	// 0x3069ebf9
- (void)initializeOnMainThread;	// 0x3069f145
- (void)removeMotionClient:(DeviceMotionClientIPhone *)client;	// 0x3069f2c9
- (void)removeOrientationClient:(DeviceOrientationClientIPhone *)client;	// 0x3069f25d
- (void)sendAccelerometerData:(id)data;	// 0x3069ee69
- (void)sendMotionData:(id)data withHeading:(id)heading;	// 0x3069ee09
- (void)update;	// 0x3069eeb9
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import </libobjc.A.h>

@class CMMotionManager, NSTimer, CLLocationManager;

@interface WebCoreMotionManager : NSObject {
	CMMotionManager *m_motionManager;	// 4 = 0x4
	CLLocationManager *m_locationManager;	// 8 = 0x8
	HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > m_deviceMotionClients;	// 12 = 0xc
	HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > m_deviceOrientationClients;	// 32 = 0x20
	NSTimer *m_updateTimer;	// 52 = 0x34
	BOOL m_gyroAvailable;	// 56 = 0x38
	BOOL m_headingAvailable;	// 57 = 0x39
}
@property(readonly, assign) BOOL gyroAvailable;	// G=0x337eb74d; converted property
@property(readonly, assign) BOOL headingAvailable;	// G=0x337eb75d; converted property
+ (id)sharedManager;	// 0x337eb419
- (id)init;	// 0x337eb539
- (id).cxx_construct;	// 0x337ec4a5
- (void).cxx_destruct;	// 0x337ec46d
- (void)addMotionClient:(DeviceMotionClientIOS *)client;	// 0x337eb675
- (void)addOrientationClient:(DeviceOrientationClientIOS *)client;	// 0x337eb6e1
- (void)checkClientStatus;	// 0x337eb879
- (void)dealloc;	// 0x337eb591
// converted property getter: - (BOOL)gyroAvailable;	// 0x337eb74d
// converted property getter: - (BOOL)headingAvailable;	// 0x337eb75d
- (void)initializeOnMainThread;	// 0x337eb771
- (void)removeMotionClient:(DeviceMotionClientIOS *)client;	// 0x337eb6ad
- (void)removeOrientationClient:(DeviceOrientationClientIOS *)client;	// 0x337eb719
- (void)sendAccelerometerData:(id)data;	// 0x337ebb19
- (void)sendMotionData:(id)data withHeading:(id)heading;	// 0x337ebdf1
- (void)update;	// 0x337eba59
@end


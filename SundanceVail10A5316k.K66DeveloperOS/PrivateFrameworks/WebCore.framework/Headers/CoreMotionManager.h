/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"

@class CMMotionManager, CLLocationManager, NSTimer;

__attribute__((visibility("hidden")))
@interface CoreMotionManager : NSObject {
@private
	CMMotionManager *m_motionManager;	// 4 = 0x4
	CLLocationManager *m_locationManager;	// 8 = 0x8
	HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > m_deviceMotionClients;	// 12 = 0xc
	HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > m_deviceOrientationClients;	// 32 = 0x20
	NSTimer *m_updateTimer;	// 52 = 0x34
	BOOL m_gyroAvailable;	// 56 = 0x38
	BOOL m_headingAvailable;	// 57 = 0x39
}
@property(readonly, assign) BOOL gyroAvailable;	// G=0x353262f9; converted property
@property(readonly, assign) BOOL headingAvailable;	// G=0x35326309; converted property
+ (id)sharedManager;	// 0x35325fc1
- (id)init;	// 0x353260e5
- (id).cxx_construct;	// 0x3532704d
- (void).cxx_destruct;	// 0x35326f65
- (void)addMotionClient:(DeviceMotionClientIOS *)client;	// 0x35326221
- (void)addOrientationClient:(DeviceOrientationClientIOS *)client;	// 0x3532628d
- (void)checkClientStatus;	// 0x35326419
- (void)dealloc;	// 0x3532613d
// converted property getter: - (BOOL)gyroAvailable;	// 0x353262f9
// converted property getter: - (BOOL)headingAvailable;	// 0x35326309
- (void)initializeOnMainThread;	// 0x35326319
- (void)removeMotionClient:(DeviceMotionClientIOS *)client;	// 0x35326259
- (void)removeOrientationClient:(DeviceOrientationClientIOS *)client;	// 0x353262c5
- (void)sendAccelerometerData:(id)data;	// 0x353266b1
- (void)sendMotionData:(id)data withHeading:(id)heading;	// 0x35326959
- (void)update;	// 0x353265f1
@end


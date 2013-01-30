/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library

@class CMDeviceMotion, CMGyroData, CMAccelerometerData, CMMagnetometerData;

@interface CMMotionManager : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isAccelerometerActive) BOOL accelerometerActive;	// G=0x316b2cd5; @dynamic
@property(readonly, assign, nonatomic, getter=isAccelerometerAvailable) BOOL accelerometerAvailable;	// G=0x316b2cc5; @dynamic
@property(readonly, assign) CMAccelerometerData *accelerometerData;	// G=0x316b2dbd; @dynamic
@property(assign, nonatomic) double accelerometerUpdateInterval;	// G=0x316b2d95; S=0x316b2cf9; @dynamic
@property(readonly, assign, nonatomic) int attitudeReferenceFrame;	// G=0x316b3905; @dynamic
@property(readonly, assign) CMDeviceMotion *deviceMotion;	// G=0x316b3925; @dynamic
@property(readonly, assign, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;	// G=0x316b381d; @dynamic
@property(readonly, assign, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;	// G=0x316b37f5; @dynamic
@property(assign, nonatomic) double deviceMotionUpdateInterval;	// G=0x316b38dd; S=0x316b3841; @dynamic
@property(readonly, assign, nonatomic, getter=isGyroActive) BOOL gyroActive;	// G=0x316b326d; @dynamic
@property(readonly, assign, nonatomic, getter=isGyroAvailable) BOOL gyroAvailable;	// G=0x316b325d; @dynamic
@property(readonly, assign) CMGyroData *gyroData;	// G=0x316b3355; @dynamic
@property(assign, nonatomic) double gyroUpdateInterval;	// G=0x316b332d; S=0x316b3291; @dynamic
@property(readonly, assign, nonatomic, getter=isMagnetometerActive) BOOL magnetometerActive;	// G=0x316b4321; 
@property(readonly, assign, nonatomic, getter=isMagnetometerAvailable) BOOL magnetometerAvailable;	// G=0x316b4311; 
@property(readonly, assign) CMMagnetometerData *magnetometerData;	// G=0x316b4409; 
@property(assign, nonatomic) double magnetometerUpdateInterval;	// G=0x316b43e1; S=0x316b4345; 
@property(assign, nonatomic) BOOL showsDeviceMovementDisplay;	// G=0x316b4931; S=0x316b48ad; 
@property(assign) BOOL useAccelerometer;	// G=0x316b23a1; S=0x316b2379; converted property
+ (unsigned)availableAttitudeReferenceFrames;	// 0x316b2475
+ (void)dummySelector:(id)selector;	// 0x316b6219
+ (void)initialize;	// 0x316b23c5
+ (void)setAllowInBackground:(BOOL)background;	// 0x316b2495
- (id)init;	// 0x316b2499
- (id)initPrivate;	// 0x316b2629
- (id)initUsing6AxisSensorFusion;	// 0x316b4a21
- (id)initUsingGyroOnlySensorFusion;	// 0x316b4a71
// declared property getter: - (id)accelerometerData;	// 0x316b2dbd
// declared property getter: - (double)accelerometerUpdateInterval;	// 0x316b2d95
// declared property getter: - (int)attitudeReferenceFrame;	// 0x316b3905
- (void)dealloc;	// 0x316b2999
- (void)deallocPrivate;	// 0x316b2b05
// declared property getter: - (id)deviceMotion;	// 0x316b3925
// declared property getter: - (double)deviceMotionUpdateInterval;	// 0x316b38dd
- (void)didBecomeActive:(id)active;	// 0x316b60c1
- (void)didBecomeActivePrivate:(id)aPrivate;	// 0x316b61d1
- (void)dismissDeviceMovementDisplay;	// 0x316b49e1
// declared property getter: - (id)gyroData;	// 0x316b3355
// declared property getter: - (double)gyroUpdateInterval;	// 0x316b332d
- (int)gyttNumTemperatures;	// 0x316b42fd
// declared property getter: - (BOOL)isAccelerometerActive;	// 0x316b2cd5
// declared property getter: - (BOOL)isAccelerometerAvailable;	// 0x316b2cc5
// declared property getter: - (BOOL)isDeviceMotionActive;	// 0x316b381d
// declared property getter: - (BOOL)isDeviceMotionAvailable;	// 0x316b37f5
// declared property getter: - (BOOL)isGyroActive;	// 0x316b326d
// declared property getter: - (BOOL)isGyroAvailable;	// 0x316b325d
// declared property getter: - (BOOL)isMagnetometerActive;	// 0x316b4321
// declared property getter: - (BOOL)isMagnetometerAvailable;	// 0x316b4311
// declared property getter: - (id)magnetometerData;	// 0x316b4409
// declared property getter: - (double)magnetometerUpdateInterval;	// 0x316b43e1
- (void)onAccelerometer:(const Sample *)accelerometer;	// 0x316b51a1
- (void)onDeviceMotion:(const Sample *)motion;	// 0x316b5851
- (void)onGeomagneticModel:(const XXStruct_01mbIB *)model;	// 0x316b5f99
- (void)onGyro:(const Sample *)gyro;	// 0x316b53d9
- (void)onMagnetometer:(const Sample *)magnetometer;	// 0x316b5619
- (void)rebuildGytt;	// 0x316b4181
- (void)setAccelerometerDataCallback:(/*function-pointer*/ void *)callback info:(void *)info interval:(double)interval;	// 0x316b4abd
// declared property setter: - (void)setAccelerometerUpdateInterval:(double)interval;	// 0x316b2cf9
- (void)setAccelerometerUpdateIntervalPrivate:(double)aPrivate;	// 0x316b3031
- (void)setDeviceMotionCallback:(/*function-pointer*/ void *)callback info:(void *)info interval:(double)interval fsync:(BOOL)fsync;	// 0x316b4ef5
// declared property setter: - (void)setDeviceMotionUpdateInterval:(double)interval;	// 0x316b3841
- (void)setDeviceMotionUpdateIntervalPrivate:(double)aPrivate;	// 0x316b3dd9
- (void)setGyroDataCallback:(/*function-pointer*/ void *)callback info:(void *)info interval:(double)interval;	// 0x316b4cd9
// declared property setter: - (void)setGyroUpdateInterval:(double)interval;	// 0x316b3291
- (void)setGyroUpdateIntervalPrivate:(double)aPrivate;	// 0x316b35c9
// declared property setter: - (void)setMagnetometerUpdateInterval:(double)interval;	// 0x316b4345
- (void)setMagnetometerUpdateIntervalPrivate:(double)aPrivate;	// 0x316b4681
// declared property setter: - (void)setShowsDeviceMovementDisplay:(BOOL)display;	// 0x316b48ad
- (void)setShowsDeviceMovementDisplayPrivate:(BOOL)aPrivate;	// 0x316b4955
// converted property setter: - (void)setUseAccelerometer:(BOOL)accelerometer;	// 0x316b2379
- (void)showDeviceMovementDisplay;	// 0x316b498d
// declared property getter: - (BOOL)showsDeviceMovementDisplay;	// 0x316b4931
- (void)startAccelerometerUpdates;	// 0x316b2e6d
- (void)startAccelerometerUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x316b3099
- (void)startAccelerometerUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x316b2ee9
- (void)startDeviceMotionUpdates;	// 0x316b3a5d
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(int)frame toQueue:(id)queue withHandler:(id)handler;	// 0x316b3e41
- (void)startDeviceMotionUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x316b3af9
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)frame;	// 0x316b3be9
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)frame toQueue:(id)queue withHandler:(id)handler;	// 0x316b3c79
- (void)startGyroUpdates;	// 0x316b3405
- (void)startGyroUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x316b3631
- (void)startGyroUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x316b3481
- (void)startMagnetometerUpdates;	// 0x316b44b9
- (void)startMagnetometerUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x316b46e9
- (void)startMagnetometerUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x316b4535
- (void)stopAccelerometerUpdates;	// 0x316b2fb9
- (void)stopAccelerometerUpdatesPrivate;	// 0x316b31b1
- (void)stopDeviceMotionUpdates;	// 0x316b3d5d
- (void)stopDeviceMotionUpdatesPrivate;	// 0x316b4095
- (void)stopGyroUpdates;	// 0x316b3551
- (void)stopGyroUpdatesPrivate;	// 0x316b3749
- (void)stopMagnetometerUpdates;	// 0x316b4605
- (void)stopMagnetometerUpdatesPrivate;	// 0x316b4801
// converted property getter: - (BOOL)useAccelerometer;	// 0x316b23a1
- (void)willResignActive:(id)active;	// 0x316b6015
- (void)willResignActivePrivate:(id)aPrivate;	// 0x316b616d
@end

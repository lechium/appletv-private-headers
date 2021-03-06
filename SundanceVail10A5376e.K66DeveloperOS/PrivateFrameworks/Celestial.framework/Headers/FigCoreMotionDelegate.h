/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject {
	opaque_pthread_mutex_t ringMutex;	// 4 = 0x4
	CMMotionManager *motionManager;	// 48 = 0x30
	BOOL manageFusedMotion;	// 52 = 0x34
	BOOL manageAccel;	// 53 = 0x35
	BOOL manageGravity;	// 54 = 0x36
	int accelRingIndex;	// 56 = 0x38
	float accelRingX[256];	// 60 = 0x3c
	float accelRingY[256];	// 1084 = 0x43c
	float accelRingZ[256];	// 2108 = 0x83c
	double accelRingTime[256];	// 3132 = 0xc3c
	int fusedRingIndex;	// 5180 = 0x143c
	double fusedRingTime[256];	// 5184 = 0x1440
	BOOL fusedRingDoingBiasEstimation[256];	// 7232 = 0x1c40
	XXStruct_ZUkpeA fusedRingAccel[256];	// 7488 = 0x1d40
	XXStruct_N5B6hD fusedRingQuaternion[256];	// 10560 = 0x2940
	XXStruct_ZUkpeA fusedRingPosition[256];	// 18752 = 0x4940
	BOOL copyingAllData;	// 21824 = 0x5540
	double dLatestFusedMotionCopied;	// 21828 = 0x5544
	double dLatestTimestamp;	// 21836 = 0x554c
	double dGyroUpdateInterval;	// 21844 = 0x5554
	double timestampLatency;	// 21852 = 0x555c
	BOOL gettingAttitudeChange;	// 21860 = 0x5564
	XXStruct_N5B6hD previousQuaternion;	// 21864 = 0x5568
	XXStruct_N5B6hD currentQuaternion;	// 21896 = 0x5588
	BOOL computingPosition;	// 21928 = 0x55a8
	XXStruct_DSEUtC position;	// 21932 = 0x55ac
	XXStruct_DSEUtC velocity;	// 21952 = 0x55c0
}
@property(readonly, assign, getter=isCopyingAllData) BOOL copyingAllData;	// G=0x329c0bd5; converted property
- (id)init;	// 0x329bf481
- (id)initWithAccelerometer:(BOOL)accelerometer gravityZ:(BOOL)z fusedMotion:(BOOL)motion accelUpdateInterval:(float)interval fusedMotionUpdateInterval:(float)interval5;	// 0x329bef91
- (id)copyAllFusedMotionData;	// 0x329c0039
- (id)copyNewFusedMotionData;	// 0x329c0201
- (void)dealloc;	// 0x329bf4b5
- (void)didUpdateAcceleration:(XXStruct_ZUkpeA)acceleration time:(double)time;	// 0x329bf585
- (void)didUpdateFusedMotionWithDeviceMotion:(XXStruct_73avgC)deviceMotion time:(double)time ifsync:(BOOL)ifsync;	// 0x329bfb1d
- (void)didUpdateGravity:(XXStruct_ZUkpeA)gravity time:(double)time;	// 0x329bf629
- (void)didUpdatePositionWithAcceleration:(XXStruct_ZUkpeA *)acceleration forTimeStamp:(double)timeStamp;	// 0x329bfe01
- (void)didUpdatePositionWithTimeStamp:(double)timeStamp;	// 0x329bff81
- (void)didUpdateVelocityWithAcceleration:(XXStruct_ZUkpeA *)acceleration forTimeStamp:(double)timeStamp;	// 0x329bfec9
- (void)getCurrentAttitude:(double *)attitude :(double *)arg2 :(double *)arg3;	// 0x329c0859
- (void)getCurrentDeltaAttitude:(double *)attitude :(double *)arg2 :(double *)arg3;	// 0x329c0951
- (void)getCurrentDeltaQuaternion:(XXStruct_N5B6hD *)quaternion;	// 0x329c0761
- (void)getCurrentQuaternion:(XXStruct_N5B6hD *)quaternion;	// 0x329c0731
- (long)getFusedVector:(float *)vector :(float *)arg2 :(float *)arg3 forTimeStamp:(double)timeStamp;	// 0x329bf991
- (long)getGravityZ:(float *)z forTimeStamp:(double)timeStamp;	// 0x329bf88d
- (void)getPosition:(float *)position :(float *)arg2 :(float *)arg3 forTimeStamp:(double)timeStamp;	// 0x329c0a39
- (long)getVector:(float *)vector :(float *)arg2 :(float *)arg3 forTimeStamp:(double)timeStamp;	// 0x329bf6d9
// converted property getter: - (BOOL)isCopyingAllData;	// 0x329c0bd5
- (BOOL)managingAccel;	// 0x329c0bb5
- (BOOL)managingFusedMotion;	// 0x329c0ba5
- (BOOL)managingGravity;	// 0x329c0bc5
- (long)updateCurrentQuaternionForTimeStamp:(double)timeStamp;	// 0x329c0401
- (long)updateCurrentQuaternionForTimeStamps:(double)timeStamps withEnd:(double)end;	// 0x329c0631
- (void)updateDeviceCallback:(BOOL)callback fusedMotionUpdateInterval:(float)interval;	// 0x329bf355
- (void)updateGyroInterval:(float)interval;	// 0x329bf419
@end


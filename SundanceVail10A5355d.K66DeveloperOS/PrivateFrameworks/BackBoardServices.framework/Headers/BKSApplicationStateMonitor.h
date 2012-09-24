/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@class BKSSignal, NSArray;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BKSApplicationStateMonitor : NSObject {
	NSObject<OS_xpc_object> *_connection;	// 4 = 0x4
	BKSSignal *_invalidationSignal;	// 8 = 0x8
	id _handler;	// 12 = 0xc
	unsigned _interestedStates;	// 16 = 0x10
	NSArray *_interestedBundleIDs;	// 20 = 0x14
	int _serverRegisterToken;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_queue;	// 28 = 0x1c
}
@property(copy, nonatomic) id handler;	// G=0x340d2ffd; S=0x340d2f4d; @dynamic
@property(copy, nonatomic) NSArray *interestedBundleIDs;	// G=0x340d31d5; S=0x340d3125; @dynamic
@property(assign, nonatomic) unsigned interestedStates;	// G=0x340d3381; S=0x340d32fd; @dynamic
- (id)init;	// 0x340d2c21
- (id)initWithBundleIDs:(id)bundleIDs states:(unsigned)states;	// 0x340d2c39
- (void)applicationInfoForApplication:(id)application completion:(id)completion;	// 0x340d3599
- (void)applicationInfoForPID:(int)pid completion:(id)completion;	// 0x340d3901
- (unsigned)applicationStateForApplication:(id)application;	// 0x340d3bc1
- (id)bundleInfoValueForKey:(id)key PID:(int)pid;	// 0x340d4359
- (void)dealloc;	// 0x340d2e59
// declared property getter: - (id)handler;	// 0x340d2ffd
// declared property getter: - (id)interestedBundleIDs;	// 0x340d31d5
// declared property getter: - (unsigned)interestedStates;	// 0x340d3381
- (void)invalidate;	// 0x340d46e5
- (BOOL)isNewsstandAppWakeQuotaReached:(id)reached;	// 0x340d40b5
- (unsigned)mostElevatedApplicationStateForPID:(int)pid;	// 0x340d3e65
- (void)queue_connecionWasInvalidated;	// 0x340d4f39
- (void)queue_handleMessage:(id)message;	// 0x340d4d31
- (void)queue_invalidate;	// 0x340d4ec5
- (void)queue_registerWithServer;	// 0x340d48d9
- (void)queue_reregister;	// 0x340d4e95
- (void)queue_setHandler:(id)handler;	// 0x340d477d
- (void)queue_setInterestedBundleIDs:(id)ids;	// 0x340d47b9
- (void)queue_setInterestedStates:(unsigned)states;	// 0x340d47f5
- (void)queue_updateInterestedStates;	// 0x340d4805
- (void)queue_updateInterestedStates:(BOOL)states;	// 0x340d4819
- (void)queue_waitForServerRegistration;	// 0x340d4f69
// declared property setter: - (void)setHandler:(id)handler;	// 0x340d2f4d
// declared property setter: - (void)setInterestedBundleIDs:(id)ids;	// 0x340d3125
// declared property setter: - (void)setInterestedStates:(unsigned)states;	// 0x340d32fd
- (void)updateInterestedBundleIDs:(id)ids;	// 0x340d344d
- (void)updateInterestedBundleIDs:(id)ids states:(unsigned)states;	// 0x340d34b5
- (void)updateInterestedStates:(unsigned)states;	// 0x340d3481
@end

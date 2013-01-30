/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class ATXPCConnection, NSMutableArray;
@protocol ATConnectionDelegate;

@interface ATConnection : NSObject {
	ATXPCConnection *_connection;	// 4 = 0x4
	NSObject<ATConnectionDelegate> *_delegate;	// 8 = 0x8
	BOOL _registerForStatus;	// 12 = 0xc
	NSMutableArray *_registeredDataclasses;	// 16 = 0x10
	int _atcRunningToken;	// 20 = 0x14
	BOOL _atcRunning;	// 24 = 0x18
}
@property(retain, nonatomic) NSObject<ATConnectionDelegate> *delegate;	// G=0x366fd1f5; S=0x366fd205; @synthesize=_delegate
- (id)init;	// 0x366fce79
- (id)_connection;	// 0x366fc181
- (void)_handleMessage:(id)message;	// 0x366fbd81
- (void)_resetConnection;	// 0x366fc005
- (void)_sendMessage:(id)message info:(id)info reply:(id)reply;	// 0x366fc3c9
- (void)_sendStatusRegistration;	// 0x366fc4dd
- (void)cancelSync;	// 0x366fc959
- (void)clearSyncData;	// 0x366fc9d1
- (void)dataMigrationFinished;	// 0x366fc9fd
- (void)dealloc;	// 0x366fd109
// declared property getter: - (id)delegate;	// 0x366fd1f5
- (BOOL)isSyncing:(BOOL *)syncing automatically:(BOOL *)automatically wirelessly:(BOOL *)wirelessly;	// 0x366fcb05
- (void)keepATCAlive:(BOOL)alive;	// 0x366fca91
- (void)lowBatteryNotification;	// 0x366fca65
- (void)prioritizeAsset:(id)asset forDataclass:(id)dataclass;	// 0x366fc7f1
- (void)purgePartialAsset:(id)asset forDataclass:(id)dataclass;	// 0x366fc859
- (void)registerForAssetProgressForDataclass:(id)dataclass;	// 0x366fc661
- (void)registerForStatus;	// 0x366fc5e9
- (void)requestSyncForLibrary:(id)library;	// 0x366fc8c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x366fd205
- (void)unregisterForStatus;	// 0x366fc625
@end

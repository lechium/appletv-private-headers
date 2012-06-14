/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSSet;

@interface ASPingTask : ASTask {
	NSSet *_folders;	// 104 = 0x68
	NSSet *_oldFolders;	// 108 = 0x6c
	int _seconds;	// 112 = 0x70
	int _oldSeconds;	// 116 = 0x74
}
@property(readonly, retain) NSSet *folders;	// G=0x31dfe8f5; converted property
- (id)initWithHeartbeat:(int)heartbeat folders:(id)folders oldHeartbeat:(int)heartbeat3 oldFolders:(id)folders4;	// 0x31dfe79d
- (int)commandCode;	// 0x31dfe8e1
- (void)dealloc;	// 0x31dfe83d
- (void)finishWithError:(id)error;	// 0x31dff12d
// converted property getter: - (id)folders;	// 0x31dfe8f5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x31dfec39
- (int)heartbeat;	// 0x31dfe8e5
- (int)interfaceBinding;	// 0x31dfe89d
- (void)loadRequest:(id)request;	// 0x31dfe94d
- (BOOL)processContext:(id)context;	// 0x31dfec4d
- (id)requestBody;	// 0x31dfe99d
- (void)requestCancelTaskWithReason:(int)reason;	// 0x31dff09d
- (BOOL)shouldForceNetworking;	// 0x31dff4fd
- (BOOL)shouldHoldPowerAssertion;	// 0x31dfe8dd
- (BOOL)shouldReportTimeInNetwork;	// 0x31dff4f9
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x31dff4c5
- (double)timeoutInterval;	// 0x31dfe92d
@end

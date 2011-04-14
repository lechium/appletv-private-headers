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
@property(readonly, retain) NSSet *folders;	// G=0x32f110d1; converted property
- (id)initWithHeartbeat:(int)heartbeat folders:(id)folders oldHeartbeat:(int)heartbeat3 oldFolders:(id)folders4;	// 0x32f11195
- (int)commandCode;	// 0x32f1104d
- (void)dealloc;	// 0x32f11139
- (void)finishWithError:(id)error;	// 0x32f11269
// converted property getter: - (id)folders;	// 0x32f110d1
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x32f11081
- (int)heartbeat;	// 0x32f11051
- (int)interfaceBinding;	// 0x32f11101
- (void)loadRequest:(id)request;	// 0x32f1121d
- (BOOL)processContext:(id)context;	// 0x32f11611
- (id)requestBody;	// 0x32f11a05
- (void)requestCancelTaskWithReason:(int)reason;	// 0x32f11599
- (BOOL)shouldHoldPowerAssertion;	// 0x32f11049
- (BOOL)shouldReportTimeInNetwork;	// 0x32f110cd
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x32f11095
- (double)timeoutInterval;	// 0x32f11061
@end


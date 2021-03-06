/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray, NSMutableArray;

@interface ASMoveItemsTask : ASTask {
	NSMutableArray *_moveItems;	// 108 = 0x6c
	NSArray *_pushedMoveRequests;	// 112 = 0x70
	int _dataclass;	// 116 = 0x74
}
@property(assign) int dataclass;	// G=0x322b2b05; S=0x322b2b19; @synthesize=_dataclass
@property(retain) NSArray *pushedMoveRequests;	// G=0x322b2ae1; S=0x322b2af5; @synthesize=_pushedMoveRequests
- (void)addSourceID:(id)anId sourceFolder:(id)folder destinatonFolder:(id)folder3;	// 0x322b2115
- (int)commandCode;	// 0x322b2111
// declared property getter: - (int)dataclass;	// 0x322b2b05
- (void)dealloc;	// 0x322b20ad
- (void)finishWithError:(id)error;	// 0x322b265d
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x322b2209
- (BOOL)processContext:(id)context;	// 0x322b2219
// declared property getter: - (id)pushedMoveRequests;	// 0x322b2ae1
- (id)requestBody;	// 0x322b2889
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x322b2b19
// declared property setter: - (void)setPushedMoveRequests:(id)requests;	// 0x322b2af5
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x322b2a5d
@end


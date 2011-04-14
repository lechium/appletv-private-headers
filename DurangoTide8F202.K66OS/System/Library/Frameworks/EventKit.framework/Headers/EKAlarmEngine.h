/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class EKAlarmEngineOperation, NSOperationQueue, NSTimer;

__attribute__((visibility("hidden")))
@interface EKAlarmEngine : NSObject {
@private
	CalDatabase *_database;	// 4 = 0x4
	EKAlarmEngineOperation *_currentOp;	// 8 = 0x8
	NSOperationQueue *_queue;	// 12 = 0xc
	NSTimer *_syncTimer;	// 16 = 0x10
	BOOL _pendingChanges;	// 20 = 0x14
}
- (id)initWithDatabase:(CalDatabase *)database;	// 0x31682f61
- (void)_eventStoreChanged:(id)changed;	// 0x31683c91
- (void)_killSyncTimer;	// 0x31683235
- (void)_resetSyncTimer;	// 0x31683271
- (void)_syncTimerFired:(id)fired;	// 0x31683ba5
- (void)_timeZoneChanged:(id)changed;	// 0x31683be9
- (void)_update;	// 0x31683c29
- (void)dealloc;	// 0x316835a1
- (void)reschedule;	// 0x3168336d
- (void)start;	// 0x31683629
- (void)stop;	// 0x31683791
- (void)syncDidEnd;	// 0x31683afd
- (void)syncDidStart;	// 0x31683b61
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSMutableArray, NSConditionLock;

__attribute__((visibility("hidden")))
@interface BRTaskManager : BRSingleton {
@private
	NSMutableArray *_taskQueue;	// 4 = 0x4
	NSConditionLock *_queueLock;	// 8 = 0x8
	int _numberOfTaskThreadsRunning;	// 12 = 0xc
	int _numberOfFinishingThreads;	// 16 = 0x10
}
+ (void)setSingleton:(id)singleton;	// 0x328c1239
+ (id)singleton;	// 0x328c1189
- (id)init;	// 0x328c1195
- (void)_processTasks;	// 0x328c13b9
- (void)cancelTask:(id)task;	// 0x32955b25
- (void)dealloc;	// 0x32955505
- (void)scheduleTask:(id)task;	// 0x328c1245
@end


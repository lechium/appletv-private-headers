/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASModelBase.h"


@interface MSPerformanceLogger : MSASModelBase {
}
+ (void)nukeCompletionBlock:(id)block;	// 0x307da459
+ (id)sharedLogger;	// 0x307da3a1
- (id)init;	// 0x307da62d
- (void)_logSqliteErrorLine:(int)line;	// 0x307da5e9
- (void)dbQueueDiscardOperation:(id)operation itemGUID:(id)guid;	// 0x307dad2d
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)databaseVersion currentVersion:(int)version;	// 0x307da685
- (void)discardOperation:(id)operation itemGUID:(id)guid;	// 0x307daded
- (void)startOperation:(id)operation itemGUID:(id)guid;	// 0x307da7d5
- (void)stopOperation:(id)operation itemGUID:(id)guid;	// 0x307daa55
- (void)summarizeOperation:(id)operation itemGUID:(id)guid formatBlock:(id)block;	// 0x307daf11
@end

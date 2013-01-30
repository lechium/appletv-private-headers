/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASModelBase.h"


@interface MSASDaemonModel : MSASModelBase {
}
+ (id)defaultModel;	// 0x33991119
- (id)init;	// 0x33990e45
- (void)clearAllNextActivityDates;	// 0x33991bc5
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)databaseVersion currentVersion:(int)version;	// 0x33990e9d
- (id)earliestNextActivityDate;	// 0x33991191
- (id)nextActivityDateByPersonID;	// 0x33991549
- (void)setNextActivityDate:(id)date forPersonID:(id)personID;	// 0x33991965
@end

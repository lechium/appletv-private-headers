/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

#import </libobjc.A.h>
#import "AggregateDictionary-Structs.h"

@class NSString;

@interface ADDataStore : NSObject {
	NSString *_path;	// 4 = 0x4
	Database *_database;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *path;	// G=0x2febee41; @synthesize=_path
- (id)initWithDefaultPath;	// 0x2febeb51
- (id)initWithPath:(id)path;	// 0x2febeab1
- (void)dealloc;	// 0x2febeb6d
- (BOOL)distributionsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 rowHandler:(id)handler;	// 0x2febecc9
- (BOOL)distributionsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 withConsumer:(id)consumer;	// 0x2febed8d
// declared property getter: - (id)path;	// 0x2febee41
- (BOOL)scalarsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 rowHandler:(id)handler;	// 0x2febebd5
- (BOOL)scalarsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 withConsumer:(id)consumer;	// 0x2febecd5
@end

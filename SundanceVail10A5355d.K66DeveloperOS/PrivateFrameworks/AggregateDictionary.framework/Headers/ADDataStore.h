/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

#import <NSObject.h> // Unknown library
#import "AggregateDictionary-Structs.h"

@class NSString;

@interface ADDataStore : NSObject {
	NSString *_path;	// 4 = 0x4
	Database *_database;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *path;	// G=0x317702bd; @synthesize=_path
- (id)initWithDefaultPath;	// 0x3176fe41
- (id)initWithPath:(id)path;	// 0x3176fd95
- (void)dealloc;	// 0x3176fe5d
- (BOOL)distributionsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 rowHandler:(id)handler;	// 0x3177004d
- (BOOL)distributionsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 withConsumer:(id)consumer;	// 0x31770211
// declared property getter: - (id)path;	// 0x317702bd
- (BOOL)scalarsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 rowHandler:(id)handler;	// 0x3176ff59
- (BOOL)scalarsForKeyPrefix:(id)keyPrefix minDaysSince1970:(int)a1970 maxDaysSince1970:(int)a19703 withConsumer:(id)consumer;	// 0x31770161
@end


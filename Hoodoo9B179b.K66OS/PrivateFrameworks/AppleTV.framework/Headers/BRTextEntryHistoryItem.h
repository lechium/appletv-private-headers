/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSManagedObject.h> // Unknown library

@class NSDate, BRTextEntryHistoryClient, NSString;

__attribute__((visibility("hidden")))
@interface BRTextEntryHistoryItem : NSManagedObject {
}
@property(retain, nonatomic) BRTextEntryHistoryClient *client;	// @dynamic
@property(copy, nonatomic) NSString *historyItemString;	// @dynamic
@property(retain, nonatomic) NSDate *lastUsedDate;	// @dynamic
@end


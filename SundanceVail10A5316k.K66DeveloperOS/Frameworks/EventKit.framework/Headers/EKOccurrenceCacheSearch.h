/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSString, EKEventStore, NSSet, NSNumber;

@interface EKOccurrenceCacheSearch : NSObject {
	NSSet *_calendars;	// 4 = 0x4
	NSString *_searchTerm;	// 8 = 0x8
	EKEventStore *_store;	// 12 = 0xc
	id _callback;	// 16 = 0x10
	NSNumber *_replyID;	// 20 = 0x14
	BOOL _canceled;	// 24 = 0x18
}
@property(readonly, retain) NSString *searchTerm;	// G=0x30e6df5d; converted property
+ (id)searchWithCalendars:(id)calendars searchTerm:(id)term store:(id)store callback:(id)callback;	// 0x30e6d629
- (id)initWithCalendars:(id)calendars searchTerm:(id)term store:(id)store callback:(id)callback;	// 0x30e6d675
- (void)cancel;	// 0x30e6de21
- (void)dealloc;	// 0x30e6da25
- (void)run;	// 0x30e6dac1
// converted property getter: - (id)searchTerm;	// 0x30e6df5d
@end


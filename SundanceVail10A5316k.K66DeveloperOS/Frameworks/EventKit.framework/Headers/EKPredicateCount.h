/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class EKEventStore, NSPredicate;

__attribute__((visibility("hidden")))
@interface EKPredicateCount : NSObject {
@private
	NSPredicate *_predicate;	// 4 = 0x4
	EKEventStore *_store;	// 8 = 0x8
	BOOL _finished;	// 12 = 0xc
	id _callback;	// 16 = 0x10
	unsigned _previous;	// 20 = 0x14
}
+ (id)countOfRemindersWithPredicate:(id)predicate store:(id)store callback:(id)callback;	// 0x30df69c1
- (id)initWithPredicate:(id)predicate store:(id)store callback:(id)callback;	// 0x30df6a09
- (void)_receivedCount:(int)count;	// 0x30df74a1
- (void)dealloc;	// 0x30df855d
- (void)run;	// 0x30df6b79
- (void)terminate;	// 0x30df74b5
@end


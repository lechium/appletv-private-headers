/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol BBAssertionDelegate;

@interface BBAssertion : NSObject {
@private
	id<BBAssertionDelegate> _delegate;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	unsigned _transactionID;	// 12 = 0xc
}
@property(readonly, retain) NSString *identifier;	// G=0x36b7b969; converted property
@property(readonly, assign) unsigned transactionID;	// G=0x36b7b979; converted property
- (id)initWithDelegate:(id)delegate identifier:(id)identifier;	// 0x36b7b845
- (void)dealloc;	// 0x36b7b8bd
// converted property getter: - (id)identifier;	// 0x36b7b969
- (void)increaseOrIgnoreTransactionID:(unsigned)anId;	// 0x36b7b951
// converted property getter: - (unsigned)transactionID;	// 0x36b7b979
@end


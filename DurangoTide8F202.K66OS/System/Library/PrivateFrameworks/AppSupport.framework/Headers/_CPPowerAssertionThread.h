/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSThread.h> // Unknown library

@class NSTimer, NSDate;

@interface _CPPowerAssertionThread : NSThread {
	NSTimer *_timer;	// 52 = 0x34
	NSDate *_earliest;	// 56 = 0x38
}
- (void)addAssertion:(id)assertion;	// 0x32159ad5
- (void)didTimeOut:(id)anOut;	// 0x32159cb9
- (void)main;	// 0x32159331
@end


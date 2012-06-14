/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSTimer;

@interface IMNetworkAvailability : NSObject {
	NSString *_guid;	// 4 = 0x4
	NSTimer *_timer;	// 8 = 0x8
	void *_context;	// 12 = 0xc
	void *_cellAssertion;	// 16 = 0x10
	void *_serverConnection;	// 20 = 0x14
	double _timeout;	// 24 = 0x18
	double _startTime;	// 32 = 0x20
	unsigned _flags;	// 40 = 0x28
	id _completionBlock;	// 44 = 0x2c
}
@property(assign, nonatomic) void *context;	// G=0x34a9aae1; S=0x34a9aaf1; @synthesize=_context
- (id)initWithFlags:(unsigned)flags timeout:(double)timeout completionBlock:(id)block;	// 0x34a99b49
- (void)_cancel;	// 0x34a99e01
- (void)_setTimer;	// 0x34a9a6f1
- (void)_timerHit:(id)hit;	// 0x34a99f4d
- (void)cancel;	// 0x34a9aab5
// declared property getter: - (void *)context;	// 0x34a9aae1
- (void)dealloc;	// 0x34a99cf9
// declared property setter: - (void)setContext:(void *)context;	// 0x34a9aaf1
- (void)start;	// 0x34a9aa09
@end


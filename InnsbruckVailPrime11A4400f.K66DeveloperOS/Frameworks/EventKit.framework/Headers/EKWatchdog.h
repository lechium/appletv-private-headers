/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import </libobjc.A.h>

@class NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface EKWatchdog : NSObject {
	double _timeout;	// 4 = 0x4
	NSString *_identifier;	// 12 = 0xc
	NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
}
+ (void)executeWithTimeout:(double)timeout identifier:(id)identifier block:(id)block;	// 0x2daea249
- (id)initWithTimeout:(double)timeout identifier:(id)identifier;	// 0x2daea251
- (id)initWithTimeout:(double)timeout identifier:(id)identifier block:(id)block;	// 0x2daea269
- (void)dealloc;	// 0x2daea2e9
- (void)invalidate;	// 0x2daea351
- (void)start;	// 0x2daea369
@end

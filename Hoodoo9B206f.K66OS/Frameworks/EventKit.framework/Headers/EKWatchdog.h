/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EKWatchdog : NSObject {
@private
	double _timeout;	// 4 = 0x4
	NSString *_identifier;	// 12 = 0xc
	dispatch_source_s *_timer;	// 16 = 0x10
}
+ (void)executeWithTimeout:(double)timeout identifier:(id)identifier block:(id)block;	// 0x31f3a711
- (id)initWithTimeout:(double)timeout identifier:(id)identifier;	// 0x31f3a719
- (id)initWithTimeout:(double)timeout identifier:(id)identifier block:(id)block;	// 0x31f3a731
- (void)dealloc;	// 0x31f3a7b1
- (void)invalidate;	// 0x31f3a819
- (void)start;	// 0x31f3a82d
@end

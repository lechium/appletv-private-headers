/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTMemoryUsageMonitor.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

__attribute__((visibility("hidden")))
@interface LTMemoryUsageMonitor : XXUnknownSuperclass {
	NSTimer *_timer;	// 4 = 0x4
}
+ (void)checkAndStartMonitoring;	// 0x15aa5
- (void).cxx_destruct;	// 0x15b55
@end

@interface LTMemoryUsageMonitor (Private)
- (void)_emitMemoryUsage;	// 0x15be5
- (void)_startMonitoring;	// 0x15b69
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "LTSpringboardServices.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LTSpringboardServices : XXUnknownSuperclass {
	NSDictionary *_capabilities;	// 4 = 0x4
}
+ (void)configureAggregateReporting;	// 0x4a061
+ (void)configureGraphicsCapabilities;	// 0x4a18d
+ (void)monitorOSMemoryNotifications;	// 0x4a245
+ (void)setSingleton:(id)singleton;	// 0x4a049
+ (id)singleton;	// 0x4a039
- (void).cxx_destruct;	// 0x4a27d
@end

@interface LTSpringboardServices (Private)
- (id)_collectPlaybackLogPaths;	// 0x4b1dd
- (id)_collectThermalLogPaths;	// 0x4b429
- (void)_generateDPLog;	// 0x4afbd
- (void)_postOSMemoryNotification;	// 0x4aba9
- (void)_registerForOSMemoryNotifications;	// 0x4aad1
- (void)_sendLogsImmediately:(id)immediately;	// 0x4ac29
- (void)_updateCapabilities;	// 0x4a291
@end


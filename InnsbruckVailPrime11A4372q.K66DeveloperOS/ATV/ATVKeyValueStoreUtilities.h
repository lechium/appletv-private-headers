/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface ATVKeyValueStoreUtilities : XXUnknownSuperclass {
	NSMutableSet *_keyValueStores;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x191e59
- (id)init;	// 0x191ebd
- (void)_startPeriodicCleanupTaskOnKeyValueStore:(id)store;	// 0x192179
- (void)_updateKeyValueStoreState:(id)state;	// 0x192259
- (void)dealloc;	// 0x191f9d
- (BOOL)isKeyValueStoreAvailable;	// 0x192109
- (void)startMonitoringStore:(id)store;	// 0x192019
@end

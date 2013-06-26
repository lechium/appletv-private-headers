/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchAgent.h"

@class ATVTimeZoneChooserController;

__attribute__((visibility("hidden")))
@interface ATVTimeZoneSearchAgent : ATVSearchAgent {
	ATVTimeZoneChooserController *_controller;	// 12 = 0xc
}
+ (id)agentForController:(id)controller;	// 0xd9f0d
- (id)initWithController:(id)controller;	// 0xd9f65
- (void).cxx_destruct;	// 0xda161
- (long)cacheSize;	// 0xda155
- (BOOL)handlePlayForObject:(id)object;	// 0xda15d
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0xd9fbd
- (BOOL)showRecentSearches;	// 0xda159
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaHost.h"


__attribute__((visibility("hidden")))
@interface BRRemoteMediaHost : BRMediaHost {
@private
	BOOL _hostFound;	// 44 = 0x2c
	BOOL _hostValid;	// 45 = 0x2d
}
@property(assign) BOOL hostFound;	// G=0x3033b0a9; S=0x3033b0b9; converted property
@property(assign) BOOL hostValid;	// G=0x3033b0c9; S=0x3033b0d9; converted property
// converted property getter: - (BOOL)hostFound;	// 0x3033b0a9
- (id)hostID;	// 0x3033b065
// converted property getter: - (BOOL)hostValid;	// 0x3033b0c9
// converted property setter: - (void)setHostFound:(BOOL)found;	// 0x3033b0b9
// converted property setter: - (void)setHostValid:(BOOL)valid;	// 0x3033b0d9
@end


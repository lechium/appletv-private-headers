/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "BRSelectionHandler.h"


__attribute__((visibility("hidden")))
@interface ATVFavoritesSelectionHandler : BRSingleton <BRSelectionHandler> {
}
+ (void)setSingleton:(id)singleton;	// 0x122e29
+ (id)singleton;	// 0x122e19
- (BOOL)_handleFavoriteSelection:(id)selection autoPlay:(BOOL)play;	// 0x122f19
- (BOOL)handlePlayForControl:(id)control;	// 0x122ea9
- (BOOL)handleSelectionForControl:(id)control;	// 0x122e39
@end


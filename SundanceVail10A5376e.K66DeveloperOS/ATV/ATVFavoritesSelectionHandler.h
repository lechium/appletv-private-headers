/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVFavoritesSelectionHandler : BRSingleton <BRSelectionHandler> {
}
+ (void)setSingleton:(id)singleton;	// 0x1384b5
+ (id)singleton;	// 0x1384a5
- (BOOL)_handleFavoriteSelection:(id)selection autoPlay:(BOOL)play;	// 0x1385a5
- (BOOL)handlePlayForControl:(id)control;	// 0x138535
- (BOOL)handleSelectionForControl:(id)control;	// 0x1384c5
@end

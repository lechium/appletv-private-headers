/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class ATVStoreFavorite, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVStoreFavoriteRefreshTask : BRBackgroundTask {
	ATVStoreFavorite *_favorite;	// 44 = 0x2c
	ATVURLDocument *_curDocumentBeingFetched;	// 48 = 0x30
}
- (id)initWithFavorite:(id)favorite;	// 0x125ad9
- (void)_catalogControlRequestProcessed:(id)processed;	// 0x125dd9
- (void)_finalizePageRefresh:(id)refresh;	// 0x126239
- (void)dealloc;	// 0x125b51
- (void)disable:(id)disable;	// 0x125d5d
- (BOOL)perform:(id)perform;	// 0x125bcd
- (void)stop;	// 0x125d9d
@end

